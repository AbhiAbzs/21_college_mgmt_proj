/*
 * Just testing out a logic to display login animation
 * */

#include <iostream>
#include <stdio.h>
#include <wtypes.h>
#include <windows.h>
using namespace std;

void GetDesktopResolution(int &horizontal, int &vertical);
int main(int argc, char const *argv[])
{
    int horizontal = 0;
    int vertical = 0;
    GetDesktopResolution(horizontal, vertical);
    cout << horizontal << '\n'
         << vertical << '\n';
    getchar();
    system("cls");
    cout << "Logging In...\n";
    // window(6,21,80,25);
    /* for(int i = 0; i < 70; i++)
    {
        printf("%c",219);
        delay(100);
    } */
    cout << (char)219 << endl;
    cout << (char)177 << endl;
    cout << (char)178 << endl;
    getchar();
    return 0;
}

void GetDesktopResolution(int &horizontal, int &vertical)
{
    RECT desktop;
    // Get a handle to the desktop window
    const HWND hDesktop = GetDesktopWindow();
    // Get the size of screen to the variable desktop
    GetWindowRect(hDesktop, &desktop);
    // The top left corner will have coordinates (0,0)
    // and the bottom right corner will have coordinates
    // (horizontal, vertical)
    horizontal = desktop.right;
    vertical = desktop.bottom;
}
