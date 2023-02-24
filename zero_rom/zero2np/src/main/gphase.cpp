#include "gphase.h"

#include "main.h"
#include <assert.h>

const GPHASE_DAT gphase_tbl[gphase_num] = {
    {0, -1,  1, 14},
    {1,  0, -1,  0},
    {1,  0, -1,  0},
    {1,  0, -1,  0},
    {1,  0, -1,  0},
    {1,  0, -1,  0},
    {1,  0, -1,  0},
    {1,  0, 15,  4},
    {1,  0, 19, 24},
    {1,  0, 43,  3},
    {1,  0, 46,  3},
    {1,  0, 49,  1},
    {1,  0, 50,  3},
    {1,  0, -1,  0},
    {1,  0, -1,  0},
    {2,  7, -1,  0},
    {2,  7, -1,  0},
    {2,  7, 53, 11},
    {2,  7, -1,  0},
    {2,  8, 64,  3},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, 67,  3},
    {2,  8, 70,  2},
    {2,  8, 72,  2},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, -1,  0},
    {2,  8, 74,  8},
    {2,  8, 82,  3},
    {2,  8, -1,  0},
    {2,  9, -1,  0},
    {2,  9, -1,  0},
    {2,  9, -1,  0},
    {2, 10, -1,  0},
    {2, 10, -1,  0},
    {2, 10, -1,  0},
    {2, 11, -1,  0},
    {2, 12, -1,  0},
    {2, 12, -1,  0},
    {2, 12, -1,  0},
    {3, 17, -1,  0},
    {3, 17, -1,  0},
    {3, 17, -1,  0},
    {3, 17, -1,  0},
    {3, 17, 85,  2},
    {3, 17, -1,  0},
    {3, 17, -1,  0},
    {3, 17, -1,  0},
    {3, 17, -1,  0},
    {3, 17, -1,  0},
    {3, 17, -1,  0},
    {3, 19, -1,  0},
    {3, 19, -1,  0},
    {3, 19, -1,  0},
    {3, 32, -1,  0},
    {3, 32, -1,  0},
    {3, 32, -1,  0},
    {3, 33, -1,  0},
    {3, 33, -1,  0},
    {3, 34, -1,  0},
    {3, 34, -1,  0},
    {3, 40, -1,  0},
    {3, 40, -1,  0},
    {3, 40, -1,  0},
    {3, 40, -1,  0},
    {3, 40, -1,  0},
    {3, 40, -1,  0},
    {3, 40, -1,  0},
    {3, 40, -1,  0},
    {3, 41, -1,  0},
    {3, 41, 87,  3},
    {3, 41, -1,  0},
    {4, 57, -1,  0},
    {4, 57, 90,  4},
    {4, 83, -1,  0},
    {4, 83, -1,  0},
    {4, 83, -1,  0},
    {5, 86, -1,  0},
    {5, 86, -1,  0},
    {5, 86, -1,  0},
    {5, 86, -1,  0}
};

void (*ini_func[gphase_num])() = {
    init_super,
    // init_Boot_Init,
    // init_Boot_PadCheck,
    // init_LangData_Check,
    // init_LangSel_Main,
    // init_AutoLoad_Main
};

void (*end_func[gphase_num])() = {
    end_super,
    // end_Boot_Init,
    // end_Boot_PadCheck,
    // end_LangData_Check,
    // end_LangSel_Main,
    // end_AutoLoad_Main
};

GPHASE_ENUM(*pre_func[gphase_num])
(GPHASE_ENUM) = {pre_super, nullptr, nullptr, nullptr, nullptr, nullptr};

GPHASE_ENUM(*after_func[gphase_num])
(GPHASE_ENUM) = {
    after_super,
    // one_Boot_Init,
    // one_Boot_PadCheck,
    // one_LangData_Check,
    // one_LangSel_Main
    // one_AutoLoad_Main
};

void InitGPhaseSys()
{
  for (auto i = 0; i < gphase_sys_num; i++)
  {
    gphase_sys.now[i] = GPHASE_ID_NONE;
  }

  SetNextGPhase(GID_SUPER);
}

void SetInitFlag()
{
  for (auto i = 0; i < gphase_sys_num; i++)
  {
    gphase_sys.ini_flg[i] = gphase_sys.now[i] != gphase_sys.next[i];
  }
}

GPHASE_ENUM DoJobPhase(int layer)
{
  GPHASE_ENUM result;

  assert(layer < gphase_sys_num && "layer_num over 6\n");

  if (gphase_sys.ini_flg[layer] == 0
      && ini_func[gphase_sys.now[layer]] != nullptr)
  {
    (*ini_func[gphase_sys.now[layer]])();
  }

  if (pre_func[gphase_sys.now[layer]] != nullptr)
  {
    (*pre_func[gphase_sys.now[layer]])(GPHASE_CONTINUE);
  }

  if (gphase_tbl[gphase_sys.now[layer]].son_num != 0)
  {
    result = DoJobPhase(layer + 1);
  }

  if (after_func[gphase_sys.now[layer]] != nullptr)
  {
    return (*after_func[gphase_sys.now[layer]])(result);
  }

  return GPHASE_CONTINUE;
}

void GPhaseSysMain()
{
  SetInitFlag();

  for (auto i = 0; i < gphase_sys_num; i++)
  {
    gphase_sys.now[i] = gphase_sys.next[i];
  }

  DoJobPhase(GID_SUPER);

  for (auto i = 0; i < gphase_sys_num; i++)
  {
    if (gphase_sys.now[i] != GPHASE_ID_NONE
        && gphase_sys.now[i] != gphase_sys.next[i])
    {
      (*end_func[gphase_sys.now[i]])();
    }
  }
}

void SetNextGPhase(GPHASE_ID_ENUM id)
{
  const GPHASE_DAT *gp = &gphase_tbl[id];
  auto layer = gp->layer;
  gphase_sys.next[layer] = id;

  for (auto i = layer; i < gphase_sys_num; i++)
  {
    if (gp->son_num == 0)
    {
      for (; i < 5; i++)
      {
        gphase_sys.next[i + 1] = GPHASE_ID_NONE;
      }

      break;
    }

    gphase_sys.next[i + 1] = (GPHASE_ID_ENUM) gp->son_ID;
    gp = &gphase_tbl[gp->son_ID];
  }

  if (0 >= layer || gphase_tbl[id].superID < 0)
  {
    return;
  }

  gphase_sys.now[layer + 5] = (GPHASE_ID_ENUM) gphase_tbl[id].superID;

  layer -= 1;

  for (auto i = gphase_tbl[id].superID; i > 0 && layer > 0; layer--)
  {
    i = gphase_tbl[i].superID;
    gphase_sys.now[layer + 5] = (GPHASE_ID_ENUM) i;
  }
}