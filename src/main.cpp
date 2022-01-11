#include "imgui_render.h"
#include "glf3_render.h"
#include <stdio.h>
// C++
#include <iostream>
#include <string>

#include "window.h"
// Dear ImGui
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"
#include "imgui.h"

int main(int argc, char *argv[])
{
  GLFWwindow *window = InitializeWindow();

  if(window == NULL)
  {
    return -1;
  }

  InitializeImGui(window);

  glClearColor(backgroundR, backgroundG, backgroundB, 1.0f);

  while (!glfwWindowShouldClose(window))
  {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

    NewFrame();

    Render(window);

    EndFrame();
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  teardown(window);
  Terminate();

  return 0;
}