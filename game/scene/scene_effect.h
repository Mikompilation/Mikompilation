#pragma once
#include "scene.h"

enum Effects : int
{
  Z_DEP,
  DITHER,
  BLUR ,
  DEFORM,
  FOCUS,
  OVERLAP,
  FADEFRAME,
  RENZFLARE,
  BLACKFILTER,
  NEGA,
  NCONTRAST,
  ENEDMG,
  HALO,
  FIRE,
  TORCH,
  PDEFORM,
  ENEFIRE,
  DUST,
  WATERDROP,
  TORCH2,
  SPARK,
  TORCH_FREA,
  CAMERA_FLASH,
  MANY_CANDLE,
  HAZE,
  DOOR_SEAL,
  ENEIN
};

void SceneEffectCtrlInit();
void SceneEffectFadeModelCtrlInit();
void SceneEffectPDeformCtrlInit();
void SceneEffectEneAuraCtrlInit();
void SceneEffectVibrationCtrlInit();
void SceneTorchCtrlInit();
void SceneEffectHazeCtrlInit();

void SceneEffectEnd();
void SceneEffectInit();
void SceneEffectMain(SCENE_CTRL *ctrl, unsigned int *offset);