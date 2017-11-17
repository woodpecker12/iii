#include "gtest/gtest.h"
#include "RockPaperScissors.h"

struct Sprint2Test : testing::Test
{

};

TEST_F(Sprint2Test, should_report_ROCK_when_num_include_string_3)
{
	ASSERT_EQ(RockPaperScissors(3).report(), ROCK);
	ASSERT_EQ(RockPaperScissors(35).report(), ROCK);
}
