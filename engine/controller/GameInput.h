#pragma once

namespace Input
{

enum InputType : int
{
  KEYBOARD,
  CONTROLLER
};

struct ControllerJoystickAxis
{
  float LeftX;
  float LeftY;
  float RightX;
  float LeftTrigger;
  float RightTrigger;
  float RightY;
};

void InitInput(Input::InputType inputType);

class GameInput
{
 private:
  int inputId;
  InputType inputType;
  bool isConnected;

 protected:
  void SetIsConnected(bool isConnected);
  void SetInputType(InputType inputType);
  void SetInputId(int inputId);

 public:
  bool IsConnected();
  InputType GetInputType();
  int GetInputId();
  virtual int PollInput(int key) = 0;
  virtual void Update() = 0;
};

class Controller : public GameInput
{
 private:

  /// PS2 controller is wired backwards on the y axis:
  ///     RANGE   -> [255, 128, 0]
  ///     REST    -> 128
  ///     0       -> UP, RIGHT
  ///     [0, +]  -> DOWN, LEFT
  int absAxis = 128;

 public:
  Controller(int inputId);
  virtual int PollInput(int key);
  virtual void Update();
};

};

inline Input::GameInput *mainGameInput;