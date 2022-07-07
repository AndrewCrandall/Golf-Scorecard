#pragma once



namespace capstone7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for setupForm
	/// </summary>
	public ref class setupForm : public System::Windows::Forms::Form
	{
	public:
		setupForm(void) //Constructor
		{
			InitializeComponent();
			pnlHelp->Hide(); //Hides Help Panel 
			pnlLogOut->Hide(); //Hides Logout Panel
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~setupForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ btnOnePlyr;
	private: System::Windows::Forms::Button^ btnLoad;



	private: System::Windows::Forms::Button^ btnHelp;
	private: System::Windows::Forms::Panel^ pnlHelp;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ btnLogOut;
	private: System::Windows::Forms::Button^ pnlBtnOk;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pnlLogOut;

	private: System::Windows::Forms::Button^ pnlBtnReturn;
	private: System::Windows::Forms::Button^ pnlBtnExit;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->btnOnePlyr = (gcnew System::Windows::Forms::Button());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->btnHelp = (gcnew System::Windows::Forms::Button());
			this->pnlHelp = (gcnew System::Windows::Forms::Panel());
			this->pnlBtnOk = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pnlLogOut = (gcnew System::Windows::Forms::Panel());
			this->pnlBtnReturn = (gcnew System::Windows::Forms::Button());
			this->pnlBtnExit = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pnlHelp->SuspendLayout();
			this->pnlLogOut->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnOnePlyr
			// 
			this->btnOnePlyr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btnOnePlyr->Location = System::Drawing::Point(109, 119);
			this->btnOnePlyr->Name = L"btnOnePlyr";
			this->btnOnePlyr->Size = System::Drawing::Size(159, 69);
			this->btnOnePlyr->TabIndex = 4;
			this->btnOnePlyr->Text = L"Start New Round";
			this->btnOnePlyr->UseVisualStyleBackColor = true;
			this->btnOnePlyr->Click += gcnew System::EventHandler(this, &setupForm::btnOnePlyr_Click);
			// 
			// btnLoad
			// 
			this->btnLoad->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->btnLoad->Location = System::Drawing::Point(109, 194);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(159, 54);
			this->btnLoad->TabIndex = 5;
			this->btnLoad->Text = L"Load Round";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &setupForm::btnTwoPlyr_Click);
			// 
			// btnHelp
			// 
			this->btnHelp->Location = System::Drawing::Point(314, 336);
			this->btnHelp->Name = L"btnHelp";
			this->btnHelp->Size = System::Drawing::Size(75, 23);
			this->btnHelp->TabIndex = 8;
			this->btnHelp->Text = L"HELP";
			this->btnHelp->UseVisualStyleBackColor = true;
			this->btnHelp->Click += gcnew System::EventHandler(this, &setupForm::btnHelp_Click);
			// 
			// pnlHelp
			// 
			this->pnlHelp->Controls->Add(this->pnlBtnOk);
			this->pnlHelp->Controls->Add(this->textBox2);
			this->pnlHelp->Location = System::Drawing::Point(83, 106);
			this->pnlHelp->MaximumSize = System::Drawing::Size(230, 173);
			this->pnlHelp->MinimumSize = System::Drawing::Size(230, 173);
			this->pnlHelp->Name = L"pnlHelp";
			this->pnlHelp->Size = System::Drawing::Size(230, 173);
			this->pnlHelp->TabIndex = 9;
			// 
			// pnlBtnOk
			// 
			this->pnlBtnOk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->pnlBtnOk->Location = System::Drawing::Point(60, 126);
			this->pnlBtnOk->Name = L"pnlBtnOk";
			this->pnlBtnOk->Size = System::Drawing::Size(93, 36);
			this->pnlBtnOk->TabIndex = 1;
			this->pnlBtnOk->Text = L"OK";
			this->pnlBtnOk->UseVisualStyleBackColor = true;
			this->pnlBtnOk->Click += gcnew System::EventHandler(this, &setupForm::pnlBtnOk_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(27, 9);
			this->textBox2->MaximumSize = System::Drawing::Size(170, 111);
			this->textBox2->MinimumSize = System::Drawing::Size(170, 111);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(170, 111);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"Choose the number of players! \r\nDepending on the number of players you have,\r\nthe"
				L" interface will slightly change! \r\nOne - Two Players allow for 18 holes\r\nThree -"
				L"Four only allow for 9 holes";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnLogOut
			// 
			this->btnLogOut->Location = System::Drawing::Point(314, 379);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(75, 23);
			this->btnLogOut->TabIndex = 10;
			this->btnLogOut->Text = L"Logout";
			this->btnLogOut->UseVisualStyleBackColor = true;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &setupForm::btnLogOut_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19));
			this->label1->Location = System::Drawing::Point(12, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(370, 30);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Choose the Number of Players!";
			// 
			// pnlLogOut
			// 
			this->pnlLogOut->Controls->Add(this->pnlBtnReturn);
			this->pnlLogOut->Controls->Add(this->pnlBtnExit);
			this->pnlLogOut->Controls->Add(this->textBox1);
			this->pnlLogOut->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlLogOut->Location = System::Drawing::Point(0, 0);
			this->pnlLogOut->Name = L"pnlLogOut";
			this->pnlLogOut->Size = System::Drawing::Size(401, 441);
			this->pnlLogOut->TabIndex = 2;
			this->pnlLogOut->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &setupForm::pnlLogOut_Paint);
			// 
			// pnlBtnReturn
			// 
			this->pnlBtnReturn->Location = System::Drawing::Point(198, 182);
			this->pnlBtnReturn->Name = L"pnlBtnReturn";
			this->pnlBtnReturn->Size = System::Drawing::Size(112, 47);
			this->pnlBtnReturn->TabIndex = 2;
			this->pnlBtnReturn->Text = L"RETURN";
			this->pnlBtnReturn->UseVisualStyleBackColor = true;
			this->pnlBtnReturn->Click += gcnew System::EventHandler(this, &setupForm::pnlBtnReturn_Click);
			// 
			// pnlBtnExit
			// 
			this->pnlBtnExit->Location = System::Drawing::Point(68, 182);
			this->pnlBtnExit->Name = L"pnlBtnExit";
			this->pnlBtnExit->Size = System::Drawing::Size(112, 47);
			this->pnlBtnExit->TabIndex = 1;
			this->pnlBtnExit->Text = L"OK";
			this->pnlBtnExit->UseVisualStyleBackColor = true;
			this->pnlBtnExit->Click += gcnew System::EventHandler(this, &setupForm::pnlBtnExit_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox1->Location = System::Drawing::Point(68, 43);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(232, 68);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Are you sure you want to log out\?";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// setupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(401, 441);
			this->Controls->Add(this->pnlLogOut);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnLogOut);
			this->Controls->Add(this->pnlHelp);
			this->Controls->Add(this->btnHelp);
			this->Controls->Add(this->btnLoad);
			this->Controls->Add(this->btnOnePlyr);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximumSize = System::Drawing::Size(500, 500);
			this->MinimumSize = System::Drawing::Size(400, 400);
			this->Name = L"setupForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"setupForm";
			this->Load += gcnew System::EventHandler(this, &setupForm::setupForm_Load);
			this->pnlHelp->ResumeLayout(false);
			this->pnlHelp->PerformLayout();
			this->pnlLogOut->ResumeLayout(false);
			this->pnlLogOut->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Private
	private: bool onePlayerSetting = false;
	private: bool loadRoundSetting = false;
	private: bool logoutApplication = false;

	//Public
	public: bool getOnePlayer();
	public: bool getLoadRound();
	public: bool getLogout();

	private: System::Void setupForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnOnePlyr_Click(System::Object^ sender, System::EventArgs^ e) {
		onePlayerSetting = true; //User choose one Player
		this->Close();
	}
	private: System::Void btnHelp_Click(System::Object^ sender, System::EventArgs^ e) { //Open Panel
		pnlHelp->Show(); // opens panel
	}
	private: System::Void btnLogOut_Click(System::Object^ sender, System::EventArgs^ e) { //Close application
		pnlLogOut->Show();
	}
	private: System::Void pnlBtnOk_Click(System::Object^ sender, System::EventArgs^ e) { //Button for Help Panel
		pnlHelp->Hide(); //Hides Panel
	}
	private: System::Void pnlBtnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		logoutApplication = true;
		this->Close();
	}
	private: System::Void pnlBtnReturn_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlLogOut->Hide(); //Brings user back to choose player interface
	}
	private: System::Void pnlLogOut_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnTwoPlyr_Click(System::Object^ sender, System::EventArgs^ e) {
		loadRoundSetting = true;
		this->Close();
	}
};
}
