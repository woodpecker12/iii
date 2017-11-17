#include "Sprint3Rule.h"
#include "ConvertRule.h"

ReportResult Sprint3Rule::report(BYTE num) const
{
	return ConvertRule(num).sprint3Convert();
}

Sprint3Rule& getSprint3Rule()
{
	static Sprint3Rule rule;
	return rule;
}
