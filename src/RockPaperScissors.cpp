#include "RockPaperScissors.h"

RockPaperScissors::RockPaperScissors(BYTE num)
	: num(num), rock(num), paper(num), scissors(num)
{
}

BYTE RockPaperScissors::report() const
{
	BYTE result = 0;

	result = rock.report() | paper.report() | scissors.report();

	return result == 0 ? num : result;
}
