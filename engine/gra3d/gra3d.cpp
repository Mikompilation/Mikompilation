#include "gra3d.h"
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
  // gra3dsgdInit(sgd);
}

void ModifyScratchpad()
{
  G3DCREATIONDATA creation;
  Matrix4x4 matrix;
  creation.core = GetStaticInstance<GRA3DCOREOBJECT>(0x001b4980);

  if (!UseScratchpad)
  {
    matrix = creation.core->matrix;
    // More down here
  }

  // There's init and initalize. Two seperate functions entirely.
  //g3dInitalize(&creation);
  stackPointerScratchPadLayout = GetStaticInstance<GRA3DSCRATCHPADLAYOUT>(0x001b4a5c);

  if (!UseScratchpad)
  {
    
  }

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
template <class T>
T* GetStaticInstance(uint32_t mem)
{
  return (T *)mem;
}