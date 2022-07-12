#pragma once
#include <stdint.h>
#include "scratchpad.h"
#include "math/VectorMath.h"
#include "g3d/g3dCore.h"

struct GRA3DSGDCREATIONDATA
{

};

static GRA3DSCRATCHPADLAYOUT *scratchpad;

static Vector4 * transformRef;

template <class T>
T* GetStaticInstance(uint32_t mem);
void gra3dInit();
void ModifyScratchpad();
bool gra3dIsUsingScratchpad();
int gra3dUseScratchpad(int isTrue);
Vector4 * gra3dGetTransformRef(G3DTRANSFORMSTATETYPE state);