#pragma once

#include <iostream>
#include "GLFW/glfw3.h"

const int windowWidth = 1200, windowHeight = 800;
const float backgroundR = 0.1f,
      backgroundG = 0.3f,
      backgroundB = 0.2f;

static void glfw_error_callback(int error, const char *description);
static void framebuffer_size_callback(GLFWwindow *window, int width, int height);
void teardown(GLFWwindow *window);
void startNewFrame();
void endFrame(GLFWwindow *window);
void drawPixelBuffer();
GLFWwindow* InitializeWindow();
