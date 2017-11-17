#ifndef INCLUDE_ROCK_H_
#define INCLUDE_ROCK_H_

#include "base/BaseTypes.h"

struct Rock
{
	Rock(BYTE num);

	BYTE report() const;

private:
	BYTE value;
};

#endif
