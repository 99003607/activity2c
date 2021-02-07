#include <unity.h>
#include<reverse.h>
#include<test_revers.h>




/* Start of the application test */
void test_revers()
{
  RUN_TEST(convertoctalToDecimal);
  RUN_TEST(convertbinaryToDecimal);
}

/* Write all the test functions */ 
void convertoctalToDecimal(void) {
  TEST_ASSERT_EQUAL(55, convertoctalToDecimal(67));
   
}

void convertbinaryToDecimal(void) {
  TEST_ASSERT_EQUAL(439, convert(110110111));
  
}


