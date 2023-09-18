#include "Battery.h"

static bool areLightsOn = false;

void Battery_SwitchOff(void)
{
    areLightsOn = false;
}
void Battery_SwitchOn(void)
{
    areLightsOn = true;
}


bool Battery_IsOn(void)
{
    return areLightsOn;
}