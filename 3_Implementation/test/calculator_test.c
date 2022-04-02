#include "../unity/unity.h"
#include "../inc/calculator.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}


void test_add(void)
{
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
  TEST_ASSERT_EQUAL(-30, add(-10, -20));
  TEST_ASSERT_EQUAL(10, add(-10, 20));
}

void test_sub(void)
{
  TEST_ASSERT_EQUAL(-3, sub(0, 3));
}

void test_multi(void)
{
  TEST_ASSERT_EQUAL(0, multi(1, 0));
}

void test_div(void)
{
  TEST_ASSERT_EQUAL(0, divide(1, 0));
}
void test_squareroot(void)
{
  TEST_ASSERT_EQUAL(2.000000, squarerootV(4));
}

void test_power(void)
{
  TEST_ASSERT_EQUAL(16.000000, powerV(2,4));
}

void test_modulo(void)
{
  TEST_ASSERT_EQUAL(1.000000, modulo(17,4));
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */

  
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
  RUN_TEST(test_multi);
  RUN_TEST(test_div);
  RUN_TEST(test_squareroot);
  RUN_TEST(test_power);
  RUN_TEST(test_modulo);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
