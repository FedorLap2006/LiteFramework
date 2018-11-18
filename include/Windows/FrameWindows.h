#pragma once

#include <windows.h>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

typedef HINSTANCE HInst;

#define W_BUTTON 1
#define W_EDIT 2
#define W_LISTVIEW 3
#define W_LISTBOX 4
#define W_COMBOBOX 5





class Widget{
	protected:
		HWND hwid;
		HInst hI;
		//COORD c; -- no used(in containers[VBox,HBox,ALPane,SimplePane,GridPane]
		int width;
		int height;
		DWORD styles;
		int TTYPE;
};


/*
example
=-=-=-=

Window win;

Scene sc;

win.setTitle("example win");
win.setScene(sc);
Widget button = NewButton("!",false,70,70,"Comic Sans",20);

sc.Add(100,100,button);

win.show();


*/





class App{
	public:
		
};
