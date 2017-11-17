#include "Rock.h"
#include "RockPaperScissors.h"
#include <string>

Rock::Rock(BYTE num) : value(calcValue(num))
{
}

BYTE Rock::calcValue(BYTE num)
{
	if (std::to_string(num).find("3") != -1) return SPECIAL_ROCK;

	return (num % 3) == 0 ? ROCK : 0;
}

BYTE Rock::report() const
{
	return value;
}
