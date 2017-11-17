#ifndef INCLUDE_ROCKPAPERSCISSORS_H_
#define INCLUDE_ROCKPAPERSCISSORS_H_

#include "base/BaseTypes.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"

enum { ROCK = 0x01, PAPER = 0x02, SCISSORS = 0x04 };
enum { SPECIAL_ROCK = 0x11 };

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
