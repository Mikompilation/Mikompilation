#include <cstdio>
#include "gra3dSGDData.h"
#include "gra3dSGD.h"
#include "g3dDebug.h"
#include "g3dUtil.h"

void MappingVertexList(_VERTEXLIST *pVL, SGDVECTORINFO *pVectorInfo)
{
    int size = 0;
    int vnnum = pVL->iNumList;
    int i = 0;

    if (0 < vnnum) {
        unsigned short *usNumVector = &pVL->aList[0].usNumVector;
        unsigned short *vOff = &pVL->aList[0].vOff;

        do
        {
            *vOff = (unsigned short)size;
            size += *(int*)usNumVector;
            usNumVector += 4;
            vOff += 4;
            i++;
        } while (i < vnnum);
    }

    if (_GetGlobalBufferSize() <  size) {
        printf("VNBuffer Over size %d needs %d\n", _GetGlobalBufferSize(), size);
        g3ddbg_ASSERT(false, "")
        pVectorInfo->aAddress[SVA_UNIQUE].pVertexList = (_VERTEXLIST *)nullptr;
        pVectorInfo->aAddress[SVA_WEIGHTED].pVertexList = (_VERTEXLIST *)nullptr;
    }
}

static void MappingVUVNData(SGDPROCUNITHEADER *pPUHead, SGDFILEHEADER *pSGDHead)
{
    SGDVUVNDESC &rVUVNDesc = pPUHead->VUVNDesc;
    _VECTORDATA *pVectorData = (_VECTORDATA *) &pPUHead[3];
    SGDVECTORINFO *pVectorInfo = pSGDHead->pVectorInfo;
    sceVu0FVECTOR *vp = nullptr;
    sceVu0FVECTOR *np = nullptr;

    switch (rVUVNDesc.ucVectorType)
    {
        case SVA_UNIQUE: {
            vp = pVectorInfo->aAddress[SVA_UNIQUE].pvVertex;
            np = pVectorInfo->aAddress[SVA_UNIQUE].pvNormal;

            short sNumVertex = rVUVNDesc.sNumVertex;

            for (int i = 0; i < sNumVertex; i++)
            {
                /* inlined from g3dUtil.h */
                pVectorData[i].vAddress.pVertex = (sceVu0FVECTOR*)GetPtrOffset((int)vp, pVectorData[i].vIndex.uiVertexId);
                pVectorData[i].vAddress.pNormal = (sceVu0FVECTOR*)GetPtrOffset((int)np, pVectorData[i].vIndex.uiNormalId);
                /* end of inlined section */
            }
        }

        case SVA_COMMON: return;
        case SVA_WEIGHTED: break;
    }

    if (pVectorInfo->aAddress[SVA_WEIGHTED].pVertexList != nullptr)
    {
        vp = _GetGlobalVertexBuffer();
        np = _GetGlobalNormalBuffer();

        short sNumVertex = rVUVNDesc.sNumVertex;

        for (int i = 0; i < sNumVertex; i++)
        {
            /* inlined from g3dUtil.h */
            pVectorData[i].vAddress.pVertex = (sceVu0FVECTOR*)GetPtrOffset((int)vp, pVectorData[i].vIndex.uiVertexId);
            pVectorData[i].vAddress.pNormal = (sceVu0FVECTOR*)GetPtrOffset((int)np, pVectorData[i].vIndex.uiNormalId);
            /* end of inlined section */
        }
    }
    else
    {
        vp = pVectorInfo->aAddress[SVA_WEIGHTED].pvVertex;
        np = pVectorInfo->aAddress[SVA_WEIGHTED].pvNormal;

        if (rVUVNDesc.sNumVertex > 0)
        {
            for (int i = rVUVNDesc.sNumVertex; i != 0; i--)
            {
                /* inlined from g3dUtil.h */
                pVectorData->vAddress.pVertex = (sceVu0FVECTOR*)GetPtrOffset((int)vp, pVectorData[i].vIndex.uiVertexId * 2);
                pVectorData->vAddress.pNormal = (sceVu0FVECTOR*)GetPtrOffset((int)np, pVectorData[i].vIndex.uiNormalId * 2);
                /* end of inlined section */
                pVectorData++;
            }
        }
    }
}
