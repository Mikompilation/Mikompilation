#pragma once

#include "basic_types.h"

void SetASCIIString2(int pri, float x, float y, int type, u_char r, u_char g,
                     u_char b, char *str);
void SetASCIIString3(int pri, float x, float y, int type, u_char r, u_char g,
                     u_char b, u_char a, char *str);
void SetString2(int pri, float x, float y, int type, u_char r, u_char g,
                u_char b, char *fmt);