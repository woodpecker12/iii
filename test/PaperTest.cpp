#include "gtest/gtest.h"
#include "Paper.h"
#include "RockPaperScissors.h"

struct PaperTest : testing::Test
{

};

TEST_F(PaperTest, should_report_0_when_num_cannot_div_5)
{
	ASSERT_EQ(Paper(4).report(), 0);
}

TEST_F(PaperTest, should_report_PAPER_when_num_can_div_5)
{
	ASSERT_EQ(Paper(5).report(), PAPER);
	ASSERT_EQ(Paper(15).report(), PAPER);
}
