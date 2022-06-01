#pragma once
#include <iostream>
#include <stdint.h>

struct FADE_CTRL 
{
  unsigned int var1;
};

inline FADE_CTRL fade_ctrl;


void *FadeCtrlInit();