//Include the file Prerequisites.h
#include "Prerequisites.h"
#pragma once


//--------------------------------------------------------------------------------------
// Structures
//--------------------------------------------------------------------------------------
//We create a simpleVertex Structure
struct 
SimpleVertex{
XMFLOAT3 Pos;
XMFLOAT2 Tex;
};

struct
  LoadData {
  std::string name;
  std::vector <SimpleVertex> vertex;
  std::vector <unsigned int> index;
  int numVertex;
  int numIndex;
};

//Create a Camera structure 
struct 
Camera{
XMMATRIX mView;
XMMATRIX mProjection;
};

//We create a CBChangesEveryFrame structure
struct 
CBChangesEveryFrame{
XMMATRIX mWorld;
XMFLOAT4 vMeshColor;
};

//We create a Vector 3 structure for the movement of the cube
struct 
Vector3{
float x = 0.0f;
float y = 0.0f;
float z = 0.0f;
};
