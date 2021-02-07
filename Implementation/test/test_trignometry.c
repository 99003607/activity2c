#include <unity.h>
#include<test_trigno.h>
#include<trignometry.h>

void test_is_trig()
{
  /* Run Test functions */
  RUN_TEST(test_sin);
  RUN_TEST(test_cos);
  RUN_TEST(test_tan);
}

/* Write all the test functions */ 
void test_sin(void) {
  //test function to verify sin operation 
  TEST_ASSERT_EQUAL(0.5, trig_s(30));
  TEST_ASSERT_EQUAL(0.7, trig_s(45));   
}
void test_cos(void) {
  
  //test function to verify cos operation
	 TEST_ASSERT_EQUAL(0, trig_c(90));
  TEST_ASSERT_EQUAL(0.5, trig_c(60));
}
void test_tan(void) {
  
  //test function to verify tan operation
  //TEST_ASSERT_EQUAL(1.732, trig_t(60));
  TEST_ASSERT_EQUAL(0.707107, trig_t(45));
}

