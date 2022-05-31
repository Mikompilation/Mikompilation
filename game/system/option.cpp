#include "option.h"

void InitOptionSetup(OPTION_WRK *options)
{
  options->brightness = 0x80;
  options->isSubtitleOn = true;
  options->volumeSlider = 0x100;
  options->is3dMovement = false;
  options->isVibrationOn = false;
  options->controlScheme = 0;
  options->isMonoSound = false;
  options->isAnalogStickInverse = false;
  // OptSoundSetupRef();
}