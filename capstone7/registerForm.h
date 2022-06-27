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
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtBoxUser;
	private: System::Windows::Forms::TextBox^ txtBoxPass;


	private: System::Windows::Forms::Button^ btnCreate;
	private: System::Windows::Forms::Button^ btnExit;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtBoxUser = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxPass = (gcnew System::Windows::Forms::TextBox());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(124, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(115, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtBoxUser
			// 
			this->txtBoxUser->Location = System::Drawing::Point(255, 60);
			this->txtBoxUser->Multiline = true;
			this->txtBoxUser->Name = L"txtBoxUser";
			this->txtBoxUser->Size = System::Drawing::Size(208, 25);
			this->txtBoxUser->TabIndex = 3;
			// 
			// txtBoxPass
			// 
			this->txtBoxPass->Location = System::Drawing::Point(255, 142);
			this->txtBoxPass->Multiline = true;
			this->txtBoxPass->Name = L"txtBoxPass";
			this->txtBoxPass->Size = System::Drawing::Size(208, 25);
			this->txtBoxPass->TabIndex = 4;
			// 
			// btnCreate
			// 
			this->btnCreate->Location = System::Drawing::Point(214, 257);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(120, 34);
			this->btnCreate->TabIndex = 5;
			this->btnCreate->Text = L"Create";
			this->btnCreate->UseVisualStyleBackColor = true;
			this->btnCreate->Click += gcnew System::EventHandler(this, &registerForm::btnCreate_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(381, 257);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(120, 34);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &registerForm::btnExit_Click);
			// 
			// registerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(627, 370);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnCreate);
			this->Controls->Add(this->txtBoxPass);
			this->Controls->Add(this->txtBoxUser);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Name = L"registerForm";
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

		if (name->Length == 0 || pass->Length == 0) {
			MessageBox::Show("You must enter all values! ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=scorecard7;Integrated Security=True";


			SqlConnection sqlConn(connString);
			sqlConn.Open(); //Opens server


			String^ sqlQuery2 = "INSERT INTO Accounts " + "(username, password) VALUES " + "(@username, @password)";
			SqlCommand command(sqlQuery2, % sqlConn);

			command.Parameters->AddWithValue("@username", name);//CONVERSION
			command.Parameters->AddWithValue("@password", pass);//CONVERSION

			command.ExecuteNonQuery();

			user.setUsername(name);
			user.setPassword(pass);

			this->Close();
		}

		catch (Exception^ ex) {
			MessageBox::Show("Failed to Create New User ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}

	}



	};

}

