#pragma once
#include "math/VectorMath.h"

struct GRA3DSCRATCHPADLAYOUT
{
    Vector4 transInput;
};

struct GRA3DSCRATCHPADLAYOUT_MAPSHADOW
{
};

static GRA3DSCRATCHPADLAYOUT *stackPointerScratchPadLayout;

static bool UseScratchpad;