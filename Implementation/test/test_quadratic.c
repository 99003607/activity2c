#include<unity.h>
#include<Determinant.h>
#include<test_quadratic.h>

void test_quadratic()
{

  RUN_TEST(test_Deter);
  RUN_TEST(test_getroots);
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
  TEST_ASSERT_EQUAL(-4, getroots(16,1,8,20));
  
   //Roots are complex and different
  TEST_ASSERT_EQUAL(2.5, getroots(17,1,-5,2));
}

