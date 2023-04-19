#include "Prerequisites.h"

//call the Device class
class
Device;

class
DeviceContext;

class
SamplerState {

public:
SamplerState() = default;
~SamplerState() {};

//we initialize the SamplerState
void
init(Device device);

void
update();

void
render(DeviceContext& deviceContext);

void
destroy();

public:
ID3D11SamplerState* m_sampler = nullptr;
};
