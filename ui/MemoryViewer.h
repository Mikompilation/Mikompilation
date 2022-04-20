#pragma once
#include "imgui.h"
#include "imgui_memory_editor/imgui_memory_editor.h"

class MemoryViewer
{
 private:
  MemoryEditor *memoryEditor;

 public:
  MemoryViewer();
  void Update();
};
