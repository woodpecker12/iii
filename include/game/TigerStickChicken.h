#ifndef INCLUDE_TIGERSTICKCHICKEN_H_
#define INCLUDE_TIGERSTICKCHICKEN_H_

#include "num_rule/NumRule.h"

struct TigerStickChicken
{
	TigerStickChicken(const NumRule& rule);

	WORD32 report(BYTE num) const;
	void runGame();

private:
	const NumRule* rule;
};

#endif
