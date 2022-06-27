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
			//
			//TODO: Add the constructor code here
			//
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
			this->label1->Location = System::Drawing::Point(269, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"login";
			this->label1->Click += gcnew System::EventHandler(this, &loginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(66, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(66, 165);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// txtBoxUser
			// 
			this->txtBoxUser->Location = System::Drawing::Point(237, 92);
			this->txtBoxUser->Multiline = true;
			this->txtBoxUser->Name = L"txtBoxUser";
			this->txtBoxUser->Size = System::Drawing::Size(203, 20);
			this->txtBoxUser->TabIndex = 3;
			// 
			// txtBoxPass
			// 
			this->txtBoxPass->Location = System::Drawing::Point(237, 165);
			this->txtBoxPass->Multiline = true;
			this->txtBoxPass->Name = L"txtBoxPass";
			this->txtBoxPass->Size = System::Drawing::Size(203, 20);
			this->txtBoxPass->TabIndex = 4;
			// 
			// btnOk
			// 
			this->btnOk->Location = System::Drawing::Point(157, 242);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(75, 23);
			this->btnOk->TabIndex = 5;
			this->btnOk->Text = L"OK";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &loginForm::btnOk_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(273, 242);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(108, 32);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &loginForm::btnCancel_Click);
			// 
			// btnCreateAccount
			// 
			this->btnCreateAccount->Location = System::Drawing::Point(406, 242);
			this->btnCreateAccount->Name = L"btnCreateAccount";
			this->btnCreateAccount->Size = System::Drawing::Size(102, 32);
			this->btnCreateAccount->TabIndex = 7;
			this->btnCreateAccount->Text = L"Create New Account";
			this->btnCreateAccount->UseVisualStyleBackColor = true;
			this->btnCreateAccount->Click += gcnew System::EventHandler(this, &loginForm::btnCreateAccount_Click_1);
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(537, 306);
			this->Controls->Add(this->btnCreateAccount);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->txtBoxPass);
			this->Controls->Add(this->txtBoxUser);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"loginForm";
			this->Text = L"loginForm";
			//this->Load += gcnew System::EventHandler(this, &loginForm::loginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Private Member
	private: User user; 
	private: bool switchToRegister = false; //Public variable to determine users path


	//Private Functions
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = txtBoxUser->Text;
		String^ pass = txtBoxPass->Text;

		//Add if statement to check for empty text box's


		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=scorecard7;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "use scorecard7; SELECT * FROM Accounts WHERE username=@username AND password=@password;";
			SqlCommand command(sqlQuery, % sqlConn);

			command.Parameters->AddWithValue("@username", name);
			command.Parameters->AddWithValue("@password", pass);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
			//	user = gcnew User;

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
				MessageBox::Show("Email or Password is inocrrect, try again! ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


		catch (Exception^ e) {
			MessageBox::Show("Could not connect to Database, try again! ", "Error ", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}


	}
	

	private: System::Void btnCreateAccount_Click(System::Object^ sender, System::EventArgs^ e) {
		switchToRegister = true;

		this->Close();

	}

	private: System::Void btnCreateAccount_Click_1(System::Object^ sender, System::EventArgs^ e) {
		switchToRegister = true;

		this->Close();
	}

	//Public Functions
	public: int getUserId();
	public: String^ getUserName();
	public: String^ getUserPass();
	public: bool getRegisterDeision();



};
}