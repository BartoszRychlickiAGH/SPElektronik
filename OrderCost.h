#pragma once
#include "includings.h"
namespace testGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OrderCost
	/// </summary>
	public ref class OrderCost : public System::Windows::Forms::Form
	{
	public:
		OrderCost(void)
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
		~OrderCost()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ tbCost;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnExit;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbCost = (gcnew System::Windows::Forms::RichTextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(406, 91);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter order cost:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbCost
			// 
			this->tbCost->Location = System::Drawing::Point(20, 112);
			this->tbCost->Name = L"tbCost";
			this->tbCost->Size = System::Drawing::Size(398, 51);
			this->tbCost->TabIndex = 1;
			this->tbCost->Text = L"";
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOK->Location = System::Drawing::Point(20, 169);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(179, 75);
			this->btnOK->TabIndex = 2;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &OrderCost::btnOK_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExit->Location = System::Drawing::Point(239, 169);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(179, 75);
			this->btnExit->TabIndex = 3;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &OrderCost::btnExit_Click);
			// 
			// OrderCost
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(430, 256);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbCost);
			this->Controls->Add(this->label1);
			this->Name = L"OrderCost";
			this->Text = L"Order Cost";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: static float^ cost{0.0f};
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		if (tbCost->Text == "") {
			MessageBox::Show("Please enter the cost", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	{
		string check{ msclr::interop::marshal_as<string>(tbCost->Text) };
		if (!regex_match(check, regex("[0-9]+\.[0-9]{2}$"))) {
			MessageBox::Show("Please enter the cost in format: 0.00", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	cost = Convert::ToSingle(tbCost->Text);
	this->Close();
}
};
}
