#include <unity.h>
#include "test_1.h"
#include<statistics.h>

/* Modify these two lines according to the project */
#include <calculator_operations.h>
#define PROJECT_NAME    "Calculator"
#include <unity.h>
#include "test_1.h"

void test_time(void) {
	//seconds to minute
  TEST_ASSERT_EQUAL(1.5, time_func(90,1));
  
  //minute to seconds
  TEST_ASSERT_EQUAL(3900, time_func(65,2));
}

void test_length(void) {
	//inch to cm
  TEST_ASSERT_EQUAL(0, length_func(34,1));
  
  //cm to meter
  TEST_ASSERT_EQUAL(14, length_func(1400,2));
}

void test_weight(void) {
	//miligram to gram
  TEST_ASSERT_EQUAL(8.240, weight_func(8240,1));
  
  //gram to kilogram
  TEST_ASSERT_EQUAL(2.587, weight_func(2587,2));
}
/
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


/* Required by the u

void test_time(void) {
	//seconds to minute
  TEST_ASSERT_EQUAL(1.5, time_func(90,1));
  
  //minute to seconds
  TEST_ASSERT_EQUAL(3900, time_func(65,2));
}

void test_length(void) {
	//inch to cm
  TEST_ASSERT_EQUAL(0, length_func(34,1));
  
  //cm to meter
  TEST_ASSERT_EQUAL(14, length_func(1400,2));
}

void test_weight(void) {
	//miligram to gram
  TEST_ASSERT_EQUAL(8.240, weight_func(8240,1));
  
  //gram to kilogram
  TEST_ASSERT_EQUAL(2.587, weight_func(2587,2));
}
/nity test framework */
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


}
