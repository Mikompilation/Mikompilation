#pragma once

inline const char *GAME_LOGGER = "GAME";
inline const char *PROGRAM_LOGGER = "PROGRAM";
inline const char *ENGINE_LOGGER = "ENGINE";

void InitLogging();
void printNotImplemented(const char *loggerName, const char *methodName, const char *fileName);
void printMessage(const char *loggerName, const char *message);