#pragma once
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


//Setea una matriz de estados de muestra en la etapa de canalización del sombreador de píxeles.
void
PSSetSamplers(unsigned int StartSlot, 
              unsigned int NumSamplers, 
              ID3D11SamplerState* const* ppSamplers);

//Dubuja los index no instanciados
void
DrawIndexed(unsigned int IndexCount,
            unsigned int StartIndexLocation, 
            unsigned int BaseVertexLocation);

//Vincula una matriz de recursos de sombreado a la etapa de sombreado de píxeles.
void
PSSetShaderResources(unsigned int StartSlot, 
                     unsigned int NumViews, 
                     ID3D11ShaderResourceView* const* ppShaderResourceViews);

//Setea los constant buffers utilizados por el pixel en la etapa del shader pipeline stage.
void
PSSetConstantBuffers(unsigned int StartSlot, 
                     unsigned int NumBuffers, 
                     ID3D11Buffer* const* ppConstantBuffers);

//Setea un pixel sahader en el dispositivo.
void 
PSSetShader(ID3D11PixelShader* pPixelShader,
            ID3D11ClassInstance* const* ppClassInstances, 
            unsigned int NumClassInstances);

//setea una constante de buffers usados por el vertex shader pipeline stage. 
void 
VSSetConstantBuffers(unsigned int StartSlot, 
                     unsigned int NumBuffers, 
                     ID3D11Buffer* const* ppConstantBuffers);

//Setea un vertex shader en el dispositivo
void 
VSSetShader(ID3D11VertexShader* pVertexShader, 
            ID3D11ClassInstance* const* ppClassInstances,
            unsigned int NumClassInstances);

//Limpia los recursos del depth-stencil
void 
ClearDepthStencilView(ID3D11DepthStencilView* pDepthStencilView, 
                      unsigned int ClearFlags, 
                      float Depth, 
                      unsigned int Stencil);

//Setea todos los elementos en el render target a un valor 
void 
ClearRenderTargetView(ID3D11RenderTargetView* pRenderTargetView,
                      const float ColorRGBA[4]);

/*La CPU copia los datos de la memoria a un subrecurso(subresource) creado 
en la memoria no asignable*/
void
UpdateSubresource(ID3D11Resource* pDstResource, 
                  unsigned int DstSubresource,
                  const D3D11_BOX* pDstBox, 
                  const void* pSrcData,
                  unsigned int SrcRowPitch, 
                  unsigned int SrcDepthPitch);

/*Enlaza información sobre el tipo primitivo y el orden de datos
que describe los datos de entrada para la etapa del ensamblador de entrada.*/
void
IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY Topology);

//Enlaza un búfer de índice a la etapa del ensamblador de entrada.
void
IASetIndexBuffer(ID3D11Buffer* pIndexBuffer, 
                 DXGI_FORMAT Format, 
                 unsigned int Offset);

//Enlaza una matriz de búferes de vértices a la etapa del ensamblador de entrada
void 
IASetVertexBuffers(unsigned int StartSlot, 
                   unsigned int NumBuffers,
                   ID3D11Buffer* const* ppVertexBuffers, 
                   const unsigned int* pStrides, 
                   const unsigned int* pOffsets);

//Enlaza un objeto de diseño de entrada a la etapa del ensamblador de entrada.
void
IASetInputLayout(ID3D11InputLayout* pInputLayout);

//Vincula una matriz de ventanas gráficas a la etapa del rasterizador de la canalización(pipeline).
void
RSSetViewports(unsigned int NumViewports,
               const D3D11_VIEWPORT* pViewports);

/*Vincula uno o más objetivos de renderización atómicamente y el búfer de 
plantilla de profundidad(depth - stencil buffer) a la etapa de fusión de salida.*/
void
OMSetRenderTargets(unsigned int NumViews, 
                   ID3D11RenderTargetView* const* ppRenderTargetViews, 
                   ID3D11DepthStencilView* pDepthStencilView);
public:
ID3D11DeviceContext* m_deviceContext = nullptr;
};
