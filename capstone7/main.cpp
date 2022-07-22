/*
Andrew Crandall
07/12/2022
Capstone Project
Title: Golf Scorecard App
Main File
*/

#include "loginForm.h"
#include "registerForm.h"
#include "setupForm.h"
#include "onePlayer.h"
#include "loadForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;
using namespace System::IO;


bool saveRoundsToTable(int id, int score, String^ name); //Saves rounds to table "Rounds"
bool readRounds(int tmpId); //Reads the saved rounds from "Rounds"

int main() {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//user object
	User user;

	while (true) { //Used for loginForm

		//Creates object of loginForm
		capstone7::loginForm loginForm;
		loginForm.ShowDialog();

		//determines if user wants to create a new account
		//if so data is then stored in database
		if (loginForm.getRegisterDeision() == true) {
			capstone7::registerForm registerForm;
			registerForm.ShowDialog();

			//if user creates a new account, or hits "Cancel" registerForm is closed, and loginForm is shown
			if (registerForm.getReturnDecision() == true)
				continue;
		}

		else {
			/*
			SETTING Main User to loginForm user's Data
			This will be used when putting users saved "Rounds"
			Into the Database
			*/

			user.setId(loginForm.getUserId());
			user.setUsername(loginForm.getUserName());
			user.setPassword(loginForm.getUserPass());

			//MessageBox::Show(user.getUsername() + " " + user.getId() + " " + user.getPassword(), "Score ", MessageBoxButtons::OK, MessageBoxIcon::Error);

			break;
		}

	}


	bool loggedIn = false;
	
	//Safety Net to ensure User has a valid log in, brought to next phase of application

	if (user.getUsername()->Length > 0)
		loggedIn = true;


	while (loggedIn == true) { //User is valid to move on
		//SetupForm is created
		//SetupForm is Shown to user
		capstone7::setupForm setupForm;
		setupForm.ShowDialog();

		if (setupForm.getOnePlayer() == true) {
			//Closes setupForm
			//User wants to go to OnePlayerForm
			setupForm.Close();

			//Opens onePlayer Form
			//OnePlayer is shown to user
			capstone7::onePlayer onePlayer;
			onePlayer.ShowDialog();

			if (onePlayer.getSavedRound() == true) { //User wants to save round, OnePlayerForm
				//User's score is set to current total score using getUserScore function 
				user.setScore(onePlayer.getUserScore());
				//Output for testing DELETE LATER
				//MessageBox::Show(user.getUsername() + " " + user.getId() + " " + user.getPassword() + user.getScore(), "Score ", MessageBoxButtons::OK, MessageBoxIcon::Error);
				String^ tmpName = onePlayer.savedRoundName();
				int tmpId = user.getId();
				int tmpScore = user.getScore();

				bool tmpSave = saveRoundsToTable(tmpId, tmpScore, tmpName);

				if (tmpSave == true) {
					Application::Exit();
				}

			}

			if (onePlayer.setupDecision() == true) { //User wants to return to setupForm
				//Close onePlayer form
				onePlayer.Close();
				//new objet of setupForm is created
				//setupForm is shown to user
				//capstone7::setupForm setupForm;
				//setupForm.ShowDialog();
				continue;

			}

		}//END OF OnePlayer Decisions


		//else if (setupForm.getLogout() == true) { //User has logged out of Application
			//break; //Leave loop
		//}

		else if (setupForm.getLoadRound() == true) { //User wants to load all saved rounds

			if (readRounds(user.getId()) == true); // user has saved rounds
			capstone7::loadForm loadForm; // create loadForm form
			setupForm.Close();
			loadForm.ShowDialog(); //Display to user, so user is able to then view all saved rounds



		}

		else  //fallback on any error
			break;
	}
	
	
return 0; //end of main
}






bool saveRoundsToTable(int id, int score, String^ name) //saves rounds
{
	try {

		//string connString is what is used to connect to database
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=GolfScorecard;Integrated Security=True";

		//tmp data is stored in following values
		int tmpId = id;
		int tmpScore = score;
		String^ tmpName = name;

		//connects to database, opens the connection
		SqlConnection sqlConn(connString);
		sqlConn.Open(); //Opens server

		//inserts user Id, Score, and Rounds name into the database
		String^ sqlQuery2 = "INSERT INTO Rounds " + "(Id, Score, Round) VALUES " + "(@Id, @Score, @Round)";
		SqlCommand command(sqlQuery2, % sqlConn);


		command.Parameters->AddWithValue("@Id", tmpId);//CONVERSION
		command.Parameters->AddWithValue("@Score", tmpScore);//CONVERSION
		command.Parameters->AddWithValue("@Round", tmpName);//CONVERSION
		//Ececution
		command.ExecuteNonQuery();

		MessageBox::Show("Save Successful ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);


		return true;
	}

	catch (Exception^ ex) {
		//failure to actually save round
		MessageBox::Show("Failed to save round ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}



bool readRounds(int tmpId) { //user wants to view all saved rounds
	try {
		//string to connect to database
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=GolfScorecard;Integrated Security=True";

		//connects to database and opens connection
		SqlConnection sqlConn(connString);
		sqlConn.Open(); //Opens server
		
		//where current user logged in id is equal to all saved id, display all saved rounds
		String^ sqlQuery3 = "SELECT * FROM Rounds WHERE Id = @Id ";

		SqlCommand command(sqlQuery3, % sqlConn);

		//change the @id value to the true Id
		command.Parameters->AddWithValue("@Id", tmpId);

		//read from the database
		SqlDataReader^ reader = command.ExecuteReader();

		String^ filename = "data.txt";

		StreamWriter^ sw = gcnew StreamWriter(filename);

		while (reader->Read()) {

			//as long as there is data in the table, keep reading the scores and inputting it into the data.txt file
			// ending each row formatted as Id, Score, Name, new line
			//	user = gcnew User;

			int tmpId2;
			int tmpScore;
			String^ tmpRound;

			tmpId2 = reader->GetInt32(0);
			tmpScore = reader->GetInt32(1);
			tmpRound = reader->GetString(2);
			
			sw->Write(tmpScore + " ");
			sw->WriteLine(tmpRound);
		}
		sw->Close(); //close the writefile object

		return true;

	}
	catch (Exception^ ex) {
		//MessageBox::Show("Failed to save round ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

}
