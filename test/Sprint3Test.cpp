#include "gtest/gtest.h"
#include "game/RockPaperScissors.h"
#include "num_rule/Sprint3Rule.h"
#include "report/ReportDefine.h"

struct Sprint3Test : testing::Test
{
	Sprint3Test() : rockPaperScissors(getSprint3Rule())
	{
	}

protected:
	RockPaperScissors rockPaperScissors;
};

TEST_F(Sprint3Test, should_report_num_when_num_is_2)
{
	ASSERT_EQ(rockPaperScissors.report(2), 2);
}

TEST_F(Sprint3Test, should_report_ROCK_when_num_can_div_5)
{
	ASSERT_EQ(rockPaperScissors.report(5), ROCK);
}

TEST_F(Sprint3Test, should_report_PAPER_when_num_can_div_9)
{
	ASSERT_EQ(rockPaperScissors.report(9), PAPER);
}

TEST_F(Sprint3Test, should_report_SCISSORS_when_num_can_div_7)
{
	ASSERT_EQ(rockPaperScissors.report(7), SCISSORS);
}

TEST_F(Sprint3Test, should_report_ROCK_and_PAPER_when_num_can_div_5_and_9)
{
	ASSERT_EQ(rockPaperScissors.report(90), ROCK_PAPER);
}

TEST_F(Sprint3Test, should_report_ROCK_and_SCISSORS_when_num_can_div_5_and_7)
{
	ASSERT_EQ(rockPaperScissors.report(70), ROCK_SCISSORS);
}

TEST_F(Sprint3Test, should_report_SCISSORS_and_PAPERwhen_num_can_div_7_and_9)
{
	ASSERT_EQ(rockPaperScissors.report(126), SCISSORS_PAPER);
}

TEST_F(Sprint3Test, should_report_ROCK_SCISSORS_and_PAPER_when_num_can_div_5_and_7_9)
{
	ASSERT_EQ(rockPaperScissors.report(630), ROCK_SCISSORS_PAPER);
}

TEST_F(Sprint3Test, should_report_ROCK_when_num_include_string_5)
{
	ASSERT_EQ(rockPaperScissors.report(5), ROCK);
}

TEST_F(Sprint3Test, should_report_ROCK_when_num_include_string_5_and_can_div_5_and_7)
{
	ASSERT_EQ(rockPaperScissors.report(35), ROCK);
}

TEST_F(Sprint3Test, should_report_ROCK_when_num_include_string_5_and_can_div_5_and_9)
{
	ASSERT_EQ(rockPaperScissors.report(45), ROCK);
}
