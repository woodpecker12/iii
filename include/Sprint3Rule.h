#ifndef INCLUDE_SPRINT3RULE_H_
#define INCLUDE_SPRINT3RULE_H_

#include "NumRule.h"

struct Sprint3Rule : NumRule
{

private:
	OVERRIDE(ReportResult report(BYTE num) const);
};

Sprint3Rule& getSprint3Rule();

#endif
