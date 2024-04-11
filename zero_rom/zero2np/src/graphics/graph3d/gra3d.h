#ifndef MIKOMPILATION_GRA3D_H
#define MIKOMPILATION_GRA3D_H

#include "sgd_types.h"

int gra3dIsLightEnable(int iLightId);
G3DLIGHT * gra3dGetLightRef(int iLightId);
int gra3dIsMonotoneDrawEnable();

#endif //MIKOMPILATION_GRA3D_H
