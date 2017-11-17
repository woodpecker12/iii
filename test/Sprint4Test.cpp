#include "gtest/gtest.h"
#include "game/TigerStickChicken.h"
#include "num_rule/Sprint4Rule.h"
#include "report/ReportDefine.h"

struct Sprint4Test : testing::Test
{
	Sprint4Test() : tigerStickChicken(getSprint4Rule())
	{
	}

protected:
	TigerStickChicken tigerStickChicken;
};

TEST_F(Sprint4Test, should_report_num_when_num_is_2)
{
	ASSERT_EQ(tigerStickChicken.report(2), 2);
}

TEST_F(Sprint4Test, should_report_ROCK_when_num_can_div_3)
{
	ASSERT_EQ(tigerStickChicken.report(9), TIGER);
}

TEST_F(Sprint4Test, should_report_PAPER_when_num_can_div_7)
{
	ASSERT_EQ(tigerStickChicken.report(7), CHICKEN);
}

TEST_F(Sprint4Test, should_report_SCISSORS_when_num_can_div_5)
{
	ASSERT_EQ(tigerStickChicken.report(5), STICK);
}

TEST_F(Sprint4Test, should_report_ROCK_and_PAPER_when_num_can_div_3_and_7)
{
	ASSERT_EQ(tigerStickChicken.report(21), TIGER_CHICKEN);
}

TEST_F(Sprint4Test, should_report_SCISSORS_and_ROCK_when_num_can_div_3_and_5)
{
	ASSERT_EQ(tigerStickChicken.report(60), TIGER_STICK);
}

TEST_F(Sprint4Test, should_report_SCISSORS_and_PAPER_when_num_can_div_5_and_7)
{
	ASSERT_EQ(tigerStickChicken.report(35), STICK_CHICKEN);
}

TEST_F(Sprint4Test, should_report_ROCK_SCISSORS_and_PAPER_when_num_can_div_3_and_5_7)
{
	ASSERT_EQ(tigerStickChicken.report(105), TIGER_STICK_CHICKEN);
}

TEST_F(Sprint4Test, print_1_to_120_num_result_when_use_tiger_stick_chicken)
{
	tigerStickChicken.runGame();
}
