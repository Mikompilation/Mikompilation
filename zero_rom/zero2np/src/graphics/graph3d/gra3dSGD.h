#ifndef MIKOMPILATION_GRA3DSGD_H
#define MIKOMPILATION_GRA3DSGD_H

#include "sgd_types.h"

void gra3dsgdSetCoordinate(const SGDCOORDINATE *pCU, int iIndex);
void _gra3dDrawSGD(SGDFILEHEADER* pSGDTop, SGDRENDERTYPE type, SGDCOORDINATE* pCoord, int pnum);
void sgdResetMaterialCache(SGDFILEHEADER *pSGDData);
void gra3dsgdSetupVu1();
CoordCache& _GetCoordCache();
void _SetCoordCache(CoordCache const &CC);
int gra3dsgdGetNumBlock();
void SgSortPreProcessP(SGDPROCUNITHEADER *pPUHead);
void gra3dsgdDrawPresetDataObject(SGDPROCUNITHEADER *pPUHead);
void SgSortPreProcess(u_int *_prim);
void SgSortUnitPrim(SGDPROCUNITHEADER *pPUHead);
void SgSortUnitPrimPost(SGDPROCUNITHEADER *pPUHead);
void SgPreRenderPrim(SGDPROCUNITHEADER *pPUHead);
void SgClearPreRenderPrim(SGDPROCUNITHEADER *pPUHead);
SGDCOORDINATE * gra3dsgdGetCoordinate(int iIndex);
int _GetGlobalBufferSize();
sceVu0FVECTOR* _GetGlobalVertexBuffer();
sceVu0FVECTOR* _GetGlobalNormalBuffer();

#endif //MIKOMPILATION_GRA3DSGD_H
