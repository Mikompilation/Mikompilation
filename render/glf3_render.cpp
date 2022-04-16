#include "glf3_render.h"

int SCREEN_WIDTH = 640;
int SCREEN_HEIGHT = 480;

GLubyte * PixelBuffer = new GLubyte[SCREEN_WIDTH * SCREEN_HEIGHT * 3];

GLFWwindow *InitializeWindow()
{
  glfwSetErrorCallback(glfw_error_callback);

  if (!glfwInit())
  {
    return NULL;
  }

  GLFWwindow *window;

  // Initialize the library
  if (!glfwInit())
  {
    return NULL;
  }

  // Create a windowed mode window and its OpenGL context
  window = glfwCreateWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Mikompilation", NULL, NULL);

  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

  glfwSetInputMode(window, GLFW_STICKY_KEYS, 1);

  int screenWidth, screenHeight;
  glfwGetFramebufferSize(window, &screenWidth, &screenHeight);

  if (!window)
  {
    glfwTerminate();
    return NULL;
  }

  // Make the window's context current
  glfwMakeContextCurrent(window);

  glViewport(0.0f, 0.0f, screenWidth, screenHeight);  // specifies the part of the window to which OpenGL will draw (in pixels), convert from normalised to pixels
  glMatrixMode(GL_PROJECTION);                        // projection matrix defines the properties of the camera that views the objects in the world coordinate frame. Here you typically set the zoom factor, aspect ratio and the near and far clipping planes
  glLoadIdentity();                                   // replace the current matrix with the identity matrix and starts us a fresh because matrix transforms such as glOrpho and glRotate cumulate, basically puts us at (0, 0, 0)
  glOrtho(0, SCREEN_WIDTH, 0, SCREEN_HEIGHT, 0, 1000);// essentially set coordinate system
  glMatrixMode(GL_MODELVIEW);                         // (default matrix mode) modelview matrix defines how your objects are transformed (meaning translation, rotation and scaling) in your world
  glLoadIdentity();                                   // same as above comment

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

  delete PixelBuffer;
  PixelBuffer = new GLubyte[SCREEN_WIDTH * SCREEN_HEIGHT * 3];
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

void drawPixelBuffer()
{
  for (int y = 0; y < SCREEN_HEIGHT; y++)
  {
    for (int x = 0; x < SCREEN_WIDTH; x++)
    {
      int position = (x + y * SCREEN_WIDTH) * 3;
      PixelBuffer[position] = rand();
      PixelBuffer[position + 1] = rand();
      PixelBuffer[position + 2] = rand();
    }
  }

  glDrawPixels(SCREEN_WIDTH, SCREEN_HEIGHT, GL_RGB, GL_UNSIGNED_BYTE, PixelBuffer);
}