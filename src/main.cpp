#include "window.h"
#include "glf3_render.h"

int main(int argc, char *argv[])
{
  GLFWwindow *glfwWindow = InitializeWindow();

  MainWindow mainWindow(glfwWindow);
  mainWindow.Init();

  while (!glfwWindowShouldClose(glfwWindow))
  {
    startNewFrame();
    drawCube(400, 320, -500, 200);
    mainWindow.Update();
    endFrame(glfwWindow);
  }

  Terminate();
  teardown(glfwWindow);

  return 0;
}