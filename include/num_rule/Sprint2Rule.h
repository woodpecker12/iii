#ifndef INCLUDE_SPRINT2RULE_H_
#define INCLUDE_SPRINT2RULE_H_

#include "NumRule.h"

struct Sprint2Rule : NumRule
{

private:
	OVERRIDE(ReportResult report(BYTE num) const);
};

Sprint2Rule& getSprint2Rule();

#endif
