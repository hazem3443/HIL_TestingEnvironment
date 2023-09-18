#ifdef TEST

#include "unity.h"

#include "tempsensor.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_tempsensor_NeedToImplement(void)
{
    // TEST_IGNORE_MESSAGE("Need to Implement tempsensor");
    uint8_t tempRegisterAddress = 0x03;
    float expectedTemperature = 104.6f;
    float tolerance = 0.1f;

    // When
    i2c_readRegister_ExpectAndReturn(tempRegisterAddress, 0x3ff);

    // Then
    float actualTemperature = getTemperature();
    TEST_ASSERT_FLOAT_WITHIN(tolerance, expectedTemperature,
                             actualTemperature);
}

#endif // TEST
