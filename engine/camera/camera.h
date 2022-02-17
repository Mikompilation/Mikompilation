#pragma once

#include "math/VectorMath.h"

struct cam_wrk
{
	Vector4 position;
	Vector4 rotation;
	float unknown1;
	float unknown2;
};

class Camera
{
private:
	cam_wrk cam;

public:
	void FinderInSet();
	void FinderOutSet();
	Vector4 GetCamI2DPos();
};