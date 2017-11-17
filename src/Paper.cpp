#include "Paper.h"
#include "RockPaperScissors.h"

Paper::Paper(BYTE num)
	: value((num % 7) == 0 ? PAPER : 0)
{
}

BYTE Paper::report() const
{
	return value;
}
