#pragma once

#include "../mc/autoload.h"
#include "../game_main.h"

/// Header file for joining all game functions
/// found in the funcs array

inline const int gphase_num = 94;

inline void (*ini_func[gphase_num])() =
    {
        init_super,
        init_Boot_Init,
        // init_Boot_PadCheck,
        // init_LangData_Check,
        // init_LangSel_Main,
        init_AutoLoad_Main
};

inline void (*end_func[gphase_num])() =
    {
        end_super,
        end_Boot_Init,
        // end_Boot_PadCheck,
        // end_LangData_Check,
        // end_LangSel_Main,
        end_AutoLoad_Main
};

inline GPHASE_ID (*pre_func[gphase_num])(GPHASE_ID) =
    {
        pre_super,
        nullptr,
        nullptr,
        nullptr,
        nullptr,
        nullptr
};

inline GPHASE_ID (*after_func[gphase_num])(GPHASE_ID) =
    {
        after_super,
        one_Boot_Init,
        // one_Boot_PadCheck,
        // one_LangData_Check,
        // one_LangSel_Main
        one_AutoLoad_Main
};
