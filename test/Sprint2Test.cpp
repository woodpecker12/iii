#include "gtest/gtest.h"
#include "RockPaperScissors.h"

struct Sprint2Test : testing::Test
{

};

TEST_F(Sprint2Test, should_report_ROCK_when_num_include_string_3)
{
	ASSERT_EQ(RockPaperScissors(3).report(), ROCK);
}

TEST_F(Sprint2Test, should_report_ROCK_when_num_include_string_3_and_can_div_3_and_5)
{
	ASSERT_EQ(RockPaperScissors(35).report(), ROCK);
}

TEST_F(Sprint2Test, should_report_ROCK_when_num_include_string_3_and_can_div_3_and_7)
{
	ASSERT_EQ(RockPaperScissors(63).report(), ROCK);
}
