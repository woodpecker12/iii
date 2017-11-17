#ifndef INCLUDE_ROCKNEW_H_
#define INCLUDE_ROCKNEW_H_

#include "base/BaseTypes.h"

struct RockNew
{
	RockNew(BYTE num);

	BYTE report() const;

private:
	BYTE calcValue(BYTE num);

private:
	BYTE value;
};

#endif
