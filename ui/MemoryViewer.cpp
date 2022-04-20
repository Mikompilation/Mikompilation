#include "MemoryViewer.h"


void MemoryViewer::Update()
{
  ImGui::Begin("Memory Viewer");

  this->memoryEditor->DrawContents(this, 0x10000, (size_t)this);

  ImGui::End();
}
MemoryViewer::MemoryViewer()
{
  this->memoryEditor = new MemoryEditor;
}
