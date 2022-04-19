#include <iostream>
#include <libevdev/libevdev.h>
#include <map>

#include "PS2Controller.h"

// For future configurator usage. List button names in here
static std::map<Buttons, std::string> controlNames;

class Evdev : PS2Controller
{

private:

int fd;
libevdev* controller;

public:
bool init();

int PressButton(Buttons b) override;
void ReleaseButton(Buttons b) override;
int MoveABS(ABS abs) override;

};
