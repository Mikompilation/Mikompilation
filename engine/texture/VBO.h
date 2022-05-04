#pragma once

#include "GL/glew.h"

class VBO
{
 public:
  // Reference ID of the Vertex Buffer Object
  GLuint ID;
  // Constructor that generates a Vertex Buffer Object and links it to vertices
  VBO(GLfloat* vertices, GLsizeiptr size);

  // Binds the VBO
  void Bind();
  // Unbinds the VBO
  void Unbind();
  // Deletes the VBO
  void Delete();
};