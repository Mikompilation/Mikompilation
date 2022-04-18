#include "TopMenuBar.h"
#include "imgui.h"

void TopMenuBar::Update()
{
  if (ImGui::BeginMainMenuBar())
  {
    if (ImGui::BeginMenu("Menu"))
    {
      if(ImGui::MenuItem("New"))
      {
      }

      ImGui::EndMenu();
    }

    if (ImGui::BeginMenu("Help"))
    {
      if(ImGui::MenuItem("About"))
      {
      }

      ImGui::EndMenu();
    }

    ImGui::EndMainMenuBar();
  }
}
