#include <gtest/gtest.h>
#include "../src/string_utils.h"

TEST(StringUtilsTest, ToUpperWorks) {
    StringUtils su;
    EXPECT_EQ(su.toUpper("abc"), "ABC");
    EXPECT_EQ(su.toUpper("Hello World!"), "HELLO WORLD!");
}

TEST(StringUtilsTest, ReverseWorks) {
    StringUtils su;
    EXPECT_EQ(su.reverse("abc"), "cba");
    EXPECT_EQ(su.reverse("racecar"), "racecar");
}

