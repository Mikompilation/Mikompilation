#include "gra3d.h"
#include "g3d/g3dCore.h"
#include "gra3dSGD.h"
#include "logging/printing.h"

void gra3dInit()
{
  GRA3DSGDCREATIONDATA sgd;

  // atexit(OnExitApp);
  ModifyScratchpad();
  // g3dVif1Init();
  // g3dVif1SetRegister(reg);
  // g3ddebugVerifyVif1Address();
  // InitCamera();
  // InitLight();
  // InitFog();
  // SetClipValue();
  gra3dsgdInit(&sgd);

  transformRef = gra3dGetTransformRef(G3DTRANSFORMSTATETYPE::G3DTS_PROJECTION);
}

void ModifyScratchpad()
{
  G3DCREATIONDATA creation;
  Matrix4x4 matrix;
  creation.core = GetStaticInstance<G3DCOREOBJECT>(0x001b4980);

  if (!UseScratchpad)
  {
    //matrix = creation.core->matrix;
  }

  //g3dInitalize(&creation);
  stackPointerScratchPadLayout =
      GetStaticInstance<GRA3DSCRATCHPADLAYOUT>(0x001b4a5c);

  if (!UseScratchpad)
  {
  }
}

Vector4 *gra3dGetTransformRef(G3DTRANSFORMSTATETYPE state)
{
  Vector4 *output;

  if (state != G3DTRANSFORMSTATETYPE::G3DTS_WORLDCLIP
      && (state == G3DTRANSFORMSTATETYPE::NUM_G3DTRANSFORMSTATETYPE))
  {
    return &scratchpad->transInput;
  }

  output = g3dGetTransformRef(state);

  return output;
}

int gra3dUseScratchpad(int isTrue)
{
  if (!UseScratchpad)
  {
    UseScratchpad = isTrue;
    ModifyScratchpad();
  }

  return UseScratchpad;
}

bool gra3dIsUsingScratchpad()
{
  return UseScratchpad;
}

// TODO, implement proper memory lookups:
template<class T>
T *GetStaticInstance(uint32_t mem)
{
  return (T *) mem;
}