#pragma once

typedef struct
{
  unsigned char title_step;
  unsigned char wait_timer;
  int stream_id;
  int snd_id;
  int snd_bank_id;
  int iOriginSndBankLoadPriority;
} TITLE_WRK;

typedef struct
{
  unsigned char rgb;
  char start_timer;
  int timer;
} TITLE_DISP_CTRL;

void TitleInit();