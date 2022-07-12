#pragma once

#include "../math/VectorMath.h"

inline const char *GAME_LOGGER = "GAME";
inline const char *PROGRAM_LOGGER = "PROGRAM";
inline const char *ENGINE_LOGGER = "ENGINE";

int printVectorC(Vector4* vector, const char* message);

int printLMatC(Vector4 *pVector4, const char* message);

void printNotImplemented(const char *loggerName, const char *methodName, const char *fileName);

void printError(const char *loggerName, const char *methodName, const char *error);