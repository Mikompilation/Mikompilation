#include "fade.h"

void *FadeCtrlInit()
{
  void *varMem = memset(&fade_ctrl, 0, 0xc);
  fade_ctrl.var1 = 0x80;

  return varMem;
}