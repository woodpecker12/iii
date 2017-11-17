#include "Sprint4Rule.h"
#include "ConvertRule.h"

ReportResult Sprint4Rule::report(BYTE num) const
{
	return ConvertRule(num).sprint4Convert();
}

Sprint4Rule& getSprint4Rule()
{
	static Sprint4Rule rule;
	return rule;
}
