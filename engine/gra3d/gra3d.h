#pragma once

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

template <class T>
T* GetStaticInstance(uint32_t mem);
void gra3dInit();