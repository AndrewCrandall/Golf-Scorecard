/*
Andrew Crandall
7/22/2022
Title: User 
*/

#pragma once

using namespace System;

ref class User
{
public:

	//CONSTRUCTORS
	User::User();
	User::User(String^ tmpName, int tmpId);

	//SETTERS
	void setUsername(String^ tmpName);
	void setPassword(String^ tmpPass);
	void setId(int tmpId);
	void setScore(int tmpScore);


	//GETTERS
	String^ getUsername();
	String^ getPassword();
	int getId();
	int getScore();


	//private members
private:
	int id;
	int score;
	String^ name;
	String^ password;
};
