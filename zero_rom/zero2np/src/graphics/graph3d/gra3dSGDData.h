#ifndef MIKOMPILATION_GRA3DSGDDATA_H
#define MIKOMPILATION_GRA3DSGDDATA_H

#include "sgd_types.h"

void MappingCoordinateData(unsigned int *intpointer, HeaderSection *hs);
void MappingMeshData(SGDPROCUNITHEADER *pPUHeader, unsigned int *vuvnprim, SGDFILEHEADER *pSGDHead);
void RebuildTRI2Files(SGDPROCUNITHEADER *pPUHead);
void MappingVertexList(_VERTEXLIST *pVL, SGDVECTORINFO *pVectorInfo);
static void MappingVUVNData(SGDPROCUNITHEADER *pPUHead, SGDFILEHEADER *pSGDHead);

#endif //MIKOMPILATION_GRA3DSGDDATA_H
