#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>

static void glfw_error_callback(int error, const char *description);
static void framebuffer_size_callback(GLFWwindow *window, int width, int height);
void teardown(GLFWwindow *window);
void startNewFrame();
void endFrame(GLFWwindow *window);
GLFWwindow* InitializeWindow();
