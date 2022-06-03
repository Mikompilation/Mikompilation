#include "fade.h"
#include <cstring>
#include <iostream>

void *FadeCtrlInit()
{
  void *varMem = memset(&fade_ctrl, 0, sizeof(fade_ctrl));
  fade_ctrl.var1 = 0x80;

  return varMem;
}