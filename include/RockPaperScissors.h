#ifndef INCLUDE_ROCKPAPERSCISSORS_H_
#define INCLUDE_ROCKPAPERSCISSORS_H_

#include "base/BaseTypes.h"
#include "NumRule.h"
#include "GameDefine.h"

struct RockPaperScissors
{
	RockPaperScissors(const NumRule& rule);

	WORD32 report(BYTE num) const;

private:
	const NumRule* rule;
};

#endif
