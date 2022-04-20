#include "imgui_render.h"

void InitializeImGui(GLFWwindow *window)
{
  IMGUI_CHECKVERSION();
  ImGui::CreateContext();
  ImGuiIO &io = ImGui::GetIO();
  (void) io;

  ImGui_ImplGlfw_InitForOpenGL(window, true);
  ImGui_ImplOpenGL3_Init("#version 130");
}

void NewFrame()
{
  ImGui_ImplOpenGL3_NewFrame();
  ImGui_ImplGlfw_NewFrame();
  ImGui::NewFrame();
}

void EndFrame()
{
  ImGui::Render();
  ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
}

void Terminate()
{
  ImGui_ImplOpenGL3_Shutdown();
  ImGui_ImplGlfw_Shutdown();
  ImGui::DestroyContext();
}

void ToggleButton(const char *str_id, bool *v)
{
  ImVec4 *colors = ImGui::GetStyle().Colors;
  ImVec2 p = ImGui::GetCursorScreenPos();
  ImDrawList *draw_list = ImGui::GetWindowDrawList();

  float height = ImGui::GetFrameHeight();
  float width = height * 1.55f;
  float radius = height * 0.50f;

  ImGui::InvisibleButton(str_id, ImVec2(width, height));
  ImGui::SameLine(0.0f, 3.0f);
  ImGui::Text(str_id);

  if (ImGui::IsItemClicked()) {
    *v = !*v;
  }

  ImGuiContext &gg = *GImGui;
  float ANIM_SPEED = 0.085f;

  if (gg.LastActiveId == gg.CurrentWindow->GetID(str_id))
  {
    float t_anim = ImSaturate(gg.LastActiveIdTimer / ANIM_SPEED);
  }

  if (ImGui::IsItemHovered())
  {
    draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), ImGui::GetColorU32(*v ? colors[ImGuiCol_ButtonActive] : ImVec4(0.78f, 0.78f, 0.78f, 1.0f)), height * 0.5f);
  }
  else
  {
    draw_list->AddRectFilled(p, ImVec2(p.x + width, p.y + height), ImGui::GetColorU32(*v ? colors[ImGuiCol_Button] : ImVec4(0.85f, 0.85f, 0.85f, 1.0f)), height * 0.50f);
  }

  draw_list->AddCircleFilled(ImVec2(p.x + radius + (*v ? 1 : 0) * (width - radius * 2.0f), p.y + radius), radius - 1.5f, IM_COL32(255, 255, 255, 255));
}