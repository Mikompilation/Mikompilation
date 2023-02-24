#include "playpss.h"

_PLAY_PSS_FLAGS Flags;

void playPssInit()
{
  Flags.sStopPhase = 0;
  Flags.bErrorCallback = 1;
  Flags.sStopPhase = 1;
  Flags.bNtsc2Pal = 1;
  Flags.bSendImage = 0;
  Flags.bPauseFlg = 1;
}
