/*
Andrew Crandall
7/22/2022
Title: Load From
Summary: Form for user to view their previous rounds of golf
*/

#pragma once

namespace capstone7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for loadForm
	/// </summary>
	public ref class loadForm : public System::Windows::Forms::Form
	{
	public:
		loadForm(void)
		{
			InitializeComponent();
			//btnClose->Hide();
			//txtBoxLoad->Hide();

			txtBoxLoad->Text = getData(); //text is set to the getData Function
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loadForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^ txtBoxLoad;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Label^ label1;
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
			this->txtBoxLoad = (gcnew System::Windows::Forms::TextBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtBoxLoad
			// 
			this->txtBoxLoad->BackColor = System::Drawing::Color::WhiteSmoke;
			this->txtBoxLoad->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBoxLoad->Location = System::Drawing::Point(153, 91);
			this->txtBoxLoad->Multiline = true;
			this->txtBoxLoad->Name = L"txtBoxLoad";
			this->txtBoxLoad->ReadOnly = true;
			this->txtBoxLoad->Size = System::Drawing::Size(328, 184);
			this->txtBoxLoad->TabIndex = 1;
			this->txtBoxLoad->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Cambria", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::Color::Black;
			this->btnClose->Location = System::Drawing::Point(229, 299);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Padding = System::Windows::Forms::Padding(5);
			this->btnClose->Size = System::Drawing::Size(158, 62);
			this->btnClose->TabIndex = 2;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &loadForm::btnClose_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::ForestGreen;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(174, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(285, 43);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Previous Rounds";
			// 
			// loadForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(611, 388);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->txtBoxLoad);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"loadForm";
			this->Padding = System::Windows::Forms::Padding(10);
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"loadForm";
			this->Load += gcnew System::EventHandler(this, &loadForm::loadForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: String^ getData();

		//user wants to exit the application
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); //closes the form
	}
private: System::Void loadForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
