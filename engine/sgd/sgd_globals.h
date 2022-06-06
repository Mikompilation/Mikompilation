#pragma once

#include "sgd_types.h"

inline void *SgLightParallelp;
inline void *SgLightPointp;

inline SgLightSpot *SgLightSpotp;
inline Matrix4x4 SgWSMtx;

inline int SgPointGroupNum, SgPointNum, SgSpotGroupNum, SgSpotNum = 0;

inline SgLightCoord MaterialCoord;
inline SgLightCoord *SgLightCoordp;
inline SGDPROCUNITHEADER *vuvnprim;
inline SGDPROCUNITHEADER *nextprim;
inline SGDCOORDINATE *lcp;
inline SgLightSpot DAT_70000370;

inline int blocksm = 0;
inline int write_counter = 0;
inline bool PresetChk = false;

inline Matrix4x4 shadow_prim;
inline Matrix4x4 shadow_prim_post;

// Unknown Globals
inline void *DAT_70000300;
inline void *DAT_700003f0;
