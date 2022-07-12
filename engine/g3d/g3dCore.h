#pragma once
#include "math/VectorMath.h"
#include "gra3d/scratchpad.h"

enum G3DTRANSFORMSTATETYPE
{
    TYPE1,
    TYPE2,
    TYPE3,
    TYPE4,
    TYPE5
};

struct G3DCOREOBJECT
{
  Matrix4x4 matrix;
};

// This is approximately 16 bytes in size
struct G3DCREATIONDATA
{
    G3DCOREOBJECT* core;
    GRA3DSCRATCHPADLAYOUT_MAPSHADOW* mapShadow;
    char* someOtherPointer;
};

static G3DCOREOBJECT *core;
static G3DCREATIONDATA cRenderer;

Vector4 * g3dGetTransformRef(G3DTRANSFORMSTATETYPE transform);