#pragma once
#include "Prerequisites.h"

class 
Window{
public:
Window();
~Window();

HRESULT
init(HINSTANCE hInstance,
     int nCmdShow, WNDPROC wndproc);

void
update();

void
render();

void
destroy();


public:
HWND m_hWnd = nullptr;
HINSTANCE m_hinst = nullptr;
RECT m_rect;
unsigned int m_width;
unsigned int m_height;
std:: string m_windowName = "Cexy Engine";
};
