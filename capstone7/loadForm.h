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
			btnClose->Hide();
			//
			//TODO: Add the constructor code here
			//
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
	private: System::Windows::Forms::Button^ btnLoad;
	private: System::Windows::Forms::TextBox^ txtBoxLoad;
	private: System::Windows::Forms::Button^ btnClose;
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
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->txtBoxLoad = (gcnew System::Windows::Forms::TextBox());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnLoad
			// 
			this->btnLoad->Location = System::Drawing::Point(228, 309);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(158, 62);
			this->btnLoad->TabIndex = 0;
			this->btnLoad->Text = L"Load";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &loadForm::btnLoad_Click);
			// 
			// txtBoxLoad
			// 
			this->txtBoxLoad->Location = System::Drawing::Point(166, 96);
			this->txtBoxLoad->Multiline = true;
			this->txtBoxLoad->Name = L"txtBoxLoad";
			this->txtBoxLoad->Size = System::Drawing::Size(298, 115);
			this->txtBoxLoad->TabIndex = 1;
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(228, 309);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(158, 62);
			this->btnClose->TabIndex = 2;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &loadForm::btnClose_Click);
			// 
			// loadForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 388);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->txtBoxLoad);
			this->Controls->Add(this->btnLoad);
			this->Name = L"loadForm";
			this->Text = L"loadForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLoad_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ filename = "data.txt";
		try {
			StreamReader^ rf = File::OpenText(filename);
			String^ tmp;
			String^ newLine = "                    ";

			while ((tmp = rf->ReadLine()) != nullptr) {

				txtBoxLoad->Text = txtBoxLoad->Text + tmp + "\r\n";

			}
			btnLoad->Hide();
			btnClose->Show();
			
		}
		

		catch (Exception^ e)
		{
			Application::Exit();
		}

	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
