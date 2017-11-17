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

ReportResult ReportResult::convertTigerStickChicken()
{
	value = value == 0 ? 0 : (value - 0x1000);
	return *this;
}
