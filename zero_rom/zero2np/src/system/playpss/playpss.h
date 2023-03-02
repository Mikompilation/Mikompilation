#pragma once

struct _PLAY_PSS_FLAGS
{
  short int sStopPhase;
  short unsigned int bStarted : 1;
  short unsigned int bPauseFlg : 1;
  short unsigned int bNtsc2Pal : 1;
  short unsigned int bSendImage : 1;
  short unsigned int bErrorCallback : 1;
};

void playPssInit();
