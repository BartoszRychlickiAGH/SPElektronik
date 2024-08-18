#pragma once

#include "classes.h"
#include "includings.h"
#include "newOrderForm.cpp"
#include <msclr/marshal_cppstd.h>
#include <cmath>

namespace testGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for newOredrForm
	/// </summary>
	public ref class newOrderForm : public System::Windows::Forms::Form
	{
	public:
		newOrderForm(void)
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
		~newOrderForm()
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;







	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::RichTextBox^ tbErrorDescription;
	private: System::Windows::Forms::Label^ label8;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RichTextBox^ tbClientName;
	private: System::Windows::Forms::RichTextBox^ tbClientSurname;
	private: System::Windows::Forms::RichTextBox^ tbDeviceName;
	private: System::Windows::Forms::RichTextBox^ tbDeviceModel;
	private: System::Windows::Forms::RichTextBox^ tbPhoneNumber;
	private: System::Windows::Forms::RichTextBox^ tbEmail;
	private: System::Windows::Forms::RichTextBox^ tbEmployeeId;
	private: System::Windows::Forms::RichTextBox^ tbCategory;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::RichTextBox^ tbCLientAdress;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::RichTextBox^ tbPrice;
	private: System::Windows::Forms::Label^ label12;







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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->tbErrorDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbClientName = (gcnew System::Windows::Forms::RichTextBox());
			this->tbClientSurname = (gcnew System::Windows::Forms::RichTextBox());
			this->tbDeviceName = (gcnew System::Windows::Forms::RichTextBox());
			this->tbDeviceModel = (gcnew System::Windows::Forms::RichTextBox());
			this->tbPhoneNumber = (gcnew System::Windows::Forms::RichTextBox());
			this->tbEmail = (gcnew System::Windows::Forms::RichTextBox());
			this->tbEmployeeId = (gcnew System::Windows::Forms::RichTextBox());
			this->tbCategory = (gcnew System::Windows::Forms::RichTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbCLientAdress = (gcnew System::Windows::Forms::RichTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbPrice = (gcnew System::Windows::Forms::RichTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1103, 74);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Make New Order";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(19, 105);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 50);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Client Name:";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(19, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(240, 50);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Client Surname:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(19, 205);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(240, 50);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Device Name:";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(19, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 46);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Device model:";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(19, 465);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(288, 50);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Error description:";
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(19, 515);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(240, 50);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Employee  ID:";
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOK->Location = System::Drawing::Point(79, 692);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(180, 71);
			this->btnOK->TabIndex = 13;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &newOrderForm::btnOK_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnClear->Location = System::Drawing::Point(390, 692);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(180, 71);
			this->btnClear->TabIndex = 14;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &newOrderForm::btnClear_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExit->Location = System::Drawing::Point(663, 692);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(180, 71);
			this->btnExit->TabIndex = 15;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &newOrderForm::btnExit_Click);
			// 
			// tbErrorDescription
			// 
			this->tbErrorDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->tbErrorDescription->Location = System::Drawing::Point(286, 465);
			this->tbErrorDescription->Name = L"tbErrorDescription";
			this->tbErrorDescription->Size = System::Drawing::Size(612, 44);
			this->tbErrorDescription->TabIndex = 16;
			this->tbErrorDescription->Text = L"";
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(19, 301);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(261, 46);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Phone Number:";
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(19, 347);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(227, 37);
			this->label9->TabIndex = 19;
			this->label9->Text = L"E-mail:";
			// 
			// tbClientName
			// 
			this->tbClientName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbClientName->Location = System::Drawing::Point(286, 105);
			this->tbClientName->Name = L"tbClientName";
			this->tbClientName->Size = System::Drawing::Size(612, 44);
			this->tbClientName->TabIndex = 20;
			this->tbClientName->Text = L"";
			// 
			// tbClientSurname
			// 
			this->tbClientSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbClientSurname->Location = System::Drawing::Point(286, 155);
			this->tbClientSurname->Name = L"tbClientSurname";
			this->tbClientSurname->Size = System::Drawing::Size(612, 44);
			this->tbClientSurname->TabIndex = 21;
			this->tbClientSurname->Text = L"";
			// 
			// tbDeviceName
			// 
			this->tbDeviceName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbDeviceName->Location = System::Drawing::Point(286, 205);
			this->tbDeviceName->Name = L"tbDeviceName";
			this->tbDeviceName->Size = System::Drawing::Size(612, 44);
			this->tbDeviceName->TabIndex = 22;
			this->tbDeviceName->Text = L"";
			// 
			// tbDeviceModel
			// 
			this->tbDeviceModel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbDeviceModel->Location = System::Drawing::Point(286, 255);
			this->tbDeviceModel->Name = L"tbDeviceModel";
			this->tbDeviceModel->Size = System::Drawing::Size(612, 44);
			this->tbDeviceModel->TabIndex = 23;
			this->tbDeviceModel->Text = L"";
			// 
			// tbPhoneNumber
			// 
			this->tbPhoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPhoneNumber->Location = System::Drawing::Point(286, 301);
			this->tbPhoneNumber->Name = L"tbPhoneNumber";
			this->tbPhoneNumber->Size = System::Drawing::Size(612, 44);
			this->tbPhoneNumber->TabIndex = 24;
			this->tbPhoneNumber->Text = L"";
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbEmail->Location = System::Drawing::Point(286, 347);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(612, 44);
			this->tbEmail->TabIndex = 25;
			this->tbEmail->Text = L"";
			// 
			// tbEmployeeId
			// 
			this->tbEmployeeId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbEmployeeId->Location = System::Drawing::Point(286, 515);
			this->tbEmployeeId->Name = L"tbEmployeeId";
			this->tbEmployeeId->Size = System::Drawing::Size(612, 44);
			this->tbEmployeeId->TabIndex = 26;
			this->tbEmployeeId->Text = L"";
			// 
			// tbCategory
			// 
			this->tbCategory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbCategory->Location = System::Drawing::Point(286, 565);
			this->tbCategory->Name = L"tbCategory";
			this->tbCategory->Size = System::Drawing::Size(612, 44);
			this->tbCategory->TabIndex = 28;
			this->tbCategory->Text = L"";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(19, 565);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(240, 50);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Category:";
			// 
			// tbCLientAdress
			// 
			this->tbCLientAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbCLientAdress->Location = System::Drawing::Point(286, 403);
			this->tbCLientAdress->Name = L"tbCLientAdress";
			this->tbCLientAdress->Size = System::Drawing::Size(612, 44);
			this->tbCLientAdress->TabIndex = 30;
			this->tbCLientAdress->Text = L"";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(12, 406);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(288, 50);
			this->label11->TabIndex = 29;
			this->label11->Text = L"Client Adress:";
			// 
			// tbPrice
			// 
			this->tbPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPrice->Location = System::Drawing::Point(286, 624);
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(612, 44);
			this->tbPrice->TabIndex = 32;
			this->tbPrice->Text = L"";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(19, 624);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(240, 50);
			this->label12->TabIndex = 31;
			this->label12->Text = L"Price";
			// 
			// newOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(951, 775);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->tbCLientAdress);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->tbCategory);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->tbEmployeeId);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->tbPhoneNumber);
			this->Controls->Add(this->tbDeviceModel);
			this->Controls->Add(this->tbDeviceName);
			this->Controls->Add(this->tbClientSurname);
			this->Controls->Add(this->tbClientName);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->tbErrorDescription);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"newOrderForm";
			this->Text = L"New Order";
			this->ResumeLayout(false);

		}
#pragma endregion
	

//ok button
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//get data from textboxes
	String^ clientName = tbClientName->Text;
	String^ clientSurname = tbClientSurname->Text;
	String^ deviceName = tbDeviceName->Text;
	String^ deviceModel = tbDeviceModel->Text;
	String^ errorDescription = tbErrorDescription->Text;
	String^ employeeStringID = tbEmployeeId->Text;
	String^ phoneNumber = tbPhoneNumber->Text;
	String^ email = tbEmail->Text;
	String^ category = tbCategory->Text;
	String^ clientAdress = tbCLientAdress->Text;
	String^ priceStr = tbPrice->Text;
	String^ query;

	int^ clientId{};
	int employeeId{};
	int deviceId{};
	
	double price{};
	//check if all textboxes are filled
	//check if name,surname,device name, device model are text type variabels
	//check if phonenumber is integer of length 9 digits
	//check if email is email type -> +[@]+[.]+ (regex)

	if (clientName == "" || clientSurname == "" || deviceName == "" || deviceModel == "" || errorDescription == "" ||
		employeeStringID == "" || phoneNumber == "" || email == "" || category == "" || clientAdress == "") {
		
		MessageBox::Show("Please fill all textboxes", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if(!isText(clientName)) {
		MessageBox::Show("Client name should be text type", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (!isText(clientSurname)) {
		MessageBox::Show("Client surname should be text type", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (!isText(deviceName)) {
		MessageBox::Show("Device name should be text type", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (!isText(errorDescription)) {
		MessageBox::Show("Error description should be text type", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (!isText(category)) {
		MessageBox::Show("Category should be text type", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (!isEmail(email)) {
		MessageBox::Show("Email should be email type", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (isNumber(phoneNumber)) {
		MessageBox::Show("Phone number should be integer", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	
	{	// checking if number is 9 digit length
		string text{ msclr::interop::marshal_as<string>(phoneNumber) };
		if (text.length() != 9) {
			MessageBox::Show("Phone number should be 9 digits", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}

	if (employeeIDExist(employeeStringID)) {
		MessageBox::Show("Employee ID should be integer or does not exist", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	else {
		employeeId = Convert::ToInt32(employeeStringID);
	}

	if (!isMoney(priceStr)) {
		MessageBox::Show("Price should be float type", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	else {
		price = Convert::ToSingle(priceStr);
		price = round(price * 100) / 100;	//rounding to 2 decimal places
	}

	try{
		String^ strConn{"Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False"};
		SqlConnection conn{strConn};
		conn.Open();

		if (clientExist(0, clientName, clientSurname, "")) {


			query =  "SELECT ClientId From CLients Where ClientName = @name AND ClientSurname = @surname AND ClientEmail = @email";

			SqlCommand cmd_get_Id{ query,% conn };
			cmd_get_Id.Parameters->AddWithValue("@name", clientName);
			cmd_get_Id.Parameters->AddWithValue("@surname", clientSurname);
			cmd_get_Id.Parameters->AddWithValue("@email", email);

			SqlDataReader^ reader = cmd_get_Id.ExecuteReader();

			if (reader->Read()) {
				clientId = reader->GetInt32(0);
			}
			
			reader->Close();

		}else{
			query = "INSERT INTO Clients(ClientName,ClientSurname,ClientPhone,ClientEmail,ClientAdress) VALUES(@clientName,@clientSurname,@clientPhone,@clientemail,@clientAdress)";	//insert new client

			SqlCommand cmd_insert_client{ query,% conn };
			cmd_insert_client.Parameters->AddWithValue("@clientName",clientName);
			cmd_insert_client.Parameters->AddWithValue("@clientSurname",clientSurname);
			cmd_insert_client.Parameters->AddWithValue("@clientPhone",phoneNumber);
			cmd_insert_client.Parameters->AddWithValue("@clientEmail",email);
			cmd_insert_client.Parameters->AddWithValue("@clientAdress",clientAdress);

			cmd_insert_client.ExecuteNonQuery();

			query = "SELECT ClientId From Clients Where ClientName = @name AND ClientSurname = @surname AND ClientEmail = @email";
			SqlCommand cmd_get_Id{ query,% conn };
			cmd_get_Id.Parameters->AddWithValue("@name", clientName);
			cmd_get_Id.Parameters->AddWithValue("@surname", clientSurname);
			cmd_get_Id.Parameters->AddWithValue("@email", email);

			SqlDataReader^ reader = cmd_get_Id.ExecuteReader();

				if (reader->Read()) {
					clientId = reader->GetInt32(0);
				}
				reader->Close();

		}

		if (!deviceExist(deviceName, deviceModel)) {
			int quantity{};
			query = "SELECT DeviceId From Devices Where DeviceName = @deviceName AND DeviceModel = @deviceModel";
			SqlCommand cmd_get_deviceId{ query,% conn };
			cmd_get_deviceId.Parameters->AddWithValue("@deviceName", deviceName);
			cmd_get_deviceId.Parameters->AddWithValue("@deviceModel", deviceModel);

			SqlDataReader^ reader = cmd_get_deviceId.ExecuteReader();

			if (reader->Read()) {
				deviceId = reader->GetInt32(0);
			}
			reader->Close();

			//update qunaity of device by 1

			query = "Select Quantity From Devices Where DeviceId = @Id";
			SqlCommand cmd_get_quantity{ query,% conn };
			cmd_get_quantity.Parameters->AddWithValue("@Id", deviceId);
			
			reader = cmd_get_quantity.ExecuteReader();
			
			if (reader->Read()) {
				quantity = reader->GetInt32(0);
			}
			reader->Close();

			query = "UPDATE Devices set Quantity = @quantity WHERE DeviceId = @Id";
			SqlCommand cmd_update_quantity{ query,% conn };
			cmd_update_quantity.Parameters->AddWithValue("@quantity", ++quantity);

			cmd_update_quantity.ExecuteNonQuery();

		}
		else {
			//insert into devices
			// 
			// get device Id

			query = "Insert into Devices(ClientId,DeviceName,DeviceModel,DeviceCategory,Quantity) VALUES(@clientId,@deviceName,@deviceModel,@category,@Quantity)";
			SqlCommand cmd_insert_device{ query,% conn };

			cmd_insert_device.Parameters->AddWithValue("@clientId", clientId);
			cmd_insert_device.Parameters->AddWithValue("@deviceName", deviceName);
			cmd_insert_device.Parameters->AddWithValue("@deviceModel", deviceModel);
			cmd_insert_device.Parameters->AddWithValue("@category", category);
			cmd_insert_device.Parameters->AddWithValue("@Quantity", 1);

			cmd_insert_device.ExecuteNonQuery();

			query = "SELECT DeviceId From Devices Where DeviceName = @deviceName AND DeviceModel = @deviceModel and ClientId = @clientId";
			SqlCommand cmd_get_device_id{query,%conn};
			cmd_get_device_id.Parameters->AddWithValue("@deviceName",deviceName);
			cmd_get_device_id.Parameters->AddWithValue("@deviceModel",deviceModel);
			cmd_get_device_id.Parameters->AddWithValue("@clientId",clientId);

			SqlDataReader^ reader = cmd_get_device_id.ExecuteReader();

				if (reader->Read()) {
					deviceId = reader->GetInt32(0);
				}
				reader->Close();	
		}
		// inserting order
		
		query = "Insert into orders(clientId,EmployeeId,DeviceId,OrderStatus,OrderDate,OrderPrice,Description) VALUES (@clientId,@EmployeeId,@DeviceId,@OrderStatus,@OrderDate,@OrderPrice,@Description)";//insert int orders
		SqlCommand cmd_insert_order{ query,% conn };
		cmd_insert_order.Parameters->AddWithValue("@clientId", clientId);
		cmd_insert_order.Parameters->AddWithValue("@EmployeeId", employeeId);
		cmd_insert_order.Parameters->AddWithValue("@DeviceId", deviceId);
		cmd_insert_order.Parameters->AddWithValue("@OrderStatus", Convert::ToString("In progress"));
		cmd_insert_order.Parameters->AddWithValue("@OrderDate", getData());
		cmd_insert_order.Parameters->AddWithValue("@OrderPrice", price);
		cmd_insert_order.Parameters->AddWithValue("@Description", errorDescription);

		cmd_insert_order.ExecuteNonQuery();

		conn.Close();
	}
	catch (Exception^ en) {
		MessageBox::Show(en->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	this->Close();
}

//clear button
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	tbClientName->Clear();
	tbClientSurname->Clear();
	tbDeviceName->Clear();
	tbErrorDescription->Clear();
	tbErrorDescription->Clear();
	tbEmployeeId->Clear();
	tbPhoneNumber->Clear();
	tbDeviceModel->Clear();
	tbEmail->Clear();
	tbCategory->Clear();
	tbCLientAdress->Clear();
	tbPrice->Clear();
}

//exit button
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
