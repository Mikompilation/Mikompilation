#include "MainWindow.h"
#include "game_main.h"
#include "glf3_render.h"
#include <thread>

int main(int argc, char *argv[])
{
  GLFWwindow *glfwWindow = InitializeWindow();

  MainWindow mainWindow(glfwWindow);
  mainWindow.Init();

  std::thread gameThread(game_main);

  while (!glfwWindowShouldClose(glfwWindow))
  {
    startNewFrame();
    drawPixelBuffer();
    mainWindow.Update();
    endFrame(glfwWindow);
  }

  shutDownGame = true;

  gameThread.join();

  Terminate();
  teardown(glfwWindow);

  return 0;
}