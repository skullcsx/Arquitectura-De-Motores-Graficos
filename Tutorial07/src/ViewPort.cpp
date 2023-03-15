#include "ViewPort.h"
#include "Window.h"

void
Viewport::init(Window window) {

    if (window.m_hWnd == nullptr) {
        WARNING("ERROR: Viewport::init : [CREATION OF RESOURCE : FALSE] [CHECK FOR Window window] \n");
        exit(1);
    }

    m_viewport.Width = (FLOAT)window.m_width;// width;
    m_viewport.Height = (FLOAT)window.m_height; // height;
    m_viewport.MinDepth = 0.0f;
    m_viewport.MaxDepth = 1.0f;
    m_viewport.TopLeftX = 0;
    m_viewport.TopLeftY = 0;
}

void
Viewport::update() {
}

void
Viewport::render() {
}

void
Viewport::destroy() {
}