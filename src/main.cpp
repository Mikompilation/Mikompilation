#include "MainWindow.h"
#include "game_main.h"
#include "gfx/AppWindow.h"
#include "logging/setup.h"

int main(int argc, char** args)
{
  SetupLoggers();

  auto *window = new AppWindow::Window();

  InitializeImGui(window->GetWindow(), window->GetRenderer());
  MainWindow mainWindow;
  game_init();

  while (!window->ShouldCloseApp())
  {
    window->StartNewFrame();
    game_main();
    mainWindow.Update();
    window->EndFrame();
  }

  ImGuiTerminate();
  delete window;

  return 0;
}
