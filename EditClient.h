#pragma once
#include "includings.h"

namespace testGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for EditClient
	/// </summary>
	public ref class EditClient : public System::Windows::Forms::Form
	{
	public:
		DataGridViewRow^ row;
		EditClient(DataGridViewRow^ row)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->row = row;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ tbEmail;
	protected:

	private: System::Windows::Forms::RichTextBox^ tbPhone;
	protected:

	private: System::Windows::Forms::RichTextBox^ tbSurname;

	private: System::Windows::Forms::RichTextBox^ tbName;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::RichTextBox^ tbAdress;

	private: System::Windows::Forms::Label^ label6;

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
			this->tbEmail = (gcnew System::Windows::Forms::RichTextBox());
			this->tbPhone = (gcnew System::Windows::Forms::RichTextBox());
			this->tbSurname = (gcnew System::Windows::Forms::RichTextBox());
			this->tbName = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->tbAdress = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbEmail->Location = System::Drawing::Point(210, 317);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(424, 46);
			this->tbEmail->TabIndex = 23;
			this->tbEmail->Text = L"";
			// 
			// tbPhone
			// 
			this->tbPhone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPhone->Location = System::Drawing::Point(210, 249);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(424, 46);
			this->tbPhone->TabIndex = 22;
			this->tbPhone->Text = L"";
			// 
			// tbSurname
			// 
			this->tbSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbSurname->Location = System::Drawing::Point(210, 180);
			this->tbSurname->Name = L"tbSurname";
			this->tbSurname->Size = System::Drawing::Size(424, 46);
			this->tbSurname->TabIndex = 21;
			this->tbSurname->Text = L"";
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbName->Location = System::Drawing::Point(210, 115);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(424, 46);
			this->tbName->TabIndex = 20;
			this->tbName->Text = L"";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(41, 317);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 46);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Email:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(41, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 46);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Surname:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(41, 249);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 46);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Phone:";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(40, 37);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(559, 56);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Edit Client";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(40, 115);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 46);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Name:";
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExit->Location = System::Drawing::Point(440, 462);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(181, 70);
			this->btnExit->TabIndex = 14;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &EditClient::btnExit_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnClear->Location = System::Drawing::Point(233, 462);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(181, 70);
			this->btnClear->TabIndex = 13;
			this->btnClear->Text = L"CLEAR";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &EditClient::btnClear_Click);
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOK->Location = System::Drawing::Point(27, 462);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(181, 70);
			this->btnOK->TabIndex = 12;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &EditClient::btnOK_Click);
			// 
			// tbAdress
			// 
			this->tbAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbAdress->Location = System::Drawing::Point(212, 385);
			this->tbAdress->Name = L"tbAdress";
			this->tbAdress->Size = System::Drawing::Size(424, 46);
			this->tbAdress->TabIndex = 25;
			this->tbAdress->Text = L"";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(43, 385);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(180, 46);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Adress:";
			// 
			// EditClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 553);
			this->Controls->Add(this->tbAdress);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->tbSurname);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnOK);
			this->Name = L"EditClient";
			this->Text = L"Edit Client";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	tbName->Text = "";
	tbSurname->Text = "";
	tbPhone->Text = "";
	tbEmail->Text = "";
	tbAdress->Text = "";
}
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	int^ ClientId{};
	String^ query;
	String^ strConn = "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False";
	SqlConnection conn{ strConn };
	conn.Open();


	for each (DataGridViewCell ^ cell in row->Cells) {

		if (cell->OwningColumn->Name == "Client ID") {
			ClientId = Convert::ToInt32(cell->Value);
			break;
		}
	}
	if (tbPhone->Text != "") {
		string check{ msclr::interop::marshal_as<string>(tbPhone->Text) };


		if (!regex_match(check, regex("[0-9]{9}"))) {
			MessageBox::Show("Given phone number is not a number!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	if (tbName->Text != "") {
		query = "UPDATE Clients SET ClientName = @name WHERE ClientId = @Id";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@name", tbName->Text);
		cmd.Parameters->AddWithValue("@Id", ClientId);

		cmd.ExecuteNonQuery();
	}
	if (tbSurname->Text != "") {
		query = "UPDATE Clients SET ClientSurname= @surname WHERE ClientId = @Id";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@surname", tbSurname->Text);
		cmd.Parameters->AddWithValue("@Id", ClientId);

		cmd.ExecuteNonQuery();
	}
	if (tbPhone->Text != "") {
		query = "UPDATE Clients SET ClientPhone = @phone WHERE ClientId = @Id";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@phone", Convert::ToInt32(tbPhone->Text));
		cmd.Parameters->AddWithValue("@Id", ClientId);

		cmd.ExecuteNonQuery();
	}
	if (tbEmail->Text != "") {
		query = "UPDATE Clients SET ClientEmail = @email WHERE ClientId = @Id";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@email",tbEmail->Text);
		cmd.Parameters->AddWithValue("@Id", ClientId);

		cmd.ExecuteNonQuery();
	}
	if (tbAdress->Text != "") {
		query = "UPDATE Clients SET ClientAdress = @adress WHERE ClientId = @Id";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@adress", tbAdress->Text);
		cmd.Parameters->AddWithValue("@Id", ClientId);

		cmd.ExecuteNonQuery();
	}

	conn.Close();
	this->Close();
}
};
}
