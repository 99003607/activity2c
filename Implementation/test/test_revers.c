#include <unity.h>
//#include <calculator_operations.h>
#include<unitconver.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void convertoctalToDecimal(void);
void convertbinaryToDecimal(void);

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
  RUN_TEST(convertoctalToDecimal);
  RUN_TEST(convertbinaryToDecimal);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void convertoctalToDecimal(void) {
  TEST_ASSERT_EQUAL(55, convertoctalToDecimal(67));
   
}

void convertbinaryToDecimal(void) {
  TEST_ASSERT_EQUAL(439, convert(110110111));
  
}


