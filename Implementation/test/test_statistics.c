#include <unity.h>
#include<statitics.h>
#include<test_statistcs.h>




void test_statistics()
{
  RUN_TEST(test_1);
}


void test_1(void) {
	//celcius to farenheit
  TEST_ASSERT_EQUAL(-12, statitics(-10,-14));
  //farenheit to celcius
  TEST_ASSERT_EQUAL(400, statitics(25,65)); 
   
}


