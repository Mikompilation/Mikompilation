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

    if (ImGui::Button("Choose Elf File"))
    {
      ImGuiFileDialog::Instance()->OpenDialog("Choose Elf File", "Choose File", ".elf", ".");
      if (ImGuiFileDialog::Instance()->Display("ChooseFileDlgKey"))
      {
        // action if OK
        if (ImGuiFileDialog::Instance()->IsOk())
        {
          filePath = ImGuiFileDialog::Instance()->GetCurrentPath();
        }
      }
    }
    Render(window);

    EndFrame();
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  Terminate();
  teardown(window);
}