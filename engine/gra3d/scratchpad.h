#pragma once
#include "math/VectorMath.h"

struct GRA3DSCRATCHPADLAYOUT
{
    Vector4 transInput;
};

struct GRA3DSCRATCHPADLAYOUT_MAPSHADOW
{
};

GRA3DSCRATCHPADLAYOUT *stackPointerScratchPadLayout;

static bool UseScratchpad;