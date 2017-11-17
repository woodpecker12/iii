#include "TigerStickChicken.h"
#include "GameDefine.h"
#include "stdio.h"

namespace
{
	void print(WORD32 report)
	{
		switch(report)
		{
		case TIGER:
			printf("老虎\n");
			break;
		case STICK:
			printf("棒子\n");
			break;
		case CHICKEN:
			printf("鸡\n");
			break;
		case TIGER_STICK:
			printf("老虎 棒子\n");
			break;
		case STICK_CHICKEN:
			printf("棒子 鸡\n");
			break;
		case TIGER_CHICKEN:
			printf("老虎 鸡\n");
			break;
		case TIGER_STICK_CHICKEN:
			printf("老虎 棒子 鸡\n");
			break;
		default:
			printf("%d\n", report);
		}
	}
}

TigerStickChicken::TigerStickChicken(const NumRule& rule)
	: rule(&rule)
{
}

WORD32 TigerStickChicken::report(BYTE num) const
{
	return rule->report(num).getValue();
}

void TigerStickChicken::runGame()
{
	for (BYTE num = 1; num <= 120; num++)
	{
		print(report(num));
	}
}
