#include "num_rule/Sprint2Rule.h"
#include "report/ConvertRule.h"

ReportResult Sprint2Rule::report(BYTE num) const
{
	return ConvertRule(num).sprint2Convert();
}

Sprint2Rule& getSprint2Rule()
{
	static Sprint2Rule rule;
	return rule;
}
