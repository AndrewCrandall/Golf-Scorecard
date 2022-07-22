/*
Andrew Crandall
7/22/2022
Title: setupForm
Summary: Functions for main.cpp used within setupForm.h
*/



#include "setupForm.h"

//user wnats to open onePlayer Form
bool capstone7::setupForm::getOnePlayer()
{
    return onePlayerSetting;
}
//user wnats to open the loadRound Form
bool capstone7::setupForm::getLoadRound()
{
    return loadRoundSetting;
}
//user wants to return to logout
bool capstone7::setupForm::getLogout()
{
    return logoutApplication;
}

