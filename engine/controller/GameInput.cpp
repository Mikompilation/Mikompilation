#include "GameInput.h"
//#include "GLFW/glfw3.h"
#include "file/file_util.h"
#include <fstream>

void Input::InitInput(Input::InputType inputType)
{
  char *controllerMappingFile = ReadFullFile("resources/gamecontrollerdb.txt");

  //glfwUpdateGamepadMappings(controllerMappingFile);

  delete[] controllerMappingFile;

  switch (inputType)
  {
    CONTROLLER:
    default: mainGameInput = new Input::Controller(0);
  }
}

int Input::GameInput::GetInputId()
{
  return this->inputId;
}

void Input::GameInput::SetInputId(int inputId)
{
  this->inputId = inputId;
}

void Input::GameInput::SetInputType(InputType inputType)
{
  this->inputType = inputType;
}

Input::InputType Input::GameInput::GetInputType()
{
  return this->inputType;
}

void Input::GameInput::SetIsConnected(bool isConnected)
{
  this->isConnected = isConnected;
}

bool Input::GameInput::IsConnected()
{
  return this->isConnected;
}

Input::Controller::Controller(int inputId)
{
  //int present = glfwJoystickPresent(inputId);

  //auto name = glfwGetGamepadName(inputId);

  //printf("[GameInput] Controller [%d] %s is connected: %s\n", inputId, name, present == 1 ? "true" : "false");

  //this->SetIsConnected(present == 1);
  this->SetInputId(inputId);
  this->SetInputType(CONTROLLER);
}

int Input::Controller::PollInput(int key)
{
  return 0;
}

void Input::Controller::Update()
{
  if (!this->IsConnected())
  {
    printf("[GameInput] Controller %d is not connected", this->GetInputId());

    return;
  }

  int count;
  //const ControllerJoystickAxis *axes = (ControllerJoystickAxis *) glfwGetJoystickAxes(GLFW_JOYSTICK_1, &count);

  //uint8_t *button = (uint8_t *) glfwGetJoystickButtons(GLFW_JOYSTICK_1, &count);

  //printf("[GameInput] Controller %d sticks L X: %.3f, L Y: %.3f, R X: %.3f, R Y: %.3f; Pressure triggers L: %.3f, R: %.3f\n", this->GetInputId(), axes->LeftX, axes->LeftY, axes->RightX, axes->RightY, axes->LeftTrigger, axes->RightTrigger);
}
