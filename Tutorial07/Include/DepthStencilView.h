//Include the file Prerequisites.h
#include "Prerequisites.h"

// We call the class Device
class
Device;

//Create the class DepthStencilView
class
DepthStencilView {
public:
DepthStencilView() = default;
~DepthStencilView() { SAFE_RELEASE(m_pDepthStencilView) };

// we initialize the DepthStencilView using Device device, ID3D11Resource* depthStencil, DXGI_FORMAT Format
void
init(Device device, ID3D11Resource* depthStencil, DXGI_FORMAT Format);

void
update();

void
render();

void
destroy();

public:
ID3D11DepthStencilView* m_pDepthStencilView = nullptr;
};
