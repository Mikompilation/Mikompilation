#include "window.h"
#include "imgui.h"
#include "glf3_render.h"

MainWindow::MainWindow(GLFWwindow *window)
{
  this->window = window;
}

bool MainWindow::Init()
{
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
  NewFrame();

  this->filePicker->Render();

  EndFrame();
}