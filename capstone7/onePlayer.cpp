/*
Andrew Crandall
7/22/2022
Title: onePlayer
Summary: Functions for main.cpp used within onePlayer.h
*/

#include "onePlayer.h"


//Gets the total score for user
int capstone7::onePlayer::getUserScore()
{
	return user.getScore();
}

//gets the user decision to save the round, true or false
bool capstone7::onePlayer::getSavedRound()
{
	return saveRound;
}
//determines if the user wants  return to the setupForm
bool capstone7::onePlayer::setupDecision()
{
	return returnToSetUp;
}
//gets the saved name for the round
String^ capstone7::onePlayer::savedRoundName()
{
	return Round;
}
