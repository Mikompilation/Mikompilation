#pragma once

#include "math/VectorMath.h"

struct cam_wrk {
  Vector4 position;
  Vector4 rotation;
  float unknown1;
  float unknown2;
};

void _InitCamera();
void FinderInSet();
void FinderOutSet();
Vector4 GetCamI2DPos();