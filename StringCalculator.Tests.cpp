#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,add_emptyINutString_ZeroIsExpected) { // Testsuite name, Test case name
  // Arrrange
  string input = "";
  int expectedValue = 0;
  //Act
  int actualValue = Add(inout);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}
