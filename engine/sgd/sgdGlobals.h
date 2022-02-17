#include "sgdTypes.h"

void *SgLightParallelp;
void *SgLightPointp;

SgLightSpot *SgLightSpotp;
Matrix4x4 SgWSMtx;

int SgPointGroupNum, SgPointNum, SgSpotGroupNum, SgSpotNum = 0;

SgLightCoord MaterialCoord;
SgLightCoord *SgLightCoordp;
SGDPROCUNITHEADER *vuvnprim;
SGDPROCUNITHEADER *nextprim;
SGDCOORDINATE *lcp;
SgLightSpot DAT_70000370;

int blocksm = 0;
int write_counter = 0;
bool PresetChk = false;

Matrix4x4 shadow_prim;
Matrix4x4 shadow_prim_post;

// Unknown Globals
void *DAT_70000300;
void *DAT_700003f0;
