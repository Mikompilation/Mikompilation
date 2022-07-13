#include "sgd_loader.h"

bool isValidSGDFile(SGDFILEHEADER *pSGDHead)
{
  return pSGDHead != (SGDFILEHEADER *) nullptr
         && pSGDHead->uiVersionId == SGD_VALID_VERSIONID
         && !pSGDHead->ucMapFlag;
}

void initializeSGDCoordinate(SGDFILEHEADER *pSGDHead)
{
  if (pSGDHead->uiNumBlock == 1)
  {
    return;
  }

  /* The loop goes through each SGDCOORDINATE to set the current element as the
               parent of the next element */
  for (int i = 0; i < pSGDHead->uiNumBlock - 1; i++)
  {
    int j = (int) pSGDHead->pCoord[i].pParent;

    /* Since it is the first element, it does not have a parent */
    if (j < 0)
    {
      pSGDHead->pCoord[i].pParent = (SGDCOORDINATE *) nullptr;
    }
    else if (pSGDHead->pCoord[i].pParent < (SGDCOORDINATE *) pSGDHead->pCoord)
    {

      /* If the current element is after the Parent, set the address of the parent to
               the current element after the array of size 0x38 */
      pSGDHead->pCoord[i].pParent = &pSGDHead->pCoord[j];
    }
  }
}

void initializeVectorInfo(SGDFILEHEADER *pSGDHead)
{
  if (pSGDHead->pVectorInfo->uiNumAddress == 0)
  {
    return;
  }

  SGDVECTORINFO *pCurrentVectorInfo = pSGDHead->pVectorInfo;

  for (int i = 0; i < pSGDHead->pVectorInfo->uiNumAddress; i++)
  {
    /* Set the Highest level parent SGDVECTORINFO */
    SGDVECTORADDRESS currElement = pCurrentVectorInfo->aAddress[i];

    uint uiSize = currElement.uiSize;

    if (uiSize != 0
        && (currElement.pvVertex != (SGDVUVNDATA_WEIGHTED *) nullptr))
    {
      pCurrentVectorInfo->aAddress[i].pvVertex =
          (SGDVUVNDATA_WEIGHTED *) ((int) pSGDHead
                                    + (int) currElement.pvVertex);
    }

    if (1 < uiSize
        && (currElement.pvNormal != (SGDVUVNDATA_WEIGHTED *) nullptr))
    {
      pCurrentVectorInfo->aAddress[i].pvNormal =
          (SGDVUVNDATA_WEIGHTED *) ((int) pSGDHead
                                    + (int) currElement.pvNormal);
    }

    if (2 < uiSize
        && (pCurrentVectorInfo->aAddress[i].pVertexList
            != (VERTEXLIST *) nullptr))
    {
      pCurrentVectorInfo->aAddress[i].pVertexList =
          (VERTEXLIST *) ((int) pSGDHead + (int) currElement.pVertexList);
    }
  }
}

void initializeParentVectorInfo(SGDFILEHEADER *pSGDHead)
{
  if (pSGDHead->pVectorInfo == (SGDVECTORINFO *) nullptr
      || pSGDHead->pVectorInfo->uiNumAddress != 4)
  {
    return;
  }

  if (pSGDHead->pVectorInfo->aAddress[2].pvVertex
          == (SGDVUVNDATA_WEIGHTED *) nullptr
      && pSGDHead->pVectorInfo->aAddress[2].pvNormal
             == (SGDVUVNDATA_WEIGHTED *) nullptr)
  {
    pSGDHead->pVectorInfo->aAddress[2].pVertexList = (VERTEXLIST *) nullptr;
  }

  pSGDHead->pVectorInfo->aAddress[0].pVertexList = (VERTEXLIST *) nullptr;

  if (pSGDHead->pVectorInfo->aAddress[2].pVertexList == (VERTEXLIST *) nullptr)
  {
    return;
  }

  MappingVertexList(pSGDHead->pVectorInfo->aAddress[2].pVertexList,
                    pSGDHead->pVectorInfo);

  MappingVertexList(
      (VERTEXLIST *) (&pSGDHead->pVectorInfo->aAddress[2].pVertexList
                      + pSGDHead->pVectorInfo->aAddress[2].pVertexList->list_num
                            * 2),
      pSGDHead->pVectorInfo);
}

void initializeSGDProcUnitHeader(SGDFILEHEADER *pSGDHead)
{
  if (pSGDHead->uiNumBlock == 0)
  {
    return;
  }

  /* Sets full-chain of SGDPROCUNITHEADER where initially pNext has the offset */
  for (int i = 0; i < pSGDHead->uiNumBlock; i++)
  {
    if (pSGDHead->apProcUnitHead[i] == (SGDPROCUNITHEADER *) nullptr)
    {
      continue;
    }

    pSGDHead->apProcUnitHead[i] =
        (SGDPROCUNITHEADER *) ((int) pSGDHead
                               + (int) pSGDHead->apProcUnitHead[i]);
  }
}

void initializeSGDType(SGDFILEHEADER *pSGDHead)
{
  if (pSGDHead->uiNumBlock == 0)
  {
    return;
  }

  for (uint i = 0; i < pSGDHead->uiNumBlock; i++)
  {
    SGDPROCUNITHEADER *pPUHead = pSGDHead->apProcUnitHead[i];
    SGDPROCUNITHEADER *previousPH = (SGDPROCUNITHEADER *) nullptr;

    do
    {
      if (pPUHead == (SGDPROCUNITHEADER *) nullptr
          || pPUHead->pNext == (SGDPROCUNITHEADER *) nullptr)
      {
        break;
      }

      switch (pPUHead->iCategory)
      {
        case VUVN:
          previousPH = pPUHead;
          break;
        case MESH:
          MappingMeshData(pPUHead, previousPH, pSGDHead);
          break;
        case MATERIAL:
          pPUHead->u8lPrimType =
              (uint) (pSGDHead->pMaterial + pPUHead->u8lPrimType);
          break;
        case TRI2:
          RebuildTRI2Files(pPUHead);
          break;
        default:
          break;
      }

      pPUHead->pNext =
          (SGDPROCUNITHEADER *) ((int) &pPUHead->pNext + (int) pPUHead->pNext);
      pPUHead = pPUHead->pNext;
    }
    while (pPUHead->pNext != (SGDPROCUNITHEADER *) nullptr);
  }
}

void SgMapUnit(SGDFILEHEADER *pSGDHead)
{
  if (!isValidSGDFile(pSGDHead))
  {
    return;
  }

  pSGDHead->ucMapFlag = true;

  // Check if value has been initialized, if not then add the current value to the offset of beginning of SGD FILE
  if ((pSGDHead->pCoord < (SGDCOORDINATE *) 0x30000000)
      && (pSGDHead->pCoord != (SGDCOORDINATE *) nullptr))
  {
    pSGDHead->pCoord =
        (SGDCOORDINATE *) ((int) pSGDHead + (int) pSGDHead->pCoord);
  }

  if (pSGDHead->pMaterial < (SGDMATERIAL *) 0x30000000)
  {
    pSGDHead->pMaterial =
        (SGDMATERIAL *) ((int) pSGDHead + (int) pSGDHead->pMaterial);
  }

  if (pSGDHead->pCoord != (SGDCOORDINATE *) nullptr)
  {
    initializeSGDCoordinate(pSGDHead);
  }

  // Calculate the address of pVectorInfo by adding the starting address of
  // pSGDHead to the value currently located at pSGDHead->pVectorInfo
  if (pSGDHead->pVectorInfo != (SGDVECTORINFO *) nullptr)
  {
    pSGDHead->pVectorInfo =
        (SGDVECTORINFO *) ((int) pSGDHead + (int) pSGDHead->pVectorInfo);
    initializeVectorInfo(pSGDHead);
    initializeParentVectorInfo(pSGDHead);
  }

  initializeSGDProcUnitHeader(pSGDHead);
  initializeSGDType(pSGDHead);
}
