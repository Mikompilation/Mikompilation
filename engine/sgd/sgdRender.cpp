#include "sgdRender.h"
#include "sgdGlobals.h"
#include "../../common/flags.h"
#include "../../common/logging/printing.h"

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

  SGDPROCUNITHEADER *pSVar2 = pProcUnit->pNext;
  SGDPROCUNITHEADER *pSVar1;
  Matrix4x4 *iVar2;

      while (pSVar2 != (SGDPROCUNITHEADER *) 0x0)
  {
    switch (pProcUnit->iCategory)
    {
      case 0:
        vuvnprim = pProcUnit;
        break;
      case 1:
        nextprim = pSVar2;
        SetPreRenderMeshData(pProcUnit);
        pSVar2 = pProcUnit->pNext;
        break;
      case 2:
        SetMaterialData(pProcUnit);
        SetMaterialDataPrerender();

        if (!dbg_flg){
          break;
        }

        printf("PNum %d(%d) SNum %d(%d)\n", SgPointGroupNum, SgPointNum, SgSpotGroupNum, SgSpotNum);
        printVectorC(&SgLightCoordp->pos0, "pos0");
        printVectorC(&SgLightCoordp->pos1, "pos1");
        printVectorC(&SgLightCoordp->pos2, "pos2");
        printVectorC(&SgLightCoordp->intens, "intens");
        printVectorC(&SgLightCoordp->intens_b, "intens_b");
        printLMatC(&SgLightCoordp->WDLightMtx);
        printLMatC(&SgLightCoordp->v1);
        //printVectorC((Vector4 *) (SgLightSpotp + 0x10), "btimes");
        //printLMatC((Vector4 *) (SgLightSpotp + 0x20));
        //printLMatC((Vector4 *) (SgLightSpotp + 0x50));
        pSVar2 = pProcUnit->pNext;
        break;
      case 3:
        iVar2 = (Matrix4x4 *) (pProcUnit->procInfo * 0xe0 + lcp);
        Matrix4x4_70000430.Matrix[0].x = iVar2[1].Matrix[0].x;
        Matrix4x4_70000430.Matrix[0].y = iVar2[1].Matrix[0].y;
        Matrix4x4_70000430.Matrix[0].z = iVar2[1].Matrix[0].z;
        Matrix4x4_70000430.Matrix[0].w = iVar2[1].Matrix[0].w;
        Matrix4x4_70000430.Matrix[1].x = iVar2[1].Matrix[1].x;
        Matrix4x4_70000430.Matrix[1].y = iVar2[1].Matrix[1].y;
        Matrix4x4_70000430.Matrix[1].z = iVar2[1].Matrix[1].z;
        Matrix4x4_70000430.Matrix[1].w = iVar2[1].Matrix[1].w;
        Matrix4x4_70000430.Matrix[2].x = iVar2[1].Matrix[2].x;
        Matrix4x4_70000430.Matrix[2].y = iVar2[1].Matrix[2].y;
        Matrix4x4_70000430.Matrix[2].z = iVar2[1].Matrix[2].z;
        Matrix4x4_70000430.Matrix[2].w = iVar2[1].Matrix[2].w;
        Matrix4x4_70000430.Matrix[3].x = iVar2[1].Matrix[3].x;
        Matrix4x4_70000430.Matrix[3].y = iVar2[1].Matrix[3].y;
        Matrix4x4_70000430.Matrix[3].z = iVar2[1].Matrix[3].z;
        Matrix4x4_70000430.Matrix[3].w = iVar2[1].Matrix[3].w;
        //_MulMatrix(&Matrix4x4_70000090, &SgWSMtx, &Matrix4x4_70000430);
        pSVar2 = pProcUnit->pNext;
        break;
      case 4:
        SelectLight(pProcUnit);
        SetLightData(lcp + pProcUnit->procInfo * 0xe0, 0);
    }

    pSVar2 = pProcUnit->pNext;
    pProcUnit = pSVar2;
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

  if (procUnitIndex < 0)
  {
    if (1 < pTop->uiNumBlock)
    {
      for (int i = 1; i < pTop->uiNumBlock; i++)
      {
        SgPreRenderPrim(pTop->pProcUnit[i]);
      }
    }
  }
  else if (procUnitIndex != 0)
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
