#include "RockPaperScissors.h"

RockPaperScissors::RockPaperScissors(BYTE num)
	: num(num), rock(num), paper(num), scissors(num)
{
}

BYTE RockPaperScissors::report() const
{
	if (rock.report() == SPECIAL_ROCK) return ROCK;

	BYTE result = rock.report() | paper.report() | scissors.report();
	return result == 0 ? num : result;
}
