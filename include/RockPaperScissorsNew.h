#ifndef INCLUDE_ROCKPAPERSCISSORSNEW_H_
#define INCLUDE_ROCKPAPERSCISSORSNEW_H_

#include "base/BaseTypes.h"
#include "GameDefine.h"
#include "RockNew.h"
#include "PaperNew.h"
#include "ScissorsNew.h"

struct RockPaperScissorsNew
{
	RockPaperScissorsNew(BYTE num);

	BYTE report() const;

private:
	BYTE num;
	RockNew rock;
	PaperNew paper;
	ScissorsNew scissors;
};

#endif
