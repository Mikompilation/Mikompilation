#pragma once
#include "glf3_render.h"
#include "MainWindow.h"
#include "game_main.h"

int main(int argc, char *argv[])
{
  GLFWwindow *glfwWindow = InitializeWindow();

  MainWindow mainWindow(glfwWindow);
  mainWindow.Init();

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