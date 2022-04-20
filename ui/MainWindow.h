#pragma once

#include "FileSelector.h"
#include "MemoryViewer.h"
#include "TopMenuBar.h"
#include "imgui_render.h"

class MainWindow
{
 private:
  MemoryViewer *memoryViewer;
  GLFWwindow *window;
  FileSelector * filePicker;
  TopMenuBar* topMenuBar;

 public:
  MainWindow(GLFWwindow *window);
  bool Init();
  void Update();
};