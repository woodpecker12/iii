#include "gtest/gtest.h"
#include "game/RockPaperScissors.h"
#include "num_rule/Sprint2Rule.h"
#include "report/ReportDefine.h"

struct Sprint2Test : testing::Test
{
	Sprint2Test() : rockPaperScissors(getSprint2Rule())
	{
	}

protected:
	RockPaperScissors rockPaperScissors;
};

TEST_F(Sprint2Test, should_report_ROCK_when_num_include_string_3)
{
	ASSERT_EQ(rockPaperScissors.report(3), ROCK);
}

TEST_F(Sprint2Test, should_report_ROCK_when_num_include_string_3_and_can_div_3_and_5)
{
	ASSERT_EQ(rockPaperScissors.report(35), ROCK);
}

TEST_F(Sprint2Test, should_report_ROCK_when_num_include_string_3_and_can_div_3_and_7)
{
	ASSERT_EQ(rockPaperScissors.report(63), ROCK);
}
