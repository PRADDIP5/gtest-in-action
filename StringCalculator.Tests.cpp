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

TEST(StringCalculatorTestSuite,add_TwoInputsWithCommaDelimeter_ExpectedIsSumofTwoNumbers) {
  // Arrrange
  string input = "2,3";
  int expectedValue = 5;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_ThreeInputsWithCommaDelimeter_ExpectedIsSumofThreeNumbers) {
  // Arrrange
  string input = "1,5,6";
  int expectedValue = 12;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_FourInputsWIthCommaDelimeter_ExpectedIsSumofFourNumbers) {
  // Arrrange
  string input = "1,5,6,12";
  int expectedValue = 24;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_ThreeInputsWithCommaAndNewLineDelimeters_ExpectedIsSumofThreeNumbers) {
  // Arrrange
  string input = "2\n3,5";
  int expectedValue = 10;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_TwoInputsWithMultipleDelimeters_ExpectedIsSumofNumbers) {
  // Arrrange
  string input = "//;\n1;2";
  int expectedValue = 3;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_ThreeInputsWithMultipleDelimeters_ExpectedIsSumofNumbers) {
  // Arrrange
  string input = "//,\n1,2;3";
  int expectedValue = 6;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_OneInputIsGreaterThan1000_ExpectedIsSumofRemainingNumbers) {
  // Arrrange
  string input = "1,1001,2";
  int expectedValue = 3;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

TEST(StringCalculatorTestSuite,add_OneInputIsNegative_ExpectedIsThrowException) {
  // Arrrange
  string input = "1,-1,2";
  int expectedValue = 3;
  //Act
  int actualValue = Add(input);
  //Assert
  ASSERT_ANY_THROW(Add(input));
}
