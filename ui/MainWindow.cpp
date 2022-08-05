#include "MainWindow.h"
#include "imgui.h"

MainWindow::MainWindow()
{
  this->memoryViewer = new MemoryViewer();
  this->topMenuBar = new TopMenuBar;
}

void MainWindow::Update()
{
  NewFrame();

  if (ImGui::IsKeyPressed('a', false))
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