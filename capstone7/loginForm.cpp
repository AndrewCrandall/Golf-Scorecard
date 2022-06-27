#include "loginForm.h"



//Public Functions
//Used to return login user data to main

int capstone7::loginForm::getUserId()
{
	return user.getId();
}

String^ capstone7::loginForm::getUserName()
{
	return user.getUsername();
}

String^ capstone7::loginForm::getUserPass()
{
	return user.getPassword();
}

bool capstone7::loginForm::getRegisterDeision() {
	return switchToRegister;
}