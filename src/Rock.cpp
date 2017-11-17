#include "Rock.h"
#include "RockPaperScissors.h"

Rock::Rock(BYTE num)
	: value((num % 3) == 0 ? ROCK : 0)
{
}

BYTE Rock::report() const
{
	return value;
}
