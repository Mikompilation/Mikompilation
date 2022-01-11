#include <stdio.h>
// C++
#include <iostream>
#include <string>
// GLFW
#include <GLFW/glfw3.h>
// Dear ImGui
#include "backends/imgui_impl_glfw.h"
#include "backends/imgui_impl_opengl3.h"
#include "imgui.h"

int windowWidth = 1200, windowHeight = 800;
float backgroundR = 0.1f,
      backgroundG = 0.3f,
      backgroundB = 0.2f;

static void glfw_error_callback(int error, const char *description)
{
  std::cerr << "[ERROR] GLFW error: " << error << ", " << description << std::endl;
}

static void framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
  glViewport(0, 0, width, height);
}

void teardown(GLFWwindow *window)
{
  ImGui_ImplOpenGL3_Shutdown();
  ImGui_ImplGlfw_Shutdown();
  ImGui::DestroyContext();

  if (window != NULL) { glfwDestroyWindow(window); }
  glfwTerminate();
}

int main(int argc, char *argv[])
{
  glfwSetErrorCallback(glfw_error_callback);

  if (!glfwInit())
  {
    std::cerr << "[ERROR] Couldn't initialize GLFW\n";
    return -1;
  }
  else
  {
    std::cout << "[INFO] GLFW initialized\n";
  }

  // setup GLFW window

  glfwWindowHint(GLFW_DOUBLEBUFFER, 1);
  glfwWindowHint(GLFW_DEPTH_BITS, 24);
  glfwWindowHint(GLFW_STENCIL_BITS, 8);

  glfwWindowHint(
      GLFW_OPENGL_PROFILE,
      GLFW_OPENGL_CORE_PROFILE);

  std::string glsl_version = "";
#ifdef __APPLE__
  // GL 3.2 + GLSL 150
  glsl_version = "#version 150";
  glfwWindowHint(// required on Mac OS
      GLFW_OPENGL_FORWARD_COMPAT,
      GL_TRUE);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
#elif __linux__
  // GL 3.2 + GLSL 150
  glsl_version = "#version 150";
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
#elif _WIN32
  // GL 3.0 + GLSL 130
  glsl_version = "#version 130";
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
#endif

  float highDPIscaleFactor = 1.0;
#ifdef _WIN32
  // if it's a HighDPI monitor, try to scale everything
  GLFWmonitor *monitor = glfwGetPrimaryMonitor();
  float xscale, yscale;
  glfwGetMonitorContentScale(monitor, &xscale, &yscale);
  std::cout << "[INFO] Monitor scale: " << xscale << "x" << yscale << std::endl;
  if (xscale > 1 || yscale > 1)
  {
    highDPIscaleFactor = xscale;
    glfwWindowHint(GLFW_SCALE_TO_MONITOR, GLFW_TRUE);
  }
#elif __APPLE__
  // to prevent 1200x800 from becoming 2400x1600
  // and some other weird resizings
  glfwWindowHint(GLFW_COCOA_RETINA_FRAMEBUFFER, GLFW_FALSE);
#endif

  GLFWwindow *window = glfwCreateWindow(
      windowWidth,
      windowHeight,
      "HI",
      NULL,
      NULL);
  if (!window)
  {
    std::cerr << "[ERROR] Couldn't create a GLFW window\n";
    teardown(NULL);
    return -1;
  }

  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
  glfwMakeContextCurrent(window);

  // VSync
  glfwSwapInterval(1);

  int actualWindowWidth, actualWindowHeight;
  glfwGetWindowSize(window, &actualWindowWidth, &actualWindowHeight);
  std::cout << "[INFO] Window size: " << actualWindowWidth << "x" << actualWindowHeight << std::endl;
  glViewport(0, 0, actualWindowWidth, actualWindowHeight);

  // --- Dear ImGui

  IMGUI_CHECKVERSION();
  ImGui::CreateContext();
  ImGuiIO &io = ImGui::GetIO();
  (void) io;

  // setup platform/renderer bindings
  ImGui_ImplGlfw_InitForOpenGL(window, true);
  ImGui_ImplOpenGL3_Init(glsl_version.c_str());

  bool show_demo_window = false;
  bool show_another_window = false;

  ImVec4 background = ImVec4(35 / 255.0f, 35 / 255.0f, 35 / 255.0f, 1.00f);

  glClearColor(backgroundR, backgroundG, backgroundB, 1.0f);

  while (!glfwWindowShouldClose(window))
  {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

    // start the Dear ImGui frame
    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplGlfw_NewFrame();
    ImGui::NewFrame();
    // standard demo window
    if (show_demo_window) { ImGui::ShowDemoWindow(&show_demo_window); }
    // a window is defined by Begin/End pair
    {
      static int counter = 0;

      int glfw_width = 0, glfw_height = 0, controls_width = 0;
      // get the window size as a base for calculating widgets geometry
      glfwGetFramebufferSize(window, &glfw_width, &glfw_height);
      controls_width = glfw_width;
      // make controls widget width to be 1/3 of the main window width
      if ((controls_width /= 3) < 300) { controls_width = 300; }

      // position the controls widget in the top-right corner with some margin
      ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_Always);
      // here we set the calculated width and also make the height to be
      // be the height of the main window also with some margin
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
        std::cout << "counter button clicked\n";
        counter++;
        if (counter == 9) { ImGui::OpenPopup("Easter egg"); }
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
          std::cout << "close button clicked\n";
          show_another_window = false;
        }

        ImGui::End();
      }

      ImGui::End();
    }

    // rendering
    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());

    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  teardown(window);

  return 0;
}