#pragma once
#include <cstdint>

constexpr auto SGD_VALID_VERSIONID = 0x1050;

typedef uint8_t         uint8;
typedef unsigned int    uint;
typedef unsigned int    undefined4;
typedef unsigned int    undefined4;

typedef struct Vector3 {
    float x;
    float y;
    float z;
};

typedef struct Vector4 {
    float x;
    float y;
    float z;
    float w;
};

typedef struct VertexPoint {
    Vector4 vuMatrix;
    Vector3 vuVector3;
    uint8 vertexId;
    uint8 a;
    uint8 b;
    uint8 c;
};

typedef struct VERTEXLIST {
    int iNumVertex;
};

typedef struct RotationAxis {
    Vector4 x;
    Vector4 y;
    Vector4 z;
};

typedef struct SGDCOORDINATE {
    RotationAxis rotationAxis;
    Vector4 coordinates;
    float fCoordArray[8][4];
    Vector4 rotation;
    SGDCOORDINATE* pParent;
    undefined4 field_0xd4;
    undefined4 field_0xd8;
    undefined4 field_0xdc;
};

typedef struct SGDMATERIAL {
    char a[0xb0];
};

typedef struct SGDVECTORBSP {
    uint iChildType;
    VertexPoint* pChildLeft;
    VertexPoint* pChildRight;
    VERTEXLIST* pParent;
};

typedef struct SGDVECTORINFO {
    uint iNumBlockInfo;
    SGDVECTORBSP sgdVectorBsp[];
};

typedef struct SGDPROCUNITHEADER {
    SGDPROCUNITHEADER* pNext;
    int iCategory;
    uint procInfo;
    char a;
    uint8_t mtype;
    char b;
    char c;
};

typedef struct SGDFILEHEADER {
    uint uiVersionId;
    bool fileInitialized;
    char field_0x5;
    char field_0x6;
    bool field_0x7;
    SGDCOORDINATE* pCoord;
    SGDMATERIAL* pMaterial;
    SGDVECTORINFO* pVectorInfo;
    uint uiNumBlock;

    /// There are as many iterations as uiNumBlock
    SGDPROCUNITHEADER* pProcUnit[];
};