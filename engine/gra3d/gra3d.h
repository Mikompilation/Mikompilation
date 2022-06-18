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

// This is approximately 16 bytes in size
struct G3DCREATIONDATA
{
    GRA3DCOREOBJECT* core;
    GRA3DSCRATCHPADLAYOUT_MAPSHADOW* mapShadow;
    char* someOtherPointer;
};

static GRA3DCOREOBJECT *core;
static GRA3DSCRATCHPADLAYOUT *scratchpad;

static bool bUseScratchpad;

template <class T>
T* GetStaticInstance(uint32_t mem);
void gra3dInit();
void modifyScratchpad();
bool gra3dIsUsingScratchpad();
int gra3dUseScratchpad(int isTrue);