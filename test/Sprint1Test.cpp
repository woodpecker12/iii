#include "gtest/gtest.h"
#include "RockPaperScissors.h"

struct Sprint1Test : testing::Test
{

};

TEST_F(Sprint1Test, should_report_num_when_num_is_2)
{
	ASSERT_EQ(RockPaperScissors(2).report(), 2);
}

TEST_F(Sprint1Test, should_report_ROCK_when_num_can_div_3)
{
	ASSERT_EQ(RockPaperScissors(9).report(), ROCK);
}

TEST_F(Sprint1Test, should_report_PAPER_when_num_can_div_7)
{
	ASSERT_EQ(RockPaperScissors(7).report(), PAPER);
}

TEST_F(Sprint1Test, should_report_SCISSORS_when_num_can_div_5)
{
	ASSERT_EQ(RockPaperScissors(5).report(), SCISSORS);
}

TEST_F(Sprint1Test, should_report_ROCK_and_PAPER_when_num_can_div_3_and_7)
{
	ASSERT_EQ(RockPaperScissors(21).report(), ROCK | PAPER);
}

TEST_F(Sprint1Test, should_report_SCISSORS_and_PAPER_when_num_can_div_3_and_5)
{
	ASSERT_EQ(RockPaperScissors(60).report(), SCISSORS | ROCK);
}

TEST_F(Sprint1Test, should_report_ROCK_SCISSORS_and_PAPER_when_num_can_div_3_and_5_7)
{
	ASSERT_EQ(RockPaperScissors(105).report(), ROCK | SCISSORS | PAPER);
}
