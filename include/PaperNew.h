#ifndef INCLUDE_PAPERNEW_H_
#define INCLUDE_PAPERNEW_H_

#include "base/BaseTypes.h"

struct PaperNew
{
	PaperNew(BYTE num);

	BYTE report() const;

private:
	BYTE calcValue(BYTE num);

private:
	BYTE value;
};

#endif
