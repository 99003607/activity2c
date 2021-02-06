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
