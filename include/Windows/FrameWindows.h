#pragma once

#include <Windows.h>
#include <stdbool.h>

typedef HINSTANCE HINST;


#define CallbackFunc(funcname) LRESULT CALLBACK funcname(HWND hwnd,UINT Msg,WPARAM wParam,LPARAM lParam)
#define CallbackParams\
    hwnd,Msg,wParam,lParam
/*
CallbackFunc(func_label){
    // your code
}

*/

/*

CallbackFunc(WndProc){
    if(PressButton(ButExample,CallBackParams)) PrintFormW(Hwindow,{100,100},100,70,"But press");
}

bool PressButton(HButton but,HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam){
    if(msg == WM_COMMAND && LOWORD(wParam) == but.id) return true;
    return false;
}


*/

// typedef struct{
//
// }HWindow;

typedef struct{

}HBtutton;

typedef struct{

}HEdit;

typedef struct{

}HBrush;

typedef struct{

}Htext;


typedef struct{
    HWND hlist;
    COORD c;
    int width;
    int height;
    bool border;
    int cur_sel_el;
}Hlist;

bool PressButton(HButton but,HWND hwnd,UINT msg,WPARAM wParam,LPARAM lParam){
    if(msg == WM_COMMAND && LOWORD(wParam) == but.id) return true;
    return false;
}


BOOL RegClass(char *titleclass,HINST hI,LRESULT CALLBACK (*func)(HWND hwnd,UINT Msg,WPARAM wParam,LPARAM lParam));
HWND CreateWin(char *title,COORD c,int width,int height,HINST hI,BOOL child,HWND parent,HMENU hmenu);
