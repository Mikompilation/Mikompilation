#include <thread>
#include "window.h"
#include "glf3_render.h"
#include "game_main.h"

int main(int argc, char *argv[])
{
  GLFWwindow *glfwWindow = InitializeWindow();

  MainWindow mainWindow(glfwWindow);
  mainWindow.Init();

  std::thread gameThread(gameMain);

  while (!glfwWindowShouldClose(glfwWindow))
  {
    startNewFrame();
    drawCube(400, 320, -500, 200);
    mainWindow.Update();
    endFrame(glfwWindow);
  }

  shutDownGame = true;

  gameThread.join();

  Terminate();
  teardown(glfwWindow);

  return 0;
}