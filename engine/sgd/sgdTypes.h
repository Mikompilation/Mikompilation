#pragma once

#include "../../common/math/VectorMath.h"
#include <cstdint>

constexpr auto SGD_VALID_VERSIONID = 0x1050;

typedef uint8_t uint8;
typedef unsigned int uint;
typedef unsigned int undefined4;

struct VertexPoint {
  Vector4 vuMatrix;
  Vector3 vuVector3;
  uint8 vertexId;
  uint8 a;
  uint8 b;
  uint8 c;
};

struct VERTEXLIST {
  int iNumVertex;
};

struct RotationAxis {
  Vector4 x;
  Vector4 y;
  Vector4 z;
};

struct SGDCOORDINATE {
  RotationAxis rotationAxis;
  Vector4 coordinates;
  float fCoordArray[8][4];
  Vector4 rotation;
  SGDCOORDINATE *pParent;
  undefined4 field_0xd4;
  undefined4 field_0xd8;
  undefined4 field_0xdc;
};

struct SGDMATERIAL {
  char a[0xb0];
};

struct SGDVECTORBSP {
  uint iChildType;
  VertexPoint *pChildLeft;
  VertexPoint *pChildRight;
  VERTEXLIST *pParent;
};

struct SGDVECTORINFO {
  uint iNumBlockInfo;
  SGDVECTORBSP sgdVectorBsp[];
};

struct SGDPROCUNITHEADER {
  SGDPROCUNITHEADER *pNext;
  int iCategory;
  uint procInfo;
  uint8_t a;
  uint8_t mtype;
  uint8_t b;
  uint8_t c;
};

struct SGDFILEHEADER {
  uint uiVersionId;
  bool fileInitialized;
  char field_0x5;
  char field_0x6;
  bool field_0x7;
  SGDCOORDINATE *pCoord;
  SGDMATERIAL *pMaterial;
  SGDVECTORINFO *pVectorInfo;
  uint uiNumBlock;

  /// There are as many iterations as uiNumBlock
  SGDPROCUNITHEADER *pProcUnit[];
};

struct SgLightCoord {
  uint8_t unknown1[0x60];
  Vector4 pos0;
  Vector4 pos1;
  Vector4 pos2;
  Vector4 intens;
  Vector4 intens_b;
  Vector4 WDLightMtx[3];
  Vector4 SLightMtx[3];
};

struct SgLightSpot {
  int u1;
  int u2;
  int u3;
  int u4;
  Vector4 btimes;
  Vector4 DColor[3];
  Vector4 SColor[3];
};