#include "glf3_render.h"
#include <cstdint>
#include <cstdio>
#include <iostream>

int SCREEN_WIDTH = 1920;
int SCREEN_HEIGHT = 1080;

GLFWwindow *InitializeWindow()
{
  glfwSetErrorCallback(glfw_error_callback);

  if (!glfwInit())
  {
    return NULL;
  }

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

  GLFWwindow *window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Mikompilation", NULL, NULL);

  glfwMakeContextCurrent(window);

  glewExperimental = GL_TRUE;
  GLenum err = glewInit();

  if (GLEW_OK != err)
  {
    fprintf(stderr, "Error: %s\n", glewGetErrorString(err));
  }

  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

  glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);

  int screenWidth, screenHeight;
  glfwGetFramebufferSize(window, &screenWidth, &screenHeight);

  glViewport(0.0f, 0.0f, screenWidth, screenHeight);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();

  return window;
}

static void glfw_error_callback(int error, const char *description)
{
  std::cerr << "[ERROR] GLFW error: " << error << ", " << description << std::endl;
}

static void framebuffer_size_callback(GLFWwindow *window, int width, int height)
{
  SCREEN_WIDTH = width;
  SCREEN_HEIGHT = height;
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

void startNewFrame()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
  glPushMatrix();
}

void endFrame(GLFWwindow *window)
{
  glPopMatrix();
  glfwSwapBuffers(window);
  glfwPollEvents();
}