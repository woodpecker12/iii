#ifndef INCLUDE_CONVERTRULE_H_
#define INCLUDE_CONVERTRULE_H_

#include "base/BaseTypes.h"
#include "NumJudge.h"
#include "ReportResult.h"

struct ConvertRule
{
	ConvertRule(BYTE num);

	ReportResult sprint1Convert();
	ReportResult sprint2Convert();
	ReportResult sprint3Convert();
	ReportResult sprint4Convert();

private:
	NumJudge numJudge;
	ReportResult result;
};

#endif
