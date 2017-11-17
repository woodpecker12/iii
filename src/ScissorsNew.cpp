#include "ScissorsNew.h"
#include "RockPaperScissors.h"

ScissorsNew::ScissorsNew(BYTE num) : value(calcValue(num))
{
}

BYTE ScissorsNew::calcValue(BYTE num)
{
	return (num % 7) == 0 ? SCISSORS : 0;
}

BYTE ScissorsNew::report() const
{
	return value;
}
