#include "loginForm.h"
#include "registerForm.h"
#include "setupForm.h"
#include "onePlayer.h"


using namespace System;
using namespace System::Windows::Forms;


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
			user.setId(loginForm.getUserId());
			user.setUsername(loginForm.getUserName());
			user.setPassword(loginForm.getUserPass());

			//MessageBox::Show(user.getUsername() + " " + user.getId() + " " + user.getPassword(), "Score ", MessageBoxButtons::OK, MessageBoxIcon::Error);

			break;
		}

	}


	if (user.getUsername()->Length > 0) { //VALID Account and is logged in

		capstone7::setupForm setupForm;
		setupForm.ShowDialog();


		if (setupForm.getOnePlayer() == true) {

			//Closes setupForm
			setupForm.Close();

			//Opens onePlayer Form
			capstone7::onePlayer onePlayer;
			onePlayer.ShowDialog();

			if (onePlayer.getSavedRound() == true) {

				user.setScore(onePlayer.getUserScore());

				MessageBox::Show(user.getUsername() + " " + user.getId() + " " + user.getPassword() + user.getScore(), "Score ", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}


			else if (setupForm.getTwoPlayer() == true) {

				//secondPlayer form is created
				Application::Exit();
			}
			else
				Application::Exit();

		}
	}
	
	return 0;
}


