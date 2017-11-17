#ifndef INCLUDE_NUMRULE_H_
#define INCLUDE_NUMRULE_H_

#include "base/InterfaceDef.h"
#include "base/Keywords.h"
#include "ReportResult.h"
#include "base/BaseTypes.h"

DEFINE_INTERFACE(NumRule)
{
	ABSTRACT(ReportResult report(BYTE num) const);
};



#endif /* INCLUDE_NUMRULE_H_ */
