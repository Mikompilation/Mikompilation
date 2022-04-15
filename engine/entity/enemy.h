#include "math/VectorMath.h"
#include <iostream>

struct ene_wrk {
  unsigned int unknown;

  char u0;
  char u1;
  char u2;
  char u3;

  short Health;
  char junk[34];
  Vector4 position;

  float couldBeAFloat;
  float couldBeAFloat1;

  // Pine testing shows at least an int value that doesn't appear the same on every ghost.
  // It kinda looks like a pointer to a struct and Ghidra decomp seems to support it being a pointer.
  // This is 0 when the enemy is not in scene. This is representing field 176
  unsigned short *probablyAStructPointer;
};

class Enemy
{
 private:
  ene_wrk *enemies;

 public:
  void InitEneWrk(unsigned int id);
};
