#include "gtest/gtest.h"
#include "RockPaperScissorsNew.h"

struct Sprint3Test : testing::Test
{

};

TEST_F(Sprint3Test, should_report_num_when_num_is_2)
{
	ASSERT_EQ(RockPaperScissorsNew(2).report(), 2);
}

TEST_F(Sprint3Test, should_report_ROCK_when_num_can_div_5)
{
	ASSERT_EQ(RockPaperScissorsNew(5).report(), ROCK);
}

TEST_F(Sprint3Test, should_report_PAPER_when_num_can_div_9)
{
	ASSERT_EQ(RockPaperScissorsNew(9).report(), PAPER);
}

TEST_F(Sprint3Test, should_report_SCISSORS_when_num_can_div_7)
{
	ASSERT_EQ(RockPaperScissorsNew(7).report(), SCISSORS);
}

TEST_F(Sprint3Test, should_report_ROCK_and_PAPER_when_num_can_div_5_and_9)
{
	ASSERT_EQ(RockPaperScissorsNew(90).report(), ROCK | PAPER);
}

TEST_F(Sprint3Test, should_report_SCISSORS_and_PAPER_when_num_can_div_5_and_7)
{
	ASSERT_EQ(RockPaperScissorsNew(70).report(), SCISSORS | ROCK);
}

TEST_F(Sprint3Test, should_report_ROCK_SCISSORS_and_PAPER_when_num_can_div_5_and_7_9)
{
	ASSERT_EQ(RockPaperScissorsNew(630).report(), ROCK | SCISSORS | PAPER);
}

TEST_F(Sprint3Test, should_report_ROCK_when_num_include_string_5)
{
	ASSERT_EQ(RockPaperScissorsNew(5).report(), ROCK);
}

TEST_F(Sprint3Test, should_report_ROCK_when_num_include_string_5_and_can_div_5_and_7)
{
	ASSERT_EQ(RockPaperScissorsNew(35).report(), ROCK);
}

TEST_F(Sprint3Test, should_report_ROCK_when_num_include_string_5_and_can_div_5_and_9)
{
	ASSERT_EQ(RockPaperScissorsNew(45).report(), ROCK);
}
