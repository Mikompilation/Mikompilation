#pragma once

#include "SDL_render.h"
#include "SDL_video.h"

void InitializeImGui(SDL_Window *window, SDL_Renderer *renderer);
void NewFrame();
void EndFrame();
void ImGuiTerminate();