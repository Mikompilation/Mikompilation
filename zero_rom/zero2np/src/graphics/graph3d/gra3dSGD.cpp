#include "gra3dSGD.h"
#include "g3dDebug.h"
#include "gra3d.h"
#include "g3dCore.h"
#include "gra3dDma.h"
#include "gra3dShadow.h"
#include "gra3dSGDData.h"
#include "g3dUtil.h"

static float *s_pGlobalVertexBuffer[4];
static float *s_pGlobalNormalBuffer[4];
static int s_iGlobalBufferSize;
SGDPROCUNITHEADER *save_tri2_pointer;
SGDPROCUNITHEADER *save_bw_pointer;
static SGDPROCUNITHEADER *s_ppuhVUVN;
static SGDCOORDINATE *s_pCoordBase;
static SGDFILEHEADER *s_pSGDTop;
CoordCache ccahe;
int edge_check;
SGDPROCUNITHEADER *previous_tri2_prim;

void gra3dsgdSetData(SGDFILEHEADER *pSGDTop)
{
    g3ddbg_WARNING_RETURN(pSGDTop, "pSGDTop is NULL");
    g3ddbg_WARNING_RETURN(pSGDTop->uiVersionId == SGD_VALID_VERSIONID, "Invalid SGD File");
    s_pSGDTop = pSGDTop;
}

void gra3dsgdSetCoordinate(const SGDCOORDINATE *pCU, int iIndex)
{
    g3ddbg_ASSERT(pCU, "");

    if (iIndex == -1)
    {
        s_pCoordBase = (SGDCOORDINATE *)pCU;
        return;
    }

    s_pCoordBase[iIndex] = *pCU;
}

void _gra3dDrawSGD(SGDFILEHEADER* pSGDTop, SGDRENDERTYPE type, SGDCOORDINATE* pCoord, int pnum)
{
    /// pnum seems to only have 3 values: -1, 0, 1
    /// INVALID_SGD_OBJECTID, ???, ???
    g3ddbg_WARNING_RETURN(pSGDTop, "pSGDTop is NULL");

    bool bPreset = sgdIsPresetData(pSGDTop);

    g3ddbg_WARNING_RETURN(pSGDTop->uiVersionId == SGD_VALID_VERSIONID, "Invalid SGD File");

    g3ddbg_WARNING_RETURN(!((unsigned int)pCoord & 0x0f), "SGDFILEHEADER::pCoord is illegal");

    gra3dsgdSetData(pSGDTop);

    if (pCoord)
    {
        gra3dsgdSetCoordinate(pCoord, -1);
    }
    else
    {
        gra3dsgdSetCoordinate(pSGDTop->pCoord, -1);
    }

    if (type == SRT_REALTIME)
    {
        sgdResetMaterialCache(pSGDTop);
        gra3dsgdSetupVu1();
    }
    else if (type != SRT_PRELIGHTING && type != SRT_CLEARPRELIGHTING && type == SRT_MAPSHADOW)
    {
        CoordCache CC = _GetCoordCache();
        CC.cache_on = -1;
        _SetCoordCache(CC);
    }

    g3ddbg_ASSERT(!(pnum != INVALID_SGD_OBJECTID && pnum < 0), "");

    g3ddbg_ASSERT(pnum <= gra3dsgdGetNumBlock()-1, "pnum:%d, gra3dsgdGetNumBlock()-1:%d", pnum, gra3dsgdGetNumBlock()-1);

    SGDPROCUNITHEADER** pk = pSGDTop->apProcUnitHead;

    g3ddbg_ASSERT(pk, "");

    if (bPreset)
    {
        if (type == SRT_REALTIME)
        {
            if (pnum < 0)
            {
                save_bw_pointer = nullptr;
                save_tri2_pointer = nullptr;

                SgSortPreProcessP(*pk);
                int iNumBlock = gra3dsgdGetNumBlock();

                for (int i = 1; i < iNumBlock; i++)
                {
                    gra3dsgdDrawPresetDataObject(pk[i]);
                }
            }
            else if (pnum == 0)
            {
                save_bw_pointer = (SGDPROCUNITHEADER*)0xffffffff;
                save_tri2_pointer = (SGDPROCUNITHEADER*)0xffffffff;
                SgSortPreProcessP(*pk);
            }
            else
            {
                save_bw_pointer = nullptr;
                save_tri2_pointer = nullptr;

                gra3dsgdDrawPresetDataObject(pk[pnum]);
            }
            return;
        }
    }

    if (type == SRT_REALTIME)
    {
        /// Loops through LIGHT_POINT, 1 Object can only have 3 light points
        for (int i = 0; i < 3; i++)
        {
            int b = gra3dIsLightEnable(i + GRA3D_START_LIGHT_POINT);
            g3dLightEnable(i + GRA3D_START_LIGHT_POINT, b);

            if (b)
            {
                g3dSetLight(i + GRA3D_START_LIGHT_POINT, gra3dGetLightRef(i + GRA3D_START_LIGHT_POINT));
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int b = gra3dIsLightEnable(i + GRA3D_START_LIGHT_SPOT);
            g3dLightEnable(i + LID_POINT_3, b);

            if (b)
            {
                g3dSetLight(i + LID_POINT_3, gra3dGetLightRef(i + GRA3D_START_LIGHT_SPOT));
            }
        }

        gra3dDmaLoadVu1MicroProgram((unsigned int*)&SgSu_dma_main, 0);

        if (pnum < 0)
        {
            int i;
            SgSortPreProcess((u_int*)*pk);
            int iNumBlock = gra3dsgdGetNumBlock();

            for ( i = 1; i < iNumBlock - 1; i++)
            {
                SgSortUnitPrim(pk[i]);
            }

            if (!pk[i])
            {
                return;
            }

            SgSortUnitPrimPost(pk[i]);
            return;
        }
        else if (pnum == 0)
        {
            SgSortPreProcess((u_int*)*pk);
            return;
        }
        else if (pnum == gra3dsgdGetNumBlock() - 1)
        {
            SgSortUnitPrimPost(pk[pnum]);
            return;
        }
        else
        {
            SgSortUnitPrim(pk[pnum]);
            return;
        }
    }
    else if (type == SRT_PRELIGHTING)
    {
        g3ddbg_ASSERT(bPreset, "");

        if (pnum < 0)
        {
            int iNumBlock = gra3dsgdGetNumBlock();

            for (int i = 1; i < iNumBlock; i++)
            {
                SgPreRenderPrim(pk[i]);
            }
        }
        else if (pnum != 0)
        {
            SgPreRenderPrim(pk[pnum]);
        }
    }
    else if (type == SRT_CLEARPRELIGHTING)
    {
        if (pnum < 0)
        {
            int iNumBlock = gra3dsgdGetNumBlock();

            for (int i = 1; i < iNumBlock; i++)
            {
                SgClearPreRenderPrim(pk[i]);
            }
        }
        else if (pnum != 0)
        {
            SgClearPreRenderPrim(pk[pnum]);
        }
    }
    else if (type == SRT_MAPSHADOW)
    {
        g3ddbg_ASSERT(gra3dshadowGetAssignGroup() < 0, "グループパケットが必要！？意味不明");
        g3ddbg_ASSERT(pnum == -1, "see old source");

        int iNumBlock = gra3dsgdGetNumBlock();

        for (int i = 1; i < iNumBlock - 1; i++)
        {
            if (gra3dsgdGetCoordinate(i)->bInViewvolume)
            {
                AssignShadowPrim(pk[i]);
            }
        }
    }
    else
    {
        g3ddbg_ASSERT(false, "");
    }
}

void SgSortPreProcessP(SGDPROCUNITHEADER *pPUHead)
{
    ASSERT_RETURN(!pPUHead);

    while (pPUHead)
    {
        switch (pPUHead->iCategory)
        {
            case GS_IMAGE: GsImageProcess(pPUHead); break;
            case TRI2:
                if (save_tri2_pointer == (SGDPROCUNITHEADER *)0xffffffff)
                {
                    LoadTRI2Files(pPUHead);
                    save_tri2_pointer = nullptr;
                }
                else
                {
                    save_tri2_pointer = pPUHead;
                }

                break;
            case MonotoneTRI2:
                if (gra3dIsMonotoneDrawEnable())
                {
                    if (save_bw_pointer == (SGDPROCUNITHEADER *)0xffffffff)
                    {
                        LoadTRI2Files(pPUHead);
                        save_bw_pointer = nullptr;
                    }
                    else
                    {
                        save_bw_pointer = pPUHead;
                    }
                }
                break;
            case INVALID: g3ddbg_ASSERT(false, ""); break;
            case StackTRI2: g3ddbg_ASSERT(false, ""); break;
        }

        pPUHead = pPUHead->pNext;
        g3ddbg_ASSERT_WARNING((int)pPUHead != (int)0xffffffff, "sgd has been broken...");
    }
}

void sgdRemap(SGDFILEHEADER* pSGDHead)
{
    SGDVECTORINFO* pVectorInfo;

    g3ddbg_WARNING_RETURN(pSGDHead, "");

    g3ddbg_WARNING_RETURN(pSGDHead->uiVersionId == SGD_VALID_VERSIONID, "");

    ASSERT_RETURN(pSGDHead->ucMapFlag)

    pSGDHead->ucMapFlag = 1;

    void *p0 = pSGDHead->pCoord;
    if (p0 < (SGDCOORDINATE*)0x30000000 && ((int)p0 != 0))
    {
        /* inlined from g3dUtil.h */
        pSGDHead->pCoord = (SGDCOORDINATE*)GetPtrOffset((int)pSGDHead, (int)p0);
        /* end of inlined section */
    }

    void *p1 = pSGDHead->pMaterial;
    if ((u_int)p1 < 0x30000000 && p1)
    {
        pSGDHead->pMaterial = (SGDMATERIAL*)GetPtrOffset((int)pSGDHead, (int)p1);
        g3ddbg_ASSERT(!((u_int)pSGDHead->pMaterial & 0xf), "データのアラインがおかしいよ。")
    }

    SGDCOORDINATE* pCoord = pSGDHead->pCoord;
    if (pCoord)
    {
        for (unsigned int i = 0; i < pSGDHead->uiNumBlock - 1; i++)
        {
            SGDCOORDINATE &rCoord = pCoord[i];
            int j = (int)rCoord.pParent;
            g3ddbg_ASSERT((int)j <= (int)pSGDHead->uiNumBlock - 2, "こーでねーとの親子関係がおかしい風\nj : %d, pSGDHead->uiNumBlock : %d", j, pSGDHead->uiNumBlock)

            if (j < 0)
            {
                rCoord.pParent = (SGDCOORDINATE*)nullptr;
            }
            else if (rCoord.pParent < pCoord)
            {
                rCoord.pParent = &pCoord[j];
            }
            g3ddbg_ASSERT(!((int)rCoord.pParent & 0xf), "データのアラインがおかしいよ。")
        }
    }

    if (pSGDHead->pVectorInfo)
    {
        pVectorInfo = (SGDVECTORINFO*)((int)pSGDHead->pVectorInfo + (int)pSGDHead);
        pSGDHead->pVectorInfo = pVectorInfo;
        
        g3ddbg_ASSERT(pVectorInfo, "pVectorInfo is NULL")

        for (unsigned int i = 0; i < pVectorInfo->uiNumAddress; i++)
        {
            SGDVECTORADDRESS &rVA = pVectorInfo->aAddress[i];
            if (rVA.uiSize != 0 && rVA.pvVertex)
            {
                /* inlined from g3dUtil.h */
                rVA.pvVertex = (sceVu0FVECTOR*)GetPtrOffset((int)pSGDHead, (int)rVA.pvVertex);
                /* end of inlined section */
            }

            if (1 < rVA.uiSize && rVA.pvNormal)
            {
                /* inlined from g3dUtil.h */
                rVA.pvNormal = (sceVu0FVECTOR*)GetPtrOffset((int)pSGDHead, (int)rVA.pvNormal);
                /* end of inlined section */
            }

            if (2 < rVA.uiSize && rVA.pVertexList)
            {
                /* inlined from g3dUtil.h */
                rVA.pVertexList = (_VERTEXLIST*)GetPtrOffset((int)pSGDHead, (int)rVA.pVertexList);
                /* end of inlined section */
            }
        }

        if (pVectorInfo->aAddress[SVA_UNIQUE].pVertexList && pVectorInfo->uiNumAddress == 4)
        {
            if (!_GetGlobalBufferSize())
            {
                pVectorInfo->aAddress[SVA_UNIQUE].pVertexList = nullptr;
                pVectorInfo->aAddress[SVA_COMMON].pVertexList = nullptr;
                pVectorInfo->aAddress[SVA_WEIGHTED].pVertexList = nullptr;
            }
            else
            {
                SGDVECTORADDRESS &rVA = pVectorInfo->aAddress[SVA_WEIGHTED];
                if (!rVA.pvVertex && !rVA.pvNormal)
                {
                    rVA.pVertexList = nullptr;
                }
            }

            _VERTEXLIST* p_Var5 = pVectorInfo->aAddress[SVA_WEIGHTED].pVertexList;
            pVectorInfo->aAddress[SVA_UNIQUE].pVertexList = nullptr;
            if (pVectorInfo->aAddress[SVA_WEIGHTED].pVertexList)
            {
                MappingVertexList(pVectorInfo->aAddress[SVA_WEIGHTED].pVertexList, pVectorInfo);
                MappingVertexList((_VERTEXLIST*)(&p_Var5->aList[p_Var5->iNumList]), pVectorInfo);
            }
        }
    }

    SGDPROCUNITHEADER **apProcUnitHead = pSGDHead->apProcUnitHead;

    for (unsigned int i = 0; i < pSGDHead->uiNumBlock; i++)
    {
        SGDPROCUNITHEADER *&rpPH = apProcUnitHead[i];
        g3ddbg_ASSERT(!((int)rpPH & 0xf), "sgd is illegal")
        if ((int)rpPH)
        {
            /* inlined from g3dUtil.h */
            rpPH = (SGDPROCUNITHEADER*)GetPtrOffset((int)pSGDHead, (int)apProcUnitHead[i]);
            /* end of inlined section */
        }
    }

    SGDPROCUNITHEADER* b = !pSGDHead->pVectorInfo ?
                           (SGDPROCUNITHEADER*)nullptr :
                           (SGDPROCUNITHEADER*)pSGDHead->pVectorInfo->aAddress[SVA_UNIQUE].pvVertex;

    if ((b || pSGDHead->apProcUnitHead[0]) && b == pSGDHead->apProcUnitHead[0])
    {
        g3dbgMessage("Illegal SGD Data\n")
    }

    for (unsigned int i = 0; i < pSGDHead->uiNumBlock ; i++)
    {
        u_int* vuvnprim = (u_int*)nullptr;
        SGDPROCUNITHEADER *pPUHead = apProcUnitHead[i], *pNext;

        while (pPUHead)
        {
            g3ddbg_ASSERT(!((int)pPUHead & 0xf), "sgd is illegal")

            if (!pPUHead->pNext) {
                break;
            }

            pPUHead->pNext = (SGDPROCUNITHEADER *)((int)pPUHead->pNext + (int)pPUHead);

            g3ddbg_ASSERT(!((int)pPUHead->pNext & 0xf), "sgd is illegal")
            switch (pPUHead->iCategory)
            {
                case VUVN:
                    vuvnprim = (u_int*)pPUHead;
                    break;
                case MESH:
                    MappingMeshData(pPUHead, (u_int*)vuvnprim, pSGDHead);
                    break;
                case MATERIAL:
                    pPUHead->VUMaterialDesc.pMat = &pSGDHead->pMaterial[pPUHead->VUMaterialDesc.iMaterialIndex];
                    break;
                case COORDINATE:
                    MappingCoordinateData((u_int*)pPUHead, (HeaderSection*)pSGDHead);
                    break;
                case TRI2:
                    RebuildTRI2Files(pPUHead);
                    break;
                case END:
                    g3ddbg_ASSERT(false, "") break;
                case BOUNDING_BOX:
                case GS_IMAGE:
                case MonotoneTRI2:
                case INVALID:
                default:
                    g3ddbg_ASSERT(false, "pPUHead->iCategory : %d", pPUHead->iCategory) break;
            }

            pPUHead = pPUHead->pNext;
        }
    }
}

int _GetGlobalBufferSize()
{
    return s_iGlobalBufferSize;
}

