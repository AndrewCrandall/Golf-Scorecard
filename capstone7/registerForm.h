/*
Andrew Crandall
7/22/2022
Title: Register Form
Summary: Form displayed to user to allow new account to be created
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
	using namespace System::Data::SqlClient; //Allows for sql connection

	/// <summary>
	/// Summary for registerForm
	/// </summary>
	public ref class registerForm : public System::Windows::Forms::Form
	{
	public:
		registerForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~registerForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ txtBoxUser;
	private: System::Windows::Forms::TextBox^ txtBoxPass;


	private: System::Windows::Forms::Button^ btnCreate;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;


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
			this->txtBoxUser = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtBoxUser
			// 
			this->txtBoxUser->BackColor = System::Drawing::SystemColors::Window;
			this->txtBoxUser->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxUser->ForeColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->txtBoxUser->Location = System::Drawing::Point(276, 107);
			this->txtBoxUser->MaxLength = 30;
			this->txtBoxUser->Multiline = true;
			this->txtBoxUser->Name = L"txtBoxUser";
			this->txtBoxUser->Size = System::Drawing::Size(200, 35);
			this->txtBoxUser->TabIndex = 3;
			// 
			// txtBoxPass
			// 
			this->txtBoxPass->Location = System::Drawing::Point(276, 162);
			this->txtBoxPass->MaxLength = 30;
			this->txtBoxPass->Multiline = true;
			this->txtBoxPass->Name = L"txtBoxPass";
			this->txtBoxPass->PasswordChar = '*';
			this->txtBoxPass->Size = System::Drawing::Size(200, 35);
			this->txtBoxPass->TabIndex = 4;
			this->txtBoxPass->UseSystemPasswordChar = true;
			// 
			// btnCreate
			// 
			this->btnCreate->BackColor = System::Drawing::Color::DimGray;
			this->btnCreate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCreate->Font = (gcnew System::Drawing::Font(L"Cambria", 13.5F));
			this->btnCreate->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnCreate->Location = System::Drawing::Point(186, 229);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Padding = System::Windows::Forms::Padding(3);
			this->btnCreate->Size = System::Drawing::Size(90, 35);
			this->btnCreate->TabIndex = 5;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = false;
			this->btnCreate->Click += gcnew System::EventHandler(this, &registerForm::btnCreate_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::DimGray;
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Cambria", 13.5F));
			this->btnExit->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btnExit->Location = System::Drawing::Point(307, 229);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Padding = System::Windows::Forms::Padding(3);
			this->btnExit->Size = System::Drawing::Size(90, 35);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &registerForm::btnExit_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DimGray;
			this->label2->Location = System::Drawing::Point(144, 162);
			this->label2->Margin = System::Windows::Forms::Padding(3);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(3);
			this->label2->Size = System::Drawing::Size(100, 35);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Password";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DimGray;
			this->label4->Location = System::Drawing::Point(144, 107);
			this->label4->Margin = System::Windows::Forms::Padding(3);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(3);
			this->label4->Size = System::Drawing::Size(100, 35);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Username";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(138, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(338, 43);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Create New Account";
			// 
			// registerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::ForestGreen;
			this->ClientSize = System::Drawing::Size(580, 350);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->txtBoxPass);
			this->Controls->Add(this->txtBoxUser);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(580, 350);
			this->MinimumSize = System::Drawing::Size(580, 350);
			this->Name = L"registerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"registerForm";
			this->Load += gcnew System::EventHandler(this, &registerForm::registerForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Private Data Members
	private: User user;
	private: bool returnToLogin = false;




	//Public Functions

	public: bool getReturnDecision();

	//Private Functions

	private: System::Void registerForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		returnToLogin = true; //User wants to return to login screen
		this->Close(); //Close create new account form
	}


	private: System::Void btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		//Read Text Box's
		String^ name = txtBoxUser->Text;
		String^ pass = txtBoxPass->Text;

		if (name->Length == 0 || pass->Length == 0) { //user did NOT put in text
			MessageBox::Show("You must enter all values! ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		try { //Attempt to create new user

			//connection string to database
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=scorecard7;Integrated Security=True";


			SqlConnection sqlConn(connString);
			sqlConn.Open(); //Opens server

			//Query to insert new text into the database, using name and pass variables
			String^ sqlQuery2 = "INSERT INTO Accounts " + "(username, password) VALUES " + "(@username, @password)";
			SqlCommand command(sqlQuery2, % sqlConn);

			command.Parameters->AddWithValue("@username", name);//CONVERSION
			command.Parameters->AddWithValue("@password", pass);//CONVERSION

			command.ExecuteNonQuery(); //execute query

			user.setUsername(name); //set username used in main
			user.setPassword(pass); //set user password used in main

			this->Close();//closes current form, user is successfully created
		}

		catch (Exception^ ex) { //otherwise show to user that there was an error
			MessageBox::Show("Failed to Create New User ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};

}

