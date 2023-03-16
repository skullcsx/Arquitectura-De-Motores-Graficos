#include "Prerequisites.h"
#include "Commons.h"

class 
Transform{

public:
Transform() = default;
~Transform() {};

void
init();

void
update();

void
render();

void
destroy();

public:
//we declare a variable as vector 3 for the movement of the cube
Vector3 CubePosition;

};