#include "StringCalculator.h"
#include <gtest/gtest.h>

TEST(StringCalculatorTestSuite,add_InputStringIsEmpty_ExpectedOutputIsZero) { // Testsuite name, Test case name
  // Arrrange
  string input = "";
  int expectedValue = 0;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_InputStringIsZero_ExpectedOutputIsZero) {
  // Arrrange
  string input = "0";
  int expectedValue = 0;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_InputStringIsOne_ExpectedOutputIsOne) {
  // Arrrange
  string input = "1";
  int expectedValue = 1;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_InputTwoNumbersOneDelimeter_ExpectedIsSumofTwoNumbers) {
  // Arrrange
  string input = "1,2";
  int expectedValue = 3;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}
