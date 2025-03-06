
#include "app.h"
#include "cmdline.h"
#include "path.h"

#include <wke.h>
#include <stdio.h>
#include <stdlib.h>

#include <shellapi.h>
#pragma comment(lib, "shell32.lib")

#include <shlwapi.h>
#pragma comment(lib, "shlwapi.lib")




#include "wkeWebView.h"

BOOL FixupHtmlFileUrl(LPCWSTR pathOption, LPWSTR urlBuffer, size_t bufferSize)
{
    WCHAR htmlPath[MAX_PATH + 1] = { 0 };

    if (pathOption[0] == 0)
    {
        do
        {
            GetWorkingPath(htmlPath, MAX_PATH, L"index.html");
            if (PathFileExistsW(htmlPath))
                break;

            GetWorkingPath(htmlPath, MAX_PATH, L"main.html");
            if (PathFileExistsW(htmlPath))
                break;

            GetWorkingPath(htmlPath, MAX_PATH, L"wkexe.html");
            if (PathFileExistsW(htmlPath))
                break;    

            GetProgramPath(htmlPath, MAX_PATH, L"index.html");
            if (PathFileExistsW(htmlPath))
                break;    

            GetProgramPath(htmlPath, MAX_PATH, L"main.html");
            if (PathFileExistsW(htmlPath))
                break;

            GetProgramPath(htmlPath, MAX_PATH, L"wkexe.html");
            if (PathFileExistsW(htmlPath))
                break;

            return FALSE;
        }
        while (0);

        swprintf_s(urlBuffer, bufferSize, L"file:///%s", htmlPath);
        return TRUE;
    }

    else//if (!wcsstr(pathOption, L"://"))
    {
        do
        {
            GetWorkingPath(htmlPath, MAX_PATH, pathOption);
            if (PathFileExistsW(htmlPath))
                break;

            GetProgramPath(htmlPath, MAX_PATH, pathOption);
            if (PathFileExistsW(htmlPath))
                break;

            return FALSE;
        }
        while (0);

        swprintf_s(urlBuffer, bufferSize, L"file:///%s", htmlPath);
        return TRUE;
    }

    return FALSE;
}

BOOL FixupHtmlUrl(Application* app)
{
    LPWSTR htmlOption = app->options.htmlFile;
    WCHAR htmlUrl[MAX_PATH + 1] = { 0 };

    // 包含 :// 说明是完整的URL
    if (wcsstr(htmlOption, L"://"))
    {
        wcsncpy_s(app->url, MAX_PATH, htmlOption, MAX_PATH);
        return TRUE;
    }

    // 若不是完整URL，补全之
    if (FixupHtmlFileUrl(htmlOption, htmlUrl, MAX_PATH))
    {
        wcsncpy_s(app->url, MAX_PATH, htmlUrl, MAX_PATH);
        return TRUE;
    }
    // 无法获得完整的URL，出错
    return FALSE;
}

BOOL ProcessOptions(Application* app)
{
    int argc = 0;
    LPWSTR* argv = CommandLineToArgvW(GetCommandLineW(), &argc);
    ParseOptions(argc, argv, &app->options);
    LocalFree(argv);

    return TRUE;
}

// 回调：点击了关闭、返回 true 将销毁窗口，返回 false 什么都不做。
bool HandleWindowClosing(wkeWebView webWindow, void* param)
{
    Application* app = (Application*)param;
    return IDYES == MessageBoxW(NULL, L"确定要退出程序吗？", L"wkexe", MB_YESNO|MB_ICONQUESTION);
}

// 回调：窗口已销毁
void HandleWindowDestroy(wkeWebView webWindow, void* param)
{
    Application* app = (Application*)param;
    app->window = NULL;
    PostQuitMessage(0);
}


void testCalljs(wkeWebView webWindow);
// 回调：文档加载成功
void HandleDocumentReady(wkeWebView webWindow, void* param)
{
    wkeShowWindow(webWindow, TRUE);
    testCalljs(webWindow);
}

// 回调：页面标题改变
void HandleTitleChanged(wkeWebView webWindow, void* param, const wkeString title)
{
    wkeSetWindowTitleW(webWindow, wkeGetStringW(title));
}



// 回调：创建新的页面，比如说调用了 window.open 或者点击了 <a target="_blank" .../>
wkeWebView HandleCreateView(wkeWebView webWindow, void* param, wkeNavigationType navType, const wkeString url, const wkeWindowFeatures* features)
{
    wkeWebView newWindow = wkeCreateWebWindow(WKE_WINDOW_TYPE_POPUP, NULL, features->x, features->y, features->width, features->height);
    wkeShowWindow(newWindow, true);
    return newWindow;
}
bool HandleLoadUrlBegin(wkeWebView webView, void* param, const char *url, void *job)
{
	if (strcmp(url, "http://hook.test/") == 0) {
		wkeNetSetMIMEType(job, "text/html");
        wkeNetChangeRequestUrl(job, url);
        auto str = "<li>这是个hook页面</li><a herf=\"http://www.baidu.com/\">HookRequest</a>";
		//wkeNetSetData(job, str, sizeof(str));
		wkeNetSetData(job, (void*)str, strlen(str)+2);
		return true;
	}
	else if (strcmp(url, "http://www.baidu.com/") == 0) {
		wkeNetHookRequest(job);
	}
	return false;
}


void HandleStartUrlRequest( wkeWebView webView, wkeWebUrlRequestPtr request, void* param, const wkeUrlRequestCallbacks* callbacks)
{
}


void HandleLoadUrlEnd(wkeWebView webView, void* param, const char *url, void *job, void* buf, int len)
{
	const wchar_t *str = L"百度一下";
	const wchar_t *str1 = L"LOOK一下";

	int slen = ::WideCharToMultiByte(CP_UTF8, 0, str, -1, NULL, 0, NULL, NULL);
	if (slen == 0) return;

	char utf81[100];
	::WideCharToMultiByte(CP_UTF8, 0, str, -1, &utf81[0], slen, NULL, NULL);

	slen = ::WideCharToMultiByte(CP_UTF8, 0, str1, -1, NULL, 0, NULL, NULL);
	if (slen == 0) return;

	char utf82[100];
	::WideCharToMultiByte(CP_UTF8, 0, str1, -1, &utf82[0], slen, NULL, NULL);

	const char *b = strstr(static_cast<const char*>(buf), &utf81[0]);
	memcpy((void *)b, &utf82, slen);
	return ;
}


// -----------------------------------------------------
/*
测试 html 
<!DOCTYPE html>
<html lang="zh-CN">
<head>
    
</head>
 
<body> 
<a href="" onclick="CallCPlusPlus()"  > xxx </a>
<script type="text/javascript">
        function CallCPlusPlus() {
	        var obj = test_nativefunc("");
	        var name = obj.name;
	        alert(name);
	        var age = obj.age;
	        alert(age);
			
			console.log("hello world!");
        }
</script>
<script type="text/javascript">
        function CPlusPlusCallJS() {
	       
	        alert("CPlusPlusCallJS_02");
        }
</script>

</body> 
    
</html>


*/

void testCalljs(wkeWebView webWindow)
{
    if (webWindow == NULL)
    {
        return;
    }
    jsValue jsRet1 =wkeRunJS(webWindow,"alert('CPlusPlusCallJS_01'); "); //注入执行
    jsValue jsRet2 =wkeRunJS(webWindow,"CPlusPlusCallJS()"); //注入执行
    
}

// -----------------------------------------------------
jsValue JS_CALL jsCallback(jsExecState es)
{
	jsValue jv = jsEmptyObject(es);
	jsValue jOv1 = jsInt(12);
	jsValue jOv2 = jsInt(2);
	jsSet(es, jv, "name", jOv1);
	jsSet(es, jv, "age", jOv2);
	return jv;
}
/*
// HTML中调用CPP中实现的 函数
    <script type="text/javascript">
        function CallCPlusPlus() {
	        var obj = test_nativefunc("");
	        var name = obj.name;
	        alert(name);
	        var age = obj.age;
	        alert(age);
        }
    </script>
*/
// -----------------------------------------------------

// 创建主页面窗口
BOOL CreateWebWindow(Application* app)
{
    if (app->options.transparent)
        app->window = wkeCreateWebWindow(WKE_WINDOW_TYPE_TRANSPARENT, NULL, 0, 0, 640, 480);
    else
        app->window = wkeCreateWebWindow(WKE_WINDOW_TYPE_POPUP, NULL, 0, 0, 640, 480);

    if (!app->window)
        return FALSE;

    wkeOnWindowClosing(app->window, HandleWindowClosing, app);//在任务栏右键关闭时会走这里，做一些退进程的操作
    wkeOnWindowDestroy(app->window, HandleWindowDestroy, app);
    wkeOnDocumentReady(app->window, HandleDocumentReady, app);// 文档加载成功时回调
    wkeOnTitleChanged(app->window, HandleTitleChanged, app);
    wkeOnCreateView(app->window, HandleCreateView, app);//打开新窗口的时，在这个回调里创建一个新的webWindows。
	wkeOnLoadUrlBegin(app->window, HandleLoadUrlBegin, app);
	wkeOnLoadUrlEnd(app->window, HandleLoadUrlEnd, app);
	
    

    wkeMoveToCenter(app->window);
    wkeLoadURLW(app->window, app->url);



    wkeShowWindow(app->window,true);//显示窗口


    wkeWebView window = app->window;
    //设置刷新? 无效
    //wkeSetDebugConfig(app->window, "drawMinInterval", "1");

    //wkeSetCookieJarPath(window, strPath.c_str()); //设置cookie所在的位置
    //wkeIsCookieEnabled(window); //是否允许记录cookie
    //wkeSetCspCheckEnable(window, false);//是否允许跨域，我们一个页面里面嵌入了另一个web应用的页面，所以这里把跨域检查关掉
    //wkeSetDragEnable(window, false);//不允许拖拽
    //wkeOnNavigation(window, &dowkeNavigationCallback, this); //h5页面不允许跳转，打开一个链接，通过这个回调截掉，跳转到浏览器去打开。

//js c++　交互
////注册JS函数 怎么弄?
//    web.blink.jsBindFunction("aardioMsgbox",1/*JS回调时的参数个数*/,function(str){
//    var mb = owner; //owner是当前调用此函数的miniblink视图对象
//    var winform = mb.getForm(); //这是显示网页视图的win.form窗体对象
//    if( winform ) winform.msgbox(str);
//})


//typedef jsValue(JS_CALL* jsNativeFunction) (jsExecState es);
    
   // jsBindFunction( 
   //     "test_nativefunc", //注册js可调用的方法 test_nativefunc
   //     &jsCallback,//jsNativeFunction 回调
   //     1/*JS 调用时的参数个数  */);

    //testCalljs(app->window); //到加载好之后再调用

    //wkeOnDocumentReady(wkeWebView webView, wkeDocumentReadyCallback callback, void* param)
    
    //wkeSetDebugConfig(app->window, "drawMinInterval", "0.1");
    
    //打开js调试工具, Preservelog 要勾选 
    //wkeSetDebugConfig(app->window, "showDevTools", "D:/_work/miniblink49/third_party/WebKit/Source/devtools/front_end/inspector.html");

    return TRUE;
}

/*
void wkeSetDebugConfig(wkeWebView webView, const char* debugString, const char* param)
设置一些实验性选项，debugString目前支持：
showDevTools：开启开发者工具，此时param要填写开发者工具的资源路径，如 file:///c:/miniblink-release/front_end/inspector.html，必须是全路径，并且不能有中文。
wakeMinInterval：设置帧率，默认值是10，值越大帧率越低。
drawMinInterval：设置帧率，默认值是3，值越大帧率越低。
antiAlias：设置抗锯齿渲染，param必须设置为“1”。
minimumFontSize：最小字体。
minimumLogicalFontSize：最小逻辑字体。
defaultFontSize：默认字号。
defaultFixedFontSize：默认Fixed字号。
imageEnable：是否打开无图模式，param为“0”表示开启无图模式。
jsEnable：是否禁用js，param为“0”表示禁用。
*/
//调试??　https://zhuanlan.zhihu.com/p/33845188?from=singlemessage



void PrintHelpAndQuit(Application* app)
{
    PrintHelp();
    PostQuitMessage(0);
}

void RunMessageLoop(Application* app)
{
    MSG msg = { 0 };
    while (GetMessageW(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
}

void RunApplication(Application* app)
{
    memset(app, 0, sizeof(Application));

    if (!ProcessOptions(app))
    {
        PrintHelpAndQuit(app);
        return;
    }

    if (!FixupHtmlUrl(app))
    {
        PrintHelpAndQuit(app);
		//打开默认页面
		wcsncpy_s(app->url, MAX_PATH, L"http://www.baidu.com", MAX_PATH);
    }

    if (!CreateWebWindow(app))
    {
        PrintHelpAndQuit(app);
        return;
    }



    RunMessageLoop(app);
}

void QuitApplication(Application* app)
{
    if (app->window)
    {
        wkeDestroyWebWindow(app->window);
        app->window = NULL;
    }
}
