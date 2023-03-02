#include "option.h"
#include "../system/eeiop/snd.h"

void InitOptionSetup(OPTION_WRK *ow)
{
  ow->brightness = 0x80;
  ow->credits = 1;
  ow->snd_volume = 0x100;
  ow->move_operate = 0;
  ow->pad_vib = 1;
  ow->pad_type = 0;
  ow->snd_output = 0;
  ow->view_vertical = 0;
  ow->ana_replace = 0;
  OptSoundSetupRef(ow);
}

void OptSoundSetupRef(OPTION_WRK *ow)
{
  int vol = ow->snd_volume;

  if (ow->snd_output == 1)
  {
    SndSetMono();
  }
  else
  {
    SndSetStereo();
  }

  SndSetGroupVolume(1, vol);
  SndSetGroupVolume(0, ow->snd_volume);
}
