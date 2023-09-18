#ifndef BATTERY_H
#define BATTERY_H

#include <stdbool.h>

void Battery_SwitchOff(void);
void Battery_SwitchOn(void);

bool Battery_IsOn(void);

#endif // BATTERY_H
