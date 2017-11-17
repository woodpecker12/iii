#include "RockPaperScissorsNew.h"

RockPaperScissorsNew::RockPaperScissorsNew(BYTE num)
	: num(num), rock(num), paper(num), scissors(num)
{
}

BYTE RockPaperScissorsNew::report() const
{
	if (rock.report() == SPECIAL_ROCK) return ROCK;

	BYTE result = rock.report() | paper.report() | scissors.report();
	return result == 0 ? num : result;
}
