#include <gtest/gtest.h>
#include "utils/checker.h"

// Test case 1: Checking valid Accept (AC) conditions
TEST(CheckerTest, HandlesCorrectAnswers) {
    EXPECT_TRUE(check_answer("42", "42"));
    EXPECT_TRUE(check_answer("hello world", "hello world"));
}

// Test case 2: Checking Wrong Answer (WA) conditions
TEST(CheckerTest, HandlesWrongAnswers) {
    EXPECT_FALSE(check_answer("42", "43"));
    EXPECT_FALSE(check_answer("hello", "Hello")); // Case sensitive failure
}