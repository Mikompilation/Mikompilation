# Summary

The gaame uses a `GPhaseSystem` to split the logic into game sections. It is located under the [gphase.cpp](https://github.com/wagrenier/Mikompilation/blob/main/zero_rom/zero2np/src/main/gphase.cpp) file. Please take not that all the following information is pulled from the EU version. The EU version has a few more states than the US/JP versions:

1. A language selection upon first boot
2. A screen refresh rate selector
3. A boot video of Ubisoft's logo

## Basic Components
### Game Phases

In Fatal Frame 2, a `Game Phase (GPhase)` represents the current action (phase) the game is currently performing. Each phase serves to handle a particular part of the game such as loading the game, menu traversal, selecting a lanaguage, and so on... A `GPhase` is represented by a `GPHASE_ID_ENUM`, an enum that contains all possible game phases (see list below). Those phases also have handler functions that will contain all code to perform the action!

<details>
<summary>List Of GPhases</summary>

```cpp
/// Game Phases (GPHASE) of the game.
/// Used to layout the game logic and group functions goals.
enum GPHASE_ID_ENUM : int
{
  GID_SUPER                     = 0,
  GID_BOOT_INIT                 = 1,
  GID_BOOT_PADCHECK             = 2, /// EU ONLY
  GID_LANGDATA_CHECK            = 3, /// EU ONLY
  GID_LANGSEL_MAIN              = 4, /// EU ONLY
  GID_AUTOLOAD_MAIN             = 5,
  GID_UBI_MODE                  = 6, /// EU ONLY
  GID_OUTGAME_MAIN              = 7,
  GID_STORY_MAIN                = 8,
  GID_GAMEOVER_MENU             = 9,
  GID_ENDING_MOVIE              = 10,
  GID_GAMERESULT                = 11,
  GID_CLEARMENU                 = 12,
  GID_SOFTRESETMAIN             = 13,
  GID_DEBUG_MENU                = 14,
  GID_TECMO_MODE                = 15,
  GID_PROJECT_MODE              = 16,
  GID_TITLE_MODE                = 17,
  GID_TITLE_MOVIE_MODE          = 18,
  GID_STORY_NOWLOADING          = 19,
  GID_STORY_NORMAL              = 20,
  GID_STORY_DAMAGE              = 21,
  GID_STORY_DOOR_OPEN           = 22,
  GID_STORY_DEBUG               = 23,
  GID_STORY_DEBUG_CAM           = 24,
  GID_STORY_PAUSE               = 25,
  GID_STORY_PAUSE_MISSION       = 26,
  GID_STORY_MENU                = 27,
  GID_STORY_MAP                 = 28,
  GID_STORY_MISSION_ST          = 29,
  GID_STORY_MISSION_RESULT      = 30,
  GID_STORY_GAME_OVER_PRE       = 31,
  GID_STORY_GAME_OVER           = 32,
  GID_STORY_SCENE               = 33,
  GID_STORY_MOVIE               = 34,
  GID_STORY_EFFECT              = 35,
  GID_EVENTMSG_DISP             = 36,
  GID_EVENTFILE_DISP            = 37,
  GID_STORY_PHOTO               = 38,
  GID_STORY_ENE_DEAD            = 39,
  GID_STORY_PUZZLE              = 40,
  GID_STORY_SAVEPOINT           = 41,
  GID_STORY_MOVIE_ROOM_SEL      = 42,
  GID_GAMEOVER_MENU_TOP         = 43,
  GID_GAMEOVER_MENU_LOAD        = 44,
  GID_GAMEOVER_MENU_ALBUM       = 45,
  GID_ENDING_NORMAL1            = 46,
  GID_ENDING_NORMAL2            = 47,
  GID_ENDING_HARD               = 48,
  GID_GAMERESULT_TOP            = 49,
  GID_CLEARMENU_TOP             = 50,
  GID_CLEARMENU_SAVE            = 51,
  GID_CLEARMENU_ALBUM           = 52,
  GID_TITLE_TOP                 = 53,
  GID_TITLE_MENU                = 54,
  GID_TITLE_NEWGAME             = 55,
  GID_TITLE_LOADGAME            = 56,
  GID_TITLE_SETUP               = 57,
  GID_TITLE_ALBUM               = 58,
  GID_TITLE_GALLERY             = 59,
  GID_TITLE_OPTION              = 60,
  GID_TITLE_FRAMERATE_SEL       = 61, /// EU ONLY
  GID_TITLE_CHAPTER_SEL         = 62,
  GID_TITLE_MOVE_MOVIE          = 63, /// EU ONLY
  GID_STORY_LOAD_MISSION        = 64,
  GID_STORY_LOAD_MISSION_EVENT  = 65,
  GID_STORY_LOAD_MISSION_SAVE   = 66,
  GID_STORY_GAMEOVER_EFF        = 67,
  GID_STORY_GAMEOVER_FADE       = 68,
  GID_STORY_GAMEOVER_MOVIE      = 69,
  GID_STORY_SCENE_PRELOAD       = 70,
  GID_STORY_SCENE_MAIN          = 71,
  GID_STORY_MOVIE_PRELOAD       = 72,
  GID_STORY_MOVIE_MAIN          = 73,
  GID_PUZZLE_INCONF             = 74,
  GID_PUZZLE_CROSSFADE          = 75,
  GID_PUZZLE_HINA               = 76,
  GID_PUZZLE_ROKU               = 77,
  GID_PUZZLE_KAZA               = 78,
  GID_PUZZLE_KAZA2              = 79,
  GID_PUZZLE_KAI1               = 80,
  GID_PUZZLE_KAI2               = 81,
  GID_SAVEPOINT_FADEIN          = 82,
  GID_SAVEPOINT_MAIN            = 83,
  GID_SAVEPOINT_FADEOUT         = 84,
  GID_TITLE_SETUPMENU           = 85,
  GID_TITLE_MISSION             = 86,
  GID_SAVEPOINT_TOP             = 87,
  GID_SAVEPOINT_SAVE            = 88,
  GID_SAVEPOINT_ALBUM           = 89,
  GID_MISSION_SEL               = 90,
  GID_MISSION_CAM               = 91,
  GID_MISSION_ALBUM             = 92,
  GID_MISSION_SAVE              = 93,
  GPHASE_ID_NONE                = -1
};
```
</details>

### Layers

In Fatal Frame 2, a layer (`GPHASE_LAYER`) represents the game's current phase in a category. Those layers regroup a collection of `GPHASE_ID_ENUM` (see Game Phases) that are related to a common section of the game. For example, some phases are related to the initialization of the game which are under the layer `GAME_INIT`. Take note that the game does not use any enum definitions for those but simply `int`. As such, I extracted this information based on my knowledge of the game. This might change later as I get a better understanding of the code.

<details>
<summary>The 6 Layers</summary>

```cpp
/// Regroups game logic into game modes or utilities.
enum GPHASE_LAYER : int
{
  /// GPHASE: 0
  SYSTEM_INIT,

  /// GPHASE: 1 - 10
  GAME_INIT,

  /// GPHASE: 11 - 48
  STORY,

  /// GPHASE: 49 - 78
  TITLE,

  /// GPHASE: 79 - 83
  SAVE,

  /// GPHASE: 84 - 88
  MISSION
};
```
</details>

### States
A GPhase state (or `GPHASE_ENUM`) indicates the state of the game for the current frame and is usually the value returned by GPhase state handling functions (see the following section).

<details>
<summary>List Of GPhase Status</summary>

```cpp
enum GPHASE_ENUM : int
{
  GPHASE_CONTINUE   = 0,
  GPHASE_END        = 1,
  GPHASE_NOFRAME    = 2
};
```
</details>

### Handler Functions

Each `GPHASE` has 4 handler methods: `ini_func`, `pre_func`, `after_func` and `end_func`. The order of execution goes as follows:

1. `ini` -> handles initialization of variables/memory allocation
2. `pre` -> handles logic before calling son
3. If this phase has a son -> go to step 1 for son; Otherwise continue to next step
4. `after` -> handles logic after calling son
5. `end` -> handles freeing allocated memory and resetting values

`ini_func` and `pre_func` have no arguments while `after_func` and `end_func` take a `GPHASE_ID` as an argument and return a value of `GPHASE_ENUM`. Only the `pre` handler can have a `nullptr` as a method. However, since this repo will not have all reversed code at the same time additionnal checks for `nullptr` have been added to other handler calls.

When implementing a new `GPHASE`, make sure to add your functions to the array of the appropriate `xx_func` and *ABSOLUTELY* make sure that the function's position/index in the array is the *same* as the `GPHASE_ID`.

<details>
<summary>Sample Of Ini, End, Pre, And After Functions</summary>

```cpp
void (*ini_func[gphase_num])() =
    {
        init_super,
        init_Boot_Init,
        (...)
};

void (*end_func[gphase_num])() =
    {
        end_super,
        end_Boot_Init,
        (...)
};

GPHASE_ENUM (*pre_func[gphase_num])(GPHASE_ID) =
    {
        pre_super,
        nullptr,
        (...)
};

GPHASE_ENUM (*after_func[gphase_num])(GPHASE_ID) =
    {
        after_super,
        one_Boot_Init,
        (...)
};

// Implementation of the methods defined above

void init_super()
{
  InitLogging();
  InitCostume();
  soft_reset_disable = 0;
  InitSystemON();
  playPssInit();
  InitLogo();
  LoadingInit();
  TitleInit();
  InitOptionSetup(&opt_wrk);
}

void end_super()
{
  return;
}

GPHASE_ENUM after_super(GPHASE_ENUM result)
{
  EachDebugMain();
  ee_iopMain();
  SendDMAMain();
  return (GPHASE_ENUM)(CheckSoftReset() != 0);
}

GPHASE_ENUM pre_super(GPHASE_ENUM super)
{
  // Do stuff...
  return GPHASE_CONTINUE;
}
```
</details>

Take note that the `SUPER GPHASE (GID_SUPER)` is at **position 0/ is the first element** just like its enum.

## Structured GPhase Data

### Structure Definitions
#### GPHASE_DAT
<details>
<summary>Definition Of GPHASE_DAT</summary>

```cpp
struct GPHASE_DAT
{
  int layer;
  int superID;
  int son_ID;
  int son_num;
};
```
</details>

#### GPHASE_SYS
<details>
<summary>Definition Of GPHASE_SYS</summary>

```cpp
struct GPHASE_SYS
{
  GPHASE_ID_ENUM now[gphase_sys_num];
  GPHASE_ID_ENUM next[gphase_sys_num];
  int ini_flg[gphase_sys_num];
};
```
</details>

<details>
<summary>Full List Of GPHASE_SYS</summary>

```cpp
const GPHASE_DAT gphase_tbl[gphase_num] = {
/// Layers,     Supuper ID  ,           Son ID       , Son Num
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
```
</details>