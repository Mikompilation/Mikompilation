#pragma once

#include "SDL_render.h"
#include <SDL_video.h>

namespace AppWindow
{
class Window
{
 public:
  Window();
  ~Window();
  bool ShouldCloseApp();
  void StartNewFrame();
  void EndFrame();
  SDL_Window *GetWindow();
  SDL_GLContext GetWindowContext();
  SDL_Renderer *GetRenderer();

 private:
  SDL_Window *window;
  SDL_Renderer *renderer;
  SDL_Surface *surface;
  SDL_GLContext windowContext;
};
}// namespace AppWindow