#include "unity.h"
#include <calculator_operations.h>
#include<test_calculator_operations.h>



/* Start of the application test */
void test_calc()
{

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(40, add(20, 20));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1000, add(75, 750));
}

void test_subtract(void) {
  TEST_ASSERT_EQUAL(-2, subtract(0, 2));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, subtract(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, multiply(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(2, multiply(1, 3));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(0, divide(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(3, divide(2, 2));
}
