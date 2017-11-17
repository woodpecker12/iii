#include "gtest/gtest.h"
#include "Rock.h"
#include "RockPaperScissors.h"

struct RockTest : testing::Test
{

};

TEST_F(RockTest, should_report_0_when_num_cannot_div_3)
{
	ASSERT_EQ(Rock(4).report(), 0);
}

TEST_F(RockTest, should_report_ROCK_when_num_can_div_3)
{
	ASSERT_EQ(Rock(3).report(), ROCK);
	ASSERT_EQ(Rock(15).report(), ROCK);
}
