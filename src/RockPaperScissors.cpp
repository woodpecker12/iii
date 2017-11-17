#include "RockPaperScissors.h"

RockPaperScissors::RockPaperScissors(BYTE num) : num(num)
{
}

WORD32 RockPaperScissors::judgeNum() const
{
	NumJudge numJudge(num);
	if (numJudge.isContain3()) return ROCK;

	WORD32 judgeResult = 0;

	if (numJudge.isMultipleOf3()) judgeResult |= ROCK;
	if (numJudge.isMultipleOf5()) judgeResult |= SCISSORS;
	if (numJudge.isMultipleOf7()) judgeResult |= PAPER;

	return judgeResult == 0 ? num : judgeResult;
}

WORD32 RockPaperScissors::report() const
{
	return judgeNum();
}
