#ifndef MIKOMPILATION_GRA3DSGD_H
#define MIKOMPILATION_GRA3DSGD_H

#include "sgd_types.h"

void gra3dsgdSetCoordinate(const SGDCOORDINATE *pCU, int iIndex);
void _gra3dDrawSGD(SGDFILEHEADER* pSGDTop, SGDRENDERTYPE type, SGDCOORDINATE* pCoord, int pnum);
void sgdResetMaterialCache(SGDFILEHEADER *pSGDData);
void gra3dsgdSetupVu1();
CoordCache& _GetCoordCache();
void _SetCoordCache(const CoordCache &rCC);
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
void LoadTRI2Files(SGDPROCUNITHEADER *pPUHead);
void GsImageProcess(const SGDPROCUNITHEADER *pPUHead);

#endif //MIKOMPILATION_GRA3DSGD_H
