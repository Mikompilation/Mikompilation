#include "AppWindow.h"
#include "GFX_CONFIG.h"
#include "SDL.h"
#include "logging/printing.h"
#include "spdlog/spdlog.h"

//#define STB_IMAGE_IMPLEMENTATION
//#include "stb/stb_image.h"

AppWindow::Window::Window()
{
  const auto engineLogger = spdlog::get(ENGINE_LOGGER);

  engineLogger->info("Init SDL2 video");

  if (SDL_Init(SDL_INIT_VIDEO) < 0)
  {
    engineLogger->critical("Failed to init SDL2 video");
    return;
  }

  engineLogger->info("Creating SDL2 window");

  this->window = SDL_CreateWindow("Mikompilation", SDL_WINDOWPOS_CENTERED,
                                  SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH,
                                  SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

  if (this->window == nullptr)
  {
    engineLogger->critical(SDL_GetError());
  }

  this->renderer =
      SDL_CreateRenderer(this->window, -1, SDL_RENDERER_ACCELERATED);

  if (this->renderer == nullptr)
  {
    engineLogger->critical(SDL_GetError());
  }
}

AppWindow::Window::~Window()
{
  if (this->renderer != nullptr)
  {
    SDL_DestroyRenderer(this->renderer);
  }

  if (this->window != nullptr)
  {
    SDL_DestroyWindow(this->window);
  }

  SDL_Quit();
}

void AppWindow::Window::StartNewFrame()
{
  SDL_RenderClear(this->renderer);
}

void AppWindow::Window::EndFrame()
{
  SDL_RenderPresent(this->renderer);
}

SDL_Window *AppWindow::Window::GetWindow()
{
  return this->window;
}

SDL_GLContext AppWindow::Window::GetWindowContext()
{
  return this->windowContext;
}

SDL_Renderer *AppWindow::Window::GetRenderer()
{
  return this->renderer;
}

bool AppWindow::Window::ShouldCloseApp()
{
  SDL_Event e;
  SDL_PollEvent(&e);

  return e.type == SDL_QUIT;
}
