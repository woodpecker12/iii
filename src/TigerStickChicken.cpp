#include "TigerStickChicken.h"
#include "RockPaperScissors.h"
#include "stdio.h"
#include "Sprint1Rule.h"

namespace
{
	void output(BYTE num)
	{
		switch(RockPaperScissors(getSprint1Rule()).report(num))
		{
		case ROCK:
			printf("老虎\n");
			break;
		case SCISSORS:
			printf("棒子\n");
			break;
		case PAPER:
			printf("鸡\n");
			break;
		case ROCK | SCISSORS:
			printf("老虎 棒子\n");
			break;
		case PAPER | SCISSORS:
			printf("棒子 鸡\n");
			break;
		case ROCK | PAPER:
			printf("老虎 鸡\n");
			break;
		case ROCK | SCISSORS | PAPER:
			printf("老虎 棒子 鸡\n");
			break;
		default:
			printf("%d\n", num);
		}
	}
}

void TigerStickChicken::run()
{
	for (BYTE num = 1; num <= 120; num++)
	{
		output(num);
	}
}
