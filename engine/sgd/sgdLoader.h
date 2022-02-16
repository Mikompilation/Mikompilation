#pragma once

#include "sgdTypes.h"

void SgMapUnit(SGDFILEHEADER *pSGDHead);

void MappingVertexList(VERTEXLIST *param1, SGDVECTORINFO *param2);

void MappingMeshData(SGDPROCUNITHEADER *pPUHead, SGDPROCUNITHEADER *previousPH, SGDFILEHEADER *pSGDHead);

void RebuildTRI2Files(SGDPROCUNITHEADER *pPUHead);

bool isValidSGDFile(SGDFILEHEADER *pSGDHead);

void initializeVectorInfo(SGDFILEHEADER *pSGDHead);

void initializeParentVectorInfo(SGDFILEHEADER *pSGDHead);

void initializeSGDProcUnitHeader(SGDFILEHEADER *pSGDHead);