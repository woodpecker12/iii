#include "gtest/gtest.h"
#include "Paper.h"
#include "RockPaperScissors.h"

struct PaperTest : testing::Test
{

};

TEST_F(PaperTest, should_report_0_when_num_cannot_div_7)
{
	ASSERT_EQ(Paper(4).report(), 0);
}

TEST_F(PaperTest, should_report_PAPER_when_num_can_div_7)
{
	ASSERT_EQ(Paper(7).report(), PAPER);
	ASSERT_EQ(Paper(21).report(), PAPER);
}
