#include "gphase.h"
#include "logging/printing.h"

void InitGPhaseSys()
{
  for (int i = 0; i < gphase_sys_num; i++)
  {
    gphase_sys[i] = (GPHASE_STRUCT *) 0xffffffff;
  }

  SetNextGPhase(SUPER);
}

void SetNextGPhase(GPHASE_ID gphaseId)
{
  printNotImplemented("SetNextGPhase", "gphase.cpp");
}