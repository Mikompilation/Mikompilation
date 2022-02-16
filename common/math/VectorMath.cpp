#include "VectorMath.h"

void CopyMatrix(Matrix4x4 *src, Matrix4x4 *out)
{
  out->Matrix[0].x = src->Matrix[0].x;
  out->Matrix[0].y = src->Matrix[0].y;
  out->Matrix[0].z = src->Matrix[0].z;
  out->Matrix[0].w = src->Matrix[0].w;
  out->Matrix[1].x = src->Matrix[1].x;
  out->Matrix[1].y = src->Matrix[1].y;
  out->Matrix[1].z = src->Matrix[1].z;
  out->Matrix[1].w = src->Matrix[1].w;
  out->Matrix[2].x = src->Matrix[2].x;
  out->Matrix[2].y = src->Matrix[2].y;
  out->Matrix[2].z = src->Matrix[2].z;
  out->Matrix[2].w = src->Matrix[2].w;
  out->Matrix[3].x = src->Matrix[3].x;
  out->Matrix[3].y = src->Matrix[3].y;
  out->Matrix[3].z = src->Matrix[3].z;
  out->Matrix[3].w = src->Matrix[3].w;
}

void MulMatrix(Matrix4x4 *m1, Matrix4x4 *m2, Matrix4x4 *out)
{
  for (int i = 0; i < 4; i++)
  {
    out->Matrix[i].x = m1->Matrix[0].x * m2->Matrix[i].x + m1->Matrix[1].x * m2->Matrix[i].y + m1->Matrix[2].x * m2->Matrix[i].z + m1->Matrix[3].x * m2->Matrix[i].w;
    out->Matrix[i].y = m1->Matrix[0].y * m2->Matrix[i].x + m1->Matrix[1].y * m2->Matrix[i].y + m1->Matrix[2].y * m2->Matrix[i].z + m1->Matrix[3].y * m2->Matrix[i].w;
    out->Matrix[i].z = m1->Matrix[0].z * m2->Matrix[i].x + m1->Matrix[1].z * m2->Matrix[i].y + m1->Matrix[2].z * m2->Matrix[i].z + m1->Matrix[3].z * m2->Matrix[i].w;
    out->Matrix[i].w = m1->Matrix[0].w * m2->Matrix[i].x + m1->Matrix[1].w * m2->Matrix[i].y + m1->Matrix[2].w * m2->Matrix[i].z + m1->Matrix[3].w * m2->Matrix[i].w;
  }
}