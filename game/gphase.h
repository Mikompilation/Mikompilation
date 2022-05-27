#pragma once

#include "gphaseTypes.h"

inline const int gphase_sys_num = 6;
inline GPHASE_ID gphase_sys[gphase_sys_num];
inline int gphase_flags[gphase_sys_num];

inline GPHASE_ID next_gphase[gphase_sys_num];

inline const GPHASE_INFO gphase_tbl[94] =
    {
        {
            (GPHASE_LAYER) 0,
            (GPHASE_ID) -1,
            (GPHASE_ID) 1,
            (GPHASE_ID) 14
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) 15,
            (GPHASE_ID) 4
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) 19,
            (GPHASE_ID) 24
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) 43,
            (GPHASE_ID) 3
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) 46,
            (GPHASE_ID) 3
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) 49,
            (GPHASE_ID) 1
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) 50,
            (GPHASE_ID) 3
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 1,
            (GPHASE_ID) 0,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 7,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 7,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 7,
            (GPHASE_ID) 53,
            (GPHASE_ID) 11
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 7,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) 64,
            (GPHASE_ID) 3
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) 67,
            (GPHASE_ID) 3
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) 70,
            (GPHASE_ID) 2
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) 72,
            (GPHASE_ID) 2
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) 74,
            (GPHASE_ID) 8
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) 82,
            (GPHASE_ID) 3
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 8,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 9,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 9,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 9,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 10,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 10,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 10,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 11,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 12,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 12,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 2,
            (GPHASE_ID) 12,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 17,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 17,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 17,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 17,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 17,
            (GPHASE_ID) 85,
            (GPHASE_ID) 2
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 17,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 17,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 17,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 17,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 17,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 17,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 19,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 19,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 19,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 32,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 32,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 32,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 33,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 33,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 34,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 34,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 40,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 40,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 40,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 40,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 40,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 40,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 40,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 40,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 41,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 41,
            (GPHASE_ID) 87,
            (GPHASE_ID) 3
        },
        {
            (GPHASE_LAYER) 3,
            (GPHASE_ID) 41,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 4,
            (GPHASE_ID) 57,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 4,
            (GPHASE_ID) 57,
            (GPHASE_ID) 90,
            (GPHASE_ID) 4
        },
        {
            (GPHASE_LAYER) 4,
            (GPHASE_ID) 83,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 4,
            (GPHASE_ID) 83,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 4,
            (GPHASE_ID) 83,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 5,
            (GPHASE_ID) 86,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 5,
            (GPHASE_ID) 86,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 5,
            (GPHASE_ID) 86,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        },
        {
            (GPHASE_LAYER) 5,
            (GPHASE_ID) 86,
            (GPHASE_ID) -1,
            (GPHASE_ID) 0
        }
};

void InitGPhaseSys();
void SetNextGPhase(GPHASE_ID gphaseId);
void GPhaseSysMain();
void SetInitFlag();
GPHASE_ID DoJobPhase(int layer_num);