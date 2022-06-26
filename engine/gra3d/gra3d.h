#pragma once
#include <stdint.h>
#include "scratchpad.h"
#include "math/VectorMath.h"

struct GRA3DCOREOBJECT
{
  Matrix4x4 matrix;
};

struct GRA3DSGDCREATIONDATA
{

};

// This is approximately 16 bytes in size
struct G3DCREATIONDATA
{
    GRA3DCOREOBJECT* core;
    GRA3DSCRATCHPADLAYOUT_MAPSHADOW* mapShadow;
    char* someOtherPointer;
};

static GRA3DCOREOBJECT *core;
static GRA3DSCRATCHPADLAYOUT *scratchpad;

template <class T>
T* GetStaticInstance(uint32_t mem);
void gra3dInit();
void ModifyScratchpad();
bool gra3dIsUsingScratchpad();
int gra3dUseScratchpad(int isTrue);