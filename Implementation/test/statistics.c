#include <unity.h>
#include "test_unitconv.h"
#include<unitconver.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"
#include <unity.h>
#include "test_unitconv.h"
#include<unitconver.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"

/

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_1);
  
  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_1(void) {
	//celcius to farenheit
  TEST_ASSERT_EQUAL(-12, statitics(2,-10,-14));
  //farenheit to celcius
  TEST_ASSERT_EQUAL(16, statitics(2,11,21)); 
   
}


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int test_main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_1);
 

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_temperature(void) {
	//celcius to farenheit
  TEST_ASSERT_EQUAL(50, temperature_func(10,1));
  //farenheit to celcius
  TEST_ASSERT_EQUAL(15.55, temperature_func(60,2)); 
   
}
