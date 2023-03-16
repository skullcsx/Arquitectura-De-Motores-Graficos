//Include the file Prerequisites.h
#include "Prerequisites.h"

class DeviceContext{

public:
DeviceContext() = default;
~DeviceContext() { SAFE_RELEASE(m_deviceContext); };


void
init();

void
update();

void
render();

void
destroy();


//Set an array of sample states to the pipeline stage of the pixel shader.
void
PSSetSamplers(unsigned int StartSlot, 
              unsigned int NumSamplers, 
              ID3D11SamplerState* const* ppSamplers);

//Draw the non-instantiated indexes
void
DrawIndexed(unsigned int IndexCount,
            unsigned int StartIndexLocation, 
            unsigned int BaseVertexLocation);

//Binds a shader resource array to the pixel shader stage.
void
PSSetShaderResources(unsigned int StartSlot, 
                     unsigned int NumViews, 
                     ID3D11ShaderResourceView* const* ppShaderResourceViews);

//Set the constant buffers used by the pixel in the shader pipeline stage.
void
PSSetConstantBuffers(unsigned int StartSlot, 
                     unsigned int NumBuffers, 
                     ID3D11Buffer* const* ppConstantBuffers);

//Set a pixel sahader on the device.
void 
PSSetShader(ID3D11PixelShader* pPixelShader,
            ID3D11ClassInstance* const* ppClassInstances, 
            unsigned int NumClassInstances);

//set a constant of buffers used by the vertex shader pipeline stage.
void 
VSSetConstantBuffers(unsigned int StartSlot, 
                     unsigned int NumBuffers, 
                     ID3D11Buffer* const* ppConstantBuffers);

//Set a vertex shader on the device
void 
VSSetShader(ID3D11VertexShader* pVertexShader, 
            ID3D11ClassInstance* const* ppClassInstances,
            unsigned int NumClassInstances);

//Clear the resources of the depth-stencil
void 
ClearDepthStencilView(ID3D11DepthStencilView* pDepthStencilView, 
                      unsigned int ClearFlags, 
                      float Depth, 
                      unsigned int Stencil);

//Set all elements in the render target to a value
void 
ClearRenderTargetView(ID3D11RenderTargetView* pRenderTargetView,
                      const float ColorRGBA[4]);

//CPU copies data from memory to a created subresource in unallocable memory
void
UpdateSubresource(ID3D11Resource* pDstResource, 
                  unsigned int DstSubresource,
                  const D3D11_BOX* pDstBox, 
                  const void* pSrcData,
                  unsigned int SrcRowPitch, 
                  unsigned int SrcDepthPitch);

/* Bind information about primitive type and data order
A that describes the input data for the input assembler stage.*/
void
IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY Topology);

//Binds an index buffer to the input assembler stage.
void
IASetIndexBuffer(ID3D11Buffer* pIndexBuffer, 
                 DXGI_FORMAT Format, 
                 unsigned int Offset);

//Binds an array of vertex buffers to the input assembler stage
void 
IASetVertexBuffers(unsigned int StartSlot, 
                   unsigned int NumBuffers,
                   ID3D11Buffer* const* ppVertexBuffers, 
                   const unsigned int* pStrides, 
                   const unsigned int* pOffsets);

//Binds an input layout object to the input assembler stage.
void
IASetInputLayout(ID3D11InputLayout* pInputLayout);

//Links an array of viewports to the rasterizer stage of the pipeline.
void
RSSetViewports(unsigned int NumViewports,
               const D3D11_VIEWPORT* pViewports);

/*Binds one or more render targets atomically and the rendering buffer
depth - stencil buffer to the output merge stage.*/
void
OMSetRenderTargets(unsigned int NumViews, 
                   ID3D11RenderTargetView* const* ppRenderTargetViews, 
                   ID3D11DepthStencilView* pDepthStencilView);
public:
ID3D11DeviceContext* m_deviceContext = nullptr;
};
