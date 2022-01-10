#pragma once
#include <iostream>
#include "../math/Math.h"

// This is what I have in my Fatal Frame 1 Ghidra project - weirdbeard
typedef struct cam_wrk
{
	Vector4 position;
	Vector4 rotation;
	float unknown1;
	float unknown2;
};

// Since this is C++ bois
class Camera
{
private:
	cam_wrk cam;

public:
	// The functions that turn Finder mode on and off in Fatal Frame 1. Does this match Fatal Frame 2 and 3?
	void FinderInSet();
	void FinderOutSet();

	// Camera position?
	Vector4 GetCamI2DPos();

};