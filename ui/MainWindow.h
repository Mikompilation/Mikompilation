#pragma once

#include "MemoryViewer.h"
#include "TopMenuBar.h"
#include "imgui_render.h"

class MainWindow
{
 private:
  MemoryViewer *memoryViewer;
  TopMenuBar* topMenuBar;

 public:
  MainWindow();
  void Update();
};