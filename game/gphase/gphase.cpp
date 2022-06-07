#include "gphase.h"
#include "gphase_data.h"
#include <stdio.h>

void InitGPhaseSys()
{
  for (int i = 0; i < gphase_sys_num; i++)
  {
    gphase_sys[i] = DEFAULT;
  }

  SetNextGPhase(SUPER);
}

void SetNextGPhase(GPHASE_ID gphaseId)
{
  GPHASE_INFO nextGPhase = gphase_tbl[gphaseId];

  GPHASE_LAYER nextGPhaseLayer = nextGPhase.layer;

  next_gphase[nextGPhaseLayer] = gphaseId;

  if (nextGPhaseLayer < gphase_sys_num)
  {
    int layer_current_gphase_index = nextGPhaseLayer + 1;

    for (int i = nextGPhaseLayer; i < gphase_sys_num; i++)
    {
      if (nextGPhase.afterFuncArgument == 0)
      {
        for (int k = i; k < MISSION && i < MISSION; k++)
        {
          next_gphase[k + 1] = DEFAULT;
        }

        break;
      }

      next_gphase[layer_current_gphase_index] = nextGPhase.preFuncArgument;

      layer_current_gphase_index += 1;

      nextGPhase = gphase_tbl[nextGPhase.preFuncArgument];
    }
  }

  GPHASE_ID nextNextGPhaseId = nextGPhase.nextGPhase;

  if ((SYSTEM_INIT == nextGPhaseLayer) || DEFAULT == nextNextGPhaseId)
  {
    return;
  }

  gphase_sys[nextGPhaseLayer + 5] = nextNextGPhaseId;

  int index = nextGPhaseLayer + MISSION;

  int k = nextGPhaseLayer;

  while (true)
  {
    k += 1;
    index -= 1;

    if (k < GAME_INIT || (nextNextGPhaseId = gphase_tbl[nextNextGPhaseId].nextGPhase, nextNextGPhaseId < 0))
    {
      break;
    }

    gphase_sys[index] = nextNextGPhaseId;
  }
}

void GPhaseSysMain()
{
  SetInitFlag();

  for (int i = 0; i < gphase_sys_num; i++)
  {
    gphase_sys[i] = next_gphase[i];
  }

  DoJobPhase(SYSTEM_INIT);

  for (int i = 0; i < gphase_sys_num; i++)
  {
    if (gphase_sys[i] != DEFAULT && gphase_sys[i] != next_gphase[i])
    {
      (*end_func[gphase_sys[i]])();
    }
  }
}

void SetInitFlag()
{
  for (int i = 0; i < gphase_sys_num; i++)
  {
    gphase_flags[i] = gphase_sys[i] != next_gphase[i];
  }
}

GPHASE_ID DoJobPhase(int layer_num)
{
  if (layer_num >= gphase_sys_num)
  {
    printf("layer_num over %d\n", 6);

    do
    {

    } while (true);
  }

  if (gphase_flags[layer_num] != 0 && ini_func[gphase_sys[layer_num]] != nullptr)
  {
    (*ini_func[gphase_sys[layer_num]])();
  }

  GPHASE_ID gPhaseId = gphase_sys[layer_num];

  if (pre_func[gPhaseId] != nullptr)
  {
    (*pre_func[gPhaseId])(SUPER);
    gPhaseId = gphase_sys[layer_num];
  }

  GPHASE_ID afterFuncArgument = SUPER;

  if (gphase_tbl[gPhaseId].afterFuncArgument != 0)
  {
    afterFuncArgument = DoJobPhase(layer_num + 1);
    gPhaseId = gphase_sys[layer_num];
  }

  if(after_func[gphase_sys[layer_num]] != nullptr)
  {
    return (*after_func[gPhaseId])(afterFuncArgument);
  }

  return SUPER;
}