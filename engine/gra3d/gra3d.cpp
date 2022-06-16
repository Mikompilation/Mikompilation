#include "gra3d.h"
#include "logging/printing.h"

void gra3dInit()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

int gra3dUseScratchpad()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);

}

// TODO, implement proper memory lookups:
template <class T>
T* GetStaticInstance(uint32_t mem)
{
  return (T *)mem;
}