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

static GRA3DCOREOBJECT *core;
static GRA3DSCRATCHPADLAYOUT *scratchpad;

template <class T>
T* GetStaticInstance();

void gra3dInit();