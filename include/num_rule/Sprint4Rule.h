#ifndef INCLUDE_SPRINT4RULE_H_
#define INCLUDE_SPRINT4RULE_H_

#include "NumRule.h"

struct Sprint4Rule : NumRule
{

private:
	OVERRIDE(ReportResult report(BYTE num) const);
};

Sprint4Rule& getSprint4Rule();


#endif
