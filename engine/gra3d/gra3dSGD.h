#pragma once
#include "sgd/sgd_types.h"

struct GRA3DSGDCREATIONDATA
{
  float *buffer[3];
  int bufferSize;
};

static GRA3DSGDCREATIONDATA sgdCreate;

inline float **pGlobalVertexBuffer;
inline float **pGlobalNormalBuffer;
static int iGlobalBufferSize;

inline SGDPROCUNITHEADER *previous_prim;

void gra3dsgdInit(GRA3DSGDCREATIONDATA *sgd);
void SgSetVNBuffer(float *buf[3], int bufSize);
void SetPreviousTri2Prim(SGDPROCUNITHEADER *sgdProc);