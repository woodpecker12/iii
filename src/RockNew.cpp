#include "RockNew.h"
#include "GameDefine.h"
#include <string>

RockNew::RockNew(BYTE num) : value(calcValue(num))
{
}

BYTE RockNew::calcValue(BYTE num)
{
	if (std::to_string(num).find("5") != -1) return SPECIAL_ROCK;

	return (num % 5) == 0 ? ROCK : 0;
}

BYTE RockNew::report() const
{
	return value;
}
