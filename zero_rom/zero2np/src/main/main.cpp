#include "main.h"
#include "../system/eeiop/ee_iop.h"
#include "../system/os/system.h"
#include "../system/playpss/playpss.h"
#include "ingame.h"
#include "loading.h"
#include "logging/logging.h"
#include "logo.h"
#include "option.h"
#include "title.h"
#include "../debug/debug.h"

#include <SDL.h>
#include <imgui.h>
#include <imgui_impl_sdl2.h>
#include <imgui_impl_sdlrenderer2.h>
#include <imgui_internal.h>

static int soft_reset_disable;
SDL_Window *window;
SDL_Renderer *renderer;
SDL_Event eventData;

int main(int argc, char **args)
{
  InitGPhaseSys();

  do
  {
    GPhaseSysMain();
  }
  while (soft_reset_disable == 0);

  return 0;
}

void init_super()
{
  InitLogging();
  InitCostume();
  soft_reset_disable = 0;
  InitSystemON();
  playPssInit();
  InitLogo();
  LoadingInit();
  TitleInit();
  InitOptionSetup(&opt_wrk);
  //ClearFlgCtrlInit();
  //MemoryCardInit();
  //MemoryCardDebugReqSizeDisp();
  //dmaVif1Init((void *) 0x0, 0, (void *) 0x31aa1500, 0x1ec30);
  //InitDrawEnv(dmaVif1GetPacketFLUSH_DIRECT, dmaVif1GetPacketFLUSH_DIRECT,
  //            dmaVif1SetPacketFLUSH_DIRE CT, dmaVif1SetPacketFLUSH_DIRECT);
  //SetPrintWarning(Zero2PrintWarningFunc);
  //SetPrintAssert(newAssert);
  //gra3dInit((void *) 0x1a91b00, 64000);
  //IngameWrkInit(0, 1);
  //sceSifAllocSysMemory(1, 0x600000, nullptr);
  //FinderBankSetup();
  //SceneEffectInit();

  SDL_Init(SDL_INIT_VIDEO);

  window = SDL_CreateWindow(
    "Mikompilation",
    SDL_WINDOWPOS_CENTERED,
    SDL_WINDOWPOS_CENTERED,
    640,
    480,
    SDL_WINDOW_RESIZABLE
  );

  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);

  IMGUI_CHECKVERSION();
  ImGui::CreateContext();

  ImGui_ImplSDL2_InitForSDLRenderer(window, renderer);
  ImGui_ImplSDLRenderer2_Init(renderer);

  printNotImplemented(GAME_LOGGER, __FUNCTION__, __FILE__);
}

void end_super()
{
  // Cleanup SDL & ImGUI
  ImGui_ImplSDLRenderer2_Shutdown();
  ImGui_ImplSDL2_Shutdown();
  ImGui::DestroyContext();
  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();
}

/// Gets called after every game loop
GPHASE_ENUM after_super(GPHASE_ENUM result)
{
  EachDebugMain();
  ee_iopMain();
  SendDMAMain();

  SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);

  ImGui::Render();

  ImGui_ImplSDLRenderer2_RenderDrawData(ImGui::GetDrawData());
  SDL_RenderPresent(renderer);

  switch (eventData.type)
  {
    case SDL_QUIT:
      soft_reset_disable = 1;
  }

  return (GPHASE_ENUM)(CheckSoftReset() != 0);
}

/// Gets called before every game loop
GPHASE_ENUM pre_super(GPHASE_ENUM super)
{
  //ClearDrawEnv();
  //pvVar1 = GetDrawEnv(0);
  //SetScissorRegister(0, *(long *)((int)pvVar1 + 0x30));
  //pvVar1 = GetDrawEnv(1);
  //SetScissorRegister(1, *(long *)((int)pvVar1 + 0x30));
  //GET_SCISSOR_REGISTER(0);
  //PadSyncCallback();
  //PadAnalogMain();

  SDL_RenderClear(renderer);
  SDL_PollEvent(&eventData);
  ImGui_ImplSDL2_ProcessEvent(&eventData);

  SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
  SDL_RenderDrawLine(renderer, 0,0,600,400);

  ImGui_ImplSDLRenderer2_NewFrame();
  ImGui_ImplSDL2_NewFrame(window);
  ImGui::NewFrame();

  ImGuiIO& io = ImGui::GetIO();

  ImGui::Begin("Hello, SDL2!");
  ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", 1000.0f / io.Framerate, io.Framerate);
  ImGui::End();

  return GPHASE_CONTINUE;
}

int CheckSoftReset()
{
  return soft_reset_disable;
}
