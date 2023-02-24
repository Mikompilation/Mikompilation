#include "snd.h"
#include <assert.h>

static _SOUND_SYS snd_sys;

void SndSetMono()
{
  snd_sys.mono = 1;
}

void SndSetStereo()
{
  snd_sys.mono = 0;
}

void SndSetGroupVolume(int type, int vol)
{
  assert(type < 4 && "SndSetGroupVolume() Illegal Voice Type");
  assert(vol < 0x101 && "SndSetGroupVolume() Illegal Voice Volume 0x0~%d\n");

  snd_sys.type_vol[type] = vol;
}
