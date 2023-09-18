#ifdef TEST

#include "unity.h"

#include "Battery.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Battery_TurnOFF(void)
{
    // When the headlight switch is off...
    Battery_SwitchOff();
    // then the headlights are off.
    TEST_ASSERT_EQUAL(false, Battery_IsOn());
}

void test_Battery_TurnON(void)
{
    // When the headlight switch is off...
    Battery_SwitchOn();
    // then the headlights are off.
    TEST_ASSERT_EQUAL(true, Battery_IsOn());
}

#endif // TEST
