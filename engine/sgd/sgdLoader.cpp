#include "sgdLoader.h"
#include "sgdGlobals.h"

bool isValidSGDFile(SGDFILEHEADER *pSGDHead)
{
  return pSGDHead != (SGDFILEHEADER *) nullptr && pSGDHead->uiVersionId == SGD_VALID_VERSIONID && !pSGDHead->fileInitialized;
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
  if (pSGDHead->pVectorInfo->iNumBlockInfo == 0)
  {
    return;
  }

  SGDVECTORINFO *pCurrentVectorInfo = pSGDHead->pVectorInfo;

  for (int i = 0; i < pSGDHead->pVectorInfo->iNumBlockInfo; i++)
  {

    /* Set the Highest level parent SGDVECTORINFO */
    SGDVECTORBSP currElement = pCurrentVectorInfo->sgdVectorBsp[i];

    uint childType = currElement.iChildType;

    if (childType != 0 && (currElement.pChildLeft != (VertexPoint *) nullptr))
    {
      pCurrentVectorInfo->sgdVectorBsp[i].pChildLeft = (VertexPoint *) ((int) pSGDHead + (int) currElement.pChildLeft);
    }

    if (1 < childType && (currElement.pChildRight != (VertexPoint *) nullptr))
    {
      pCurrentVectorInfo->sgdVectorBsp[i].pChildRight = (VertexPoint *) ((int) pSGDHead + (int) currElement.pChildRight);
    }

    if (2 < childType && (pCurrentVectorInfo->sgdVectorBsp[i].pParent != (VERTEXLIST *) nullptr))
    {
      pCurrentVectorInfo->sgdVectorBsp[i].pParent = (VERTEXLIST *) ((int) pSGDHead + (int) currElement.pParent);
    }
  }
}

void initializeParentVectorInfo(SGDFILEHEADER *pSGDHead)
{
  if (pSGDHead->pVectorInfo == (SGDVECTORINFO *) nullptr || pSGDHead->pVectorInfo->iNumBlockInfo != 4)
  {
    return;
  }

  if (pSGDHead->pVectorInfo->sgdVectorBsp[2].pChildLeft == (VertexPoint *) nullptr && pSGDHead->pVectorInfo->sgdVectorBsp[2].pChildRight == (VertexPoint *) nullptr)
  {
    pSGDHead->pVectorInfo->sgdVectorBsp[2].pParent = (VERTEXLIST *) nullptr;
  }

  pSGDHead->pVectorInfo->sgdVectorBsp[0].pParent = (VERTEXLIST *) nullptr;

  if (pSGDHead->pVectorInfo->sgdVectorBsp[2].pParent == (VERTEXLIST *) nullptr)
  {
    return;
  }

  MappingVertexList(pSGDHead->pVectorInfo->sgdVectorBsp[2].pParent, pSGDHead->pVectorInfo);

  MappingVertexList((VERTEXLIST *) (&pSGDHead->pVectorInfo->sgdVectorBsp[2].pParent +
                                    pSGDHead->pVectorInfo->sgdVectorBsp[2].pParent->iNumVertex * 2), pSGDHead->pVectorInfo);
}

void initializeSGDProcUnitHeader(SGDFILEHEADER *pSGDHead)
{
  if (pSGDHead->uiNumBlock == 0)
  {
    return;
  }

  /* Sets full-chain of SGDPROCUNITHEADER where initialy pNext has the offset */
  for (int i = 0; i < pSGDHead->uiNumBlock; i++)
  {
    if (pSGDHead->pProcUnit[i] == (SGDPROCUNITHEADER *) nullptr)
    {
      continue;
    }

    pSGDHead->pProcUnit[i] = (SGDPROCUNITHEADER *) ((int) pSGDHead + (int) pSGDHead->pProcUnit[i]);
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
    SGDPROCUNITHEADER *pPUHead = pSGDHead->pProcUnit[i];
    SGDPROCUNITHEADER *previousPH = (SGDPROCUNITHEADER *) nullptr;

    do {
      if (pPUHead == (SGDPROCUNITHEADER *) nullptr || pPUHead->pNext == (SGDPROCUNITHEADER *) nullptr)
      {
        break;
      }

      switch (pPUHead->iCategory)
      {
        case 0:
          previousPH = pPUHead;
          break;
        case 1:
          MappingMeshData(pPUHead, previousPH, pSGDHead);
          break;
        case 2:
          pPUHead->procInfo = (uint) (pSGDHead->pMaterial + pPUHead->procInfo);
          break;
        case 10:
          RebuildTRI2Files(pPUHead);
          break;
        default:
          break;
      }

      pPUHead->pNext = (SGDPROCUNITHEADER *) ((int) &pPUHead->pNext + (int) pPUHead->pNext);
      pPUHead = pPUHead->pNext;
    } while (pPUHead->pNext != (SGDPROCUNITHEADER *) nullptr);
  }
}

void SgMapUnit(SGDFILEHEADER *pSGDHead)
{
  if (!isValidSGDFile(pSGDHead))
  {
    return;
  }

  pSGDHead->fileInitialized = true;

  // Check if value has been initialized, if not then add the current value to the offset of beginning of SGD FILE
  if ((pSGDHead->pCoord < (SGDCOORDINATE *) 0x30000000) && (pSGDHead->pCoord != (SGDCOORDINATE *) nullptr))
  {
    pSGDHead->pCoord = (SGDCOORDINATE *) ((int) pSGDHead + (int) pSGDHead->pCoord);
  }

  if (pSGDHead->pMaterial < (SGDMATERIAL *) 0x30000000)
  {
    pSGDHead->pMaterial = (SGDMATERIAL *) ((int) pSGDHead + (int) pSGDHead->pMaterial);
  }

  if (pSGDHead->pCoord != (SGDCOORDINATE *) nullptr)
  {
    initializeSGDCoordinate(pSGDHead);
  }

  // Calculate the address of pVectorInfo by adding the starting address of
  // pSGDHead to the value currently located at pSGDHead->pVectorInfo
  if (pSGDHead->pVectorInfo != (SGDVECTORINFO *) nullptr)
  {
    pSGDHead->pVectorInfo = (SGDVECTORINFO *) ((int) pSGDHead + (int) pSGDHead->pVectorInfo);
    initializeVectorInfo(pSGDHead);
    initializeParentVectorInfo(pSGDHead);
  }

  initializeSGDProcUnitHeader(pSGDHead);
  initializeSGDType(pSGDHead);

  if (pSGDHead->field_0x6 == 0) {
   int i = 0;
    for (SGDMATERIAL * uVar11 = pSGDHead->pMaterial; (int)uVar11 < (int)pSGDHead->pVectorInfo; uVar11 += sizeof(SGDMATERIAL)) {
      i += 1;
    }
    pSGDHead->field_0x6 = (uint8_t)i;
    pSGDHead->field_0x5 = PresetChk;
  }
}
