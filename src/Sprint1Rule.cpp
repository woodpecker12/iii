#include "Sprint1Rule.h"
#include "NumJudge.h"
#include "GameDefine.h"

ReportResult Sprint1Rule::report(BYTE num) const
{
	NumJudge numJudge(num);
	ReportResult result(num);

	if (numJudge.isContain3())
	{
		result.add(ROCK);
		return result;
	}

	if (numJudge.isMultipleOf3()) result.add(ROCK);
	if (numJudge.isMultipleOf5()) result.add(SCISSORS);
	if (numJudge.isMultipleOf7()) result.add(PAPER);

	return result;
}

Sprint1Rule& getSprint1Rule()
{
	static Sprint1Rule rule;
	return rule;
}
