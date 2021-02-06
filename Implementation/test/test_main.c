#include <unity.h>
#include<test_unitconver.h>
#include<test_base.h>
#include<test_exponential.h>
#include<test_quadratic.h>
/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

int main(void)
{
	/* Initiate the Unity Test Framework */
	UNITY_BEGIN();

    // Check primality function
    test_is_unitconv();
	 test_base();
	test_is_expo();
	 //test_quadratic();

	/* Close the Unity Test Framework */
	return UNITY_END();
}
