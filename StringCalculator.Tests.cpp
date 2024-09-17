#include "StringCalculator.h"
#include <gtest/gtest.h>

class StringCaluculatorFixture:public testing::Test {  // Test Fixture
protected:
  string input;
  int expectedValue,actualValue;
};

TEST_F(StringCaluculatorFixture,add_InputStringIsEmpty_ExpectedOutputIsZero) { // Test suite name should be name of Test Fixture
  // Arrrange
  input = "";
  expectedValue = 0;
  //Act
  actualValue = Add(input);
  //Assert
  ASSERT_EQ(actualValue,expectedValue);
}

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

TEST(StringCalculatorTestSuite,add_InputIsNegativeValue_ExpectedExceptionThrow) {
  // Arrrange
  string input = "1,-2,3,4";
  //int expectedValue = 8;
  //Act
  Add(input);
  //Assert
  ASSERT_THROW(Add(input),invalid_argument);
}
