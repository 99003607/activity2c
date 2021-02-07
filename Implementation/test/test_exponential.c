#include <unity.h>
//#include <calculator_operations.h>
#include<exponential.h>
#include<test_exponential.h>

void test_is_expo()
{

/* Run Test functions */
  RUN_TEST(test_expo);
  RUN_TEST(test_power);
}

/* Write all the test functions */ 
void test_expo(void) {
  TEST_ASSERT_EQUAL(1.0, expo(10,0));
  TEST_ASSERT_EQUAL(2.718282, expo(10,1));
  TEST_ASSERT_EQUAL(0.367879, expo(10,-1)); 
  //TEST_ASSERT_EQUAL(20, expo(10,3));
  //TEST_ASSERT_EQUAL(13.04765, expo(10,2));
   
}
void test_power(void) {
    TEST_ASSERT_EQUAL(81.0, power(3,4));
    TEST_ASSERT_EQUAL(31381059584, power(9,9));
    TEST_ASSERT_EQUAL(1, power(5,0));
    //TEST_ASSERT_EQUAL(0.2, power(5,-1));
    //TEST_ASSERT_EQUAL(0.0256, power(4,-2));
}
