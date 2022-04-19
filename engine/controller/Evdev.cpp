#include <libevdev/libevdev.h>
#include <fcntl.h>
#include "Evdev.h"


bool Evdev::init()
{

    fd = open("/dev/uinput", O_WRONLY | O_NONBLOCK);

    if (fd < 0)
    {
        printf("Error opening device \n");
        return false;
    }
    int err = libevdev_new_from_fd(fd, &controller);
    if (err < 0)
    {
        printf("Error init failed \n");
        return false;
    }

    return true;
}