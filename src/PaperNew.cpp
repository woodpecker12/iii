#include "PaperNew.h"
#include "RockPaperScissors.h"

PaperNew::PaperNew(BYTE num) : value(calcValue(num))
{
}

BYTE PaperNew::calcValue(BYTE num)
{
	return (num % 9) == 0 ? PAPER : 0;
}

BYTE PaperNew::report() const
{
	return value;
}
