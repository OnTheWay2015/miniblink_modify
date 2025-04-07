 
#include "stdafx.h"
#include "resource.h"
#include "wke.h"

#include <shlwapi.h>//PathRemoveFileSpec,PathFileExists
#pragma comment(lib, "shlwapi.lib")

using namespace wke;

#define MAX_LOADSTRING 100

#define BTN_ONE     3301  


// 全局变量: 
HINSTANCE hInst;                                // 当前实例
WCHAR szTitle[MAX_LOADSTRING];                  // 标题栏文本
WCHAR szWindowClass[MAX_LOADSTRING];            // 主窗口类名

												// 此代码模块中包含的函数的前向声明: 
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    callback(HWND, UINT, WPARAM, LPARAM);




int consoleAct() {
	AllocConsole();
	freopen("conout$", "w", stdout);
	printf(" consoleAct! -_-\n");
	//std::cout << "i'm cout" << std::endl;
	freopen("conout$", "w", stderr);
	//std::cerr << "i'm cerr" << std::endl;
	return 0;
}

void tttt() {
	char *x = 0;
	//x[1] = '10';
}

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	//tttt();
	consoleAct();
 

	//LoadLibraryA( "twin32Dll.dll" );
	//while (true) {
	//	Sleep(5);
	//}
	//return 0;
	// 初始化全局字符串
	LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadStringW(hInstance, IDC_TESTWINDOWS, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	// 执行应用程序初始化: 
	if (!InitInstance(hInstance, nCmdShow))
	{
		return FALSE;
	}

	HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_TESTWINDOWS));

	MSG msg;

	// 主消息循环: 
	while (GetMessage(&msg, nullptr, 0, 0))
	{
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	return (int)msg.wParam;
}


 
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEXW wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDD_FORMVIEW));
	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = MAKEINTRESOURCEW(IDC_TESTWINDOWS);
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassExW(&wcex);
}
#include <vector>
void wkeTest()
{

    std::vector<wchar_t> tempPath;
    tempPath.resize(MAX_PATH);

    ::GetModuleFileNameW(nullptr, &tempPath[0], MAX_PATH);
    ::PathRemoveFileSpec(&tempPath[0]);


    std::vector<wchar_t> mbPath = tempPath;

    ::PathAppendW(&mbPath[0], L"node.dll");
    if (!::PathFileExists(&mbPath[0])) {
        ::PathAppendW(&tempPath[0], L"..\\..\\");
        mbPath = tempPath;
        ::PathAppendW(&mbPath[0], L"node.dll");
        if (!::PathFileExists(&mbPath[0])) {
            ::MessageBoxW(NULL, L"move node.dll to exe file dir", L"error", MB_OK);
            return;
        }
    }

    wkeSetWkeDllPath(&mbPath[0]);
    wkeInitialize();
    //runApp(&app);

	//wkeFinalize();
}
 wkeWebView pWebView = nullptr;
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
	hInst = hInstance; // 将实例句柄存储在全局变量中
	LoadLibrary(L"RichEd20.dll"); //使用 richedit 组件
	HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

	

	if (!hWnd)
	{
		return FALSE;
	}
	int width = 600;
	int height = 600;

	//---------------
	//auto node_m = LoadLibrary(L"node.dll"); //使用 miniblink
    //if (!node_m)
    //{
	//	return FALSE;
    //}

    {
/*
wke 开头的方法在 WKE_FOR_EACH_DEFINE_FUNCTION 里声明
*/

        wkeTest();
        pWebView = wkeCreateWebWindow(
            WKE_WINDOW_TYPE_CONTROL,//窗口嵌到父级
            hWnd,
            0,//x, 
            0,//y, 
            width,//width, 
            height//height
        );
        //获取hwnd
        //m_wkeHwnd = wkeGetHostHWND(pWebView);

        wkeShowWindow(pWebView, true);
		//m_web = wkeCreateWebWindow(, hWnd, rtClient.left, rtClient.top, rtClient.right - rtClient.left, rtClient.bottom - rtClient.top);

		//打开调试工具
		//wkeSetDebugConfig(pWebView, "showDevTools", "file:///D:/git_work/miniblink_modify/miniblink49/third_party/WebKit/Source/devtools/front_end/inspector.html");


#ifdef UNICODE
		auto url = L"http://127.0.0.1";
		//auto url = L"http://hook.test/resources/view/index.html";
        ::wkeLoadURLW(pWebView, url);
		//wkeLoadFile(pWebView, "ski/index.html");
#else
        ::wkeLoadURL(m_pWebView, lpUrl);
#endif



    }


	//---------------
	//界面控件
	SetWindowPos(hWnd, 0, 0,0, 900,600, 0);
	auto mainW= CreateWindowW(L"Button", L"url Reload", WS_VISIBLE | WS_CHILD | BS_PUSHBUTTON|SS_RIGHT,
		600, 0, 120, 60, hWnd, (HMENU)BTN_ONE, hInst, NULL);

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	return TRUE;
}
 
char *consoleStr = 0;
HWND hdlg = 0;
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{ 
	switch (message)
	{ 
	case WM_CREATE:
	 
		break;
	case WM_COMMAND:
	{
		int wmId = LOWORD(wParam);


		switch (LOWORD(wParam))
		{
			case BTN_ONE:
				MessageBoxW(hWnd, L"mmm", L"nnn", MB_OK | MB_ICONINFORMATION);
				//::wkeLoadURLW(pWebView, L"http://127.0.0.1");
				::wkeReload(pWebView);
				break; 
		} 
	}
	break; 

	case WM_DESTROY: 
		if (consoleStr)
		{
			free(consoleStr);
			consoleStr = 0;
		}
		
		PostQuitMessage(0); 
		break; 
	case WM_LBUTTONDBLCLK: 
		break; 
	case WM_LBUTTONDOWN:

		break;

	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
  
}
 













 
