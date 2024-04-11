#ifndef MIKOMPILATION_SGD_TYPES_H
#define MIKOMPILATION_SGD_TYPES_H

#include "../../../sce/sce_types.h"

typedef float VECTOR3[3];
typedef unsigned int void_type[4];
typedef unsigned int u_int;
typedef unsigned int uint;
typedef unsigned char u_char;
typedef unsigned short u_short;
typedef unsigned long ulong;

typedef enum {
    LID_DIRECTIONAL_0 = 0,
    LID_DIRECTIONAL_1 = 1,
    LID_DIRECTIONAL_2 = 2,
    LID_POINT_0 = 3,
    LID_POINT_1 = 4,
    LID_POINT_2 = 5,
    LID_POINT_3 = 6,
    LID_POINT_4 = 7,
    LID_POINT_5 = 8,
    LID_POINT_6 = 9,
    LID_POINT_7 = 10,
    LID_POINT_8 = 11,
    LID_POINT_9 = 12,
    LID_POINT_10 = 13,
    LID_POINT_11 = 14,
    LID_POINT_12 = 15,
    LID_POINT_13 = 16,
    LID_POINT_14 = 17,
    LID_POINT_15 = 18,
    LID_POINT_FLASHLIGHT_0 = 19,
    LID_POINT_FLASHLIGHT_1 = 20,
    LID_POINT_SELFREFLECTION = 21,
    LID_SPOT_0 = 22,
    LID_SPOT_1 = 23,
    LID_SPOT_2 = 24,
    LID_SPOT_3 = 25,
    LID_SPOT_4 = 26,
    LID_SPOT_5 = 27,
    LID_SPOT_6 = 28,
    LID_SPOT_7 = 29,
    LID_SPOT_8 = 30,
    LID_SPOT_9 = 31,
    LID_SPOT_10 = 32,
    LID_SPOT_11 = 33,
    LID_SPOT_12 = 34,
    LID_SPOT_13 = 35,
    LID_SPOT_14 = 36,
    LID_SPOT_15 = 37,
    LID_SPOT_FLASHLIGHT = 38,
    NUM_GRA3DLIGHTID = 39,
    GRA3D_START_LIGHT_DIRECTIONAL = 0,
    GRA3D_END_LIGHT_DIRECTIONAL = 2,
    GRA3D_NUM_LIGHT_DIRECTIONAL = 3,
    GRA3D_START_LIGHT_POINT = 3,
    GRA3D_END_LIGHT_POINT = 21,
    GRA3D_NUM_LIGHT_POINT = 19,
    GRA3D_NUM_LIGHT_POINT_STATIC = 16,
    GRA3D_START_LIGHT_SPOT = 22,
    GRA3D_END_LIGHT_SPOT = 38,
    GRA3D_NUM_LIGHT_SPOT = 17,
    GRA3D_NUM_LIGHT_SPOT_STATIC = 16,
    INVALID_GRA3DLIGHTID = 2147483647,
    GRA3DLIGHTID_FORCE_DWORD = 2147483647
} GRA3DLIGHTID;

typedef enum {
    SRT_REALTIME = 0,
    SRT_PRELIGHTING = 1,
    SRT_MAPSHADOW = 2,
    SRT_CLEARPRELIGHTING = 3,
    NUM_SGDRENDERTYPE = 4
} SGDRENDERTYPE;

typedef enum {
    G3DLIGHT_DIRECTIONAL = 0,
    G3DLIGHT_POINT = 1,
    G3DLIGHT_SPOT = 2,
    NUM_G3DLIGHTTYPE = 3,
    G3DLIGHT_AMBIENT = 3,
    INVALID_G3DLIGHTTYPE = 2147483647,
    G3DLIGHTTYPE_FORCE_DWORD = 2147483647
} G3DLIGHTTYPE;

struct G3DLIGHT {
    /* 0x00 */ sceVu0FVECTOR vDiffuse;
    /* 0x10 */ sceVu0FVECTOR vSpecular;
    /* 0x20 */ sceVu0FVECTOR vAmbient;
    /* 0x30 */ sceVu0FVECTOR vPosition;
    /* 0x40 */ sceVu0FVECTOR vDirection;
    /* 0x50 */ G3DLIGHTTYPE Type;
    /* 0x54 */ float fAngleInside;
    /* 0x58 */ float fAngleOutside;
    /* 0x5c */ float fMaxRange;
    /* 0x60 */ float fMinRange;
    /* 0x64 */ float fFalloff;
    /* 0x68 */ float afPad0[2];
};

typedef G3DLIGHTTYPE SGDLIGHTTYPE;

struct G3DVIF1CODE_UNPACK { // 0x4
    /* 0x0:0 */ unsigned int ADDR: 10;
    /* 0x1:2 */ unsigned int pad: 4;
    /* 0x1:6 */ unsigned int USN: 1;
    /* 0x1:7 */ unsigned int FLG: 1;
    /* 0x2:0 */ unsigned int NUM: 8;
    /* 0x3:0 */ unsigned int CMD: 8;
};

struct GRA3DMATERIALINDEXCACHE {
    /* 0x0 */ int bEnable;
    /* 0x4 */ int aiIndex[3];
};

typedef GRA3DMATERIALINDEXCACHE SGDMATERIALCACHE;
struct SGDMATERIAL { // 0xb0
    /* 0x00 */ unsigned int uiPrimType;
    /* 0x04 */ char strTexName[12];
    /* 0x10 */ float vAmbient[4];
    /* 0x20 */ float vDiffuse[4];
    /* 0x30 */ float vSpecular[4];
    /* 0x40 */ float vEmission[4];
    /* 0x50 */ int iCacheStatus;
    /* 0x54 */ unsigned int iTagAddressOld;
    /* 0x58 */ int iSizeOld;
    /* 0x5c */ int iPad;
    /* 0x60 */ SGDMATERIALCACHE aCache[3];
    /* 0x90 */ int aiPad[8];
};

struct _VECTORINDEX { // 0x8
    /* 0x0 */ unsigned int uiVertexId;
    /* 0x4 */ unsigned int uiNormalId;
};

struct _VECTORADDRESS { // 0x8
    /* 0x0 */ sceVu0FVECTOR *pVertex;
    /* 0x4 */ sceVu0FVECTOR *pNormal;
};

union _VECTORDATA { // 0x8
    /* 0x0 */ _VECTORINDEX vIndex;
    /* 0x0 */ _VECTORADDRESS vAddress;
};

struct SGDVUVNDESC { // 0x8
    /* 0x0 */ short int sNumVertex;
    /* 0x2 */ short int sNumNormal;
    /* 0x4 */ unsigned char ucSize;
    /* 0x5 */ unsigned char ucVectorType;
    /* 0x6 */ unsigned char aucPad[2];
};

struct SGDVUVNDATA {
    /* 0x00 */ qword qwVif1Code __attribute__((aligned(128)));
    /* 0x10 */ unsigned int uiVTop;
    /* 0x14 */ unsigned int uiPTop;
    /* 0x18 */ unsigned int uiWTop;
    /* 0x1c */ unsigned int uiNumMesh;
};

struct _SGDVUMESHCOLORDATA { // 0x10
    /* 0x0 */ G3DVIF1CODE_UNPACK VifUnpack;
    /* 0x4 */ VECTOR3 avColor[1];
};

struct SGDMESHVERTEXDATA_TYPE2 { // 0x18
    /* 0x00 */ VECTOR3 vVertex;
    /* 0x0c */ VECTOR3 vNormal;
};

struct SGDMESHVERTEXDATA_TYPE2F { // 0xc
    /* 0x0 */ VECTOR3 avNormal[1];
};

struct SGDVUVNDATA_PRESET { // 0x40
    /* 0x00 */ unsigned int aui[10];
    /* 0x28 */ union { // 0x18
        /* 0x28 */ SGDMESHVERTEXDATA_TYPE2 avt2[1];
        /* 0x28 */ SGDMESHVERTEXDATA_TYPE2F vt2f;
    };
};

struct SGDVUVNDATA_WEIGHTED { // 0x20
    /* 0x00 */ unsigned char auc0[28];
    /* 0x1c */ unsigned char ucBoneId0;
    /* 0x1d */ unsigned char ucBoneId1;
    /* 0x1e */ unsigned char auc1[2];
};

struct SGDVUMESHTYPE { // 0x1
    /* 0x0:0 */ unsigned char GRD: 1;
    /* 0x0:1 */ unsigned char TEX: 1;
    /* 0x0:2 */ unsigned char VTYPE: 2;
    /* 0x0:4 */ unsigned char PRE: 1;
    /* 0x0:5 */ unsigned char FLAT: 1;
    /* 0x0:6 */ unsigned char MULTI: 1;
    /* 0x0:7 */ unsigned char NVL: 1;
};

struct SGDVUMESHDESC { // 0x8
    /* 0x0 */ int iTagSize;
    /* 0x4 */ unsigned char ucPad0;
    /* 0x5 */ union { // 0x1
        /* 0x5 */ SGDVUMESHTYPE MeshType;
        /* 0x5 */ unsigned char ucMeshType;
    };
    /* 0x6 */ unsigned char ucNumMesh;
    /* 0x7 */ unsigned char ucPad1;
};

struct SGDVUMESHDATA { // 0x20
    /* 0x00 */ qword qwVif1Code;
    /* 0x10 */ void_type GifTag;
};

struct SGDVUMESHDATA_PRESET { // 0x18
    /* 0x00 */ short int asPad0[2];
    /* 0x04 */ short int sOffsetToST;
    /* 0x06 */ short int sOffsetToPrim;
    /* 0x08 */ int aiPad1[2];
    /* 0x10 */ long int alData[1];
};

struct SGDVUMATERIALDESC { // 0x8
    /* 0x0 */ union { // 0x4
        /* 0x0 */ int iMaterialIndex;
        /* 0x0 */ SGDMATERIAL *pMat;
    };
    /* 0x4 */ int iPad;
};

struct SGDCOORDINATEDESC { // 0x8
    /* 0x0 */ int iCoordId0;
    /* 0x4 */ int iCoordId1;
};

struct SGDBOUNDINGBOXDESC { // 0x8
    /* 0x0 */ int iCoordId;
    /* 0x4 */ int iPad;
};

struct SGDGSIMAGEDESC { // 0x8
    /* 0x0 */ int iQWordSize;
    /* 0x4 */ int iPad;
};

struct SGDGSIMAGEDATA { // 0x30
    /* 0x00 */ unsigned int auiVifCode[4];
    /* 0x10 */ void_type GT;
    /* 0x20 */ unsigned char aucData[1];
};

struct SGDTEXTUREIMAGEDESC { // 0x8
    /* 0x0 */ int iNumTexture;
    /* 0x4 */ int iPaddingSize;
};

struct SGDLIGHTDESC { // 0x8
    /* 0x0 */ SGDLIGHTTYPE Type;
    /* 0x4 */ int iNum;
};

struct SGDLIGHTDATA_DIRECTIONAL { // 0x20
    /* 0x00 */ float vColor[4];
    /* 0x10 */ float vDirection[4];
};

struct SGDLIGHTDATA_POINT { // 0x20
    /* 0x00 */ float vColor[4];
    /* 0x10 */ float vPosition[4];
};

struct SGDLIGHTDATA_SPOT { // 0x30
    /* 0x00 */ float vColor[4];
    /* 0x10 */ float vPosition[4];
    /* 0x20 */ float vTarget[4];
};

struct SGDLIGHTDATA_AMBIENT { // 0x10
    /* 0x0 */ float vColor[4];
};

struct SGDTEXTUREANIMATIONDESC { // 0x8
    /* 0x0 */ unsigned char ucNumTexture;
    /* 0x1 */ unsigned char ucPaddingSize;
    /* 0x2 */ unsigned char bEnable;
    /* 0x3 */ unsigned char ucStep;
    /* 0x4 */ unsigned char ucCount;
    /* 0x5 */ unsigned char bLoop;
    /* 0x6 */ unsigned char aucPad[2];
};

struct SGDPROCUNITHEADER { // 0x10
    /* 0x0 */ SGDPROCUNITHEADER *pNext;
    /* 0x4 */ int iCategory;
    /* 0x8 */ union { // 0x8
        /* 0x8 */ long int lPrimType;
        /* 0x8 */ SGDVUVNDESC VUVNDesc;
        /* 0x8 */ SGDVUMESHDESC VUMeshDesc;
        /* 0x8 */ SGDVUMATERIALDESC VUMaterialDesc;
        /* 0x8 */ SGDCOORDINATEDESC CoordDesc;
        /* 0x8 */ SGDBOUNDINGBOXDESC BoundingBoxDesc;
        /* 0x8 */ SGDGSIMAGEDESC GSImageDesc;
        /* 0x8 */ SGDLIGHTDESC LightDesc;
        /* 0x8 */ SGDTEXTUREIMAGEDESC TexDesc;
        /* 0x8 */ SGDTEXTUREANIMATIONDESC TexAnimDesc;
    };
};

union SGDPROCUNITDATA { // 0x80
    /* 0x00 */ SGDVUVNDATA VUVNData;
    /* 0x00 */ SGDVUMESHDATA VUMeshData;
    /* 0x00 */ SGDVUVNDATA_PRESET VUVNData_Preset;
    /* 0x00 */ SGDVUMESHDATA_PRESET VUMeshData_Preset;
    /* 0x00 */ unsigned char aucGSImage;
    /* 0x00 */ float avBB[8][4];
    /* 0x00 */ SGDLIGHTDATA_DIRECTIONAL alightDirectional[1];
    /* 0x00 */ SGDLIGHTDATA_POINT alightPoint[1];
    /* 0x00 */ SGDLIGHTDATA_SPOT alightSpot[1];
    /* 0x00 */ SGDLIGHTDATA_AMBIENT lightAmbient;
    /* 0x00 */ SGDGSIMAGEDATA GSImage;
};

typedef enum {
    SVA_UNIQUE = 0,
    SVA_COMMON = 1,
    SVA_WEIGHTED = 2,
    NUM_SGDVECTORADDRESSID = 3,
    SGDVECTORADDRESSID_FORCE_DWORD = -1
} SGDVECTORADDRESSID;

struct _ONELIST { // 0x8
    /* 0x0 */ short int sCoordId0;
    /* 0x2 */ short int sCoordId1;
    /* 0x4 */ unsigned short usNumVector;
    /* 0x6 */ unsigned short vOff;
};

struct _VERTEXLIST { // 0xc
    /* 0x0 */ int iNumList;
    /* 0x4 */ _ONELIST aList[1];
};

struct SGDVECTORADDRESS { // 0x10
    /* 0x0 */ unsigned int uiSize;
    /* 0x4 */ sceVu0FVECTOR *pvVertex;
    /* 0x8 */ sceVu0FVECTOR *pvNormal;
    /* 0xc */ _VERTEXLIST *pVertexList;
};

struct SGDVECTORINFO { // 0x34
    /* 0x00 */ unsigned int uiNumAddress;
    /* 0x04 */ SGDVECTORADDRESS aAddress[3];
};

struct SGDCOORDINATE { // 0xe0
    /* 0x00 */ float matCoord[4][4];
    /* 0x40 */ float matLocalWorld[4][4];
    /* 0x80 */ float _matWork[4][4];
    /* 0xc0 */ float vRot[4];
    /* 0xd0 */ SGDCOORDINATE *pParent;
    /* 0xd4 */ unsigned int bCalc;
    /* 0xd8 */ unsigned int edge_check;
    /* 0xdc */ int bInViewvolume;
} __attribute__((aligned (16)));

struct SGDFILEHEADER { // 0x20
    /* 0x00 */ unsigned int uiVersionId;
    /* 0x04 */ unsigned char ucMapFlag;
    /* 0x05 */ unsigned char ucModelType;
    /* 0x06 */ short unsigned int usNumMaterial;
    /* 0x08 */ SGDCOORDINATE *pCoord;
    /* 0x0c */ SGDMATERIAL *pMaterial;
    /* 0x10 */ SGDVECTORINFO *pVectorInfo;
    /* 0x14 */ unsigned int uiNumBlock;
    /* 0x18 */ SGDPROCUNITHEADER *apProcUnitHead[1];
    /* 0x1c */ int aiPad[1];
};

struct HeaderSection { // 0x1c
    /* 0x00 */ u_int VersionID;
    /* 0x04 */ u_char MAPFLAG;
    /* 0x05 */ u_char kind;
    /* 0x06 */ u_short materials;
    /* 0x08 */ SGDCOORDINATE *coordp;
    /* 0x0c */ SGDMATERIAL *matp;
    /* 0x10 */ u_int *phead;
    /* 0x14 */ u_int blocks;
    /* 0x18 */ u_int **primitives;
};

struct CoordCache { // 0x2c
    /* 0x00 */ int cache_on;
    /* 0x04 */ int edge_check;
    /* 0x08 */ int cn0;
    /* 0x0c */ GRA3DMATERIALINDEXCACHE Point;
    /* 0x1c */ GRA3DMATERIALINDEXCACHE Spot;
};

typedef enum {
    ITEM_MODEL_PACK_ORDER_SGD = 0,
    ITEM_MODEL_PACK_ORDER_TM2 = 1,
    ITEM_MODEL_PACK_ORDER_BWC = 2
} ITEM_MODEL_PACK_ORDER;

typedef enum {
    MAPMODELPK2_MODEL = 0,
    MAPMODELPK2_SOURCEMODEL = 1,
    MAPMODELPK2_SHADOWMODEL = 2
} MAPMODELPK2DATAINDEX;

enum ProcUnitType{
    VUVN = 0,
    MESH = 1,
    MATERIAL = 2,
    COORDINATE = 3,
    BOUNDING_BOX = 4,
    GS_IMAGE = 5,
    TRI2 = 10,
    END = 11,
    INVALID = 12,
    MonotoneTRI2 = 13,
    StackTRI2 = 14,
};

#define SGD_VALID_VERSIONID 0x1050
#define INVALID_SGD_OBJECTID -1

/// Refered to as "ch"
#define MODEL_TYPE_CHARACTER 0

/// Refered to as "f"
#define MODEL_TYPE_FURNITURE 1

/// Refered to as "d"
#define MODEL_TYPE_DOOR 2

/// Refered to as "i"
#define MODEL_TYPE_ITEM 3

/* inlined from sgd_types.h @ line 642 */
inline bool sgdIsPresetData(SGDFILEHEADER *pSGDTop) {
    return pSGDTop->ucModelType & 1;
}

#endif //MIKOMPILATION_SGD_TYPES_H
