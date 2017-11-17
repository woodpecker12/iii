#ifndef INCLUDE_PAPER_H_
#define INCLUDE_PAPER_H_

#include "base/BaseTypes.h"

struct Paper
{
	Paper(BYTE num);

	BYTE report() const;

private:
	BYTE calcValue(BYTE num);

private:
	BYTE value;
};

#endif
