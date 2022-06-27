#include "user.h"


//Default Constructor
User::User()
{
	id = 0;
	name = "";
	password = "";
}

//Copy Constructor
User::User(String^ tmpName, int tmpId)
{
	name = tmpName;
	id = tmpId;
}

//SETTERS
void User::setUsername(String^ tmpName)
{
	name = tmpName;
}

void User::setPassword(String^ tmpPass)
{
	password = tmpPass;
}

void User::setId(int tmpId)
{
	id = tmpId;
}

void User::setScore(int tmpScore)
{
	score = tmpScore;
}



//GETTERS
String^ User::getUsername()
{
	return name;
}

String^ User::getPassword()
{
	return password;
}

int User::getId()
{
	return id;
}

int User::getScore()
{
	return score;
}
