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

TEST(StringCalculatorTestSuite,add_InputsWithOneDelimeter_ExpectedIsSumofTwoNumbers) {
  // Arrrange
  string input = "2,3";
  int expectedValue = 5;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_InputsTwoDelimeters_ExpectedIsSumofThreeNumbers) {
  // Arrrange
  string input = "1,5,6";
  int expectedValue = 12;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}
