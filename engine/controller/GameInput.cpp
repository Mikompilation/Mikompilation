#include "GameInput.h"
#include "file/file_util.h"
#include <fstream>

void Input::InitInput(Input::InputType inputType)
{
  char *controllerMappingFile = ReadFullFile("resources/gamecontrollerdb.txt");

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
  this->SetInputId(inputId);
  this->SetInputType(CONTROLLER);
}

int Input::Controller::PollInput(int key)
{
  return 0;
}

void Input::Controller::Update()
{
}
