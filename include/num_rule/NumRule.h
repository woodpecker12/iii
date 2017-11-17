#ifndef INCLUDE_NUMRULE_H_
#define INCLUDE_NUMRULE_H_

#include "base/InterfaceDef.h"
#include "base/Keywords.h"
#include "base/BaseTypes.h"
#include "report/ReportResult.h"

DEFINE_INTERFACE(NumRule)
{
	ABSTRACT(ReportResult report(BYTE num) const);
};



#endif
