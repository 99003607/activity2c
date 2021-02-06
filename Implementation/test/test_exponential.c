#include <unity.h>
//#include <calculator_operations.h>
#include<exponential.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_expo(void);
void test_power(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_expo);
  RUN_TEST(test_power);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_expo(void) {
  TEST_ASSERT_EQUAL(1.0, expo(10,0));
  TEST_ASSERT_EQUAL(2.718282, expo(10,1));
  TEST_ASSERT_EQUAL(0.367879, expo(10,-1)); 
  TEST_ASSERT_EQUAL(5.017, expo(10,3));
  TEST_ASSERT_EQUAL(13.04765, expo(10,2));
   
}
void test_power(void) {
    TEST_ASSERT_EQUAL(81.0, power(3,4));
    TEST_ASSERT_EQUAL(387420480.0, power(9,9));
    TEST_ASSERT_EQUAL(1, power(5,0));
    TEST_ASSERT_EQUAL(0.2, power(5,-1));
    TEST_ASSERT_EQUAL(0.0256, power(4,-2));
}
