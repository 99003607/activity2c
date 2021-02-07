#include <unity.h>
#include<test_logicaunittest.h>

#include<logicalfunctions.h>

void test_logics()
{

/* Run Test functions */
  RUN_TEST(test_or);
  RUN_TEST(test_and);
  RUN_TEST(test_nand);
  RUN_TEST(test_nor);
  RUN_TEST(test_xor);
  RUN_TEST(test_xnor);
}

/* Write all the test functions */ 
void test_and(void) {
	//ANDing of two int values
  TEST_ASSERT_EQUAL(10,and(10,15));
   
}

void test_or(void) {
	//Oring of two int values
  TEST_ASSERT_EQUAL(61,or(60, 13));
}

void test_nand(void) {
	//nand of two int values
  TEST_ASSERT_EQUAL(-11,nand(10, 15));
}

void test_nor(void) {
	//noring of two values
  TEST_ASSERT_EQUAL(-16,nor(10, 15));
}
void test_xor(void) {
	//xoring of two values
  TEST_ASSERT_EQUAL(5,xor(10, 15));
}
void test_xnor(void) {
	//xnoring of two values
  TEST_ASSERT_EQUAL(-6,xnor(10, 15));
}
