#pragma once

#include "game_main.h"

/// Header file for joining all game functions
/// found in the funcs array

inline const int gphase_num = 88;

inline void (*ini_func[gphase_num])() =
    {
        init_super,
        init_Boot_Init
};

inline void (*end_func[gphase_num])() =
    {
        end_super,
        end_Boot_Init
};

inline GPHASE_ID (*pre_func[gphase_num])(GPHASE_ID) =
    {
        pre_super,
        nullptr
};

inline GPHASE_ID (*after_func[gphase_num])(GPHASE_ID) =
    {
        after_super,
        one_Boot_Init
};
