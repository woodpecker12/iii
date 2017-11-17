#ifndef INCLUDE_ROCKPAPERSCISSORS_H_
#define INCLUDE_ROCKPAPERSCISSORS_H_

#include "base/BaseTypes.h"
#include "GameDefine.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "NumJudge.h"

struct RockPaperScissors
{
	RockPaperScissors(BYTE num);

	WORD32 report() const;

private:
	WORD32 judgeNum() const;

private:
	BYTE num;
};

#endif
