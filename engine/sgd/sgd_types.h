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
typedef unsigned long long u8l;

enum MTYPE
{
  iMT_0 = 0x10,
  iMT_2 = 0x12,
  iMT_2F = 0x32
};

enum ProcUnitType : int
{
  VUVN = 0,
  MESH = 1,
  MATERIAL = 2,
  COORDINATE = 3,
  BOUNDING_BOX = 4,
  GS_IMAGE = 5,
  TRI2 = 10
};

struct RotationAxis
{
  Vector4 x;
  Vector4 y;
  Vector4 z;
  Vector4 coordinates;
};

struct SGDVUVNDATA_WEIGHTED
{
  // ORIGINAL CODE: unsigned char auc0[224]
  Vector3 v1;
  float fBoneWeight;
  Vector3 v2;
  // END

  unsigned char ucBoneId0;
  unsigned char ucBoneId1;
  unsigned char auc1[2];
};

struct BONEINFO
{
  unsigned short usBoneIndex1;
  unsigned short usBoneIndex2;
  uint32_t uiNumVertex;
};

struct VERTEXLIST
{
  int list_num;
  BONEINFO *lists;
};

struct SGDCOORDINATE
{
  RotationAxis matCoord;
  Matrix4x4 matLocalWorld;
  Matrix4x4 _matWork;
  Vector4 vRot;
  SGDCOORDINATE *pParent;
  int bCalc;
  int edge_check;
  int bInViewvolume;
};

struct SGDMATERIAL
{
  uint uiPrimType;
  char strTexName[12];
  Vector4 vAmbient;
  Vector4 vDiffuse;
  Vector4 vSpecular;
  Vector4 vEmission;
  int iCacheStatus;
  int iTagAddressOld;
  int iSizeOld;
  int iPad;
  char aCache[0x30];
  int aiPad[8];
};

struct SGDVECTORADDRESS
{
  uint32_t uiSize;
  SGDVUVNDATA_WEIGHTED *pvVertex;
  SGDVUVNDATA_WEIGHTED *pvNormal;
  VERTEXLIST *pVertexList;
};

struct SGDVECTORINFO
{
  uint uiNumAddress;
  SGDVECTORADDRESS aAddress[];
};

struct SGDVUVNDESC
{
  short sNumVertex;
  short sNumNormal;
  unsigned char ucSize;
  unsigned char ucVectorType;
  unsigned char aucPad[2];
};

struct SGDVUMESHDESC
{
  int iTagSize;
  unsigned char ucPad0;
  unsigned char u1MeshType;
  unsigned char ucMeshType;
  unsigned char ucNumMesh;
  unsigned char ucPad1;
};

/// Should be 64 bits...
struct SGDVUMATERIALDESC
{
  uint32_t u4iMaterialIndex;
  SGDMATERIAL pMat;
  int iPad;
};

struct SGDCOORDINATEDESC
{
  int iCoordId0;
  int iCoordId1;
};

struct SGDBOUNDINGBOXDESC
{
  int iCoordId;
  int iPad;
};

struct SGDGSIMAGEDESC
{
  int iQWordSize;
  int iPad;
};

struct SGDLIGHTDESC
{
  int Type;
  int iNum;
};

struct SGDTEXTUREIMAGEDESC
{
  int iNumTexture;
  int iPaddingSize;
};

struct SGDTEXTUREANIMATIONDESC
{
  unsigned char ucNumTexture;
  unsigned char ucPaddingSize;
  bool bEnable;
  unsigned char ucStep;
  unsigned char ucCount;
  bool bLoop;
  unsigned char aucPad;
};

struct SGDPROCUNITHEADER
{
  SGDPROCUNITHEADER *pNext;
  ProcUnitType iCategory;
  union
  {
    u8l u8lPrimType;
    SGDVUVNDESC VUVNDesc;
    SGDVUMESHDESC VUMeshDesc;
    SGDVUMATERIALDESC VUMaterialDesc;
    SGDCOORDINATEDESC CoordDesc;
    SGDBOUNDINGBOXDESC BoundingBoxDesc;
    SGDGSIMAGEDESC GSImageDesc;
    SGDLIGHTDESC LightDesc;
    SGDTEXTUREIMAGEDESC TexDesc;
    SGDTEXTUREANIMATIONDESC TexAnimDesc;
  };
};

struct SGDFILEHEADER
{
  uint uiVersionId;
  unsigned char ucMapFlag;
  unsigned char ucModelType;
  unsigned short usNumMaterial;

  /// Bones of the model
  SGDCOORDINATE *pCoord;
  SGDMATERIAL *pMaterial;

  /// Vertices of the model
  SGDVECTORINFO *pVectorInfo;
  uint uiNumBlock;

  /// There are as many iterations as uiNumBlock
  SGDPROCUNITHEADER *apProcUnitHead[];
};