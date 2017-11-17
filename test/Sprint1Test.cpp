#include "gtest/gtest.h"
#include "RockPaperScissors.h"
#include "Sprint1Rule.h"
#include "GameDefine.h"

struct Sprint1Test : testing::Test
{
	Sprint1Test() : rockPaperScissors(getSprint1Rule())
	{
	}

protected:
	RockPaperScissors rockPaperScissors;
};

TEST_F(Sprint1Test, should_report_num_when_num_is_2)
{
	ASSERT_EQ(rockPaperScissors.report(2), 2);
}

TEST_F(Sprint1Test, should_report_ROCK_when_num_can_div_3)
{
	ASSERT_EQ(rockPaperScissors.report(9), ROCK);
}

TEST_F(Sprint1Test, should_report_PAPER_when_num_can_div_7)
{
	ASSERT_EQ(rockPaperScissors.report(7), PAPER);
}

TEST_F(Sprint1Test, should_report_SCISSORS_when_num_can_div_5)
{
	ASSERT_EQ(rockPaperScissors.report(5), SCISSORS);
}

TEST_F(Sprint1Test, should_report_ROCK_and_PAPER_when_num_can_div_3_and_7)
{
	ASSERT_EQ(rockPaperScissors.report(21), ROCK_PAPER);
}

TEST_F(Sprint1Test, should_report_SCISSORS_and_ROCK_when_num_can_div_3_and_5)
{
	ASSERT_EQ(rockPaperScissors.report(60), ROCK_SCISSORS);
}

TEST_F(Sprint1Test, should_report_SCISSORS_and_PAPER_when_num_can_div_5_and_7)
{
	ASSERT_EQ(rockPaperScissors.report(35), SCISSORS_PAPER);
}

TEST_F(Sprint1Test, should_report_ROCK_SCISSORS_and_PAPER_when_num_can_div_3_and_5_7)
{
	ASSERT_EQ(rockPaperScissors.report(105), ROCK_SCISSORS_PAPER);
}
