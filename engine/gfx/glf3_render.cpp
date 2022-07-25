#include "glf3_render.h"
#include "GFX_CONFIG.h"
#include "logging/printing.h"
#include "spdlog/spdlog.h"
#include <cstdio>

#define STB_IMAGE_IMPLEMENTATION
#include "stb/stb_image.h"

void GLAPIENTRY MessageCallback(GLenum source, GLenum type, GLuint id,
                                GLenum severity, GLsizei length,
                                const GLchar *message, const void *userParam)
{
  const auto logger = spdlog::get(ENGINE_LOGGER);
  logger->error("GL CALLBACK: {} type = {:x}, severity = {:x}, message = {}",
                (type == GL_DEBUG_TYPE_ERROR ? "** GL ERROR **" : ""), type,
                severity, message);
}

GLFWwindow *InitializeWindow()
{
  const auto engineLogger = spdlog::get(ENGINE_LOGGER);
  glfwSetErrorCallback(glfw_error_callback);

  if (!glfwInit())
  {
    return NULL;
  }

  auto mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
  SCREEN_HEIGHT = mode->height;
  SCREEN_WIDTH = mode->width;

  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  glfwWindowHint(GLFW_OPENGL_DEBUG_CONTEXT, GL_TRUE);
  glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

#ifndef __APPLE__
  glEnable(GL_DEBUG_OUTPUT);
  glEnable(GL_DEBUG_OUTPUT_SYNCHRONOUS);
  glEnable(GL_DEBUG_OUTPUT);
#endif

  engineLogger->info("Creating GLFW window");

  GLFWwindow *window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT,
                                        "Mikompilation", NULL, NULL);

  int width, height, channel;
  stbi_uc *img = stbi_load("resources/icon.png", &width, &height, &channel, 0);
  GLFWimage glfwImage;

  glfwImage.width = width;
  glfwImage.height = height;
  glfwImage.pixels = img;

  glfwSetWindowIcon(window, 1, &glfwImage);

  stbi_image_free(img);

  glfwMakeContextCurrent(window);

  glewExperimental = GL_TRUE;
  GLenum err = glewInit();

#ifndef __APPLE__
  glDebugMessageCallback(MessageCallback, 0);
#endif

  if (GLEW_OK != err)
  {
    engineLogger->critical("GLFW failed to initialize: {}",
                           glewGetErrorString(err));
  }

  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
  glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);

  int screenWidth, screenHeight;
  glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
  glViewport(0.0f, 0.0f, screenWidth, screenHeight);

  return window;
}

static void glfw_error_callback(int error, const char *description)
{
  const auto logger = spdlog::get(ENGINE_LOGGER);
  logger->error("Error {:x} with description {}", error, description);
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
  glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
}

void endFrame(GLFWwindow *window)
{
  glfwSwapBuffers(window);
  glfwPollEvents();
}