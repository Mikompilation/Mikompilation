#pragma once

#include "PS2Math.h"

void sceVu0AddVector(Vector4 *out, Vector4 *v1, Vector4 *v2);
void sceVu0ApplyMatrix(Vector4 *out, Matrix4x4 *m1, Matrix4x4 *m2);
void sceVu0CameraMatrix(Matrix4x4 *out, Vector4 *factor, Vector4 *v1, Vector4 *v2);
void sceVu0ClampVector(float minValue, float maxValue, Vector4 *out, Vector4 *v2);
int sceVu0ClipScreen(Vector4 *v1);
int sceVu0ClipScreen3(Vector4 *v1, Vector4 *v2, Vector4 *v3);
void sceVu0CopyVector(Vector4 *out, Vector4 *v1);
void sceVu0CopyVectorXYZ(Vector4 *out, Vector4 *v1);
void sceVu0DivVector(float scale, Vector4 *v1, Vector4 *v2);
void sceVu0DivVectorXYZ(float scale, Vector4 *v1, Vector4 *v2);
void sceVu0FTOI0Vector(int *out, Vector4 *v1);
void sceVu0FTOI4Vector(int *out, Vector4 *v1);
float sceVu0InnerProduct(Vector4 *v1, Vector4 *v2);
void sceVu0InterVector(float inter, Vector4 *out, Vector4 *v1, Vector4 *v2);
void sceVu0InterVectorXYZ(float inter, Vector4 *out, Vector4 *v1, Vector4 *v2);
void sceVu0InversMatrix(Matrix4x4 *m1, Matrix4x4 *m2);
void sceVu0ITOF0Vector(Vector4 *v1, int *iv1);
void sceVu0ITOF4Vector(Vector4 *v1, int *iv1);
void sceVu0LightColorMatrix(Matrix4x4 *m1, Vector4 *v1, Vector4 *v2, Vector4 *v3, Vector4 *v4);
void sceVu0MulMatrix(Matrix4x4 *out, Matrix4x4 *m1, Matrix4x4 *m2);
void sceVu0MulVector(Vector4 *out, Vector4 *v1, Vector4 *v2);
void sceVu0Normalize(Vector4 *out, Vector4 *v1);
void sceVu0NormalLightMatrix(Matrix4x4 *out, Vector4 *v1, Vector4 *v2, Vector4 *v3);
void sceVu0OuterProduct(Vector4 *out, Vector4 *v1, Vector4 *v2);
void sceVu0RotCameraMatrix(Matrix4x4 *out, Matrix4x4 *m1, Matrix4x4 *m2, Matrix4x4 *m3, Vector4 *rotAngles);
void sceVu0RotMatrix(Matrix4x4 *out, Matrix4x4 *m1, Vector4 *rotAngles);
void sceVu0RotMatrixX(float rotAngle, Matrix4x4 *out, Matrix4x4 *m1);
void sceVu0RotMatrixY(float rotAngle, Matrix4x4 *out, Matrix4x4 *m1);
void sceVu0RotMatrixZ(float rotAngle, Matrix4x4 *out, Matrix4x4 *m1);
void sceVu0RotTransPers(Matrix4x4 *out, Matrix4x4 *m1, Matrix4x4 *m2);
void sceVu0ScaleVector(float factor, Vector4 *out, Vector4 *v1);
void sceVu0ScaleVectorXYZ(float factor, Vector4 *out, Vector4 *v1);
void sceVu0SubVector(Vector4 *out, Vector4 *v1, Vector4 *v2);
void sceVu0TransMatrix(Matrix4x4 *out, Matrix4x4 *m1, Vector4 *factor);
void sceVu0TransposeMatrix(Matrix4x4 *out, Matrix4x4 *m1);
void sceVu0UnitMatrix(Matrix4x4 *out);
void sceVu0ViewClipMatrix(float param_1, float param_2, float param_3, float param_4, float param_5, Matrix4x4 *out);

// Left to implement
// int sceVu0ClipAll(float *param_1,float *param_2,float *param_3,float *param_4,int param_5);
// void sceVu0RotTransPersN(Matrix4x4 *out,Matrix4x4 *param_2,Matrix4x4 *param_3,int numArr);
// void sceVu0ViewScreenMatrix(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,float param_7,float param_8,Matrix4x4 *param_9)