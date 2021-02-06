#include <unity.h>
//#include <calculator_operations.h>
#include<Determinant.h>

/* Modify these two lines according to the project */
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_Deter(void);
void test_getroots(void);


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
  RUN_TEST(test_Deter);
  RUN_TEST(test_getroots);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_Deter(void) {
	//Determinant equal to zero
  TEST_ASSERT_EQUAL(0, Deter(1,2,1));
    //Determinant less than zero
  TEST_ASSERT_EQUAL(-4, Deter(1,2,2));
    //Determinant greater than zero
  TEST_ASSERT_EQUAL(1, Deter(1,3,2));  
   
}

void test_getroots(void) {
	//Roots are real and equal
  TEST_ASSERT_EQUAL(2, getroots(0,1,-4,4));
  
    //Roots are complex and different
  TEST_ASSERT_EQUAL(3900, time_func(65,2));
}

