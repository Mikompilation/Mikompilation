#pragma once
#include <stdint.h>

struct GRA3DCOREOBJECT
{

};

struct GRA3DSCRATCHPADLAYOUT
{

};

struct GRA3DSCRATCHPADLAYOUT_MAPSHADOW
{

};

struct G3DCREATIONDATA
{

};

static GRA3DCOREOBJECT *core;
static GRA3DSCRATCHPADLAYOUT *scratchpad;

static bool bUseScratchpad;

template <class T>
T* GetStaticInstance(uint32_t mem);
void gra3dInit();
void modifyScratchpad();
int gra3dUseScratchpad(int isTrue);