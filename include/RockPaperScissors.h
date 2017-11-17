#ifndef INCLUDE_ROCKPAPERSCISSORS_H_
#define INCLUDE_ROCKPAPERSCISSORS_H_

#include "base/BaseTypes.h"
#include "GameDefine.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

struct RockPaperScissors
{
	RockPaperScissors(BYTE num);

	BYTE report() const;

private:
	BYTE num;
	Rock rock;
	Paper paper;
	Scissors scissors;
};

#endif
