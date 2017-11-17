#include "NumJudge.h"
#include <string>

NumJudge::NumJudge(BYTE num)
	: num(num)
{
}

bool NumJudge::isMultipleOf3() const
{
	return (num % 3) == 0;
}

bool NumJudge::isContain3() const
{
	return std::to_string(num).find("3") != -1;
}

bool NumJudge::isMultipleOf5() const
{
	return (num % 5) == 0;
}

bool NumJudge::isContain5() const
{
	return std::to_string(num).find("5") != -1;
}

bool NumJudge::isMultipleOf7() const
{
	return (num % 7) == 0;
}

bool NumJudge::isMultipleOf9() const
{
	return (num % 9) == 0;
}
