#pragma once

#include "math/VectorMath.h"
#include <cstdint>

/// SGD Version For PS2\n
/// 0x1060 For FF1 XBOX\n
/// 0x1070 For FF2 XBOX
constexpr auto SGD_VALID_VERSIONID = 0x1050;

typedef uint8_t uint8;
typedef unsigned int uint;
typedef unsigned int undefined4;
typedef int64_t uint64;

struct Color
{
  float r;
  float g;
  float b;
  float a;
};

struct VertexPoint
{
  Vector4 vuMatrix;
  Vector3 vuVector3;
  uint8 vertexId;
  uint8 a;
  uint8 b;
  uint8 c;
};

struct VERTEXLIST
{
  int iNumVertex;
};

struct RotationAxis
{
  Vector4 x;
  Vector4 y;
  Vector4 z;
};

struct SGDCOORDINATE
{
  RotationAxis rotationAxis;
  Vector4 coordinates;
  float fCoordArray[8][4];
  Vector4 rotation;
  SGDCOORDINATE *pParent;
  int pad[3];
};

struct SGDMATERIAL
{
  unsigned int uiFlag;
  char textureName[12];
  Color diffuse;
  Color color2;
  Color color3;
  Color color4;
  unsigned char unknown_0x50[0x20];
  uint64_t GsTex0;
  unsigned char unknown_0x78[0x38];
};

struct SGDVECTORBSP
{
  uint iChildType;
  VertexPoint *pVertex;
  VertexPoint *pNormal;

  /// pTable
  VERTEXLIST *pParent;
};

struct SGDVECTORINFO
{
  uint iNumBlockInfo;
  SGDVECTORBSP sgdVectorBsp[];
};

struct SGDPROCUNITHEADER
{
  SGDPROCUNITHEADER *pNext;
  int iCategory;
  uint procInfo;
  uint8_t a;
  uint8_t mtype;
  uint8_t b;
  uint8_t c;
};

struct SGDFILEHEADER
{
  uint uiVersionId;
  bool fileInitialized;
  char pad;
  short numMaterial;

  /// Bones of the model
  SGDCOORDINATE *pCoord;
  SGDMATERIAL *pMaterial;

  /// Vertices of the model
  SGDVECTORINFO *pVectorInfo;
  uint uiNumBlock;

  /// There are as many iterations as uiNumBlock
  SGDPROCUNITHEADER *pProcUnit[];
};

struct SgLightCoord
{
  uint8_t unknown1[0x60];
  Vector4 pos0;
  Vector4 pos1;
  Vector4 pos2;
  Vector4 intens;
  Vector4 intens_b;
  Vector4 WDLightMtx[3];
  Vector4 SLightMtx[3];
};

struct SgLightSpot
{
  int u1;
  int u2;
  int u3;
  int u4;
  Vector4 btimes;
  Vector4 DColor[3];
  Vector4 SColor[3];
};