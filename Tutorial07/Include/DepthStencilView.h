#include "Prerequisites.h"

class
Device;

class
DepthStencilView {
public:
DepthStencilView() = default;
~DepthStencilView() { SAFE_RELEASE(m_pDepthStencilView) };

	
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
