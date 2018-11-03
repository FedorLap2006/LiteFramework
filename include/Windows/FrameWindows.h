#pragma once

#include <Windows.h>
#include <stdbool.h>

typedef HINSTANCE HINST;

#define CallbackFunc(funcname) LRESULT CALLBACK funcname(HWND hwnd,UINT Msg,WPARAM wParam,LPARAM lParam)
/*
CallbackFunc(func_label){
    // your code
}

*/

BOOL RegClass(char *titleclass,HINST hI,LRESULT CALLBACK (*func)(HWND hwnd,UINT Msg,WPARAM wParam,LPARAM lParam));
HWND CreateWin(char *title,COORD c,int width,int height,HINST hI,BOOL child,HWND parent,HMENU hmenu);
