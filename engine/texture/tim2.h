#pragma once
#include <iostream>
#include <cstdint>

typedef unsigned char uchar;
typedef unsigned int uint;
typedef unsigned short uint16;
typedef unsigned int u_int;
typedef int64_t uint64;

enum TIM2_gattr_type
{
  NO_CLUT = 0,

  /// 16-bit color for Clut and Image
  RGBA16,

  /// 24-bit color for Image
  RGB32,

  /// 32-bit color for Clut and Image
  RGBA32,

  /// 16-color texture for Image
  IDTEX4,

  /// 16-color texture for Image
  IDTEX8
};

struct TIM2_FILEHEADER
{
  uchar FileId[4];
  uchar Version;
  uchar FormatId;
  uint16 PictureDataPartsCount;
  uchar pad[8];
};

struct TIM2_PICTUREHEADER
{
  uint TotalSize;
  uint ClutDataSize;
  uint ImageDataSize;
  uint16 HeaderSize;
  uint16 ClutColorsCount;
  uchar PictFormat;
  uchar MipMapTexturesCount;
  uchar ClutColorType;
  uchar ImageColorType;
  uint16 ImageWidth;
  uint16 ImageHeight;
  uint64 GsTex0;
  uint64 GsTex1;
  uint GsFlags;
  uint GsTexClut;
};

struct TIM2_MIPMAPHEADER
{
  uint64 GsMiptbp1;
  uint64 GsMiptbp2;
  uint MMImageSize[];
};

struct TIM2_EXHEADER
{
  /// When valid is "ext\x00"
  uchar ExtendedHeaderId[4];
  uint UserSpaceSize;
  uint UserDataSize;
  uint Reserved;
};

struct Tim2Converted
{
  int Height;
  int Width;
  unsigned int *image;
};

static const char MipMapHeaderSize[] =
    {
        0,
        0,
        32,
        32,
        32,
        48,
        48,
        48
};

int Tim2CheckFileHeader(TIM2_FILEHEADER *pTim2FileHeader);
TIM2_PICTUREHEADER *Tim2GetPictureHeader(TIM2_FILEHEADER *pTim2FileHeader, int numPictureHeader);
int Tim2IsClut2(TIM2_PICTUREHEADER *pTim2PictureHeader);
int Tim2GetMipMapPictureSize(TIM2_PICTUREHEADER *pTim2PictureHeader, int mipMapLevel, int *pWidth, int *pHeight);
TIM2_MIPMAPHEADER *Tim2GetMipMapHeader(TIM2_PICTUREHEADER *pTim2PictureHeader, int *pMipMapHeaderSize);
void *Tim2GetUserSpace(TIM2_PICTUREHEADER *pTim2PictureHeader, int *pUserSpaceSize);
void *Tim2GetImage(TIM2_PICTUREHEADER *pTim2PictureHeader, int mipMapLevel);
void *Tim2GetClut(TIM2_PICTUREHEADER *pTim2PictureHeader);
unsigned int Tim2GetClutColor(TIM2_PICTUREHEADER *pTim2PictureHeader, int clut, int index);
unsigned int Tim2GetTexel(TIM2_PICTUREHEADER *pTim2PictureHeader, int mipMapLevel, int x, int y);
unsigned int Tim2GetTextureColor(TIM2_PICTUREHEADER *pTim2PictureHeader, int mipMapLevel, int clut, int x, int y);