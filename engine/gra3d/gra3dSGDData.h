#pragma once

#include "sgdTypes.h"

// Original Game Methods

void sgdRemap(SGDFILEHEADER *pSGDHead);

/* Not yet implemented */
// void sgdEnableOptimizeTexture(int);
// void sgdClearCoordCalcFlgParents(void *, int);
// void sgdCalcBoneCoordinate(SGDCOORDINATE *, int);
// void sgdClearCoordCalcFlg(void *, int);
// void sgdClearCoordCalcFlgAll(void *);
// void sgdResetMaterialCache(SGDFILEHEADER *);
// void sgdCalcCoordinateMatrix(SGDCOORDINATE *);
// void sgdCalcCoordinate(SGDFILEHEADER *, float const (*)[3]);
// void sgdGetProcUnit(SGDPROCUNITHEADER const *, int, int);
// void sgdRemapInverse(SGDFILEHEADER *);
// void sgdVerifyLightData(GRA3DLIGHTDATA *, ZERO2LIGHTDATAFILE const *);
// void sgdGetBoundingBox(SGDFILEHEADER *, float (*)[3]);
// void sgdGetLocalWorldMatrix(void const *, float (*)[3], int);

// Custom Decompilation Methods

bool isValidSGDFile(SGDFILEHEADER *pSGDHead);

void initializeVectorInfo(SGDFILEHEADER *pSGDHead);

void initializeParentVectorInfo(SGDFILEHEADER *pSGDHead);

void initializeSGDProcUnitHeader(SGDFILEHEADER *pSGDHead);