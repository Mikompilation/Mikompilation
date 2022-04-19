#include "glf3_render.h"

#include "shader.h"
#include "stb_image.h"

unsigned int VBO, VAO, EBO;
unsigned int texture1;
int SCREEN_WIDTH = 800;
int SCREEN_HEIGHT = 600;

float vertices[] = {
    // positions          // colors           // texture coords
    0.5f, 0.5f, 0.0f, 1.0f, 0.0f, 0.0f, 1.0f, 1.0f,  // top right
    0.5f, -0.5f, 0.0f, 0.0f, 1.0f, 0.0f, 1.0f, 0.0f, // bottom right
    -0.5f, -0.5f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f,// bottom left
    -0.5f, 0.5f, 0.0f, 1.0f, 1.0f, 0.0f, 0.0f, 1.0f  // top left
};

unsigned int indices[] = {
    0, 1, 3, // first triangle
    1, 2, 3  // second triangle
};

GLubyte *PixelBuffer = new GLubyte[SCREEN_WIDTH * SCREEN_HEIGHT * 3];

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

  glGenVertexArrays(1, &VAO);
  glGenBuffers(1, &VBO);
  glGenBuffers(1, &EBO);

  glBindVertexArray(VAO);

  glBindBuffer(GL_ARRAY_BUFFER, VBO);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

  glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
  glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

  // position attribute
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  // color attribute
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(3 * sizeof(float)));
  glEnableVertexAttribArray(1);
  // texture coord attribute
  glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void*)(6 * sizeof(float)));
  glEnableVertexAttribArray(2);

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

  delete[] PixelBuffer;
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

void setPixel(int width, int height, GLubyte r, GLubyte g, GLubyte b)
{
  if (width > SCREEN_WIDTH || height > SCREEN_HEIGHT || PixelBuffer == nullptr)
  {
    return;
  }

  int position = (width + height * SCREEN_WIDTH) * 3;
  PixelBuffer[position] = r;
  PixelBuffer[position + 1] = g;
  PixelBuffer[position + 2] = b;
}

void loadTexture()
{
  Shader ourShader("D:\\Programming\\Git\\Github\\Mikompilation\\render\\shader.vs", "D:\\Programming\\Git\\Github\\Mikompilation\\render\\shader.fs");

  glGenTextures(1, &texture1);
  glBindTexture(GL_TEXTURE_2D, texture1);

  // set the texture wrapping/filtering options (on the currently bound texture object)
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
  glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

  // load and generate the texture
  int width, height, nrChannels;

  stbi_set_flip_vertically_on_load(true);

  unsigned char *data = stbi_load("D:\\Programming\\Git\\Github\\Mikompilation\\ressources\\tecmo.png", &width, &height, &nrChannels, 0);

  if (data)
  {
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
    glGenerateMipmap(GL_TEXTURE_2D);
  }
  else
  {
    std::cout << "Failed to load texture" << std::endl;
  }

  stbi_image_free(data);

  glVertexAttribPointer(2, 2, GL_FLOAT, GL_FALSE, 8 * sizeof(float), (void *) (6 * sizeof(float)));
  glEnableVertexAttribArray(2);

  ourShader.use();
  // either set it manually like so:
  glUniform1i(glGetUniformLocation(ourShader.ID, "texture1"), 0);
}

void drawTexture()
{
  glActiveTexture(GL_TEXTURE0);
  glBindTexture(GL_TEXTURE_2D, texture1);
  glBindVertexArray(VAO);
  glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
}

void drawPixelBuffer()
{
  if (PixelBuffer == nullptr)
  {
    return;
  }

  glDrawPixels(SCREEN_WIDTH, SCREEN_HEIGHT, GL_RGB, GL_UNSIGNED_BYTE, PixelBuffer);
}