/*
Andrew Crandall
7/22/2022
Title: loginForm
Summary: Functions for main.cpp used within loginForm.h
*/

#include "loginForm.h"


//Public Functions
//Used to return login user data to main


//USER ID
int capstone7::loginForm::getUserId()
{
	return user.getId();
}

//USER USERNAME
String^ capstone7::loginForm::getUserName()
{
	return user.getUsername();
}
//USER PASSWORD
String^ capstone7::loginForm::getUserPass()
{
	return user.getPassword();
}
//if user wants to create new account
bool capstone7::loginForm::getRegisterDeision() {
	return switchToRegister;
}