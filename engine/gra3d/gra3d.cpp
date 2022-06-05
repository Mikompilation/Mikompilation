#include "gra3d.h"
#include "logging/printing.h"

void gra3dInit()
{
  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}


// Need's to return from memory... Potentially ScratchPad memory? An instance of the requested obejct like CoreObject or ScratchPadObject
template <class T>
T* GetStaticInstance()
{
  return this; // ToDo, replace this with pointer cast!
}