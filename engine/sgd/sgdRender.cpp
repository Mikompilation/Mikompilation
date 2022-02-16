#include "sgdRender.h"
#include "../../common/flags.h"
#include "../../common/logging/printing.h"
#include "sgdGlobals.h"

void SetPreRenderTYPE2(uint8_t param1)
{
  // TODO : Implement SetPreRenderTYPE2
  return;
}

void SetPreRenderMeshData(SGDPROCUNITHEADER *pProcUnit)
{
  if (pProcUnit->mtype == '\x12')
  {
    SetPreRenderTYPE2(pProcUnit->b);
    return;
  }

  if (pProcUnit->mtype < '\x13')
  {
    if (pProcUnit->mtype != '\x10')
    {
      return;
    }

    SetPreRenderTYPE0();
    return;
  }

  if (pProcUnit->mtype != 2)
  {
    return;
  }

  SetPreRenderTYPE2F();
}

void SgPreRenderPrim(SGDPROCUNITHEADER *pProcUnit)
{
  if (pProcUnit == (SGDPROCUNITHEADER *) nullptr)
  {
    return;
  }

  SGDPROCUNITHEADER *nextPH = pProcUnit->pNext;
  Matrix4x4 *pMatrix;

  while (nextPH != (SGDPROCUNITHEADER *) nullptr)
  {
    switch (pProcUnit->iCategory)
    {
      case 0:
        vuvnprim = pProcUnit;
        break;
      case 1:
        nextprim = nextPH;
        SetPreRenderMeshData(pProcUnit);
        break;
      case 2:
        SetMaterialData(pProcUnit);
        SetMaterialDataPrerender();

        if (!dbg_flg)
        {
          break;
        }

        printf("PNum %d(%d) SNum %d(%d)\n", SgPointGroupNum, SgPointNum, SgSpotGroupNum, SgSpotNum);
        printVectorC(&SgLightCoordp->pos0, "pos0");
        printVectorC(&SgLightCoordp->pos1, "pos1");
        printVectorC(&SgLightCoordp->pos2, "pos2");
        printVectorC(&SgLightCoordp->intens, "intens");
        printVectorC(&SgLightCoordp->intens_b, "intens_b");
        printLMatC(SgLightCoordp->WDLightMtx, "WDLightMtx");
        printLMatC(SgLightCoordp->SLightMtx, "SLightMtx");
        printVectorC(&SgLightSpotp->btimes, "btimes");
        printLMatC(SgLightSpotp->DColor, "DColor");
        printLMatC(SgLightSpotp->SColor, "SColor");
        break;
      case 3:
        pMatrix = (Matrix4x4 *) (pProcUnit->procInfo * 0xe0 + lcp);
        CopyMatrix(&pMatrix[1], &shadow_prim);
        MulMatrix(&shadow_prim_post, &SgWSMtx, &shadow_prim);
        break;
      case 4:
        SelectLight(pProcUnit);
        SetLightData(lcp + pProcUnit->procInfo * 0xe0, 0);
    }

    nextPH = pProcUnit->pNext;
    pProcUnit = nextPH;
  }
}

void SgPreRender(SGDFILEHEADER *pTop, int procUnitIndex)
{
  Set12Register();

  blocksm = pTop->uiNumBlock;
  lcp = pTop->pCoord;
  write_counter = 0;

  SetMaterialPointer();
  SetMaterialPointerCoord();

  if (procUnitIndex < 0 && 1 < pTop->uiNumBlock)
  {
    for (int i = 1; i < pTop->uiNumBlock; i++)
    {
      SgPreRenderPrim(pTop->pProcUnit[i]);
    }
  }
  else if (procUnitIndex > 0 && procUnitIndex != 0)
  {
    SgPreRenderPrim(pTop->pProcUnit[procUnitIndex]);
  }
}

void SetMaterialPointerCoord()
{
  SgLightCoordp = &MaterialCoord;
}

void SetMaterialPointer()
{
  SgLightParallelp = &DAT_70000300;
  SgLightSpotp = &DAT_70000370;
  SgLightPointp = &DAT_700003f0;
}

void Set12Register()
{
  // TODO : Implement Set12Register
  return;
}
