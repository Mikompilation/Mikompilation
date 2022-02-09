#include "sgdTypes.h"

void *SgLightParallelp;
void *SgLightSpotp;
void *SgLightPointp;
void *SgWSMtx;
void *DAT_70000300;
void *DAT_70000370;
void *DAT_700003f0;

int SgPointGroupNum, SgPointNum, SgSpotGroupNum, SgSpotNum = 0;

SgLightCoord MaterialCoord;
SgLightCoord *SgLightCoordp;
SGDPROCUNITHEADER *vuvnprim;
SGDPROCUNITHEADER *nextprim;
SGDCOORDINATE *lcp;
int blocksm = 0;
int write_counter = 0;
bool PresetChk = false;

Matrix4x4 Matrix4x4_70000430;
Matrix4x4 Matrix4x4_70000090;
