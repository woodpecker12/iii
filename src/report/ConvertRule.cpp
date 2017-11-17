#include "report/ConvertRule.h"
#include "report/ReportDefine.h"

ConvertRule::ConvertRule(BYTE num) : numJudge(num), result(num)
{
}

ReportResult ConvertRule::sprint1Convert()
{
	if (numJudge.isMultipleOf3()) result.add(ROCK);
	if (numJudge.isMultipleOf5()) result.add(SCISSORS);
	if (numJudge.isMultipleOf7()) result.add(PAPER);

	return result;
}

ReportResult ConvertRule::sprint2Convert()
{
	if (numJudge.isContain3())
	{
		result.add(ROCK);
		return result;
	}

	return sprint1Convert();
}

ReportResult ConvertRule::sprint3Convert()
{
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

ReportResult ConvertRule::sprint4Convert()
{
	if (numJudge.isMultipleOf3()) result.add(TIGER);
	if (numJudge.isMultipleOf5()) result.add(STICK);
	if (numJudge.isMultipleOf7()) result.add(CHICKEN);

	return result;
}
