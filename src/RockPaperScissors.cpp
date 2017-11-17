#include "RockPaperScissors.h"

RockPaperScissors::RockPaperScissors(const NumRule& rule)
	: rule(&rule)
{
}

WORD32 RockPaperScissors::report(BYTE num) const
{
	return rule->report(num).getValue();
}
