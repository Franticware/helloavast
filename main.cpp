#define UNICODE
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    MessageBox(0, TEXT("Hello Avast a.k.a. AVG! You suck!\nFor more information, please visit\nhttps://github.com/Franticware/helloavast"), TEXT("Proof of concept"), MB_OK | MB_ICONEXCLAMATION);
    return 0;
}
