#include "gphase.h"

#include "main.h"
#include <assert.h>

const GPHASE_DAT gphase_tbl[gphase_num] = {
    {0,       GPHASE_ID_NONE,           GID_BOOT_INIT, 14},
    {1,            GID_SUPER,          GPHASE_ID_NONE,  0},
    {1,            GID_SUPER,          GPHASE_ID_NONE,  0},
    {1,            GID_SUPER,          GPHASE_ID_NONE,  0},
    {1,            GID_SUPER,          GPHASE_ID_NONE,  0},
    {1,            GID_SUPER,          GPHASE_ID_NONE,  0},
    {1,            GID_SUPER,          GPHASE_ID_NONE,  0},
    {1,            GID_SUPER,          GID_TECMO_MODE,  4},
    {1,            GID_SUPER,    GID_STORY_NOWLOADING, 24},
    {1,            GID_SUPER,   GID_GAMEOVER_MENU_TOP,  3},
    {1,            GID_SUPER,      GID_ENDING_NORMAL1,  3},
    {1,            GID_SUPER,      GID_GAMERESULT_TOP,  1},
    {1,            GID_SUPER,       GID_CLEARMENU_TOP,  3},
    {1,            GID_SUPER,          GPHASE_ID_NONE,  0},
    {1,            GID_SUPER,          GPHASE_ID_NONE,  0},
    {2,     GID_OUTGAME_MAIN,          GPHASE_ID_NONE,  0},
    {2,     GID_OUTGAME_MAIN,          GPHASE_ID_NONE,  0},
    {2,     GID_OUTGAME_MAIN,           GID_TITLE_TOP, 11},
    {2,     GID_OUTGAME_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,  GID_STORY_LOAD_MISSION,  3},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,  GID_STORY_GAMEOVER_EFF,  3},
    {2,       GID_STORY_MAIN, GID_STORY_SCENE_PRELOAD,  2},
    {2,       GID_STORY_MAIN, GID_STORY_MOVIE_PRELOAD,  2},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,       GID_STORY_MAIN,       GID_PUZZLE_INCONF,  8},
    {2,       GID_STORY_MAIN,    GID_SAVEPOINT_FADEIN,  3},
    {2,       GID_STORY_MAIN,          GPHASE_ID_NONE,  0},
    {2,    GID_GAMEOVER_MENU,          GPHASE_ID_NONE,  0},
    {2,    GID_GAMEOVER_MENU,          GPHASE_ID_NONE,  0},
    {2,    GID_GAMEOVER_MENU,          GPHASE_ID_NONE,  0},
    {2,     GID_ENDING_MOVIE,          GPHASE_ID_NONE,  0},
    {2,     GID_ENDING_MOVIE,          GPHASE_ID_NONE,  0},
    {2,     GID_ENDING_MOVIE,          GPHASE_ID_NONE,  0},
    {2,       GID_GAMERESULT,          GPHASE_ID_NONE,  0},
    {2,        GID_CLEARMENU,          GPHASE_ID_NONE,  0},
    {2,        GID_CLEARMENU,          GPHASE_ID_NONE,  0},
    {2,        GID_CLEARMENU,          GPHASE_ID_NONE,  0},
    {3,       GID_TITLE_MODE,          GPHASE_ID_NONE,  0},
    {3,       GID_TITLE_MODE,          GPHASE_ID_NONE,  0},
    {3,       GID_TITLE_MODE,          GPHASE_ID_NONE,  0},
    {3,       GID_TITLE_MODE,          GPHASE_ID_NONE,  0},
    {3,       GID_TITLE_MODE,     GID_TITLE_SETUPMENU,  2},
    {3,       GID_TITLE_MODE,          GPHASE_ID_NONE,  0},
    {3,       GID_TITLE_MODE,          GPHASE_ID_NONE,  0},
    {3,       GID_TITLE_MODE,          GPHASE_ID_NONE,  0},
    {3,       GID_TITLE_MODE,          GPHASE_ID_NONE,  0},
    {3,       GID_TITLE_MODE,          GPHASE_ID_NONE,  0},
    {3,       GID_TITLE_MODE,          GPHASE_ID_NONE,  0},
    {3, GID_STORY_NOWLOADING,          GPHASE_ID_NONE,  0},
    {3, GID_STORY_NOWLOADING,          GPHASE_ID_NONE,  0},
    {3, GID_STORY_NOWLOADING,          GPHASE_ID_NONE,  0},
    {3,  GID_STORY_GAME_OVER,          GPHASE_ID_NONE,  0},
    {3,  GID_STORY_GAME_OVER,          GPHASE_ID_NONE,  0},
    {3,  GID_STORY_GAME_OVER,          GPHASE_ID_NONE,  0},
    {3,      GID_STORY_SCENE,          GPHASE_ID_NONE,  0},
    {3,      GID_STORY_SCENE,          GPHASE_ID_NONE,  0},
    {3,      GID_STORY_MOVIE,          GPHASE_ID_NONE,  0},
    {3,      GID_STORY_MOVIE,          GPHASE_ID_NONE,  0},
    {3,     GID_STORY_PUZZLE,          GPHASE_ID_NONE,  0},
    {3,     GID_STORY_PUZZLE,          GPHASE_ID_NONE,  0},
    {3,     GID_STORY_PUZZLE,          GPHASE_ID_NONE,  0},
    {3,     GID_STORY_PUZZLE,          GPHASE_ID_NONE,  0},
    {3,     GID_STORY_PUZZLE,          GPHASE_ID_NONE,  0},
    {3,     GID_STORY_PUZZLE,          GPHASE_ID_NONE,  0},
    {3,     GID_STORY_PUZZLE,          GPHASE_ID_NONE,  0},
    {3,     GID_STORY_PUZZLE,          GPHASE_ID_NONE,  0},
    {3,  GID_STORY_SAVEPOINT,          GPHASE_ID_NONE,  0},
    {3,  GID_STORY_SAVEPOINT,       GID_SAVEPOINT_TOP,  3},
    {3,  GID_STORY_SAVEPOINT,          GPHASE_ID_NONE,  0},
    {4,      GID_TITLE_SETUP,          GPHASE_ID_NONE,  0},
    {4,      GID_TITLE_SETUP,         GID_MISSION_SEL,  4},
    {4,   GID_SAVEPOINT_MAIN,          GPHASE_ID_NONE,  0},
    {4,   GID_SAVEPOINT_MAIN,          GPHASE_ID_NONE,  0},
    {4,   GID_SAVEPOINT_MAIN,          GPHASE_ID_NONE,  0},
    {5,    GID_TITLE_MISSION,          GPHASE_ID_NONE,  0},
    {5,    GID_TITLE_MISSION,          GPHASE_ID_NONE,  0},
    {5,    GID_TITLE_MISSION,          GPHASE_ID_NONE,  0},
    {5,    GID_TITLE_MISSION,          GPHASE_ID_NONE,  0}
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