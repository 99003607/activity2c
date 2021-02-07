#include <unity.h>
#include<reverse.h>
#include<test_revers.h>




/* Start of the application test */
void test_revers()
{
  RUN_TEST(test_convertoctalToDecimal);
  RUN_TEST(test_convertbinaryToDecimal);
}

/* Write all the test functions */ 
void test_convertoctalToDecimal(void) {
  TEST_ASSERT_EQUAL(55, convertoctalToDecimal(67));
   
}

void test_convertbinaryToDecimal(void) {
  TEST_ASSERT_EQUAL(439, convert(110110111));
  
}


