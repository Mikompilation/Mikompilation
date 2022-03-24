#include "window.h"
#include "imgui.h"
#include "glf3_render.h"

bool MainWindow::Init()
{
  window = InitializeWindow();

  if (window == NULL)
  {
    return false;
  }

  InitializeImGui(window);

  this->filePicker = new FilePicker(std::vector{
      SelectFile{".bin", "IMG_HD"},
      SelectFile{".bin", "IMG_BD"}});

  return true;
}

void MainWindow::Update()
{
  while (!glfwWindowShouldClose(window))
  {
      startNewFrame();

      NewFrame();

      drawCube(400, 320, -500, 200);

      this->filePicker->Render();

      EndFrame();

      endFrame(window);
  }

  Terminate();
  teardown(window);
}