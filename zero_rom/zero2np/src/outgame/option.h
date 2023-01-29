#pragma once

struct OPTION_WRK
{
  int brightness;
  int snd_volume;
  unsigned char pad_vib;
  unsigned char pad_type;
  unsigned char view_vertical;
  unsigned char ana_replace;
  unsigned char credits;
  unsigned char snd_output;
  unsigned char move_operate;
  unsigned char pad;
};

void InitOptionSetup(OPTION_WRK *ow);