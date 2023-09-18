#include "src/Battery.h"
#include "C:/Ruby27-x64/lib/ruby/gems/2.7.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"








void setUp(void)

{

}



void tearDown(void)

{

}



void test_Battery_TurnOFF(void)

{



    Battery_SwitchOff();



    UnityAssertEqualNumber((UNITY_INT)((

   0

   )), (UNITY_INT)((Battery_IsOn())), (

   ((void *)0)

   ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT);

}



void test_Battery_TurnON(void)

{



    Battery_SwitchOn();



    UnityAssertEqualNumber((UNITY_INT)((

   1

   )), (UNITY_INT)((Battery_IsOn())), (

   ((void *)0)

   ), (UNITY_UINT)(28), UNITY_DISPLAY_STYLE_INT);

}
