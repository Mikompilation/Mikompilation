#include "snd_3d.h"
#include <cassert>

#define MAX_SOUND 30

static SND_3D_ENV snd_3d_env = {0.79999995f, 0.099999994f, 0.7f,
                                0.29999998f, 30.0f,        2.0f};
static char listner_set;
static float farthest_dist_calc;
static float nearest_dist_calc;
static float sound_speed;
static float dist_unit;
static SND_3D_WRK snd_3d_wrk[MAX_SOUND];
static SND_3D_LISTENER snd_3d_listner;

static void CheckEnvValue()
{
  assert((snd_3d_env.front >= 0.0f) && (1.0f >= snd_3d_env.front)
         && "Snd3DEnv.front Is between 0.f and 1.f");
  assert((snd_3d_env.side >= 0.0f) && (1.0f >= snd_3d_env.side)
         && "Snd3DEnv.side Is between 0.f and 1.f");
  assert((snd_3d_env.back >= 0.0f) && (1.0f >= snd_3d_env.back)
         && "Snd3DEnv.back Is between 0.f and 1.f");
  assert((snd_3d_env.vol_min >= 0.0f) && (1.0f >= snd_3d_env.vol_min)
         && "Snd3DEnv.vol_min Is between 0.f and 1.f");
  assert(snd_3d_env.farthest_dist > snd_3d_env.nearest_dist
         && "Snd3DEnv.farthest_dist have to be longer nearest_dist");
}

void Snd3DInit()
{
  snd3DSet1Meter(1.0f);

  for (auto i = 0; i < MAX_SOUND; i++)
  {
    snd_3d_wrk[i].status = 0;
  }

  CheckEnvValue();
}

void snd3DSet1Meter(float unit)
{
  dist_unit = unit;
  sound_speed = unit * 340.0f;
  nearest_dist_calc = snd_3d_env.nearest_dist * unit;
  farthest_dist_calc = snd_3d_env.farthest_dist * unit;
}

void snd3DSetEnvironment(SND_3D_ENV *env)
{
  snd_3d_env = *env;
  nearest_dist_calc = snd_3d_env.nearest_dist * dist_unit;
  farthest_dist_calc = snd_3d_env.farthest_dist * dist_unit;
  CheckEnvValue();
}
