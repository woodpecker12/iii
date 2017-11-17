#ifndef INCLUDE_SPRINT1RULE_H_
#define INCLUDE_SPRINT1RULE_H_

#include "NumRule.h"

struct Sprint1Rule : NumRule
{

private:
	OVERRIDE(ReportResult report(BYTE num) const);
};

Sprint1Rule& getSprint1Rule();

#endif
