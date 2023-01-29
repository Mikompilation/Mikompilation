#include "option.h"

void InitOptionSetup(OPTION_WRK *ow)
{
  ow->brightness = 128;
  ow->credits = 1;
  ow->snd_volume = 256;
  ow->move_operate = 0;
  ow->pad_vib = 1;
  ow->pad_type = 0;
  ow->snd_output = 0;
  ow->view_vertical = 0;
  ow->ana_replace = 0;
}