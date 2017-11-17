#ifndef INCLUDE_SCISSORS_H_
#define INCLUDE_SCISSORS_H_

#include "base/BaseTypes.h"

struct Scissors
{
	Scissors(BYTE num);

	BYTE report() const;

private:
	BYTE value;
};

#endif
