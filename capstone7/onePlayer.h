/*
Andrew Crandall
7/22/2022
Title: One Player Form
Summary: Form for user to create and save current round of golf
*/


#pragma once

#include "user.h"
#include "loginForm.h"

namespace capstone7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for onePlayer
	/// </summary>
	public ref class onePlayer : public System::Windows::Forms::Form
	{
	public:
		onePlayer(void)
		{
			InitializeComponent();
			panel1->Hide(); //hides saveRound panel
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~onePlayer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tbl1PlayerOne;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ txtBoxHole1;
	private: System::Windows::Forms::TextBox^ txtBoxHole9;


	private: System::Windows::Forms::TextBox^ txtBoxHole8;

	private: System::Windows::Forms::TextBox^ txtBoxHole7;

	private: System::Windows::Forms::TextBox^ txtBoxHole6;

	private: System::Windows::Forms::TextBox^ txtBoxHole5;

	private: System::Windows::Forms::TextBox^ txtBoxHole4;

	private: System::Windows::Forms::TextBox^ txtBoxHole3;

	private: System::Windows::Forms::TextBox^ txtBoxHole2;

	private: System::Windows::Forms::Button^ btnSub8;
	private: System::Windows::Forms::Button^ btnSub7;
	private: System::Windows::Forms::Button^ btnSub1;
	private: System::Windows::Forms::Button^ btnAdd8;
	private: System::Windows::Forms::Button^ btnAdd1;
	private: System::Windows::Forms::Button^ btnAdd2;
	private: System::Windows::Forms::Button^ btnSub2;
	private: System::Windows::Forms::Button^ btnAdd3;
	private: System::Windows::Forms::Button^ btnSub3;
	private: System::Windows::Forms::Button^ btnAdd4;
	private: System::Windows::Forms::Button^ btnSub4;
	private: System::Windows::Forms::Button^ btnAdd5;
	private: System::Windows::Forms::Button^ btnSub5;
	private: System::Windows::Forms::Button^ btnAdd6;
	private: System::Windows::Forms::Button^ btnSub6;
	private: System::Windows::Forms::Button^ btnAdd7;
	private: System::Windows::Forms::Button^ btnAdd9;
	private: System::Windows::Forms::Button^ btnSub0;
	private: System::Windows::Forms::TextBox^ txtBoxFrontTot;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ txtBoxHole18;
	private: System::Windows::Forms::TextBox^ txtBoxHole17;
	private: System::Windows::Forms::TextBox^ txtBoxHole16;
	private: System::Windows::Forms::TextBox^ txtBoxHole15;
	private: System::Windows::Forms::TextBox^ txtBoxHole14;
	private: System::Windows::Forms::TextBox^ txtBoxHole13;
	private: System::Windows::Forms::TextBox^ txtBoxHole12;
	private: System::Windows::Forms::TextBox^ txtBoxHole11;
	private: System::Windows::Forms::Button^ btnSub17;
	private: System::Windows::Forms::Button^ btnSub16;
	private: System::Windows::Forms::Button^ btnSub10;
	private: System::Windows::Forms::Button^ btnAdd17;
	private: System::Windows::Forms::TextBox^ txtBoxHole10;
	private: System::Windows::Forms::Button^ btnAdd10;
	private: System::Windows::Forms::Button^ btnAdd11;
	private: System::Windows::Forms::Button^ btnSub11;
	private: System::Windows::Forms::Button^ btnAdd12;
	private: System::Windows::Forms::Button^ btnSub12;
	private: System::Windows::Forms::Button^ btnAdd13;
	private: System::Windows::Forms::Button^ btnSub13;
	private: System::Windows::Forms::Button^ btnAdd14;
	private: System::Windows::Forms::Button^ btnSub14;
	private: System::Windows::Forms::Button^ btnAdd15;
	private: System::Windows::Forms::Button^ btnSub15;
	private: System::Windows::Forms::Button^ btnAdd16;
	private: System::Windows::Forms::Button^ btnAdd18;
	private: System::Windows::Forms::Button^ btnSub18;
	private: System::Windows::Forms::TextBox^ txtBoxBackTotal;
	private: System::Windows::Forms::TextBox^ txtBoxFullRound;

	private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::TextBox^ pnlFrontScore;
private: System::Windows::Forms::TextBox^ pnlTotalScore;


private: System::Windows::Forms::TextBox^ pnlBackScore;

private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ txtPnlSavedRound;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Button^ pnlBtnCancel;
private: System::Windows::Forms::Button^ pnlCancelSave;



















	protected:


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
			this->tbl1PlayerOne = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txtBoxHole9 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole8 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole7 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole6 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole5 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole4 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole3 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole2 = (gcnew System::Windows::Forms::TextBox());
			this->btnSub8 = (gcnew System::Windows::Forms::Button());
			this->btnSub7 = (gcnew System::Windows::Forms::Button());
			this->btnSub1 = (gcnew System::Windows::Forms::Button());
			this->btnAdd8 = (gcnew System::Windows::Forms::Button());
			this->txtBoxHole1 = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd1 = (gcnew System::Windows::Forms::Button());
			this->btnAdd2 = (gcnew System::Windows::Forms::Button());
			this->btnSub2 = (gcnew System::Windows::Forms::Button());
			this->btnAdd3 = (gcnew System::Windows::Forms::Button());
			this->btnSub3 = (gcnew System::Windows::Forms::Button());
			this->btnAdd4 = (gcnew System::Windows::Forms::Button());
			this->btnSub4 = (gcnew System::Windows::Forms::Button());
			this->btnAdd5 = (gcnew System::Windows::Forms::Button());
			this->btnSub5 = (gcnew System::Windows::Forms::Button());
			this->btnAdd6 = (gcnew System::Windows::Forms::Button());
			this->btnSub6 = (gcnew System::Windows::Forms::Button());
			this->btnAdd7 = (gcnew System::Windows::Forms::Button());
			this->btnAdd9 = (gcnew System::Windows::Forms::Button());
			this->btnSub0 = (gcnew System::Windows::Forms::Button());
			this->txtBoxFrontTot = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->txtBoxHole18 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole17 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole16 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole15 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole14 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole13 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole12 = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxHole11 = (gcnew System::Windows::Forms::TextBox());
			this->btnSub17 = (gcnew System::Windows::Forms::Button());
			this->btnSub16 = (gcnew System::Windows::Forms::Button());
			this->btnSub10 = (gcnew System::Windows::Forms::Button());
			this->btnAdd17 = (gcnew System::Windows::Forms::Button());
			this->txtBoxHole10 = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd10 = (gcnew System::Windows::Forms::Button());
			this->btnAdd11 = (gcnew System::Windows::Forms::Button());
			this->btnSub11 = (gcnew System::Windows::Forms::Button());
			this->btnAdd12 = (gcnew System::Windows::Forms::Button());
			this->btnSub12 = (gcnew System::Windows::Forms::Button());
			this->btnAdd13 = (gcnew System::Windows::Forms::Button());
			this->btnSub13 = (gcnew System::Windows::Forms::Button());
			this->btnAdd14 = (gcnew System::Windows::Forms::Button());
			this->btnSub14 = (gcnew System::Windows::Forms::Button());
			this->btnAdd15 = (gcnew System::Windows::Forms::Button());
			this->btnSub15 = (gcnew System::Windows::Forms::Button());
			this->btnAdd16 = (gcnew System::Windows::Forms::Button());
			this->btnAdd18 = (gcnew System::Windows::Forms::Button());
			this->btnSub18 = (gcnew System::Windows::Forms::Button());
			this->txtBoxBackTotal = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxFullRound = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnlBtnCancel = (gcnew System::Windows::Forms::Button());
			this->pnlCancelSave = (gcnew System::Windows::Forms::Button());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtPnlSavedRound = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->pnlFrontScore = (gcnew System::Windows::Forms::TextBox());
			this->pnlTotalScore = (gcnew System::Windows::Forms::TextBox());
			this->pnlBackScore = (gcnew System::Windows::Forms::TextBox());
			this->tbl1PlayerOne->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tbl1PlayerOne
			// 
			this->tbl1PlayerOne->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbl1PlayerOne->BackColor = System::Drawing::Color::ForestGreen;
			this->tbl1PlayerOne->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tbl1PlayerOne->ColumnCount = 10;
			this->tbl1PlayerOne->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tbl1PlayerOne->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tbl1PlayerOne->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tbl1PlayerOne->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tbl1PlayerOne->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tbl1PlayerOne->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tbl1PlayerOne->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tbl1PlayerOne->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tbl1PlayerOne->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tbl1PlayerOne->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				178)));
			this->tbl1PlayerOne->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tbl1PlayerOne->Controls->Add(this->txtBoxHole9, 8, 0);
			this->tbl1PlayerOne->Controls->Add(this->txtBoxHole8, 7, 0);
			this->tbl1PlayerOne->Controls->Add(this->txtBoxHole7, 6, 0);
			this->tbl1PlayerOne->Controls->Add(this->txtBoxHole6, 5, 0);
			this->tbl1PlayerOne->Controls->Add(this->txtBoxHole5, 4, 0);
			this->tbl1PlayerOne->Controls->Add(this->txtBoxHole4, 3, 0);
			this->tbl1PlayerOne->Controls->Add(this->txtBoxHole3, 2, 0);
			this->tbl1PlayerOne->Controls->Add(this->txtBoxHole2, 1, 0);
			this->tbl1PlayerOne->Controls->Add(this->btnSub8, 7, 2);
			this->tbl1PlayerOne->Controls->Add(this->btnSub7, 6, 2);
			this->tbl1PlayerOne->Controls->Add(this->btnSub1, 0, 2);
			this->tbl1PlayerOne->Controls->Add(this->btnAdd8, 7, 1);
			this->tbl1PlayerOne->Controls->Add(this->btnAdd1, 0, 1);
			this->tbl1PlayerOne->Controls->Add(this->btnAdd2, 1, 1);
			this->tbl1PlayerOne->Controls->Add(this->btnSub2, 1, 2);
			this->tbl1PlayerOne->Controls->Add(this->btnAdd3, 2, 1);
			this->tbl1PlayerOne->Controls->Add(this->btnSub3, 2, 2);
			this->tbl1PlayerOne->Controls->Add(this->btnAdd4, 3, 1);
			this->tbl1PlayerOne->Controls->Add(this->btnSub4, 3, 2);
			this->tbl1PlayerOne->Controls->Add(this->btnAdd5, 4, 1);
			this->tbl1PlayerOne->Controls->Add(this->btnSub5, 4, 2);
			this->tbl1PlayerOne->Controls->Add(this->btnAdd6, 5, 1);
			this->tbl1PlayerOne->Controls->Add(this->btnSub6, 5, 2);
			this->tbl1PlayerOne->Controls->Add(this->btnAdd7, 6, 1);
			this->tbl1PlayerOne->Controls->Add(this->btnAdd9, 8, 1);
			this->tbl1PlayerOne->Controls->Add(this->btnSub0, 8, 2);
			this->tbl1PlayerOne->Controls->Add(this->txtBoxFrontTot, 9, 0);
			this->tbl1PlayerOne->Controls->Add(this->txtBoxHole1, 0, 0);
			this->tbl1PlayerOne->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbl1PlayerOne->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tbl1PlayerOne->Location = System::Drawing::Point(158, 65);
			this->tbl1PlayerOne->Name = L"tbl1PlayerOne";
			this->tbl1PlayerOne->RowCount = 3;
			this->tbl1PlayerOne->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tbl1PlayerOne->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tbl1PlayerOne->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tbl1PlayerOne->Size = System::Drawing::Size(577, 115);
			this->tbl1PlayerOne->TabIndex = 0;
			// 
			// txtBoxHole9
			// 
			this->txtBoxHole9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole9->Location = System::Drawing::Point(470, 6);
			this->txtBoxHole9->MaxLength = 1;
			this->txtBoxHole9->Multiline = true;
			this->txtBoxHole9->Name = L"txtBoxHole9";
			this->txtBoxHole9->ReadOnly = true;
			this->txtBoxHole9->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole9->TabIndex = 47;
			this->txtBoxHole9->Text = L"0";
			this->txtBoxHole9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole8
			// 
			this->txtBoxHole8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole8->Location = System::Drawing::Point(412, 6);
			this->txtBoxHole8->MaxLength = 1;
			this->txtBoxHole8->Multiline = true;
			this->txtBoxHole8->Name = L"txtBoxHole8";
			this->txtBoxHole8->ReadOnly = true;
			this->txtBoxHole8->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole8->TabIndex = 46;
			this->txtBoxHole8->Text = L"0";
			this->txtBoxHole8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole7
			// 
			this->txtBoxHole7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole7->Location = System::Drawing::Point(354, 6);
			this->txtBoxHole7->MaxLength = 1;
			this->txtBoxHole7->Multiline = true;
			this->txtBoxHole7->Name = L"txtBoxHole7";
			this->txtBoxHole7->ReadOnly = true;
			this->txtBoxHole7->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole7->TabIndex = 45;
			this->txtBoxHole7->Text = L"0";
			this->txtBoxHole7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole6
			// 
			this->txtBoxHole6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole6->Location = System::Drawing::Point(296, 6);
			this->txtBoxHole6->MaxLength = 1;
			this->txtBoxHole6->Multiline = true;
			this->txtBoxHole6->Name = L"txtBoxHole6";
			this->txtBoxHole6->ReadOnly = true;
			this->txtBoxHole6->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole6->TabIndex = 44;
			this->txtBoxHole6->Text = L"0";
			this->txtBoxHole6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole5
			// 
			this->txtBoxHole5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole5->Location = System::Drawing::Point(238, 6);
			this->txtBoxHole5->MaxLength = 1;
			this->txtBoxHole5->Multiline = true;
			this->txtBoxHole5->Name = L"txtBoxHole5";
			this->txtBoxHole5->ReadOnly = true;
			this->txtBoxHole5->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole5->TabIndex = 43;
			this->txtBoxHole5->Text = L"0";
			this->txtBoxHole5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole4
			// 
			this->txtBoxHole4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole4->Location = System::Drawing::Point(180, 6);
			this->txtBoxHole4->MaxLength = 1;
			this->txtBoxHole4->Multiline = true;
			this->txtBoxHole4->Name = L"txtBoxHole4";
			this->txtBoxHole4->ReadOnly = true;
			this->txtBoxHole4->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole4->TabIndex = 42;
			this->txtBoxHole4->Text = L"0";
			this->txtBoxHole4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole3
			// 
			this->txtBoxHole3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole3->Location = System::Drawing::Point(122, 6);
			this->txtBoxHole3->MaxLength = 1;
			this->txtBoxHole3->Multiline = true;
			this->txtBoxHole3->Name = L"txtBoxHole3";
			this->txtBoxHole3->ReadOnly = true;
			this->txtBoxHole3->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole3->TabIndex = 41;
			this->txtBoxHole3->Text = L"0";
			this->txtBoxHole3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole2
			// 
			this->txtBoxHole2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole2->Location = System::Drawing::Point(64, 6);
			this->txtBoxHole2->MaxLength = 1;
			this->txtBoxHole2->Multiline = true;
			this->txtBoxHole2->Name = L"txtBoxHole2";
			this->txtBoxHole2->ReadOnly = true;
			this->txtBoxHole2->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole2->TabIndex = 40;
			this->txtBoxHole2->Text = L"0";
			this->txtBoxHole2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnSub8
			// 
			this->btnSub8->Location = System::Drawing::Point(412, 82);
			this->btnSub8->Name = L"btnSub8";
			this->btnSub8->Size = System::Drawing::Size(49, 23);
			this->btnSub8->TabIndex = 36;
			this->btnSub8->Text = L"-";
			this->btnSub8->UseVisualStyleBackColor = true;
			this->btnSub8->Click += gcnew System::EventHandler(this, &onePlayer::btnSub8_Click);
			// 
			// btnSub7
			// 
			this->btnSub7->Location = System::Drawing::Point(354, 82);
			this->btnSub7->Name = L"btnSub7";
			this->btnSub7->Size = System::Drawing::Size(49, 23);
			this->btnSub7->TabIndex = 24;
			this->btnSub7->Text = L"-";
			this->btnSub7->UseVisualStyleBackColor = true;
			this->btnSub7->Click += gcnew System::EventHandler(this, &onePlayer::btnSub7_Click);
			// 
			// btnSub1
			// 
			this->btnSub1->Location = System::Drawing::Point(6, 82);
			this->btnSub1->Name = L"btnSub1";
			this->btnSub1->Size = System::Drawing::Size(49, 23);
			this->btnSub1->TabIndex = 24;
			this->btnSub1->Text = L"-";
			this->btnSub1->UseVisualStyleBackColor = true;
			this->btnSub1->Click += gcnew System::EventHandler(this, &onePlayer::btnSub1_Click);
			// 
			// btnAdd8
			// 
			this->btnAdd8->Location = System::Drawing::Point(412, 49);
			this->btnAdd8->Name = L"btnAdd8";
			this->btnAdd8->Size = System::Drawing::Size(49, 23);
			this->btnAdd8->TabIndex = 37;
			this->btnAdd8->Text = L"+";
			this->btnAdd8->UseVisualStyleBackColor = true;
			this->btnAdd8->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd8_Click);
			// 
			// txtBoxHole1
			// 
			this->txtBoxHole1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole1->Location = System::Drawing::Point(6, 6);
			this->txtBoxHole1->MaxLength = 1;
			this->txtBoxHole1->Multiline = true;
			this->txtBoxHole1->Name = L"txtBoxHole1";
			this->txtBoxHole1->ReadOnly = true;
			this->txtBoxHole1->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole1->TabIndex = 21;
			this->txtBoxHole1->Text = L"0";
			this->txtBoxHole1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnAdd1
			// 
			this->btnAdd1->Location = System::Drawing::Point(6, 49);
			this->btnAdd1->Name = L"btnAdd1";
			this->btnAdd1->Size = System::Drawing::Size(49, 23);
			this->btnAdd1->TabIndex = 22;
			this->btnAdd1->Text = L"+";
			this->btnAdd1->UseVisualStyleBackColor = true;
			this->btnAdd1->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd1_Click);
			// 
			// btnAdd2
			// 
			this->btnAdd2->Location = System::Drawing::Point(64, 49);
			this->btnAdd2->Name = L"btnAdd2";
			this->btnAdd2->Size = System::Drawing::Size(49, 23);
			this->btnAdd2->TabIndex = 25;
			this->btnAdd2->Text = L"+";
			this->btnAdd2->UseVisualStyleBackColor = true;
			this->btnAdd2->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd2_Click);
			// 
			// btnSub2
			// 
			this->btnSub2->Location = System::Drawing::Point(64, 82);
			this->btnSub2->Name = L"btnSub2";
			this->btnSub2->Size = System::Drawing::Size(49, 23);
			this->btnSub2->TabIndex = 26;
			this->btnSub2->Text = L"-";
			this->btnSub2->UseVisualStyleBackColor = true;
			this->btnSub2->Click += gcnew System::EventHandler(this, &onePlayer::btnSub2_Click);
			// 
			// btnAdd3
			// 
			this->btnAdd3->Location = System::Drawing::Point(122, 49);
			this->btnAdd3->Name = L"btnAdd3";
			this->btnAdd3->Size = System::Drawing::Size(49, 23);
			this->btnAdd3->TabIndex = 27;
			this->btnAdd3->Text = L"+";
			this->btnAdd3->UseVisualStyleBackColor = true;
			this->btnAdd3->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd3_Click);
			// 
			// btnSub3
			// 
			this->btnSub3->Location = System::Drawing::Point(122, 82);
			this->btnSub3->Name = L"btnSub3";
			this->btnSub3->Size = System::Drawing::Size(49, 23);
			this->btnSub3->TabIndex = 28;
			this->btnSub3->Text = L"-";
			this->btnSub3->UseVisualStyleBackColor = true;
			this->btnSub3->Click += gcnew System::EventHandler(this, &onePlayer::btnSub3_Click);
			// 
			// btnAdd4
			// 
			this->btnAdd4->Location = System::Drawing::Point(180, 49);
			this->btnAdd4->Name = L"btnAdd4";
			this->btnAdd4->Size = System::Drawing::Size(49, 23);
			this->btnAdd4->TabIndex = 29;
			this->btnAdd4->Text = L"+";
			this->btnAdd4->UseVisualStyleBackColor = true;
			this->btnAdd4->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd4_Click);
			// 
			// btnSub4
			// 
			this->btnSub4->Location = System::Drawing::Point(180, 82);
			this->btnSub4->Name = L"btnSub4";
			this->btnSub4->Size = System::Drawing::Size(49, 23);
			this->btnSub4->TabIndex = 30;
			this->btnSub4->Text = L"-";
			this->btnSub4->UseVisualStyleBackColor = true;
			this->btnSub4->Click += gcnew System::EventHandler(this, &onePlayer::btnSub4_Click);
			// 
			// btnAdd5
			// 
			this->btnAdd5->Location = System::Drawing::Point(238, 49);
			this->btnAdd5->Name = L"btnAdd5";
			this->btnAdd5->Size = System::Drawing::Size(49, 23);
			this->btnAdd5->TabIndex = 31;
			this->btnAdd5->Text = L"+";
			this->btnAdd5->UseVisualStyleBackColor = true;
			this->btnAdd5->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd5_Click);
			// 
			// btnSub5
			// 
			this->btnSub5->Location = System::Drawing::Point(238, 82);
			this->btnSub5->Name = L"btnSub5";
			this->btnSub5->Size = System::Drawing::Size(49, 23);
			this->btnSub5->TabIndex = 32;
			this->btnSub5->Text = L"-";
			this->btnSub5->UseVisualStyleBackColor = true;
			this->btnSub5->Click += gcnew System::EventHandler(this, &onePlayer::btnSub5_Click);
			// 
			// btnAdd6
			// 
			this->btnAdd6->Location = System::Drawing::Point(296, 49);
			this->btnAdd6->Name = L"btnAdd6";
			this->btnAdd6->Size = System::Drawing::Size(49, 23);
			this->btnAdd6->TabIndex = 33;
			this->btnAdd6->Text = L"+";
			this->btnAdd6->UseVisualStyleBackColor = true;
			this->btnAdd6->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd6_Click);
			// 
			// btnSub6
			// 
			this->btnSub6->Location = System::Drawing::Point(296, 82);
			this->btnSub6->Name = L"btnSub6";
			this->btnSub6->Size = System::Drawing::Size(49, 23);
			this->btnSub6->TabIndex = 34;
			this->btnSub6->Text = L"-";
			this->btnSub6->UseVisualStyleBackColor = true;
			this->btnSub6->Click += gcnew System::EventHandler(this, &onePlayer::btnSub6_Click);
			// 
			// btnAdd7
			// 
			this->btnAdd7->Location = System::Drawing::Point(354, 49);
			this->btnAdd7->Name = L"btnAdd7";
			this->btnAdd7->Size = System::Drawing::Size(49, 23);
			this->btnAdd7->TabIndex = 35;
			this->btnAdd7->Text = L"+";
			this->btnAdd7->UseVisualStyleBackColor = true;
			this->btnAdd7->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd7_Click);
			// 
			// btnAdd9
			// 
			this->btnAdd9->Location = System::Drawing::Point(470, 49);
			this->btnAdd9->Name = L"btnAdd9";
			this->btnAdd9->Size = System::Drawing::Size(49, 23);
			this->btnAdd9->TabIndex = 39;
			this->btnAdd9->Text = L"+";
			this->btnAdd9->UseVisualStyleBackColor = true;
			this->btnAdd9->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd9_Click);
			// 
			// btnSub0
			// 
			this->btnSub0->Location = System::Drawing::Point(470, 82);
			this->btnSub0->Name = L"btnSub0";
			this->btnSub0->Size = System::Drawing::Size(49, 23);
			this->btnSub0->TabIndex = 38;
			this->btnSub0->Text = L"-";
			this->btnSub0->UseVisualStyleBackColor = true;
			this->btnSub0->Click += gcnew System::EventHandler(this, &onePlayer::btnSub0_Click);
			// 
			// txtBoxFrontTot
			// 
			this->txtBoxFrontTot->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxFrontTot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxFrontTot->Location = System::Drawing::Point(528, 6);
			this->txtBoxFrontTot->MaxLength = 1;
			this->txtBoxFrontTot->Multiline = true;
			this->txtBoxFrontTot->Name = L"txtBoxFrontTot";
			this->txtBoxFrontTot->ReadOnly = true;
			this->txtBoxFrontTot->Size = System::Drawing::Size(38, 34);
			this->txtBoxFrontTot->TabIndex = 48;
			this->txtBoxFrontTot->Text = L"0";
			this->txtBoxFrontTot->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(176, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(237, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 22);
			this->label2->TabIndex = 1;
			this->label2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(293, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 22);
			this->label3->TabIndex = 2;
			this->label3->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(352, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 22);
			this->label4->TabIndex = 3;
			this->label4->Text = L"4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(411, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 22);
			this->label5->TabIndex = 4;
			this->label5->Text = L"5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(468, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 22);
			this->label6->TabIndex = 5;
			this->label6->Text = L"6";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(526, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 22);
			this->label7->TabIndex = 6;
			this->label7->Text = L"7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(585, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 22);
			this->label8->TabIndex = 7;
			this->label8->Text = L"8";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(641, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 22);
			this->label9->TabIndex = 8;
			this->label9->Text = L"9";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(683, 40);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(55, 22);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Front";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(26, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 50);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Save Round";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &onePlayer::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(26, 214);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 50);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &onePlayer::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(26, 284);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(116, 50);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Return";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &onePlayer::button3_Click_1);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(683, 193);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 22);
			this->label11->TabIndex = 23;
			this->label11->Text = L"Back";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(641, 193);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 22);
			this->label12->TabIndex = 22;
			this->label12->Text = L"18";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(585, 193);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(32, 22);
			this->label13->TabIndex = 21;
			this->label13->Text = L"17";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(526, 193);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(32, 22);
			this->label14->TabIndex = 20;
			this->label14->Text = L"16";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(468, 193);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(32, 22);
			this->label15->TabIndex = 19;
			this->label15->Text = L"15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(411, 193);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(32, 22);
			this->label16->TabIndex = 18;
			this->label16->Text = L"14";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(352, 193);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(32, 22);
			this->label17->TabIndex = 17;
			this->label17->Text = L"13";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(293, 193);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(32, 22);
			this->label18->TabIndex = 16;
			this->label18->Text = L"12";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(237, 193);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(32, 22);
			this->label19->TabIndex = 15;
			this->label19->Text = L"11";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(176, 193);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(32, 22);
			this->label20->TabIndex = 13;
			this->label20->Text = L"10";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->BackColor = System::Drawing::Color::ForestGreen;
			this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::InsetDouble;
			this->tableLayoutPanel1->ColumnCount = 10;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				55)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				178)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->txtBoxHole18, 8, 0);
			this->tableLayoutPanel1->Controls->Add(this->txtBoxHole17, 7, 0);
			this->tableLayoutPanel1->Controls->Add(this->txtBoxHole16, 6, 0);
			this->tableLayoutPanel1->Controls->Add(this->txtBoxHole15, 5, 0);
			this->tableLayoutPanel1->Controls->Add(this->txtBoxHole14, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->txtBoxHole13, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->txtBoxHole12, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->txtBoxHole11, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnSub17, 7, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnSub16, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnSub10, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnAdd17, 7, 1);
			this->tableLayoutPanel1->Controls->Add(this->txtBoxHole10, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnAdd10, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnAdd11, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnSub11, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnAdd12, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnSub12, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnAdd13, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnSub13, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnAdd14, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnSub14, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnAdd15, 5, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnSub15, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnAdd16, 6, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnAdd18, 8, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnSub18, 8, 2);
			this->tableLayoutPanel1->Controls->Add(this->txtBoxBackTotal, 9, 0);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel1->Location = System::Drawing::Point(158, 218);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(577, 115);
			this->tableLayoutPanel1->TabIndex = 14;
			// 
			// txtBoxHole18
			// 
			this->txtBoxHole18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole18->Location = System::Drawing::Point(470, 6);
			this->txtBoxHole18->MaxLength = 1;
			this->txtBoxHole18->Multiline = true;
			this->txtBoxHole18->Name = L"txtBoxHole18";
			this->txtBoxHole18->ReadOnly = true;
			this->txtBoxHole18->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole18->TabIndex = 47;
			this->txtBoxHole18->Text = L"0";
			this->txtBoxHole18->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole17
			// 
			this->txtBoxHole17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole17->Location = System::Drawing::Point(412, 6);
			this->txtBoxHole17->MaxLength = 1;
			this->txtBoxHole17->Multiline = true;
			this->txtBoxHole17->Name = L"txtBoxHole17";
			this->txtBoxHole17->ReadOnly = true;
			this->txtBoxHole17->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole17->TabIndex = 46;
			this->txtBoxHole17->Text = L"0";
			this->txtBoxHole17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole16
			// 
			this->txtBoxHole16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole16->Location = System::Drawing::Point(354, 6);
			this->txtBoxHole16->MaxLength = 1;
			this->txtBoxHole16->Multiline = true;
			this->txtBoxHole16->Name = L"txtBoxHole16";
			this->txtBoxHole16->ReadOnly = true;
			this->txtBoxHole16->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole16->TabIndex = 45;
			this->txtBoxHole16->Text = L"0";
			this->txtBoxHole16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole15
			// 
			this->txtBoxHole15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole15->Location = System::Drawing::Point(296, 6);
			this->txtBoxHole15->MaxLength = 1;
			this->txtBoxHole15->Multiline = true;
			this->txtBoxHole15->Name = L"txtBoxHole15";
			this->txtBoxHole15->ReadOnly = true;
			this->txtBoxHole15->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole15->TabIndex = 44;
			this->txtBoxHole15->Text = L"0";
			this->txtBoxHole15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole14
			// 
			this->txtBoxHole14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole14->Location = System::Drawing::Point(238, 6);
			this->txtBoxHole14->MaxLength = 1;
			this->txtBoxHole14->Multiline = true;
			this->txtBoxHole14->Name = L"txtBoxHole14";
			this->txtBoxHole14->ReadOnly = true;
			this->txtBoxHole14->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole14->TabIndex = 43;
			this->txtBoxHole14->Text = L"0";
			this->txtBoxHole14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole13
			// 
			this->txtBoxHole13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole13->Location = System::Drawing::Point(180, 6);
			this->txtBoxHole13->MaxLength = 1;
			this->txtBoxHole13->Multiline = true;
			this->txtBoxHole13->Name = L"txtBoxHole13";
			this->txtBoxHole13->ReadOnly = true;
			this->txtBoxHole13->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole13->TabIndex = 42;
			this->txtBoxHole13->Text = L"0";
			this->txtBoxHole13->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole12
			// 
			this->txtBoxHole12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole12->Location = System::Drawing::Point(122, 6);
			this->txtBoxHole12->MaxLength = 1;
			this->txtBoxHole12->Multiline = true;
			this->txtBoxHole12->Name = L"txtBoxHole12";
			this->txtBoxHole12->ReadOnly = true;
			this->txtBoxHole12->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole12->TabIndex = 41;
			this->txtBoxHole12->Text = L"0";
			this->txtBoxHole12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxHole11
			// 
			this->txtBoxHole11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole11->Location = System::Drawing::Point(64, 6);
			this->txtBoxHole11->MaxLength = 1;
			this->txtBoxHole11->Multiline = true;
			this->txtBoxHole11->Name = L"txtBoxHole11";
			this->txtBoxHole11->ReadOnly = true;
			this->txtBoxHole11->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole11->TabIndex = 40;
			this->txtBoxHole11->Text = L"0";
			this->txtBoxHole11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnSub17
			// 
			this->btnSub17->Location = System::Drawing::Point(412, 82);
			this->btnSub17->Name = L"btnSub17";
			this->btnSub17->Size = System::Drawing::Size(49, 23);
			this->btnSub17->TabIndex = 36;
			this->btnSub17->Text = L"-";
			this->btnSub17->UseVisualStyleBackColor = true;
			this->btnSub17->Click += gcnew System::EventHandler(this, &onePlayer::btnSub17_Click);
			// 
			// btnSub16
			// 
			this->btnSub16->Location = System::Drawing::Point(354, 82);
			this->btnSub16->Name = L"btnSub16";
			this->btnSub16->Size = System::Drawing::Size(49, 23);
			this->btnSub16->TabIndex = 24;
			this->btnSub16->Text = L"-";
			this->btnSub16->UseVisualStyleBackColor = true;
			this->btnSub16->Click += gcnew System::EventHandler(this, &onePlayer::btnSub16_Click);
			// 
			// btnSub10
			// 
			this->btnSub10->Location = System::Drawing::Point(6, 82);
			this->btnSub10->Name = L"btnSub10";
			this->btnSub10->Size = System::Drawing::Size(49, 23);
			this->btnSub10->TabIndex = 24;
			this->btnSub10->Text = L"-";
			this->btnSub10->UseVisualStyleBackColor = true;
			this->btnSub10->Click += gcnew System::EventHandler(this, &onePlayer::btnSub10_Click);
			// 
			// btnAdd17
			// 
			this->btnAdd17->Location = System::Drawing::Point(412, 49);
			this->btnAdd17->Name = L"btnAdd17";
			this->btnAdd17->Size = System::Drawing::Size(49, 23);
			this->btnAdd17->TabIndex = 37;
			this->btnAdd17->Text = L"+";
			this->btnAdd17->UseVisualStyleBackColor = true;
			this->btnAdd17->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd17_Click);
			// 
			// txtBoxHole10
			// 
			this->txtBoxHole10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxHole10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxHole10->Location = System::Drawing::Point(6, 6);
			this->txtBoxHole10->MaxLength = 1;
			this->txtBoxHole10->Multiline = true;
			this->txtBoxHole10->Name = L"txtBoxHole10";
			this->txtBoxHole10->ReadOnly = true;
			this->txtBoxHole10->Size = System::Drawing::Size(47, 34);
			this->txtBoxHole10->TabIndex = 21;
			this->txtBoxHole10->Text = L"0";
			this->txtBoxHole10->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnAdd10
			// 
			this->btnAdd10->Location = System::Drawing::Point(6, 49);
			this->btnAdd10->Name = L"btnAdd10";
			this->btnAdd10->Size = System::Drawing::Size(49, 23);
			this->btnAdd10->TabIndex = 22;
			this->btnAdd10->Text = L"+";
			this->btnAdd10->UseVisualStyleBackColor = true;
			this->btnAdd10->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd10_Click);
			// 
			// btnAdd11
			// 
			this->btnAdd11->Location = System::Drawing::Point(64, 49);
			this->btnAdd11->Name = L"btnAdd11";
			this->btnAdd11->Size = System::Drawing::Size(49, 23);
			this->btnAdd11->TabIndex = 25;
			this->btnAdd11->Text = L"+";
			this->btnAdd11->UseVisualStyleBackColor = true;
			this->btnAdd11->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd11_Click);
			// 
			// btnSub11
			// 
			this->btnSub11->Location = System::Drawing::Point(64, 82);
			this->btnSub11->Name = L"btnSub11";
			this->btnSub11->Size = System::Drawing::Size(49, 23);
			this->btnSub11->TabIndex = 26;
			this->btnSub11->Text = L"-";
			this->btnSub11->UseVisualStyleBackColor = true;
			this->btnSub11->Click += gcnew System::EventHandler(this, &onePlayer::btnSub11_Click);
			// 
			// btnAdd12
			// 
			this->btnAdd12->Location = System::Drawing::Point(122, 49);
			this->btnAdd12->Name = L"btnAdd12";
			this->btnAdd12->Size = System::Drawing::Size(49, 23);
			this->btnAdd12->TabIndex = 27;
			this->btnAdd12->Text = L"+";
			this->btnAdd12->UseVisualStyleBackColor = true;
			this->btnAdd12->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd12_Click);
			// 
			// btnSub12
			// 
			this->btnSub12->Location = System::Drawing::Point(122, 82);
			this->btnSub12->Name = L"btnSub12";
			this->btnSub12->Size = System::Drawing::Size(49, 23);
			this->btnSub12->TabIndex = 28;
			this->btnSub12->Text = L"-";
			this->btnSub12->UseVisualStyleBackColor = true;
			this->btnSub12->Click += gcnew System::EventHandler(this, &onePlayer::btnSub12_Click);
			// 
			// btnAdd13
			// 
			this->btnAdd13->Location = System::Drawing::Point(180, 49);
			this->btnAdd13->Name = L"btnAdd13";
			this->btnAdd13->Size = System::Drawing::Size(49, 23);
			this->btnAdd13->TabIndex = 29;
			this->btnAdd13->Text = L"+";
			this->btnAdd13->UseVisualStyleBackColor = true;
			this->btnAdd13->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd13_Click);
			// 
			// btnSub13
			// 
			this->btnSub13->Location = System::Drawing::Point(180, 82);
			this->btnSub13->Name = L"btnSub13";
			this->btnSub13->Size = System::Drawing::Size(49, 23);
			this->btnSub13->TabIndex = 30;
			this->btnSub13->Text = L"-";
			this->btnSub13->UseVisualStyleBackColor = true;
			this->btnSub13->Click += gcnew System::EventHandler(this, &onePlayer::btnSub13_Click);
			// 
			// btnAdd14
			// 
			this->btnAdd14->Location = System::Drawing::Point(238, 49);
			this->btnAdd14->Name = L"btnAdd14";
			this->btnAdd14->Size = System::Drawing::Size(49, 23);
			this->btnAdd14->TabIndex = 31;
			this->btnAdd14->Text = L"+";
			this->btnAdd14->UseVisualStyleBackColor = true;
			this->btnAdd14->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd14_Click);
			// 
			// btnSub14
			// 
			this->btnSub14->Location = System::Drawing::Point(238, 82);
			this->btnSub14->Name = L"btnSub14";
			this->btnSub14->Size = System::Drawing::Size(49, 23);
			this->btnSub14->TabIndex = 32;
			this->btnSub14->Text = L"-";
			this->btnSub14->UseVisualStyleBackColor = true;
			this->btnSub14->Click += gcnew System::EventHandler(this, &onePlayer::btnSub14_Click);
			// 
			// btnAdd15
			// 
			this->btnAdd15->Location = System::Drawing::Point(296, 49);
			this->btnAdd15->Name = L"btnAdd15";
			this->btnAdd15->Size = System::Drawing::Size(49, 23);
			this->btnAdd15->TabIndex = 33;
			this->btnAdd15->Text = L"+";
			this->btnAdd15->UseVisualStyleBackColor = true;
			this->btnAdd15->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd15_Click);
			// 
			// btnSub15
			// 
			this->btnSub15->Location = System::Drawing::Point(296, 82);
			this->btnSub15->Name = L"btnSub15";
			this->btnSub15->Size = System::Drawing::Size(49, 23);
			this->btnSub15->TabIndex = 34;
			this->btnSub15->Text = L"-";
			this->btnSub15->UseVisualStyleBackColor = true;
			this->btnSub15->Click += gcnew System::EventHandler(this, &onePlayer::btnSub15_Click);
			// 
			// btnAdd16
			// 
			this->btnAdd16->Location = System::Drawing::Point(354, 49);
			this->btnAdd16->Name = L"btnAdd16";
			this->btnAdd16->Size = System::Drawing::Size(49, 23);
			this->btnAdd16->TabIndex = 35;
			this->btnAdd16->Text = L"+";
			this->btnAdd16->UseVisualStyleBackColor = true;
			this->btnAdd16->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd16_Click);
			// 
			// btnAdd18
			// 
			this->btnAdd18->Location = System::Drawing::Point(470, 49);
			this->btnAdd18->Name = L"btnAdd18";
			this->btnAdd18->Size = System::Drawing::Size(49, 23);
			this->btnAdd18->TabIndex = 39;
			this->btnAdd18->Text = L"+";
			this->btnAdd18->UseVisualStyleBackColor = true;
			this->btnAdd18->Click += gcnew System::EventHandler(this, &onePlayer::btnAdd18_Click);
			// 
			// btnSub18
			// 
			this->btnSub18->Location = System::Drawing::Point(470, 82);
			this->btnSub18->Name = L"btnSub18";
			this->btnSub18->Size = System::Drawing::Size(49, 23);
			this->btnSub18->TabIndex = 38;
			this->btnSub18->Text = L"-";
			this->btnSub18->UseVisualStyleBackColor = true;
			this->btnSub18->Click += gcnew System::EventHandler(this, &onePlayer::btnSub18_Click);
			// 
			// txtBoxBackTotal
			// 
			this->txtBoxBackTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBoxBackTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->txtBoxBackTotal->Location = System::Drawing::Point(528, 6);
			this->txtBoxBackTotal->MaxLength = 1;
			this->txtBoxBackTotal->Multiline = true;
			this->txtBoxBackTotal->Name = L"txtBoxBackTotal";
			this->txtBoxBackTotal->ReadOnly = true;
			this->txtBoxBackTotal->Size = System::Drawing::Size(38, 34);
			this->txtBoxBackTotal->TabIndex = 48;
			this->txtBoxBackTotal->Text = L"0";
			this->txtBoxBackTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBoxFullRound
			// 
			this->txtBoxFullRound->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxFullRound->Location = System::Drawing::Point(44, 81);
			this->txtBoxFullRound->Multiline = true;
			this->txtBoxFullRound->Name = L"txtBoxFullRound";
			this->txtBoxFullRound->ReadOnly = true;
			this->txtBoxFullRound->Size = System::Drawing::Size(75, 32);
			this->txtBoxFullRound->TabIndex = 24;
			this->txtBoxFullRound->Text = L"0";
			this->txtBoxFullRound->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(59, 56);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(49, 22);
			this->label21->TabIndex = 25;
			this->label21->Text = L"Total";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::ForestGreen;
			this->panel1->Controls->Add(this->pnlBtnCancel);
			this->panel1->Controls->Add(this->pnlCancelSave);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->txtPnlSavedRound);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->pnlFrontScore);
			this->panel1->Controls->Add(this->pnlTotalScore);
			this->panel1->Controls->Add(this->pnlBackScore);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(776, 389);
			this->panel1->TabIndex = 26;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &onePlayer::panel1_Paint);
			// 
			// pnlBtnCancel
			// 
			this->pnlBtnCancel->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlBtnCancel->Location = System::Drawing::Point(431, 300);
			this->pnlBtnCancel->Name = L"pnlBtnCancel";
			this->pnlBtnCancel->Size = System::Drawing::Size(75, 34);
			this->pnlBtnCancel->TabIndex = 9;
			this->pnlBtnCancel->Text = L"Cancel";
			this->pnlBtnCancel->UseVisualStyleBackColor = true;
			this->pnlBtnCancel->Click += gcnew System::EventHandler(this, &onePlayer::pnlBtnCancel_Click);
			// 
			// pnlCancelSave
			// 
			this->pnlCancelSave->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlCancelSave->Location = System::Drawing::Point(307, 300);
			this->pnlCancelSave->Name = L"pnlCancelSave";
			this->pnlCancelSave->Size = System::Drawing::Size(75, 34);
			this->pnlCancelSave->TabIndex = 8;
			this->pnlCancelSave->Text = L"Save";
			this->pnlCancelSave->UseVisualStyleBackColor = true;
			this->pnlCancelSave->Click += gcnew System::EventHandler(this, &onePlayer::pnlCancelSave_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Cambria", 18));
			this->label25->Location = System::Drawing::Point(292, 235);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(64, 28);
			this->label25->TabIndex = 7;
			this->label25->Text = L"Total";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Cambria", 18));
			this->label24->Location = System::Drawing::Point(257, 176);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(126, 28);
			this->label24->TabIndex = 6;
			this->label24->Text = L"Back Score";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Cambria", 18));
			this->label23->Location = System::Drawing::Point(257, 117);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(132, 28);
			this->label23->TabIndex = 5;
			this->label23->Text = L"Front Score";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtPnlSavedRound
			// 
			this->txtPnlSavedRound->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPnlSavedRound->Location = System::Drawing::Point(324, 55);
			this->txtPnlSavedRound->MaxLength = 15;
			this->txtPnlSavedRound->Multiline = true;
			this->txtPnlSavedRound->Name = L"txtPnlSavedRound";
			this->txtPnlSavedRound->Size = System::Drawing::Size(168, 27);
			this->txtPnlSavedRound->TabIndex = 4;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Cambria", 18));
			this->label22->Location = System::Drawing::Point(307, 12);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(197, 28);
			this->label22->TabIndex = 3;
			this->label22->Text = L"Name Your Round";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlFrontScore
			// 
			this->pnlFrontScore->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->pnlFrontScore->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlFrontScore->Location = System::Drawing::Point(427, 117);
			this->pnlFrontScore->Multiline = true;
			this->pnlFrontScore->Name = L"pnlFrontScore";
			this->pnlFrontScore->ReadOnly = true;
			this->pnlFrontScore->Size = System::Drawing::Size(105, 28);
			this->pnlFrontScore->TabIndex = 2;
			// 
			// pnlTotalScore
			// 
			this->pnlTotalScore->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->pnlTotalScore->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlTotalScore->Location = System::Drawing::Point(427, 235);
			this->pnlTotalScore->Multiline = true;
			this->pnlTotalScore->Name = L"pnlTotalScore";
			this->pnlTotalScore->ReadOnly = true;
			this->pnlTotalScore->Size = System::Drawing::Size(105, 28);
			this->pnlTotalScore->TabIndex = 1;
			// 
			// pnlBackScore
			// 
			this->pnlBackScore->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->pnlBackScore->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pnlBackScore->Location = System::Drawing::Point(427, 174);
			this->pnlBackScore->Multiline = true;
			this->pnlBackScore->Name = L"pnlBackScore";
			this->pnlBackScore->ReadOnly = true;
			this->pnlBackScore->Size = System::Drawing::Size(105, 28);
			this->pnlBackScore->TabIndex = 0;
			// 
			// onePlayer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(776, 389);
			this->ControlBox = false;
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->txtBoxFullRound);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbl1PlayerOne);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"onePlayer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"onePlayer";
			this->Load += gcnew System::EventHandler(this, &onePlayer::onePlayer_Load);
			this->tbl1PlayerOne->ResumeLayout(false);
			this->tbl1PlayerOne->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void onePlayer_Load(System::Object^ sender, System::EventArgs^ e) {
	}


	//Private Data Members
	private:User user;
	private: bool saveRound = false;
	private:bool returnToSetUp = false;
	private:int score;
	private: String^ Round;



	//Public Functions
	public:int getUserScore();
	public:bool getSavedRound();
	public:bool setupDecision();
	public:String^ savedRoundName();
	

		  //FUNCTION TO ADD TEXTBOX

		  System::Windows::Forms::TextBox^ conversionAdd(System::Windows::Forms::TextBox^ txtBox)
		  {
			  /*
			  Takes current textbox as parameter, converts the textbox to int, adds 1 to value
			  converts back to string and returns textbox value to initial textbox
			  */
			  int hole;
			  hole = int::Parse(txtBox->Text);
			  hole = hole + 1;
			  if (hole < 10 && hole >= 0)
				  txtBox->Text = System::Convert::ToString(hole);
			  return txtBox;
		  }

		  //FUNCTION TO SUBTRACT TEXTBOX
		  System::Windows::Forms::TextBox^ conversionSub(System::Windows::Forms::TextBox^ txtBox)
		  {
			  /*
			  Takes current textbox as parameter, converts the textbox to int, subtracts 1 to value
			  converts back to string and returns textbox value to initial textbox
			  */
			  int hole;
			  hole = int::Parse(txtBox->Text);
			  hole = hole - 1;
			  if (hole < 10 && hole >= 0)
				  txtBox->Text = System::Convert::ToString(hole);
			  return txtBox;
		  }

		  //FRONT SCORE CHANGE
		  void totalChange() {
			  /*
			  Adds each textBox to the totalRound textBox
			  */

			  int total;
			  total = int::Parse(txtBoxHole1->Text) + int::Parse(txtBoxHole2->Text) +
				  int::Parse(txtBoxHole3->Text) + int::Parse(txtBoxHole4->Text) + int::Parse(txtBoxHole5->Text)
				  + int::Parse(txtBoxHole6->Text) + int::Parse(txtBoxHole7->Text) + int::Parse(txtBoxHole8->Text)
				  + int::Parse(txtBoxHole9->Text);

			  txtBoxFrontTot->Text = System::Convert::ToString(total);
			  pnlFrontScore->Text = System::Convert::ToString(total);

			  fullRound();
		  }

		  //BACK SCORE CHANGE
		  void totalChangeBack() {
			  /*
			  Adds each textbox on the back 9 to the back9TextBox
			  */
			  int total;
			  total = int::Parse(txtBoxHole10->Text) + int::Parse(txtBoxHole11->Text) +
				  int::Parse(txtBoxHole12->Text) + int::Parse(txtBoxHole13->Text) + int::Parse(txtBoxHole14->Text)
				  + int::Parse(txtBoxHole15->Text) + int::Parse(txtBoxHole16->Text) + int::Parse(txtBoxHole18->Text)
				  + int::Parse(txtBoxHole17->Text);

			  txtBoxBackTotal->Text = System::Convert::ToString(total);
			  pnlBackScore->Text = System::Convert::ToString(total);
			  fullRound();

		  }



		  //TOTAL CHANGE 
		  void fullRound() {
			  /*
			  Adds every textbox to the full round text
			  */
			  int total;

			  total = int::Parse(txtBoxHole1->Text) + int::Parse(txtBoxHole2->Text) +
				  int::Parse(txtBoxHole3->Text) + int::Parse(txtBoxHole4->Text) + int::Parse(txtBoxHole5->Text)
				  + int::Parse(txtBoxHole6->Text) + int::Parse(txtBoxHole7->Text) + int::Parse(txtBoxHole8->Text)
				  + int::Parse(txtBoxHole9->Text) + int::Parse(txtBoxHole10->Text) + int::Parse(txtBoxHole11->Text) +
				  int::Parse(txtBoxHole12->Text) + int::Parse(txtBoxHole13->Text) + int::Parse(txtBoxHole14->Text)
				  + int::Parse(txtBoxHole15->Text) + int::Parse(txtBoxHole16->Text) + int::Parse(txtBoxHole18->Text)
				  + int::Parse(txtBoxHole17->Text);

			  txtBoxFullRound->Text = System::Convert::ToString(total);
			  pnlTotalScore->Text = System::Convert::ToString(total);

		  }



	/*
	These are the buttons for every hole. Each hole has two, addition and subtraction.
	Addition calls on conversionAdd function
	Subtraction calls on conversionSub function
	Those functions then update the textbox's
	*/

	private: System::Void btnAdd1_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole1 = conversionAdd(txtBoxHole1);
		totalChange();
	}
	private: System::Void btnSub1_Click(System::Object^ sender, System::EventArgs^ e) {

		txtBoxHole1 = conversionSub(txtBoxHole1);
		totalChange();
	}
	private: System::Void btnAdd2_Click(System::Object^ sender, System::EventArgs^ e) {

		txtBoxHole2 = conversionAdd(txtBoxHole2);
		totalChange();
	}
	private: System::Void btnSub2_Click(System::Object^ sender, System::EventArgs^ e) {

		txtBoxHole2 = conversionSub(txtBoxHole2);
		totalChange();
	}
	private: System::Void btnAdd3_Click(System::Object^ sender, System::EventArgs^ e) {

		txtBoxHole3 = conversionAdd(txtBoxHole3);
		totalChange();
	}
	private: System::Void btnSub3_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole3 = conversionSub(txtBoxHole3);
		totalChange();
	}
	private: System::Void btnAdd4_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole4 = conversionAdd(txtBoxHole4);
		totalChange();
	}
	private: System::Void btnSub4_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole4 = conversionSub(txtBoxHole4);
		totalChange();
	}
	private: System::Void btnAdd5_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole5 = conversionAdd(txtBoxHole5);
		totalChange();
	}
	private: System::Void btnSub5_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole5 = conversionSub(txtBoxHole5);
		totalChange();
	}
	private: System::Void btnAdd6_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole6 = conversionAdd(txtBoxHole6);
		totalChange();
	}
	private: System::Void btnSub6_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole6 = conversionSub(txtBoxHole6);
		totalChange();
	}
	private: System::Void btnAdd7_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole7 = conversionAdd(txtBoxHole7);
		totalChange();
	}
	private: System::Void btnSub7_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole7 = conversionSub(txtBoxHole7);
		totalChange();
	}
	private: System::Void btnAdd8_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole8 = conversionAdd(txtBoxHole8);
		totalChange();
	}
	private: System::Void btnSub8_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole8 = conversionSub(txtBoxHole8);
		totalChange();
	}
	private: System::Void btnAdd9_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole9 = conversionAdd(txtBoxHole9);
		totalChange();
	}
	private: System::Void btnSub0_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole9 = conversionSub(txtBoxHole9);
		totalChange();
	}
	private: System::Void btnAdd10_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole10 = conversionAdd(txtBoxHole10);
		totalChangeBack();
	}
	private: System::Void btnSub10_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole10 = conversionSub(txtBoxHole10);
		totalChangeBack();
	}
	private: System::Void btnAdd11_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole11 = conversionAdd(txtBoxHole11);
		totalChangeBack();
	}
	private: System::Void btnSub11_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole12 = conversionAdd(txtBoxHole12);
		totalChangeBack();
	}
	private: System::Void btnAdd12_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole12 = conversionAdd(txtBoxHole12);
		totalChangeBack();
	}
	private: System::Void btnSub12_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole12 = conversionSub(txtBoxHole12);
		totalChangeBack();
	}
	private: System::Void btnAdd13_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole13 = conversionAdd(txtBoxHole13);
		totalChangeBack();
	}
	private: System::Void btnSub13_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole13 = conversionSub(txtBoxHole13);
		totalChangeBack();
	}
	private: System::Void btnAdd14_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole14 = conversionAdd(txtBoxHole14);
		totalChangeBack();
	}
	private: System::Void btnSub14_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole14 = conversionSub(txtBoxHole14);
		totalChangeBack();
	}
	private: System::Void btnAdd15_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole15 = conversionAdd(txtBoxHole15);
		totalChangeBack();
	}
	private: System::Void btnSub15_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole15 = conversionSub(txtBoxHole15);
		totalChangeBack();
	}
	private: System::Void btnAdd16_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole16 = conversionAdd(txtBoxHole16);
		totalChangeBack();
	}
	private: System::Void btnSub16_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole16 = conversionSub(txtBoxHole16);
		totalChangeBack();
	}
	private: System::Void btnAdd17_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole17 = conversionAdd(txtBoxHole17);
		totalChangeBack();
	}
	private: System::Void btnSub17_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole17 = conversionSub(txtBoxHole17);
		totalChangeBack();
	}
	private: System::Void btnAdd18_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole18 = conversionAdd(txtBoxHole18);
		totalChangeBack();
	}
	private: System::Void btnSub18_Click(System::Object^ sender, System::EventArgs^ e) {
		txtBoxHole18 = conversionSub(txtBoxHole18);
		totalChangeBack();
	}



	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		user.setScore(int::Parse(txtBoxFullRound->Text));
		panel1->Show();

	}


	//Clear Button
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) { //User resets onePlayerForm
		//Every text box is set to 0
		txtBoxFrontTot->Text = "0";
		txtBoxBackTotal->Text = "0";
		txtBoxFullRound->Text = "0";
		txtBoxHole1->Text = "0";
		txtBoxHole2->Text = "0";
		txtBoxHole3->Text = "0";
		txtBoxHole4->Text = "0";
		txtBoxHole5->Text = "0";
		txtBoxHole6->Text = "0";
		txtBoxHole7->Text = "0";
		txtBoxHole8->Text = "0";
		txtBoxHole9->Text = "0";
		txtBoxHole10->Text = "0";
		txtBoxHole11->Text = "0";
		txtBoxHole1->Text = "0";
		txtBoxHole12->Text = "0";
		txtBoxHole13->Text = "0";
		txtBoxHole14->Text = "0";
		txtBoxHole15->Text = "0";
		txtBoxHole16->Text = "0";
		txtBoxHole17->Text = "0";
		txtBoxHole18->Text = "0";
	}

private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) { //User wants to return to setupForm
	returnToSetUp = true;//set to true
	this->Close(); //closes onePlayerForm
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pnlBtnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Hide(); //User does not want to save the round, hits "Cancel" within panel
}
private: System::Void pnlCancelSave_Click(System::Object^ sender, System::EventArgs^ e) {
	saveRound = true; //user wants to save round to database
	Round = txtPnlSavedRound->Text; //name of the save dround
	this->Close(); //closes onePlayer form

}
};
}








