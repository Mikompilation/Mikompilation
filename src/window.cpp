#include "window.h"

// Use this to initalize any UI stuff before hand
bool MainWindow::Init()
{
  window = InitializeWindow();
  if (window == NULL)
  {
    return -1;
  }

  InitializeImGui(window);

  glClearColor(backgroundR, backgroundG, backgroundB, 1.0f);

  Update();
}

// The main loop to run the UI
void MainWindow::Update()
{
  while (!glfwWindowShouldClose(window))
  {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

    NewFrame();

    ImGui::Begin("File Picker");

    if (ImGui::Button("Choose Elf File"))
    {
      ImGuiFileDialog::Instance()->OpenDialog("ChooseElfFile", "Choose File", ".elf", ".");
      if (ImGuiFileDialog::Instance()->Display("ChooseElfFile"))
      {
        // action if OK
        if (ImGuiFileDialog::Instance()->IsOk())
        {
          elfPath.fileName = ImGuiFileDialog::Instance()->GetCurrentFileName();
          elfPath.path = ImGuiFileDialog::Instance()->GetCurrentPath();
        }
        ImGuiFileDialog::Instance()->Close();
      }
    }

      if (ImGui::Button("Choose Img_hd File"))
      {
        ImGuiFileDialog::Instance()->OpenDialog("ChooseImgHDFile", "Choose File", ".bin", ".");
        if (ImGuiFileDialog::Instance()->Display("ChooseImgHDFile"))
        {
          // action if OK
          if (ImGuiFileDialog::Instance()->IsOk())
          {
            hdPath.path = ImGuiFileDialog::Instance()->GetCurrentPath();
            hdPath.fileName = ImGuiFileDialog::Instance()->GetCurrentFileName();
          }
          ImGuiFileDialog::Instance()->Close();
        }
      }

      if (ImGui::Button("Choose Img_bd File"))
      {
        ImGuiFileDialog::Instance()->OpenDialog("ChooseImgBdFile", "Choose File", ".bin", ".");
        if (ImGuiFileDialog::Instance()->Display("ChooseImgBdFile"))
        {
          // action if OK
          if (ImGuiFileDialog::Instance()->IsOk())
          {
            bdPath.path = ImGuiFileDialog::Instance()->GetCurrentPath();
            bdPath.fileName = ImGuiFileDialog::Instance()->GetCurrentFileName();
          }
          ImGuiFileDialog::Instance()->Close();
        }
      }
      ImGui::End();
      Render(window);
      EndFrame();
      glfwSwapBuffers(window);
      glfwPollEvents();
  }

    Terminate();
    teardown(window);
}