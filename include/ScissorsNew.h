#ifndef INCLUDE_SCISSORSNEW_H_
#define INCLUDE_SCISSORSNEW_H_

#include "base/BaseTypes.h"

struct ScissorsNew
{
	ScissorsNew(BYTE num);

	BYTE report() const;

private:
	BYTE calcValue(BYTE num);

private:
	BYTE value;
};

#endif
