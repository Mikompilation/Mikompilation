#pragma once
#include "gra3d/scratchpad.h"
#include "math/VectorMath.h"

enum G3DTRANSFORMSTATETYPE
{
  G3DTS_VIEW = 0,
  G3DTS_PROJECTION = 1,
  G3DTS_WORLD = 2,
  G3DTS_WORLD1 = 3,
  G3DTS_WORLDCLIP = 4,
  NUM_G3DTRANSFORMSTATETYPE = 5
};

struct G3DCOREOBJECT
{
  Matrix4x4 matrix;
};

struct G3DCREATIONDATA
{
  G3DCOREOBJECT *core;
  GRA3DSCRATCHPADLAYOUT_MAPSHADOW *mapShadow;
  char *someOtherPointer;
};

static G3DCOREOBJECT *core;
static G3DCREATIONDATA cRenderer;

Vector4 *g3dGetTransformRef(G3DTRANSFORMSTATETYPE transform);