#pragma once

struct OPTION_WRK 
{
  int brightness;
  float volumeSlider;
  bool isVibrationOn;
  char controlScheme;
  bool isLookInverted;
  bool isAnalogStickInverse;
  bool isSubtitleOn;
  bool isMonoSound;
  bool is3dMovement;
};

inline OPTION_WRK opt_wrk;

void InitOptionSetup(OPTION_WRK *options);

void OptSoundSetupRef();
