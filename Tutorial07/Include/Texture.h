#include "Prerequisites.h"
#include "Commons.h"


class
Device;

class
Texture {

public:
Texture() = default;
~Texture() {};

//initializes all textures
void
init(Device device, std::string textureName);

//initializes the texture using its length and width
void
init(Device device,
     unsigned int width,
     unsigned int height,
     DXGI_FORMAT Format,
     unsigned int BindFlags);

void
update();

void
render();

void
destroy();

public:

//handles a texture resource as data
ID3D11Texture2D* m_texture = nullptr;
	
//Handles a texture as image data
ID3D11ShaderResourceView* m_textureFromImg = nullptr;
};
