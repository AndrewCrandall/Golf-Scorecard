#include "loginForm.h"
#include "registerForm.h"
#include "setupForm.h"
#include "onePlayer.h"
#include "loadForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::SqlClient;
using namespace System::IO;


bool saveRoundsToTable(int id, int score, String^ name);
bool readRounds(int tmpId);

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

		if (setupForm.getLogout() == true) { //User has logged out of Application
			break; //Leave loop
		}

		else if (setupForm.getOnePlayer() == true) {
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


		else if (setupForm.getLoadRound() == true) {

			if(readRounds(user.getId()) == true);
			capstone7::loadForm loadForm;
			setupForm.Close();
			loadForm.ShowDialog();

		

		}


		else  //fallback on any error
			break;
	}
	
	
return 0;
}






bool saveRoundsToTable(int id, int score, String^ name)
{
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=GolfScorecard;Integrated Security=True";

		int tmpId = id;
		int tmpScore = score;
		String^ tmpName = name;

		SqlConnection sqlConn(connString);
		sqlConn.Open(); //Opens server




		String^ sqlQuery2 = "INSERT INTO Rounds " + "(Id, Score, Round) VALUES " + "(@Id, @Score, @Round)";
		SqlCommand command(sqlQuery2, % sqlConn);

		command.Parameters->AddWithValue("@Id", tmpId);//CONVERSION
		command.Parameters->AddWithValue("@Score", tmpScore);//CONVERSION
		command.Parameters->AddWithValue("@Round", tmpName);//CONVERSION
		command.ExecuteNonQuery();

		MessageBox::Show("Save Successful ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);


		return true;
	}

	catch (Exception^ ex) {
		MessageBox::Show("Failed to save round ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}
}







bool readRounds(int tmpId) {
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=GolfScorecard;Integrated Security=True";

		SqlConnection sqlConn(connString);
		sqlConn.Open(); //Opens server
		
		String^ sqlQuery3 = "SELECT * FROM Rounds WHERE Id = @Id ";


		SqlCommand command(sqlQuery3, % sqlConn);

		command.Parameters->AddWithValue("@Id", tmpId);

		SqlDataReader^ reader = command.ExecuteReader();

		String^ filename = "data.txt";

		StreamWriter^ sw = gcnew StreamWriter(filename);

		while (reader->Read()) {
			//	user = gcnew User;

			int tmpId2;
			int tmpScore;
			String^ tmpRound;

			tmpId2 = reader->GetInt32(0);
			tmpScore = reader->GetInt32(1);
			tmpRound = reader->GetString(2);
			
			sw->Write(tmpId2 + " ");
			sw->Write(tmpScore + " ");
			sw->WriteLine(tmpRound);
		}
		sw->Close();

		return true;

	}
	catch (Exception^ ex) {
		//MessageBox::Show("Failed to save round ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return false;
	}

}
