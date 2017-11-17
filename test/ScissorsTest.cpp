#include "gtest/gtest.h"
#include "Scissors.h"
#include "RockPaperScissors.h"

struct ScissorsTest : testing::Test
{

};

TEST_F(ScissorsTest, should_report_0_when_num_cannot_div_7)
{
	ASSERT_EQ(Scissors(4).report(), 0);
}

TEST_F(ScissorsTest, should_report_SCISSORS_when_num_can_div_7)
{
	ASSERT_EQ(Scissors(7).report(), SCISSORS);
	ASSERT_EQ(Scissors(21).report(), SCISSORS);
}