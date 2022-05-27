#pragma once
#include "gfx/glf3_render.h"
#include "MainWindow.h"
#include "game_main.h"
#include "logging/setup.h"

int main(int argc, char *argv[])
{
  SetupLoggers();

  GLFWwindow *glfwWindow = InitializeWindow();

  MainWindow mainWindow(glfwWindow);
  mainWindow.Init();
  game_init();

  while (!glfwWindowShouldClose(glfwWindow))
  {
    startNewFrame();
    game_main();
    mainWindow.Update();
    endFrame(glfwWindow);
  }

  Terminate();
  teardown(glfwWindow);

  return 0;
}
