include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
void test_and(void);
void test_or(void);
void test_not(void);
void test_nand(void);
void test_nor(void);
void test_xor(void);
void test_xnor(void);
CU_add_test(suite, "and", test_and);
CU_add_test(suite, "or", test_or);
CU_add_test(suite, "nand", test_nand);
CU_add_test(suite, "nor", test_nor);
CU_add_test(suite, "xor", test_xor);
CU_add_test(suite, "xnor", test_xnor);
oid test_and(void) {
 CU_ASSERT(10 ==  and(10, 15));
 
 /* Dummy fail*/
 CU_ASSERT(9 == and(8, 15));
}

void test_or(void) {
 CU_ASSERT(15 ==  or(10, 15));
 
 /* Dummy fail*/
 CU_ASSERT(9 == or(10, 10));
}

void test_not(void) {
 CU_ASSERT(-36 ==  not(35));
 
 /* Dummy fail*/
 CU_ASSERT(9 == not(-12));
}

void test_nand(void) {
 CU_ASSERT(-11 ==  nand(10, 15));
 
 /* Dummy fail*/
 CU_ASSERT(9 == nand(8, 15));
}

void test_nor(void) {
 CU_ASSERT(-16 ==  nor(10, 15));
 
 /* Dummy fail*/
 CU_ASSERT(9 == nor(8, 15));
}

void test_xor(void) {
 CU_ASSERT(5 ==  xor(10, 15));
 
 /* Dummy fail*/
 CU_ASSERT(9 == xor(8, 15));
}

void test_xnor(void) {
 CU_ASSERT(-6 ==  xnor(10, 15));
 
 /* Dummy fail*/
 CU_ASSERT(9 == xnor(8, 15));
}