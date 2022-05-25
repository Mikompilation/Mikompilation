#include "sceVu0.h"

#include <cmath>

void sceVu0AddVector(Vector4 *out, Vector4 *v1, Vector4 *v2)
{
  out->x = v1->x + v2->x;
  out->y = v1->y + v2->y;
  out->z = v1->z + v2->z;
  out->w = v1->w + v2->w;
}

void sceVu0ApplyMatrix(Vector4 *out, Matrix4x4 *m1, Matrix4x4 *m2)
{
  out->x = m1->Matrix[0].x * m2->Matrix[0].x + m1->Matrix[1].x * m2->Matrix[0].y + m1->Matrix[2].x * m2->Matrix[0].z + m1->Matrix[3].x * m2->Matrix[0].w;
  out->y = m1->Matrix[0].y * m2->Matrix[0].x + m1->Matrix[1].y * m2->Matrix[0].y + m1->Matrix[2].y * m2->Matrix[0].z + m1->Matrix[3].y * m2->Matrix[0].w;
  out->z = m1->Matrix[0].z * m2->Matrix[0].x + m1->Matrix[1].z * m2->Matrix[0].y + m1->Matrix[2].z * m2->Matrix[0].z + m1->Matrix[3].z * m2->Matrix[0].w;
  out->w = m1->Matrix[0].w * m2->Matrix[0].x + m1->Matrix[1].w * m2->Matrix[0].y + m1->Matrix[2].w * m2->Matrix[0].z + m1->Matrix[3].w * m2->Matrix[0].w;
}

void sceVu0CameraMatrix(Matrix4x4 *out, Vector4 *factor, Vector4 *v1, Vector4 *v2)
{
  Matrix4x4 m1;
  Vector4 v3;

  sceVu0UnitMatrix(&m1);
  sceVu0OuterProduct(&v3, v2, v1);
  sceVu0Normalize(&m1.Matrix[0], &v3);
  sceVu0Normalize(&m1.Matrix[2], v1);
  sceVu0OuterProduct(&m1.Matrix[1], &m1.Matrix[2], &m1.Matrix[0]);
  sceVu0TransMatrix(&m1, &m1, factor);
  sceVu0InversMatrix(out, &m1);
}

void sceVu0ClampVector(float minValue, float maxValue, Vector4 *out, Vector4 *v2)
{
  if (v2->x <= minValue)
  {
    v2->x = minValue;
  }
  if (v2->y <= minValue)
  {
    v2->y = minValue;
  }
  if (v2->z <= minValue)
  {
    v2->z = minValue;
  }
  if (v2->w <= minValue)
  {
    v2->w = minValue;
  }

  if (maxValue <= v2->x)
  {
    v2->x = maxValue;
  }
  if (maxValue <= v2->y)
  {
    v2->y = maxValue;
  }
  if (maxValue <= v2->z)
  {
    v2->z = maxValue;
  }
  if (maxValue <= v2->w)
  {
    v2->w = maxValue;
  }

  out->x = v2->x;
  out->y = v2->y;
  out->z = v2->z;
  out->w = v2->w;
}

int sceVu0ClipScreen(Vector4 *v1)
{
  return (int) (((v1->w - 0.0 == 0.0 || v1->y - 0.0 == 0.0) || v1->x - 0.0 == 0.0) || (4096.0 - v1->y == 0.0 || 4096.0 - v1->x == 0.0)) << 6;
}

int sceVu0ClipScreen3(Vector4 *v1, Vector4 *v2, Vector4 *v3)
{
  return (int) (((((((v1->w - 0.0 == 0.0 || v1->y - 0.0 == 0.0) || v1->x - 0.0 == 0.0) || (4096.0 - v1->y == 0.0 || 4096.0 - v1->x == 0.0)) || ((v2->w - 0.0 == 0.0 || v2->y - 0.0 == 0.0) || v2->x - 0.0 == 0.0))
                  || (4096.0 - v2->y == 0.0 || 4096.0 - v2->x == 0.0))
                 || ((v3->w - 0.0 == 0.0 || v3->y - 0.0 == 0.0) || v3->x - 0.0 == 0.0))
                || (4096.0 - v3->y == 0.0 || 4096.0 - v3->x == 0.0))
      << 6;
}

void sceVu0CopyVector(Vector4 *out, Vector4 *v1)
{
  out->x = v1->x;
  out->y = v1->y;
  out->z = v1->z;
  out->w = v1->w;
}

void sceVu0CopyVectorXYZ(Vector4 *out, Vector4 *v1)
{
  out->x = v1->x;
  out->y = v1->y;
  out->z = v1->z;
}

void sceVu0DivVector(float scale, Vector4 *v1, Vector4 *v2)
{
  float adjustedScale = 1.0 / scale;

  v1->x = v2->x * adjustedScale;
  v1->y = v2->y * adjustedScale;
  v1->z = v2->z * adjustedScale;
  v1->w = v2->w * adjustedScale;
}

void sceVu0DivVectorXYZ(float scale, Vector4 *v1, Vector4 *v2)
{
  float adjustedScale = 1.0 / scale;

  v1->x = v2->x * adjustedScale;
  v1->y = v2->y * adjustedScale;
  v1->z = v2->z * adjustedScale;
  v1->w = v2->w;
}

void sceVu0FTOI0Vector(int *out, Vector4 *v1)
{
  out[0] = (int) v1->x;
  out[1] = (int) v1->y;
  out[2] = (int) v1->z;
  out[3] = (int) v1->w;
}

void sceVu0FTOI4Vector(int *out, Vector4 *v1)
{
  out[0] = (int) v1->x;
  out[1] = (int) v1->y;
  out[2] = (int) v1->z;
  out[3] = (int) v1->w;
}

float sceVu0InnerProduct(Vector4 *v1, Vector4 *v2)
{
  return v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
}

void sceVu0InterVector(float inter, Vector4 *out, Vector4 *v1, Vector4 *v2)
{
  float f = 1.0 - inter;
  out->x = v1->x * inter + v2->x * f;
  out->y = v1->y * inter + v2->y * f;
  out->z = v1->z * inter + v2->z * f;
  out->w = v1->w * inter + v2->w * f;
}

void sceVu0InterVectorXYZ(float inter, Vector4 *out, Vector4 *v1, Vector4 *v2)
{
  float f = 1.0 - inter;
  out->x = v1->x * inter + v2->x * f;
  out->y = v1->y * inter + v2->y * f;
  out->z = v1->z * inter + v2->z * f;
  out->w = v1->w;
}

void sceVu0InversMatrix(Matrix4x4 *m1, Matrix4x4 *m2)
{
  m1->Matrix[0].x = m2->Matrix[0].x;
  m1->Matrix[0].y = m2->Matrix[1].x;
  m1->Matrix[0].z = m2->Matrix[2].x;
  m1->Matrix[0].w = 0.0;

  m1->Matrix[1].x = m2->Matrix[0].y;
  m1->Matrix[1].y = m2->Matrix[1].y;
  m1->Matrix[1].z = m2->Matrix[2].y;
  m1->Matrix[1].w = 0.0;

  m1->Matrix[2].x = m2->Matrix[0].z;
  m1->Matrix[2].y = m2->Matrix[1].z;
  m1->Matrix[2].z = m2->Matrix[2].z;
  m1->Matrix[2].w = 0.0;

  m1->Matrix[3].x = 0.0 - (m2->Matrix[0].x * m2->Matrix[3].x + m2->Matrix[0].y * m2->Matrix[3].y + m2->Matrix[0].z * m2->Matrix[3].z);
  m1->Matrix[3].y = 0.0 - (m2->Matrix[1].x * m2->Matrix[3].x + m2->Matrix[1].y * m2->Matrix[3].y + m2->Matrix[1].z * m2->Matrix[3].z);
  m1->Matrix[3].z = 0.0 - (m2->Matrix[2].x * m2->Matrix[3].x + m2->Matrix[2].y * m2->Matrix[3].y + m2->Matrix[2].z * m2->Matrix[3].z);
  m1->Matrix[3].w = m2->Matrix[3].w;
}

void sceVu0ITOF0Vector(Vector4 *v1, int *iv1)
{
  v1->x = (float) iv1[0];
  v1->y = (float) iv1[1];
  v1->z = (float) iv1[2];
  v1->w = (float) iv1[3];
}

void sceVu0ITOF4Vector(Vector4 *v1, int *iv1)
{
  v1->x = (float) iv1[0];
  v1->y = (float) iv1[1];
  v1->z = (float) iv1[2];
  v1->w = (float) iv1[3];
}

void sceVu0LightColorMatrix(Matrix4x4 *m1, Vector4 *v1, Vector4 *v2, Vector4 *v3, Vector4 *v4)
{
  sceVu0CopyVector(&m1->Matrix[0], v1);
  sceVu0CopyVector(&m1->Matrix[1], v2);
  sceVu0CopyVector(&m1->Matrix[2], v3);
  sceVu0CopyVector(&m1->Matrix[3], v4);
}

void sceVu0MulMatrix(Matrix4x4 *out, Matrix4x4 *m1, Matrix4x4 *m2)
{
  for (int i = 0; i < 4; i++)
  {
    out->Matrix[i].x = m1->Matrix[0].x * m2->Matrix[i].x + m1->Matrix[1].x * m2->Matrix[i].y + m1->Matrix[2].x * m2->Matrix[i].z + m1->Matrix[3].x * m2->Matrix[i].w;
    out->Matrix[i].y = m1->Matrix[0].y * m2->Matrix[i].x + m1->Matrix[1].y * m2->Matrix[i].y + m1->Matrix[2].y * m2->Matrix[i].z + m1->Matrix[3].y * m2->Matrix[i].w;
    out->Matrix[i].z = m1->Matrix[0].z * m2->Matrix[i].x + m1->Matrix[1].z * m2->Matrix[i].y + m1->Matrix[2].z * m2->Matrix[i].z + m1->Matrix[3].z * m2->Matrix[i].w;
    out->Matrix[i].w = m1->Matrix[0].w * m2->Matrix[i].x + m1->Matrix[1].w * m2->Matrix[i].y + m1->Matrix[2].w * m2->Matrix[i].z + m1->Matrix[3].w * m2->Matrix[i].w;
  }
}

void sceVu0MulVector(Vector4 *out, Vector4 *v1, Vector4 *v2)
{
  out->x = v1->x * v2->x;
  out->y = v1->y * v2->y;
  out->z = v1->z * v2->z;
  out->w = v1->w * v2->w;
}

void sceVu0Normalize(Vector4 *out, Vector4 *v1)
{
  float normalized = 1.0 / (sqrt(v1->x * v1->x + v1->y * v1->y + v1->z * v1->z) + 0.0);
  out->x = v1->x * normalized;
  out->y = v1->y * normalized;
  out->z = v1->z * normalized;
  out->w = 0.0;
}

void sceVu0NormalLightMatrix(Matrix4x4 *out, Vector4 *v1, Vector4 *v2, Vector4 *v3)
{
  Vector4 v;

  sceVu0ScaleVector(-1.0f, &v, v1);
  sceVu0Normalize(&out->Matrix[0], &v);

  sceVu0ScaleVector(-1.0f, &v, v2);
  sceVu0Normalize(&out->Matrix[1], &v);

  sceVu0ScaleVector(-1.0f, &v, v3);
  sceVu0Normalize(&out->Matrix[2], &v);

  out->Matrix[3].x = 0.0;
  out->Matrix[3].w = 1.0;
  out->Matrix[3].z = 0.0;
  out->Matrix[3].y = 0.0;

  sceVu0TransposeMatrix(out, out);
}

void sceVu0OuterProduct(Vector4 *out, Vector4 *v1, Vector4 *v2)
{
  out->x = v1->y * v2->z - v2->y * v1->z;
  out->y = v1->z * v2->x - v2->z * v1->x;
  out->z = v1->x * v2->y - v2->x * v1->y;
  out->w = 0.0;
}

void sceVu0RotCameraMatrix(Matrix4x4 *out, Matrix4x4 *m1, Matrix4x4 *m2, Matrix4x4 *m3, Vector4 *rotAngles)
{
  Matrix4x4 rotMatrix;
  Vector4 VStack160;
  Vector4 VStack144;
  Vector4 VStack128;

  sceVu0UnitMatrix(&rotMatrix);

  sceVu0RotMatrixX(rotAngles->x, &rotMatrix, &rotMatrix);
  sceVu0RotMatrixY(rotAngles->y, &rotMatrix, &rotMatrix);
  sceVu0RotMatrixZ(rotAngles->z, &rotMatrix, &rotMatrix);

  sceVu0ApplyMatrix(&VStack160, &rotMatrix, m2);
  sceVu0ApplyMatrix(&VStack144, &rotMatrix, m3);
  sceVu0ApplyMatrix(&VStack128, &rotMatrix, m1);

  sceVu0CameraMatrix(out, &VStack128, &VStack160, &VStack144);
}

void sceVu0RotMatrixX(float rotAngle, Matrix4x4 *out, Matrix4x4 *m1)
{
  float cosAngle = cosf(rotAngle);
  float sinAngle = sinf(rotAngle);

  Matrix4x4 rotMatrix = MatrixIdentity();

  rotMatrix.Matrix[1].y = cosAngle;
  rotMatrix.Matrix[1].z = -sinAngle;

  rotMatrix.Matrix[2].y = sinAngle;
  rotMatrix.Matrix[2].z = cosAngle;

  sceVu0MulMatrix(out, m1, &rotMatrix);
}

void sceVu0RotMatrixY(float rotAngle, Matrix4x4 *out, Matrix4x4 *m1)
{
  float cosAngle = cosf(rotAngle);
  float sinAngle = sinf(rotAngle);

  Matrix4x4 rotMatrix = MatrixIdentity();

  rotMatrix.Matrix[0].x = cosAngle;
  rotMatrix.Matrix[0].z = sinAngle;

  rotMatrix.Matrix[2].x = -sinAngle;
  rotMatrix.Matrix[2].z = cosAngle;

  sceVu0MulMatrix(out, m1, &rotMatrix);
}

void sceVu0RotMatrixZ(float rotAngle, Matrix4x4 *out, Matrix4x4 *m1)
{
  float cosAngle = cosf(rotAngle);
  float sinAngle = sinf(rotAngle);

  Matrix4x4 rotMatrix = MatrixIdentity();

  rotMatrix.Matrix[0].x = cosAngle;
  rotMatrix.Matrix[0].y = -sinAngle;

  rotMatrix.Matrix[1].x = sinAngle;
  rotMatrix.Matrix[1].y = cosAngle;

  sceVu0MulMatrix(out, m1, &rotMatrix);
}

void sceVu0RotTransPers(Matrix4x4 *out, Matrix4x4 *m1, Matrix4x4 *m2)
{
  float factor = m1->Matrix[0].w * m2->Matrix[0].x + m1->Matrix[1].w *  m2->Matrix[0].y + m1->Matrix[2].w * m2->Matrix[0].z + m1->Matrix[3].w * m2->Matrix[0].w;

  factor = 1.0 / factor;
  out->Matrix[0].x = (m1->Matrix[0].x * m2->Matrix[0].x + m1->Matrix[1].x * m2->Matrix[0].y + m1->Matrix[2].x * m2->Matrix[0].z + m1->Matrix[3].x * m2->Matrix[0].w) * factor;
  out->Matrix[0].y = (m1->Matrix[0].y * m2->Matrix[0].x + m1->Matrix[1].y * m2->Matrix[0].y + m1->Matrix[2].y * m2->Matrix[0].z + m1->Matrix[3].y * m2->Matrix[0].w) * factor;
  out->Matrix[0].z = (m1->Matrix[0].z * m2->Matrix[0].x + m1->Matrix[1].z * m2->Matrix[0].y + m1->Matrix[2].z * m2->Matrix[0].z + m1->Matrix[3].z * m2->Matrix[0].w) * factor;
  out->Matrix[0].w = m1->Matrix[0].w * m2->Matrix[0].x + m1->Matrix[1].w * m2->Matrix[0].y + m1->Matrix[2].w * m2->Matrix[0].z + m1->Matrix[3].w * m2->Matrix[0].w;
}

void sceVu0RotMatrix(Matrix4x4 *out, Matrix4x4 *m1, Vector4 *rotAngles)
{
  sceVu0RotMatrixZ(rotAngles->z, out, m1);
  sceVu0RotMatrixY(rotAngles->y, out, out);
  sceVu0RotMatrixX(rotAngles->x, out, out);
}

void sceVu0ScaleVector(float factor, Vector4 *out, Vector4 *v1)
{
  out->x = v1->x * factor;
  out->y = v1->y * factor;
  out->z = v1->z * factor;
  out->w = v1->w * factor;
}

void sceVu0ScaleVectorXYZ(float factor, Vector4 *out, Vector4 *v1)
{
  out->x = v1->x * factor;
  out->y = v1->y * factor;
  out->z = v1->z * factor;
  out->w = v1->w;
}

void sceVu0SubVector(Vector4 *out, Vector4 *v1, Vector4 *v2)
{
  out->x = v1->x - v2->x;
  out->y = v1->y - v2->y;
  out->z = v1->z - v2->z;
  out->w = v1->w - v2->w;
}

void sceVu0TransMatrix(Matrix4x4 *out, Matrix4x4 *m1, Vector4 *factor)
{
  out->Matrix[0].x = m1->Matrix[0].x;
  out->Matrix[0].y = m1->Matrix[0].y;
  out->Matrix[0].z = m1->Matrix[0].z;
  out->Matrix[0].w = m1->Matrix[0].w;

  out->Matrix[1].x = m1->Matrix[1].x;
  out->Matrix[1].y = m1->Matrix[1].y;
  out->Matrix[1].z = m1->Matrix[1].z;
  out->Matrix[1].w = m1->Matrix[1].w;

  out->Matrix[2].x = m1->Matrix[2].x;
  out->Matrix[2].y = m1->Matrix[2].y;
  out->Matrix[2].z = m1->Matrix[2].z;
  out->Matrix[2].w = m1->Matrix[2].w;

  out->Matrix[3].x = m1->Matrix[3].x + factor->x;
  out->Matrix[3].y = m1->Matrix[3].y + factor->y;
  out->Matrix[3].z = m1->Matrix[3].z + factor->z;
  out->Matrix[3].w = m1->Matrix[3].w;
}

void sceVu0TransposeMatrix(Matrix4x4 *out, Matrix4x4 *m1)
{
  out->Matrix[0].x = m1->Matrix[0].x;
  out->Matrix[0].y = m1->Matrix[1].x;
  out->Matrix[0].z = m1->Matrix[2].x;
  out->Matrix[0].w = m1->Matrix[3].x;

  out->Matrix[1].x = m1->Matrix[0].y;
  out->Matrix[1].y = m1->Matrix[1].y;
  out->Matrix[1].z = m1->Matrix[2].y;
  out->Matrix[1].w = m1->Matrix[3].y;

  out->Matrix[2].x = m1->Matrix[0].z;
  out->Matrix[2].y = m1->Matrix[1].z;
  out->Matrix[2].z = m1->Matrix[2].z;
  out->Matrix[2].w = m1->Matrix[3].z;

  out->Matrix[3].x = m1->Matrix[0].w;
  out->Matrix[3].y = m1->Matrix[1].w;
  out->Matrix[3].z = m1->Matrix[2].w;
  out->Matrix[3].w = m1->Matrix[3].w;
}

void sceVu0UnitMatrix(Matrix4x4 *out)
{
  out->Matrix[3].x = 0.0;
  out->Matrix[3].y = 0.0;
  out->Matrix[3].z = 0.0;
  out->Matrix[3].w = 1.0;

  out->Matrix[2].x = 0.0;
  out->Matrix[2].y = 0.0;
  out->Matrix[2].z = 1.0;
  out->Matrix[2].w = 0.0;

  out->Matrix[1].x = 0.0;
  out->Matrix[1].y = 1.0;
  out->Matrix[1].z = 0.0;
  out->Matrix[1].w = 0.0;

  out->Matrix[0].x = 1.0;
  out->Matrix[0].y = 0.0;
  out->Matrix[0].z = 0.0;
  out->Matrix[0].w = 0.0;
}

void sceVu0ViewClipMatrix(float param_1, float param_2, float param_3, float param_4, float param_5, Matrix4x4 *out)
{
  sceVu0UnitMatrix(out);
  out->Matrix[3].w = 0.0;
  out->Matrix[2].w = 1.0;
  out->Matrix[1].y = (param_3 + param_3) / param_2;
  out->Matrix[0].x = (param_3 + param_3) / param_1;
  out->Matrix[2].z = (param_5 + param_4) / (param_5 - param_4);
  out->Matrix[3].z = (param_5 * -2.0 * param_4) / (param_5 - param_4);
}
