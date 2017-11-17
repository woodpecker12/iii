#ifndef INCLUDE_REPORTRESULT_H_
#define INCLUDE_REPORTRESULT_H_

#include "base/BaseTypes.h"

struct ReportResult
{
	ReportResult(BYTE num);

	void add(WORD32 report);
	WORD32 getValue() const;

private:
	BYTE originNum;
	WORD32 value;
};


#endif
