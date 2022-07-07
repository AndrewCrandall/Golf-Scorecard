#include "onePlayer.h"

int capstone7::onePlayer::getUserScore()
{
	return user.getScore();
}

bool capstone7::onePlayer::getSavedRound()
{
	return saveRound;
}

bool capstone7::onePlayer::setupDecision()
{
	return returnToSetUp;
}

String^ capstone7::onePlayer::savedRoundName()
{
	return Round;
}
