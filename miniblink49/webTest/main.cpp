
#include "app.h"


/*
C++ demo
https://github.com/weolar/mb-demo (��׼�棬MB�ٷ�)

https://github.com/aplum88/qmb (��׼�棬qt��װ)

https://github.com/iceb0y/miniblink_cxx_example

https://github.com/zhichao281/duilib-MiniBlinkBrowser
*/
int main(int argc, char* argv[])
{

    //MessageBoxA(((HWND)0), "box", "--", 0);
    wkeInitialize();
    {
        Application app;
        RunApplication(&app);
    }
    wkeFinalize();


    return 0;
}
int WINAPI WinMain(
    __in HINSTANCE hInstance,
    __in_opt HINSTANCE hPrevInstance,
    __in LPSTR lpCmdLine,
    __in int nShowCmd
    )
{
    wkeInitialize();
    {
        Application app;
        RunApplication(&app);
    }
    wkeFinalize();

    return 0;
}
