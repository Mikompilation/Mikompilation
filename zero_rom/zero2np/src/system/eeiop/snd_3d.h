#pragma once

#include "../../../sce/sce_types.h"

struct _SND_3D_ENV
{
  float front;
  float side;
  float back;
  float vol_min;
  float farthest_dist;
  float nearest_dist;
};

struct _SND_3D_SET
{
  sceVu0FVECTOR *pos;
  sceVu0FVECTOR *vel;
  sceVu0FVECTOR *dir;
};

struct _VOLSET
{
  short int l;
  short int r;
};

struct _SND_3D_WRK
{
  sceVu0FVECTOR pos;
  sceVu0FVECTOR velocity;
  int status;
  int voll;
  int volr;
  int pitch;
};

struct _SND_3D_LISTENER
{
  sceVu0FVECTOR pos;
  sceVu0FVECTOR velocity;
  sceVu0FVECTOR dir;
  sceVu0FVECTOR top;
  int defer;
};

typedef _SND_3D_WRK SND_3D_WRK;
typedef _SND_3D_LISTENER SND_3D_LISTENER;
typedef _SND_3D_SET SND_3D_SET;
typedef _SND_3D_ENV SND_3D_ENV;
typedef _VOLSET VOLSET;

void Snd3DInit();
void snd3DSet1Meter(float unit);
void snd3DSetEnvironment(SND_3D_ENV *env);
void snd3DSetListner(SND_3D_SET *set, float *top);
void Snd3DFreeWrk(void *hndl);
void *Snd3DCreateWrk(SND_3D_SET *s3s);
void snd3DSetSET(void *hndl, SND_3D_SET *set);
void Snd3DSetPosition(void *hndl, float *pos);
void Snd3DGetVal(void *hndl, VOLSET *volset, short int *pitch);
float GetLenDirection(float *velocity, float *unit_dir);
void Snd3DMain();