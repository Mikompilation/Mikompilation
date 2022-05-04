#include "MemoryViewer.h"

int address;

bool setup = false;

void MemoryViewer::Update()
{
  ImGui::Begin("Memory Viewer");

  if(!setup)
  {
    ImGui::InputInt("Memory Address", &address, 1, ImGuiInputTextFlags_CharsHexadecimal);
  }

  if(!setup && ImGui::Button("Set"))
  {
    setup = true;
  }

  if(setup)
  {
    this->memoryEditor->DrawContents((int*)address, 0x10000);
  }

  ImGui::End();
}
MemoryViewer::MemoryViewer()
{
  this->memoryEditor = new MemoryEditor;
}
