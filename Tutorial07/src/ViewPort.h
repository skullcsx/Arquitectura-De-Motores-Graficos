#include "Prerequisites.h"

class
Window;

class
Viewport {

public:
Viewport() = default;
~Viewport() {};

//We define the dimensions of the window 
void
init(Window window);

void
update();

void
render();

void
destroy();

public:
D3D11_VIEWPORT m_viewport;
};
