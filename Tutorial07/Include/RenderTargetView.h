#include "Prerequisites.h"

//call the class Device
class
Device;

//call the class Texture
class
Texture;

//We create the RenderTargetView 
class
RenderTargetView {
public:
RenderTargetView() = default;
~RenderTargetView() {};

//initialize the RenderTargetView
void
init(Device device, 
     Texture backBuffer, DXGI_FORMAT Format);

void
update();

void
render();

void
destroy();

public:
ID3D11RenderTargetView* m_renderTargetView = nullptr;

};
