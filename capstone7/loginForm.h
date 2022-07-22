/*
Andrew Crandall
7/22/2022
Title: Login Form
Summary: Form displayed to user to allow for login to application
*/


#pragma once
#include "user.h"


namespace capstone7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient; //SQL connection

	/// <summary>
	/// Summary for loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtBoxUser;
	private: System::Windows::Forms::TextBox^ txtBoxPass;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Button^ btnCreateAccount;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBoxUser = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnCreateAccount = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(219, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 43);
			this->label1->TabIndex = 0;
			this->label1->Text = L"18 Holes";
			this->label1->Click += gcnew System::EventHandler(this, &loginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(141, 93);
			this->label2->Margin = System::Windows::Forms::Padding(3);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(3);
			this->label2->Size = System::Drawing::Size(100, 35);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(141, 148);
			this->label3->Margin = System::Windows::Forms::Padding(3);
			this->label3->Name = L"label3";
			this->label3->Padding = System::Windows::Forms::Padding(3);
			this->label3->Size = System::Drawing::Size(100, 35);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtBoxUser
			// 
			this->txtBoxUser->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txtBoxUser->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxUser->Location = System::Drawing::Point(273, 93);
			this->txtBoxUser->MaxLength = 30;
			this->txtBoxUser->Multiline = true;
			this->txtBoxUser->Name = L"txtBoxUser";
			this->txtBoxUser->Size = System::Drawing::Size(200, 35);
			this->txtBoxUser->TabIndex = 3;
			// 
			// txtBoxPass
			// 
			this->txtBoxPass->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txtBoxPass->Location = System::Drawing::Point(273, 148);
			this->txtBoxPass->MaxLength = 30;
			this->txtBoxPass->Multiline = true;
			this->txtBoxPass->Name = L"txtBoxPass";
			this->txtBoxPass->PasswordChar = '*';
			this->txtBoxPass->Size = System::Drawing::Size(200, 35);
			this->txtBoxPass->TabIndex = 4;
			// 
			// btnOk
			// 
			this->btnOk->BackColor = System::Drawing::Color::DimGray;
			this->btnOk->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOk->Font = (gcnew System::Drawing::Font(L"Cambria", 13.5F));
			this->btnOk->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnOk->Location = System::Drawing::Point(180, 217);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Padding = System::Windows::Forms::Padding(3);
			this->btnOk->Size = System::Drawing::Size(90, 35);
			this->btnOk->TabIndex = 5;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = false;
			this->btnOk->Click += gcnew System::EventHandler(this, &loginForm::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::DimGray;
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Cambria", 13.5F));
			this->btnCancel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnCancel->Location = System::Drawing::Point(335, 217);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Padding = System::Windows::Forms::Padding(3);
			this->btnCancel->Size = System::Drawing::Size(90, 35);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &loginForm::btnCancel_Click);
			// 
			// btnCreateAccount
			// 
			this->btnCreateAccount->BackColor = System::Drawing::Color::DimGray;
			this->btnCreateAccount->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCreateAccount->Font = (gcnew System::Drawing::Font(L"Cambria", 13.5F));
			this->btnCreateAccount->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnCreateAccount->Location = System::Drawing::Point(180, 283);
			this->btnCreateAccount->Name = L"btnCreateAccount";
			this->btnCreateAccount->Padding = System::Windows::Forms::Padding(3);
			this->btnCreateAccount->Size = System::Drawing::Size(263, 35);
			this->btnCreateAccount->TabIndex = 7;
			this->btnCreateAccount->Text = L"Create New Account";
			this->btnCreateAccount->UseVisualStyleBackColor = false;
			this->btnCreateAccount->Click += gcnew System::EventHandler(this, &loginForm::btnCreateAccount_Click_1);
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::ForestGreen;
			this->CancelButton = this->btnCancel;
			this->ClientSize = System::Drawing::Size(580, 350);
			this->Controls->Add(this->btnCreateAccount);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->txtBoxPass);
			this->Controls->Add(this->txtBoxUser);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->ForeColor = System::Drawing::Color::ForestGreen;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximumSize = System::Drawing::Size(580, 350);
			this->MinimumSize = System::Drawing::Size(580, 350);
			this->Name = L"loginForm";
			this->Padding = System::Windows::Forms::Padding(10);
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"loginForm";
			this->Load += gcnew System::EventHandler(this, &loginForm::loginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Private Member
	private: User user;  //used to recieve data input
	private: bool switchToRegister = false; //Public variable to determine users path

	//Private Functions
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	//User wants to close loginform window
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		//Application closes
		Application::Exit(); 
	}

	//User wants to login
	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
		//Input from user is put into different variables
		String^ name = txtBoxUser->Text;
		String^ pass = txtBoxPass->Text;

		//Attempts to connect to database and check for valid login
		try {
			//conectionString variable for database
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=scorecard7;Integrated Security=True";
			//sqlConn is connected to database using connString
			SqlConnection sqlConn(connString);
			//Open Connection
			sqlConn.Open();

			//Query to select all usernames and passwords where they equal users information
			String^ sqlQuery = "use scorecard7; SELECT * FROM Accounts WHERE username=@username AND password=@password;";
			SqlCommand command(sqlQuery, % sqlConn);

			command.Parameters->AddWithValue("@username", name);
			command.Parameters->AddWithValue("@password", pass);

			//Execute query
			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) { //login is valid

				/*
				Different variables are set to the data from the database, then is set to
				private User, that is then recieved in main.cpp
				*/

				int tmpId;
				String^ tmpName;
				String^ tmpPass;

				tmpId = reader->GetInt32(0);
				tmpName = reader->GetString(1);
				tmpPass = reader->GetString(2);

				user.setId(tmpId);
				user.setUsername(tmpName);
				user.setPassword(tmpPass);


				this->Close();
			}
			else
				//Login infromation is incorrect
				MessageBox::Show("Email or Password is inocrrect, try again! ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		catch (Exception^ e) { //Any error not being able to connect to database
			MessageBox::Show("Could not connect to database, try again! ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
		   //user wants to create new account
	private: System::Void btnCreateAccount_Click(System::Object^ sender, System::EventArgs^ e) {
		switchToRegister = true; //used in main.cpp
		this->Close();//closes current form
	}

	private: System::Void btnCreateAccount_Click_1(System::Object^ sender, System::EventArgs^ e) {
		switchToRegister = true;
		this->Close();
	}

	//Public Functions used in main.cpp
	public: int getUserId();
	public: String^ getUserName();
	public: String^ getUserPass();
	public: bool getRegisterDeision();



private: System::Void loginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}