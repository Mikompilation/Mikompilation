#include "imgui_render.h"
#include "GLFW/glfw3.h"

bool show_demo_window = false;
bool show_another_window = false;

void InitializeImGui(GLFWwindow *window)
{
  IMGUI_CHECKVERSION();
  ImGui::CreateContext();
  ImGuiIO &io = ImGui::GetIO();
  (void) io;

  ImGui_ImplGlfw_InitForOpenGL(window, true);
  ImGui_ImplOpenGL3_Init("#version 130");
}

void Render(GLFWwindow *window)
{
  ImGui::ShowDemoWindow(&show_demo_window);

  static int counter = 0;

  int glfw_width = 0, glfw_height = 0, controls_width = 0;

  glfwGetFramebufferSize(window, &glfw_width, &glfw_height);
  controls_width = glfw_width;

  if ((controls_width /= 3) < 300)
  {
    controls_width = 300;
  }

  ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_Always);

  ImGui::SetNextWindowSize(
      ImVec2(static_cast<float>(controls_width), static_cast<float>(glfw_height - 20)),
      ImGuiCond_Always);

  ImGui::SetNextWindowBgAlpha(0.7f);
  // create a window and append into it
  ImGui::Begin("Controls", NULL, ImGuiWindowFlags_NoResize);

  ImGui::Dummy(ImVec2(0.0f, 1.0f));
  ImGui::TextColored(ImVec4(1.0f, 0.0f, 1.0f, 1.0f), "Time");
  ImGui::Text("%s", "HI");

  ImGui::Dummy(ImVec2(0.0f, 3.0f));
  ImGui::TextColored(ImVec4(1.0f, 0.0f, 1.0f, 1.0f), "Application");
  ImGui::Text("Main window width: %d", glfw_width);
  ImGui::Text("Main window height: %d", glfw_height);

  ImGui::Dummy(ImVec2(0.0f, 3.0f));
  ImGui::TextColored(ImVec4(1.0f, 0.0f, 1.0f, 1.0f), "GLFW");
  ImGui::Text("%s", glfwGetVersionString());

  ImGui::Dummy(ImVec2(0.0f, 10.0f));
  ImGui::Separator();
  ImGui::Dummy(ImVec2(0.0f, 10.0f));

  // buttons and most other widgets return true when clicked/edited/activated
  if (ImGui::Button("Counter button"))
  {
    counter++;
    if (counter == 9)
    {
      ImGui::OpenPopup("Easter egg");
    }
  }
  ImGui::SameLine();
  ImGui::Text("counter = %d", counter);

  if (ImGui::BeginPopupModal("Easter egg", NULL))
  {
    ImGui::Text("Ho-ho, you found me!");
    if (ImGui::Button("Buy Ultimate Orb")) { ImGui::CloseCurrentPopup(); }
    ImGui::EndPopup();
  }

  ImGui::Dummy(ImVec2(0.0f, 15.0f));
  if (!show_demo_window)
  {
    if (ImGui::Button("Open standard demo"))
    {
      show_demo_window = true;
    }
  }

  ImGui::Checkbox("show a custom window", &show_another_window);
  if (show_another_window)
  {
    ImGui::SetNextWindowSize(
        ImVec2(250.0f, 150.0f),
        ImGuiCond_FirstUseEver// after first launch it will use values from imgui.ini
    );
    // the window will have a closing button that will clear the bool variable
    ImGui::Begin("A custom window", &show_another_window);

    ImGui::Dummy(ImVec2(0.0f, 1.0f));
    ImGui::TextColored(ImVec4(1.0f, 0.0f, 1.0f, 1.0f), "Some label");

    ImGui::TextColored(ImVec4(128 / 255.0f, 128 / 255.0f, 128 / 255.0f, 1.0f), "%s", "another label");
    ImGui::Dummy(ImVec2(0.0f, 0.5f));

    ImGui::Dummy(ImVec2(0.0f, 1.0f));

    if (ImGui::Button("Close"))
    {
      show_another_window = false;
    }

    ImGui::End();
  }

  ImGui::End();
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
