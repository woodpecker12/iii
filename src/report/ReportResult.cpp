#include "report/ReportResult.h"

ReportResult::ReportResult(BYTE num) : originNum(num), value(0)
{
}

void ReportResult::add(WORD32 report)
{
	value |= report;
}

WORD32 ReportResult::getValue() const
{
	return value == 0 ? originNum : value;
}
