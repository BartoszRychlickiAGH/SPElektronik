#pragma once

namespace testGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for EditDevice
	/// </summary>
	public ref class EditDevice : public System::Windows::Forms::Form
	{
	public:
		DataGridViewRow^ row;
		EditDevice(DataGridViewRow^ row)
		{
			InitializeComponent();
			this->row = row;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~EditDevice()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ tbQuantity;
	private: System::Windows::Forms::RichTextBox^ tbCategory;
	protected:

	protected:

	protected:

	private: System::Windows::Forms::RichTextBox^ tbModel;
	private: System::Windows::Forms::RichTextBox^ tbName;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnOK;

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
			this->tbQuantity = (gcnew System::Windows::Forms::RichTextBox());
			this->tbCategory = (gcnew System::Windows::Forms::RichTextBox());
			this->tbModel = (gcnew System::Windows::Forms::RichTextBox());
			this->tbName = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbQuantity
			// 
			this->tbQuantity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbQuantity->Location = System::Drawing::Point(184, 322);
			this->tbQuantity->Name = L"tbQuantity";
			this->tbQuantity->Size = System::Drawing::Size(424, 46);
			this->tbQuantity->TabIndex = 23;
			this->tbQuantity->Text = L"";
			// 
			// tbCategory
			// 
			this->tbCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbCategory->Location = System::Drawing::Point(184, 256);
			this->tbCategory->Name = L"tbCategory";
			this->tbCategory->Size = System::Drawing::Size(424, 46);
			this->tbCategory->TabIndex = 22;
			this->tbCategory->Text = L"";
			// 
			// tbModel
			// 
			this->tbModel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbModel->Location = System::Drawing::Point(184, 187);
			this->tbModel->Name = L"tbModel";
			this->tbModel->Size = System::Drawing::Size(424, 46);
			this->tbModel->TabIndex = 21;
			this->tbModel->Text = L"";
			// 
			// tbName
			// 
			this->tbName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbName->Location = System::Drawing::Point(184, 122);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(424, 46);
			this->tbName->TabIndex = 20;
			this->tbName->Text = L"";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(15, 322);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 46);
			this->label5->TabIndex = 19;
			this->label5->Text = L"Quantity:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(15, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 46);
			this->label4->TabIndex = 18;
			this->label4->Text = L"Model:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(15, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 46);
			this->label3->TabIndex = 17;
			this->label3->Text = L"Category:";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(7, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(617, 91);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Edit Device";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(14, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 46);
			this->label1->TabIndex = 15;
			this->label1->Text = L"Name:";
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExit->Location = System::Drawing::Point(427, 388);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(181, 70);
			this->btnExit->TabIndex = 14;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &EditDevice::btnExit_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnClear->Location = System::Drawing::Point(220, 388);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(181, 70);
			this->btnClear->TabIndex = 13;
			this->btnClear->Text = L"CLEAR";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &EditDevice::btnClear_Click);
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOK->Location = System::Drawing::Point(14, 388);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(181, 70);
			this->btnOK->TabIndex = 12;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &EditDevice::btnOK_Click);
			// 
			// EditDevice
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(636, 480);
			this->Controls->Add(this->tbQuantity);
			this->Controls->Add(this->tbCategory);
			this->Controls->Add(this->tbModel);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnOK);
			this->Name = L"EditDevice";
			this->Text = L"Edit Device";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close ();
	}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	tbName->Text = "";
	tbModel->Text = "";
	tbQuantity->Text = "";
	tbCategory->Text = "";
}
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	int^ DeviceId{};
	String^ query;
	String^ strConn = "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False";
	SqlConnection conn{ strConn };
	conn.Open();


	for each (DataGridViewCell ^ cell in row->Cells) {

		if (cell->OwningColumn->Name == "Device Id") {
			DeviceId = Convert::ToInt32(cell->Value);
			break;
		}
	}

	if (tbName->Text != "") {
		query = "UPDATE Devices SET DeviceName = @name WHERE DeviceId = @Id";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@name", tbName->Text);
		cmd.Parameters->AddWithValue("@Id", DeviceId);

		cmd.ExecuteNonQuery();
	}
	if (tbModel->Text != "") {
		query = "UPDATE Devices SET DeviceModel = @model WHERE DeviceId = @Id";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@model", tbModel->Text);
		cmd.Parameters->AddWithValue("@Id", DeviceId);

		cmd.ExecuteNonQuery();
	}
	if (tbCategory->Text != "") {
		query = "UPDATE Devices SET DeviceCategory = @category WHERE DeviceId = @Id";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@category", tbCategory->Text);
		cmd.Parameters->AddWithValue("@Id", DeviceId);

		cmd.ExecuteNonQuery();
	}
	if (tbQuantity->Text != "") {
		query = "UPDATE Devices SET Quantity = @quantity WHERE DeviceId = @Id";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@quantity", Convert::ToInt32(tbQuantity->Text));
		cmd.Parameters->AddWithValue("@Id", DeviceId);

		cmd.ExecuteNonQuery();
	}

	conn.Close();
	this->Close();
}
};
}
