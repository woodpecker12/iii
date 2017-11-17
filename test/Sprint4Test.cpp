#include "gtest/gtest.h"
#include "TigerStickChicken.h"

struct Sprint4Test : testing::Test
{

};

TEST_F(Sprint4Test, print_1_to_120_num_result_when_use_tiger_stick_chicken)
{
	TigerStickChicken().run();
}
