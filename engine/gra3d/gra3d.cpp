#include "gra3d.h"
#include "logging/printing.h"

void gra3dInit()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void modifyScratchpad()
{

}

int gra3dUseScratchpad(int isTrue)
{
  if (!bUseScratchpad)
  {
    bUseScratchpad = isTrue;
    modifyScratchpad();
  }

  return bUseScratchpad;
}

// TODO, implement proper memory lookups:
template <class T>
T* GetStaticInstance(uint32_t mem)
{
  return (T *)mem;
}