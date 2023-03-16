#include "Prerequisites.h"

//call the Device class
class
Device;

//call the DeviceContext class
class
DeviceContext;

//call the Window class
class
Window;

//call the Texture class
class
Texture;

//we create the SwapChain class
class 
SwapChain{

public:
SwapChain() = default;
~SwapChain() {};

//we initialize the SwapChain
void
init(Device& device,
     DeviceContext& deviceContext,
     Texture& backBuffer,
     Window window);

void
update();

void
render();

void
destroy();

	
void
present();


private:
D3D_DRIVER_TYPE m_driverType = D3D_DRIVER_TYPE_NULL;
D3D_FEATURE_LEVEL m_featureLevel = D3D_FEATURE_LEVEL_11_0;
IDXGISwapChain* m_swapChain = nullptr;

};