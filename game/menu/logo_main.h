#pragma once

#include "texture/Sprite.h"
#include "texture/tim2.h"


inline SPRT_DAT logodat[3] = {
    /// Sprite for TECMO logo
    {
        0x20058805E1312BC0,
        0x1,
        0x1,
        0xE2,
        0x2D,
        0xC5,
        0x0,
        0xC9,
        0x0,
        0x0,
        0x80,
        0x0,
        {0x0, 0x0}
    },
    /// Sprite for ZERO logo
    {
        0x2005980621312BC0,
        0x1,
        0x1,
        0xC3,
        0x8A,
        0xE5,
        0x0,
        0x97,
        0x0,
        0x0,
        0x80,
        0x0,
        {0x0, 0x0}
    },
    /// Sprite for PRESENTS in ZERO logo
    {
        0x2005980621312BC0,
        0x1,
        0x8D,
        0x67,
        0x11,
        0x118,
        0x0,
        0x176,
        0x0,
        0x0,
        0x80,
        0x0,
        {0x0, 0x0}
    }
};

inline TIM2_FILEHEADER *loading_tex_addr;

void InitLogo();
void LoadingInit();
void RenderLogo(bool isProjectLogo);
