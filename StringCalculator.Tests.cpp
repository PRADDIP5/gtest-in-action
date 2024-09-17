#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,add_InputStringIsEmpty_ExpectedIsZero) { // Testsuite name, Test case name
  // Arrrange
  string input = "";
  int expectedValue = 0;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_InputStringIsZero_ExpectedIsZero) {
// Arrrange
  string input = "0";
  int expectedValue = 0;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}
