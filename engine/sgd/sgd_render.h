#pragma once

#include "sgd_types.h"

void SelectLight(SGDPROCUNITHEADER *pProcUnit);
void SetLightData(void *param1, int param2);
void SetMaterialData(SGDPROCUNITHEADER *pProcUnit);
void SetMaterialDataPrerender();
void SetPreRenderTYPE0();
void SetPreRenderTYPE2(uint8_t param1);
void SetPreRenderTYPE2F();
void Set12Register();
void SetPreRenderMeshData(SGDPROCUNITHEADER *pProcUnit);
void SgPreRenderPrim(SGDPROCUNITHEADER *pProcUnit);
void SgPreRender(SGDFILEHEADER *pTop, int procUnitIndex);
void SetMaterialPointer();
void SetMaterialPointerCoord();