#include <unity.h>
//#include <.h>
#include<baseconversion.h>

/* Modify these two lines according to the project */
#include <test_base.h>


 
void test_base()
{
  RUN_TEST(test_temperature);
  RUN_TEST(test_time);
  RUN_TEST(test_length);
  RUN_TEST(test_weight); 
}

/* Write all the test functions */ 
void test_dectobin(void) {
	//decimal to binary
  TEST_ASSERT_EQUAL(1111001, dectobin(121));
  
  
  TEST_ASSERT_EQUAL(1001001101,  dectobin(589)); 
   
}

void test_dectooct(void) {
	//decimal to octal
  TEST_ASSERT_EQUAL(171,  dectooct(121));
  
 
  TEST_ASSERT_EQUAL(555,  dectooct(365));
  TEST_ASSERT_EQUAL(101,  dectooct(65));
  TEST_ASSERT_EQUAL(43,  dectooct(35));
} 

 
