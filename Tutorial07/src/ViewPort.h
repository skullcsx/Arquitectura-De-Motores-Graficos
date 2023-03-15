#include "Prerequisites.h"

//Call to the Class is begin used in cpp (Window)
class
	Window;

class
	Viewport {
public:
	Viewport() = default;
	~Viewport() {};

	//Defines the dimensions of a viewport (width & height)
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
