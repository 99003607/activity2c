#include <unity.h>
//#include <calculator_operations.h>
#include<trignometry.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_trig(void);



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
  RUN_TEST(test_trig);
  

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_trig(void) {
  TEST_ASSERT_EQUAL(1, trig(30));
  TEST_ASSERT_EQUAL(, trig(90));
  TEST_ASSERT_EQUAL(0.367879, trig(45)); 
  TEST_ASSERT_EQUAL(5.017, trig(30));
   
}
