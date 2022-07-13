#include "gra3dSGD.h"


void gra3dsgdInit(GRA3DSGDCREATIONDATA* sgd)
{
    SgSetVNBuffer(sgd->buffer, sgd->bufferSize);
}

void SgSetVNBuffer(float** buf, int bufSize)
{
    GlobalVertexBuffer = buf;
    GlobalNormalBuffer[bufSize] = buf[(bufSize / 2) * 4];
    iGlobalBufferSize = bufSize / 2;
}

void SetPreviousTri2Prim(SGDPROCUNITHEADER* sgdProc)
{
    previous_prim = sgdProc;
}