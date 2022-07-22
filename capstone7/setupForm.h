/*
Andrew Crandall
7/22/2022
Title: Setup Form
Summary: Form displayed to user to allow for user to either create new round, load previous saved
		 rounds, get help, or close application
*/

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
			this->pnlHelp->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnOnePlyr
			// 
			this->btnOnePlyr->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnOnePlyr->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnOnePlyr->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOnePlyr->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOnePlyr->ForeColor = System::Drawing::Color::Black;
			this->btnOnePlyr->Location = System::Drawing::Point(95, 101);
			this->btnOnePlyr->Name = L"btnOnePlyr";
			this->btnOnePlyr->Padding = System::Windows::Forms::Padding(3);
			this->btnOnePlyr->Size = System::Drawing::Size(210, 70);
			this->btnOnePlyr->TabIndex = 4;
			this->btnOnePlyr->Text = L"Start New Round";
			this->btnOnePlyr->UseVisualStyleBackColor = false;
			this->btnOnePlyr->Click += gcnew System::EventHandler(this, &setupForm::btnOnePlyr_Click);
			// 
			// btnLoad
			// 
			this->btnLoad->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnLoad->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnLoad->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLoad->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoad->ForeColor = System::Drawing::Color::Black;
			this->btnLoad->Location = System::Drawing::Point(95, 211);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Padding = System::Windows::Forms::Padding(3);
			this->btnLoad->Size = System::Drawing::Size(210, 70);
			this->btnLoad->TabIndex = 5;
			this->btnLoad->Text = L"Load Round";
			this->btnLoad->UseVisualStyleBackColor = false;
			this->btnLoad->Click += gcnew System::EventHandler(this, &setupForm::btnTwoPlyr_Click);
			// 
			// btnHelp
			// 
			this->btnHelp->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnHelp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHelp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnHelp->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnHelp->ForeColor = System::Drawing::Color::Black;
			this->btnHelp->Location = System::Drawing::Point(95, 320);
			this->btnHelp->Name = L"btnHelp";
			this->btnHelp->Padding = System::Windows::Forms::Padding(3);
			this->btnHelp->Size = System::Drawing::Size(102, 42);
			this->btnHelp->TabIndex = 8;
			this->btnHelp->Text = L"HELP";
			this->btnHelp->UseVisualStyleBackColor = false;
			this->btnHelp->Click += gcnew System::EventHandler(this, &setupForm::btnHelp_Click);
			// 
			// pnlHelp
			// 
			this->pnlHelp->BackColor = System::Drawing::Color::ForestGreen;
			this->pnlHelp->Controls->Add(this->pnlBtnOk);
			this->pnlHelp->Controls->Add(this->textBox2);
			this->pnlHelp->Location = System::Drawing::Point(95, 101);
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
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Cambria", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(26, 9);
			this->textBox2->MaximumSize = System::Drawing::Size(170, 111);
			this->textBox2->MinimumSize = System::Drawing::Size(170, 111);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(170, 111);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"\r\nStart a new rounds to capture your score!\r\n\r\nHit the load round button to see a"
				L"ll previous rounds\r\n\r\n";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnLogOut
			// 
			this->btnLogOut->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnLogOut->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnLogOut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogOut->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogOut->ForeColor = System::Drawing::Color::Black;
			this->btnLogOut->Location = System::Drawing::Point(203, 320);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Padding = System::Windows::Forms::Padding(3);
			this->btnLogOut->Size = System::Drawing::Size(102, 42);
			this->btnLogOut->TabIndex = 10;
			this->btnLogOut->Text = L"Logout";
			this->btnLogOut->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::ForestGreen;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 24));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(128, 27);
			this->label1->Margin = System::Windows::Forms::Padding(3);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(3);
			this->label1->Size = System::Drawing::Size(146, 45);
			this->label1->TabIndex = 11;
			this->label1->Text = L"18 Holes";
			
			// 
			// setupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(401, 441);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	//Private data members used in main to determine what user wants to do
	private: bool onePlayerSetting = false;
	private: bool loadRoundSetting = false;
	private: bool logoutApplication = false;

	//Public functions for main
	public: bool getOnePlayer();
	public: bool getLoadRound();
	public: bool getLogout();

	private: System::Void setupForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnOnePlyr_Click(System::Object^ sender, System::EventArgs^ e) {
		onePlayerSetting = true; //User choose one Player
		this->Close(); //closes this form
	}
	private: System::Void btnHelp_Click(System::Object^ sender, System::EventArgs^ e) { //Open Panel
		pnlHelp->Show(); // opens panel
	}

	private: System::Void pnlBtnOk_Click(System::Object^ sender, System::EventArgs^ e) { //Button for Help Panel
		pnlHelp->Hide(); //Hides Panel
	}
	private: System::Void pnlBtnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		logoutApplication = true; //user wants to logout, 
	}

	private: System::Void pnlLogOut_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnTwoPlyr_Click(System::Object^ sender, System::EventArgs^ e) {
		loadRoundSetting = true; //user wants to load previous rounds
		this->Close(); //closes this current form
	}

};
}
