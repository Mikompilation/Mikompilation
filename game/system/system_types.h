#pragma once

enum VIDEOMODE : char
{
  NTSC_448p,
  NTSC_448p2,
  NTSC_448p3,
  PAL
};

enum LANGUAGE : char
{
  ENGLISH = 0,
  FRENCH = 1,
  GERMAN = 2,
  SPANISH = 3,
  ITALIAN = 4
};

struct SYS_WRK
{
  int unknown_0x00;
  int unknown_0x04;
  int unknown_0x08;
  int unknown_0x0C;
  char16_t unknown_0x10;
  bool unknown_0x12;
  VIDEOMODE eVideoMode;
  LANGUAGE eLanguage;
  char unknown_0x15;
  char unknown_0x16;
  char unknown_0x17;
  int unknown_0x18;
  int unknown_0x1C;
};
