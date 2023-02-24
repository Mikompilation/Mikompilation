#pragma once

struct _SOUND_SYS
{
  char mono;
  int type_vol[5];
};

void SndSetMono();
void SndSetStereo();
void SndSetGroupVolume(int type, int vol);