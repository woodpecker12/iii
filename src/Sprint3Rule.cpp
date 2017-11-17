#include "Sprint3Rule.h"
#include "NumJudge.h"
#include "GameDefine.h"

ReportResult Sprint3Rule::report(BYTE num) const
{
	NumJudge numJudge(num);
	ReportResult result(num);

	if (numJudge.isContain5())
	{
		result.add(ROCK);
		return result;
	}

	if (numJudge.isMultipleOf5()) result.add(ROCK);
	if (numJudge.isMultipleOf7()) result.add(SCISSORS);
	if (numJudge.isMultipleOf9()) result.add(PAPER);

	return result;
}

Sprint3Rule& getSprint3Rule()
{
	static Sprint3Rule rule;
	return rule;
}
