#ifndef INCLUDE_NUMJUDGE_H_
#define INCLUDE_NUMJUDGE_H_

#include "base/BaseTypes.h"

struct NumJudge
{
	NumJudge(BYTE num);

	bool isMultipleOf3() const;
	bool isContain3() const;

	bool isMultipleOf5() const;
	bool isContain5() const;

	bool isMultipleOf7() const;
	bool isMultipleOf9() const;

private:
	BYTE num;
};

#endif
