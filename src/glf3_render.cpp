#include "glf3_render.h"

GLFWwindow *InitializeWindow()
{
  glfwSetErrorCallback(glfw_error_callback);

  if (!glfwInit())
  {
    return NULL;
  }

  glfwWindowHint(GLFW_DOUBLEBUFFER, 1);
  glfwWindowHint(GLFW_DEPTH_BITS, 24);
  glfwWindowHint(GLFW_STENCIL_BITS, 8);

  glfwWindowHint(
      GLFW_OPENGL_PROFILE,
      GLFW_OPENGL_CORE_PROFILE);

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);

  GLFWwindow *window = glfwCreateWindow(
      windowWidth,
      windowHeight,
      "HI",
      NULL,
      NULL);

  if (!window)
  {
    teardown(NULL);
    return NULL;
  }

  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
  glfwMakeContextCurrent(window);

  glfwSwapInterval(1);

  int actualWindowWidth, actualWindowHeight;
  glfwGetWindowSize(window, &actualWindowWidth, &actualWindowHeight);
  glViewport(0, 0, actualWindowWidth, actualWindowHeight);

  return window;
}

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
  if (window != NULL)
  {
    glfwDestroyWindow(window);
  }

  glfwTerminate();
}