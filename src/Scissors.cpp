#include "Scissors.h"
#include "RockPaperScissors.h"

Scissors::Scissors(BYTE num)
	: value((num % 5) == 0 ? SCISSORS : 0)
{
}

BYTE Scissors::report() const
{
	return value;
}

