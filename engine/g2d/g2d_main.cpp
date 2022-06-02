#include "g2d_main.h"
#include "g2d_draw.h"
#include "message.h"
#include "fade.h"

void InitGraph2dBoot()
{
  InitPK2Dbuf();
  InitMessage();
  FadeCtrlInit();
}