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

  this->memoryViewer = new MemoryViewer();

  this->topMenuBar = new TopMenuBar;

  return true;
}

void MainWindow::Update()
{
  NewFrame();

  if (ImGui::IsKeyPressed(GLFW_KEY_HOME, false))
  {
    this->topMenuBar->shouldDisplay = !this->topMenuBar->shouldDisplay;
  }

  if (this->topMenuBar->shouldDisplayMemoryViewer)
  {
    this->memoryViewer->Update();
  }

  if (this->topMenuBar->shouldDisplay)
  {
    this->topMenuBar->Update();
  }

  EndFrame();
}