#include <iostream>

enum Buttons
{
    CROSS,
    TRIANGLE,
    CIRCLE,
    SQUARE,
    DPAD_UP,
    DPAD_DOWN,
    DPAD_LEFT,
    DPAD_RIGHT,
};

enum ABS
{
    LSTICK_XAXIS,
    LSTICK_YAXIS,
    RSTICK_XAXIS,
    RSTICK_YAXIS
};


class PS2Controller
{

    private:

    // Incase we need to account for multiple controllers. Though we probably won't for awhile outside of debug stuff.
    // Think stuff like a custom multiplayer?
    int controllerID;

    // Though Fatal Frame itself I don't believe used this particular feature. Best to add it for accuracies sake.
    int buttonPressure;

    // Note, the playstation 2 controller is wired backwards. 0 is up, positive is down.
    // The resting value is always 128. Stick range is [255, 128, 0]
    int absAxis = 128;

    public:
    virtual int PressButton(Buttons b) = 0;
    virtual void ReleaseButton(Buttons b) = 0;
    virtual int MoveABS(ABS abs) = 0;
};