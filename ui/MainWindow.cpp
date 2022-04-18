#include "MainWindow.h"
#include "imgui.h"

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

  this->topMenuBar = new TopMenuBar;

  return true;
}

void MainWindow::Update()
{
  NewFrame();

  this->filePicker->Update();
  this->topMenuBar->Update();

  EndFrame();
}