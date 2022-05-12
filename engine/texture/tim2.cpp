#include <stdio.h>
#include "tim2.h"

/// Checks if the header ID is valid
/// Arguments
///         pTim2FileHeader: 	TIM2 file header
/// Returns
///     0 when there was an error
///     1 for TIM2
///     2 for CLT2
int Tim2CheckFileHeader(TIM2_FILEHEADER *pTim2FileHeader)
{
  int returnCode;

  if (pTim2FileHeader->FileId[0] == 'T' || pTim2FileHeader->FileId[1] == 'I' || pTim2FileHeader->FileId[2] == 'M' || pTim2FileHeader->FileId[3] == '2')
  {
    returnCode = 1;
  }
  else if (pTim2FileHeader->FileId[0] == 'C' || pTim2FileHeader->FileId[1] == 'L' || pTim2FileHeader->FileId[2] == 'T' || pTim2FileHeader->FileId[3] == '2')
  {
    returnCode = 2;
  }
  else
  {
    returnCode = 0;
  }

  if(!(pTim2FileHeader->Version == 0x03 || (pTim2FileHeader->Version == 0x04 && (pTim2FileHeader->FormatId == 0x00 || pTim2FileHeader->FormatId == 0x01))) && returnCode != 0)
  {
    returnCode = 0;
  }

  if (returnCode == 0)
  {
    printf("Invalid TIM2 file");
  }

  return returnCode;
}

/// Get picture header corresponding to specified number
/// Arguments
///         pTim2FileHeader: 	TIM2 file header
///         numPictureHeader:	Specification of the number of the picture header to reference
/// Returns
///			Pointer to picture header
TIM2_PICTUREHEADER *Tim2GetPictureHeader(TIM2_FILEHEADER *pTim2FileHeader, int numPictureHeader)
{
  TIM2_PICTUREHEADER *pPictureHeader;

  if (pTim2FileHeader->PictureDataPartsCount <= numPictureHeader)
  {
    printf("Tim2GetPictureHeader: Illegal image no.(%d)\n", numPictureHeader);
    return nullptr;
  }

  if (pTim2FileHeader->FormatId == 0x00)
  {
    pPictureHeader = (TIM2_PICTUREHEADER *) ((char *)pTim2FileHeader + sizeof(TIM2_FILEHEADER));
  }
  else
  {
    pPictureHeader = (TIM2_PICTUREHEADER *) ((char *)pTim2FileHeader + 0x80);
  }

  for (int i = 0; i < numPictureHeader; i++)
  {
    pPictureHeader = (TIM2_PICTUREHEADER *) ((char *) pPictureHeader + pPictureHeader->TotalSize);
  }

  return pPictureHeader;
}

/// Decide whether or not picture data is CLUT2 data
/// Arguments
///         pTim2PictureHeader:		TIM2 picture header
/// Returns
///			0 for TIM2
///			1 for CLUT2
int Tim2IsClut2(TIM2_PICTUREHEADER *pTim2PictureHeader)
{
  return pTim2PictureHeader->MipMapTexturesCount == 0;
}

/// Get texture size of each MIPMAP level
/// Arguments
///         pTim2PictureHeader:		        TIM2 picture header
///         mipMapLevel:	                MIPMAP texture level
///         pWidth:	                        Pointer to int X size
///         pHeight:	                    Pointer to int Y size
/// Returns
///			MIPMAP texture size
int Tim2GetMipMapPictureSize(TIM2_PICTUREHEADER *pTim2PictureHeader, int mipMapLevel, int *pWidth, int *pHeight)
{
  int width = pTim2PictureHeader->ImageWidth >> mipMapLevel;
  int height = pTim2PictureHeader->ImageHeight >> mipMapLevel;

  if (pWidth)
  {
    *pWidth  = width;
  }

  if (pHeight)
  {
    *pHeight = height;
  }

  int textureSize = width * height;

  switch(pTim2PictureHeader->ImageColorType) {
    case RGBA16:  textureSize *= 2;		break;
    case RGB32:   textureSize *= 3;		break;
    case RGBA32:  textureSize *= 4;		break;
    case IDTEX4:  textureSize /= 2;		break;
    case IDTEX8:				        break;
  }

  textureSize = (textureSize + 15) & ~15;

  return textureSize;
}

/// Get MIPMAP header address and size
/// Arguments
///         pTim2PictureHeader:		TIM2 picture header
///         pMipMapHeaderSize:	    Pointer to int for MIPMAP header size
///			                        When size is not required, set to nullptr
/// Returns
///			nullptr for no MIPMAP header
///			TIM2_MIPMAPHEADER pointer for MIPMAP header
TIM2_MIPMAPHEADER *Tim2GetMipMapHeader(TIM2_PICTUREHEADER *pTim2PictureHeader, int *pMipMapHeaderSize)
{
  TIM2_MIPMAPHEADER *pMipMapHeader;

  if (pTim2PictureHeader->MipMapTexturesCount > 1)
  {
    pMipMapHeader = (TIM2_MIPMAPHEADER *) ((char *) pTim2PictureHeader + sizeof(TIM2_PICTUREHEADER));
  }
  else
  {
    pMipMapHeader = nullptr;
  }

  if (pMipMapHeaderSize)
  {
    *pMipMapHeaderSize = MipMapHeaderSize[pTim2PictureHeader->MipMapTexturesCount];
  }

  return pMipMapHeader;
}

/// Get user space address and size
/// Arguments
///         pTim2PictureHeader:		TIM2 picture header
///         pUserSpaceSize:	        Pointer to int for user space size
///			                        When size is not required, set to nullptr
/// Returns
///			nullptr for no user space
///			not nullptr for user space
void *Tim2GetUserSpace(TIM2_PICTUREHEADER *pTim2PictureHeader, int *pUserSpaceSize)
{
  unsigned int mipMapHeaderOffset = sizeof(TIM2_PICTUREHEADER) + MipMapHeaderSize[pTim2PictureHeader->MipMapTexturesCount];

  if (pTim2PictureHeader->HeaderSize == mipMapHeaderOffset)
  {
    if (pUserSpaceSize)
    {
      *pUserSpaceSize = 0;
    }

    return nullptr;
  }

  void * pUserSpace = (void *)((char *) pTim2PictureHeader + mipMapHeaderOffset);

  if (pUserSpaceSize)
  {
    TIM2_EXHEADER * pExtendedHeader = (TIM2_EXHEADER*) pUserSpace;

    if (pExtendedHeader->ExtendedHeaderId[0] != 'e' || pExtendedHeader->ExtendedHeaderId[1] != 'X' || pExtendedHeader->ExtendedHeaderId[2] != 't' || pExtendedHeader->ExtendedHeaderId[3] != 0x00)
    {
      *pUserSpaceSize = (pTim2PictureHeader->HeaderSize - mipMapHeaderOffset);
    }
    else
    {
      *pUserSpaceSize = (int) pExtendedHeader->UserSpaceSize;
    }
  }

  return pUserSpace;
}

/// Get image data for specified MIPMAAP level
/// Arguments
///         pTim2PictureHeader:		TIM2 picture header
///         mipMapLevel:	        MIPMAP texture level
/// Returns
///			nullptr for no relevant image data
///			not nullptr for image data
void *Tim2GetImage(TIM2_PICTUREHEADER *pTim2PictureHeader, int mipMapLevel)
{
  if (mipMapLevel >= pTim2PictureHeader->MipMapTexturesCount)
  {
    return nullptr;
  }

  void *pImageData = (void*) ((char*) pTim2PictureHeader + pTim2PictureHeader->HeaderSize);

  if (pTim2PictureHeader->MipMapTexturesCount == 1)
  {
    return pImageData;
  }

  TIM2_MIPMAPHEADER *pm = (TIM2_MIPMAPHEADER*) ((char*) pTim2PictureHeader + sizeof(TIM2_PICTUREHEADER));

  for (int i = 0; i < mipMapLevel; i++)
  {
    pImageData = (void*) ((char*) pImageData + pm->MMImageSize[i]);
  }

  return pImageData;
}

/// Get CLUT data
/// Arguments
///         pTim2PictureHeader:		TIM2 picture header
/// Return value
///			nullptr for no relevant CLUT data exists
///			not nullptr for CLUT data
void *Tim2GetClut(TIM2_PICTUREHEADER *pTim2PictureHeader)
{
  void *pClut;

  if (pTim2PictureHeader->ClutColorsCount == 0)
  {
    pClut = nullptr;
  }
  else
  {
    pClut = (void*) ((char*) pTim2PictureHeader + pTim2PictureHeader->HeaderSize + pTim2PictureHeader->ImageDataSize);
  }

  return pClut;
}

/// Get CLUT color
/// Arguments
///         pTim2PictureHeader:		TIM2 picture header
///         clut:	                CLUT set specification
///         index:		            Index of CLUT to obtain
/// Returns
///			RGBA32 color, when valid
///         Black when invalid
unsigned int Tim2GetClutColor(TIM2_PICTUREHEADER *pTim2PictureHeader, int clut, int index)
{
  int numColorData;
  unsigned char r, g, b, a;

  unsigned char *pClutData = static_cast<unsigned char *>(Tim2GetClut(pTim2PictureHeader));

  if (pClutData == nullptr)
  {
    return 0;
  }

  switch(pTim2PictureHeader->ImageColorType)
  {
    case IDTEX4:
      numColorData = clut * 16 + index;
      break;
    case IDTEX8:
      numColorData = clut * 256 + index;
      break;
    default:
      return 0;
  }

  if (numColorData > pTim2PictureHeader->ClutColorsCount)
  {
    return 0;
  }

  switch((pTim2PictureHeader->ClutColorType << 8) | pTim2PictureHeader->ImageColorType)
  {
    case (((RGBA16 | 0x40) << 8) | IDTEX4):
    case (((RGB32 | 0x40) << 8) | IDTEX4):
    case (((RGBA32 | 0x40) << 8) | IDTEX4):
    case ((RGBA16 << 8) | IDTEX8):
    case ((RGB32 << 8) | IDTEX8):
    case ((RGBA32 << 8) | IDTEX8):

      if ((numColorData & 31) >= 8)
      {
        if ((numColorData & 31) < 16)
        {
          numColorData += 8;
        }
        else if ((numColorData & 31) < 24)
        {
          numColorData -= 8;
        }
      }

      break;
  }

  switch(pTim2PictureHeader->ClutColorType & 0x3F) {
    case RGBA16:
      r = (unsigned char) ((((pClutData[numColorData * 2 + 1] << 8) | pClutData[numColorData * 2]) << 3) & 0xF8);
      g = (unsigned char) ((((pClutData[numColorData * 2 + 1] << 8) | pClutData[numColorData * 2]) >> 2) & 0xF8);
      b = (unsigned char) ((((pClutData[numColorData * 2 + 1] << 8) | pClutData[numColorData * 2]) >> 7) & 0xF8);
      a = (unsigned char) ((((pClutData[numColorData * 2 + 1] << 8) | pClutData[numColorData * 2]) >> 8) & 0x80);
      break;

    case RGB32:
      r = pClutData[numColorData * 3];
      g = pClutData[numColorData * 3 + 1];
      b = pClutData[numColorData * 3 + 2];
      a = 0x80;
      break;

    case RGBA32:
      r = pClutData[numColorData * 4];
      g = pClutData[numColorData * 4 + 1];
      b = pClutData[numColorData * 4 + 2];
      a = pClutData[numColorData * 4 + 3];
      break;

    default:
      r = 0;
      g = 0;
      b = 0;
      a = 0;
      break;
  }

  return (unsigned int) ((a << 24) | (g << 16) | (b << 8) | r);
}

/// Get texel data
/// Arguments
///         pTim2PictureHeader:		TIM2 picture header
///         mipMapLevel:	        MIPMAP texture level
///         x:		                Texel X coord
///         y:		                Texel Y coord
/// Returns
///			Information about the color
unsigned int Tim2GetTexel(TIM2_PICTUREHEADER *pTim2PictureHeader, int mipMapLevel, int x, int y)
{
  unsigned char *pImage = static_cast<unsigned char *>(Tim2GetImage(pTim2PictureHeader, mipMapLevel));

  if (pImage == nullptr)
  {
    return 0;
  }

  int width, height;

  Tim2GetMipMapPictureSize(pTim2PictureHeader, mipMapLevel, &width, &height);

  if (x > width || y > height)
  {
    return 0;
  }

  int t = y * width + x;

  switch(pTim2PictureHeader->ImageColorType)
  {
    case RGBA16:
      return (u_int) ((pImage[t * 2 + 1] << 8) | pImage[t * 2]);

    case RGB32:
      return (u_int) ((pImage[ t *3 + 2] << 16) | (pImage[t * 3 + 1] << 8) | pImage[t * 3]);

    case RGBA32:
      return (u_int) ((pImage[t * 4 + 3] << 24) | (pImage[t * 4 + 2] << 16) | (pImage[t * 4 + 1] << 8) | pImage[t * 4]);

    case IDTEX4:
      if (x & 1)
      {
        return (u_int) (pImage[t / 2] >> 4);
      }
      else
      {
        return (u_int) (pImage[t / 2] & 0x0F);
      }

    case IDTEX8:
      return ((u_int) pImage[t]);
  }

  return 0;
}

/// Get texture color
/// Arguments
///         pTim2PictureHeader:		TIM2 picture header
///         mipMapLevel:	        MIPMAP texture level
///         clut:	                CLUT num index color conversion
///         x:		                Texel X coord
///         y:		                Texel Y coord
/// Returns
///			RGBA32 color, when valid
///         Black when invalid
unsigned int Tim2GetTextureColor(TIM2_PICTUREHEADER *pTim2PictureHeader, int mipMapLevel, int clut, int x, int y)
{
  if (Tim2GetImage(pTim2PictureHeader, mipMapLevel) == nullptr)
  {
    return 0;
  }

  unsigned int texelData = Tim2GetTexel(pTim2PictureHeader, mipMapLevel, (x >> mipMapLevel), (y >> mipMapLevel));

  switch(pTim2PictureHeader->ImageColorType)
  {
    case RGBA16:
      unsigned char r, g, b, a;
      r = (unsigned char) ((texelData << 3) & 0xF8);
      g = (unsigned char) ((texelData >> 2) & 0xF8);
      b = (unsigned char) ((texelData >> 7) & 0xF8);
      a = (unsigned char) ((texelData >> 8) & 0x80);
      return (u_int) ((a << 24) | (g << 16) | (b << 8) | r);

    case RGB32:
      return ((0x80 << 24) | (texelData & 0x00FFFFFF));

    case RGBA32:
      return texelData;

    case IDTEX4:
    case IDTEX8:
      return (u_int) (Tim2GetClutColor(pTim2PictureHeader, clut, (int) texelData));
  }

  return 0;
}