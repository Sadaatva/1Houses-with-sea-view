#include "sea.cpp"
#include <gtest/gtest.h>

TEST(HousesTest, Vectors) {
    std::vector<int> heights1 = { 1, 3, 2 };
    std::vector<int> answer1 = { 1, 2 };
    std::vector<int> result1 = houses(heights1);

    ASSERT_EQ(answer1, result1);

    std::vector<int> heights2 = { 5, 2, 7, 3, 6 };
    std::vector<int> answer2 = { 2, 4 };
    std::vector<int> result2 = houses(heights2);

    ASSERT_EQ(answer2, result2);

    std::vector<int> heights3 = { 9, 9, 9 };
    std::vector<int> answer3 = { 2 };
    std::vector<int> result3 = houses(heights3);

    ASSERT_EQ(answer3, result3);

    std::vector<int> heights4 = { 18 };
    std::vector<int> answer4 = { 0 };
    std::vector<int> result4 = houses(heights4);

    ASSERT_EQ(answer4, result4);
}

TEST(HousesTest, EmptyVector) {
    std::vector<int> heights;
    ASSERT_THROW(houses(heights), std::invalid_argument);
}

TEST(HousesTest, FloatVector) {
    std::vector<float> heights = { 1.0, 3.0, 2.0 };
    ASSERT_THROW(houses(heights), std::invalid_argument);
}

TEST(HousesTest, StringVector) {
    std::vector<std::string> heights = { "1", "3", "2" };
    ASSERT_THROW(houses(heights), std::invalid_argument);
}

TEST(HousesTest, NegativeValues) {
    std::vector<int> heights = { 1, -3, 2 };
    ASSERT_THROW(houses(heights), std::invalid_argument);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
