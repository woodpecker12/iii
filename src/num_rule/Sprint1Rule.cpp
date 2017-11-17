#include "num_rule/Sprint1Rule.h"
#include "report/ConvertRule.h"

ReportResult Sprint1Rule::report(BYTE num) const
{
	return ConvertRule(num).sprint1Convert();
}

Sprint1Rule& getSprint1Rule()
{
	static Sprint1Rule rule;
	return rule;
}
