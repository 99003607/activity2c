#include <unity.h>
//#include <.h>
#include<baseconversion.h>

/* Modify these two lines according to the project */
#include <baseconversion.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_temperature(void);
void test_time(void);
void test_length(void);
void test_weight(void);

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
  RUN_TEST(test_temperature);
  RUN_TEST(test_time);
  RUN_TEST(test_length);
  RUN_TEST(test_weight);

  /* Close the Unity Test Framework */
  return UNITY_END();
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

 
