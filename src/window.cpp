#include "window.h"

bool MainWindow::Init()
{
  window = InitializeWindow();

  if (window == NULL)
  {
    return false;
  }

  InitializeImGui(window);

  glClearColor(backgroundR, backgroundG, backgroundB, 1.0f);

  this->filePicker = new FilePicker(std::vector{
      SelectFile{".bin", "IMG_HD"},
      SelectFile{".bin", "IMG_BD"}});

  return true;
}

void MainWindow::Update()
{
  while (!glfwWindowShouldClose(window))
  {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

    NewFrame();

    this->filePicker->Render();

    EndFrame();

    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  Terminate();
  teardown(window);
}