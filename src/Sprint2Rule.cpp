#include "Sprint2Rule.h"
#include "NumJudge.h"
#include "GameDefine.h"

ReportResult Sprint2Rule::report(BYTE num) const
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

Sprint2Rule& getSprint2Rule()
{
	static Sprint2Rule rule;
	return rule;
}
