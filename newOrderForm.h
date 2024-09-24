#pragma once



#include "newOrderForm.cpp"
#include <msclr/marshal_cppstd.h>
#include <cmath>
#include <vector>
#include "OrderCost.h"


namespace testGUI {

	using std::vector;
	/// <summary>
	/// Summary for newOredrForm
	/// </summary>
	public ref class newOrderForm : public System::Windows::Forms::Form
	{
	public:
		int^ realizationMode{0};
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

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::RichTextBox^ tbCLientAdress;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::RichTextBox^ tbPrice;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::RadioButton^ radioStandard;
	private: System::Windows::Forms::RadioButton^ radioExpress;
	private: System::Windows::Forms::RichTextBox^ tbSerialNumber;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::RichTextBox^ tbComments;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::RichTextBox^ tbSymptoms;
	private: System::Windows::Forms::Label^ label16;







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
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbCLientAdress = (gcnew System::Windows::Forms::RichTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbPrice = (gcnew System::Windows::Forms::RichTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->radioStandard = (gcnew System::Windows::Forms::RadioButton());
			this->radioExpress = (gcnew System::Windows::Forms::RadioButton());
			this->tbSerialNumber = (gcnew System::Windows::Forms::RichTextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tbComments = (gcnew System::Windows::Forms::RichTextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tbSymptoms = (gcnew System::Windows::Forms::RichTextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
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
			this->label1->Size = System::Drawing::Size(1485, 74);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Make New Order";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &newOrderForm::label1_Click);
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
			this->btnOK->Location = System::Drawing::Point(497, 826);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(242, 94);
			this->btnOK->TabIndex = 13;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &newOrderForm::btnOK_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnClear->Location = System::Drawing::Point(768, 826);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(242, 94);
			this->btnClear->TabIndex = 14;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &newOrderForm::btnClear_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExit->Location = System::Drawing::Point(1032, 826);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(242, 94);
			this->btnExit->TabIndex = 15;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &newOrderForm::btnExit_Click);
			// 
			// tbErrorDescription
			// 
			this->tbErrorDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->tbErrorDescription->Location = System::Drawing::Point(286, 456);
			this->tbErrorDescription->Name = L"tbErrorDescription";
			this->tbErrorDescription->Size = System::Drawing::Size(1019, 44);
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
			this->tbClientName->Size = System::Drawing::Size(1019, 44);
			this->tbClientName->TabIndex = 20;
			this->tbClientName->Text = L"";
			// 
			// tbClientSurname
			// 
			this->tbClientSurname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbClientSurname->Location = System::Drawing::Point(286, 155);
			this->tbClientSurname->Name = L"tbClientSurname";
			this->tbClientSurname->Size = System::Drawing::Size(1019, 44);
			this->tbClientSurname->TabIndex = 21;
			this->tbClientSurname->Text = L"";
			// 
			// tbDeviceName
			// 
			this->tbDeviceName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbDeviceName->Location = System::Drawing::Point(286, 205);
			this->tbDeviceName->Name = L"tbDeviceName";
			this->tbDeviceName->Size = System::Drawing::Size(1019, 44);
			this->tbDeviceName->TabIndex = 22;
			this->tbDeviceName->Text = L"";
			// 
			// tbDeviceModel
			// 
			this->tbDeviceModel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbDeviceModel->Location = System::Drawing::Point(286, 255);
			this->tbDeviceModel->Name = L"tbDeviceModel";
			this->tbDeviceModel->Size = System::Drawing::Size(1019, 44);
			this->tbDeviceModel->TabIndex = 23;
			this->tbDeviceModel->Text = L"";
			// 
			// tbPhoneNumber
			// 
			this->tbPhoneNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPhoneNumber->Location = System::Drawing::Point(286, 301);
			this->tbPhoneNumber->Name = L"tbPhoneNumber";
			this->tbPhoneNumber->Size = System::Drawing::Size(1019, 44);
			this->tbPhoneNumber->TabIndex = 24;
			this->tbPhoneNumber->Text = L"";
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbEmail->Location = System::Drawing::Point(286, 347);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(1019, 44);
			this->tbEmail->TabIndex = 25;
			this->tbEmail->Text = L"";
			// 
			// tbEmployeeId
			// 
			this->tbEmployeeId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbEmployeeId->Location = System::Drawing::Point(286, 515);
			this->tbEmployeeId->Name = L"tbEmployeeId";
			this->tbEmployeeId->Size = System::Drawing::Size(1019, 44);
			this->tbEmployeeId->TabIndex = 26;
			this->tbEmployeeId->Text = L"";
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(10, 773);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(240, 50);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Category:";
			// 
			// tbCLientAdress
			// 
			this->tbCLientAdress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbCLientAdress->Location = System::Drawing::Point(286, 397);
			this->tbCLientAdress->Name = L"tbCLientAdress";
			this->tbCLientAdress->Size = System::Drawing::Size(1019, 44);
			this->tbCLientAdress->TabIndex = 30;
			this->tbCLientAdress->Text = L"";
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(19, 403);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(288, 50);
			this->label11->TabIndex = 29;
			this->label11->Text = L"Client Adress:";
			// 
			// tbPrice
			// 
			this->tbPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPrice->Location = System::Drawing::Point(286, 565);
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(1019, 44);
			this->tbPrice->TabIndex = 32;
			this->tbPrice->Text = L"";
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(19, 572);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(261, 50);
			this->label12->TabIndex = 31;
			this->label12->Text = L"Price:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Laptop", L"Konsola", L"Smartfon/Tablet", L"Inne" });
			this->comboBox1->Location = System::Drawing::Point(16, 826);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(216, 39);
			this->comboBox1->TabIndex = 33;
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label13->Location = System::Drawing::Point(286, 773);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(240, 50);
			this->label13->TabIndex = 34;
			this->label13->Text = L"RealizationType";
			// 
			// radioStandard
			// 
			this->radioStandard->AutoSize = true;
			this->radioStandard->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioStandard->Location = System::Drawing::Point(292, 826);
			this->radioStandard->Name = L"radioStandard";
			this->radioStandard->Size = System::Drawing::Size(151, 36);
			this->radioStandard->TabIndex = 35;
			this->radioStandard->TabStop = true;
			this->radioStandard->Text = L"Standard";
			this->radioStandard->UseVisualStyleBackColor = true;
			this->radioStandard->CheckedChanged += gcnew System::EventHandler(this, &newOrderForm::radioStandard_CheckedChanged);
			// 
			// radioExpress
			// 
			this->radioExpress->AutoSize = true;
			this->radioExpress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioExpress->Location = System::Drawing::Point(292, 868);
			this->radioExpress->Name = L"radioExpress";
			this->radioExpress->Size = System::Drawing::Size(137, 36);
			this->radioExpress->TabIndex = 36;
			this->radioExpress->TabStop = true;
			this->radioExpress->Text = L"Express";
			this->radioExpress->UseVisualStyleBackColor = true;
			this->radioExpress->CheckedChanged += gcnew System::EventHandler(this, &newOrderForm::radioExpress_CheckedChanged);
			// 
			// tbSerialNumber
			// 
			this->tbSerialNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbSerialNumber->Location = System::Drawing::Point(286, 622);
			this->tbSerialNumber->Name = L"tbSerialNumber";
			this->tbSerialNumber->Size = System::Drawing::Size(1019, 44);
			this->tbSerialNumber->TabIndex = 38;
			this->tbSerialNumber->Text = L"";
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->Location = System::Drawing::Point(19, 616);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(261, 50);
			this->label14->TabIndex = 37;
			this->label14->Text = L"Serial Number:";
			// 
			// tbComments
			// 
			this->tbComments->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbComments->Location = System::Drawing::Point(286, 729);
			this->tbComments->Name = L"tbComments";
			this->tbComments->Size = System::Drawing::Size(1019, 44);
			this->tbComments->TabIndex = 42;
			this->tbComments->Text = L"";
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->Location = System::Drawing::Point(19, 723);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(261, 50);
			this->label15->TabIndex = 41;
			this->label15->Text = L"Comments:";
			// 
			// tbSymptoms
			// 
			this->tbSymptoms->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbSymptoms->Location = System::Drawing::Point(286, 672);
			this->tbSymptoms->Name = L"tbSymptoms";
			this->tbSymptoms->Size = System::Drawing::Size(1019, 44);
			this->tbSymptoms->TabIndex = 40;
			this->tbSymptoms->Text = L"";
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label16->Location = System::Drawing::Point(19, 679);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(261, 50);
			this->label16->TabIndex = 39;
			this->label16->Text = L"Symptoms:";
			// 
			// newOrderForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1333, 933);
			this->Controls->Add(this->tbComments);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->tbSymptoms);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->tbSerialNumber);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->radioExpress);
			this->Controls->Add(this->radioStandard);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->tbCLientAdress);
			this->Controls->Add(this->label11);
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
			this->Load += gcnew System::EventHandler(this, &newOrderForm::newOrderForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

//ok button
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	
	//swap blank textBoxes to none

	if (tbCLientAdress->Text == "") {
		tbCLientAdress->Text = "None";
	}
	if (tbEmail->Text == "") {
		tbEmail->Text = "None";
	}
	if (tbComments->Text == "") {
		tbComments->Text = "None";
	}
	if (tbSymptoms->Text == "") {
		tbSymptoms->Text = "None";
	}
	if (tbSerialNumber->Text == "") {
		tbSerialNumber->Text = "None";
	}
	if (tbErrorDescription->Text == "") {
		tbErrorDescription->Text = "None";
	}
	if (tbEmployeeId->Text == "") {
		MessageBox::Show("Must enter employee ID","Wrong Input of Employee ID",MessageBoxButtons::OK,MessageBoxIcon::Error);
		return;
	}
	if (tbPhoneNumber->Text == "") {
		MessageBox::Show("Must enter Phone Number", "Wrong Input of Phone Number!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	if (tbPrice->Text == "") {
		tbPrice->Text = "0.00";
	}
	if (comboBox1->Text == "") {
		comboBox1->Text = "Inne";
	}

	


	//get data from textboxes
	String^ clientName = tbClientName->Text;
	String^ clientSurname = tbClientSurname->Text;
	String^ deviceName = tbDeviceName->Text;
	String^ deviceModel = tbDeviceModel->Text;
	String^ errorDescription = tbErrorDescription->Text;
	String^ employeeStringID = tbEmployeeId->Text;
	String^ phoneNumber = tbPhoneNumber->Text;
	String^ email = tbEmail->Text;
	String^ category = comboBox1->Text;
	String^ clientAdress = tbCLientAdress->Text;
	String^ priceStr = tbPrice->Text;
	String^ query;
	String^ serialNumber{tbSerialNumber->Text};
	String^ symptoms{tbSymptoms->Text};
	String^ comments{ tbComments->Text };
	int^ realizationType{ realizationMode };

	int^ clientId{};
	int employeeId{};
	int deviceId{};
	
	double price{};
	//check if all textboxes are filled
	//check if name,surname,device name, device model are text type variabels
	//check if phonenumber is integer of length 9 digits
	//check if email is email type -> +[@]+[.]+ (regex)	

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

		SqlDataReader^ reader{};

		if (clientExist(clientName, clientSurname,phoneNumber)) {


			query =  "SELECT ClientId From CLients Where ClientName = @name AND ClientSurname = @surname and ClientPhone = @Phone";

			SqlCommand cmd_get_Id{ query,% conn };
			cmd_get_Id.Parameters->AddWithValue("@name", clientName);
			cmd_get_Id.Parameters->AddWithValue("@surname", clientSurname);
			cmd_get_Id.Parameters->AddWithValue("@Phone",phoneNumber);

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

			reader = cmd_get_Id.ExecuteReader();

				if (reader->Read()) {
					clientId = reader->GetInt32(0);
				}
				reader->Close();

		}

		int^ clientId_Devices{0};
		vector<int> IDs;


		query = "SELECT Count(DeviceId) From Devices Where ClientId = @ClientId and DeviceName = @name and DeviceModel = @model and SerialNumber = @serial";
		SqlCommand cmd_get_clientId{query,%conn};

		cmd_get_clientId.Parameters->AddWithValue("@name", deviceName);
		cmd_get_clientId.Parameters->AddWithValue("@model",deviceModel);
		cmd_get_clientId.Parameters->AddWithValue("@ClientId", clientId);
		cmd_get_clientId.Parameters->AddWithValue("@serial", serialNumber);



		reader = cmd_get_clientId.ExecuteReader();
		int i{};
		if (reader->Read()) {
			i = reader->GetInt32(0);
		}
		reader->Close();


	

		if ( i > 0) {
			int quantity{};
			query = "SELECT DeviceId From Devices Where DeviceName = @deviceName AND DeviceModel = @deviceModel and SerialNumber = @serial";
			SqlCommand cmd_get_deviceId{ query,% conn };
			cmd_get_deviceId.Parameters->AddWithValue("@deviceName", deviceName);
			cmd_get_deviceId.Parameters->AddWithValue("@deviceModel", deviceModel);
			cmd_get_deviceId.Parameters->AddWithValue("@serial", serialNumber);


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
			cmd_update_quantity.Parameters->AddWithValue("@Id",deviceId);

			cmd_update_quantity.ExecuteNonQuery();

		}
		else {
			//insert into devices
			// 
			// get device Id

			query = "Insert into Devices(ClientId,DeviceName,SerialNumber,DeviceModel,DeviceCategory,Quantity) VALUES(@clientId,@deviceName,@SerialNumber,@deviceModel,@category,@Quantity)";
			SqlCommand cmd_insert_device{ query,% conn };

			cmd_insert_device.Parameters->AddWithValue("@clientId", clientId);
			cmd_insert_device.Parameters->AddWithValue("@deviceName", deviceName);
			cmd_insert_device.Parameters->AddWithValue("@SerialNumber", serialNumber);
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
		String^ date = getData();
		//error in query - addi g null values to command
		query = "Insert into orders(clientId,EmployeeId,DeviceId,Symptoms,Comments,ExpressRealization,OrderStatus,OrderDate,OrderPrice,Description) VALUES (@clientId,@EmployeeId,@DeviceId,@Symptoms,@Comments,@ExpressRealization,@OrderStatus,@OrderDate,@OrderPrice,@Description)";//insert int orders
		SqlCommand cmd_insert_order{ query,% conn };
		cmd_insert_order.Parameters->AddWithValue("@clientId", clientId);
		cmd_insert_order.Parameters->AddWithValue("@EmployeeId", employeeId);
		cmd_insert_order.Parameters->AddWithValue("@DeviceId", deviceId);
		cmd_insert_order.Parameters->AddWithValue("@ExpressRealization", realizationType);
		cmd_insert_order.Parameters->AddWithValue("@OrderStatus", Convert::ToString("In progress"));
		cmd_insert_order.Parameters->AddWithValue("@OrderDate", date);
		cmd_insert_order.Parameters->AddWithValue("@OrderPrice", price);
		cmd_insert_order.Parameters->AddWithValue("@Description", errorDescription);
		cmd_insert_order.Parameters->AddWithValue("@Symptoms", symptoms);
		cmd_insert_order.Parameters->AddWithValue("@Comments", comments);

		cmd_insert_order.ExecuteNonQuery();

		//get OrderId
		int^ orderId{0};

		query = "SELECT OrderId From Orders Where ClientId = @clientId AND EmployeeId = @EmployeeId AND DeviceId = @DeviceId AND OrderDate = @OrderDate";
		SqlCommand cmd_get_orderId{ query,% conn };
		cmd_get_orderId.Parameters->AddWithValue("@clientId", clientId);
		cmd_get_orderId.Parameters->AddWithValue("@EmployeeId", employeeId);
		cmd_get_orderId.Parameters->AddWithValue("@DeviceId", deviceId);
		cmd_get_orderId.Parameters->AddWithValue("@OrderDate", date);

		reader = cmd_get_orderId.ExecuteReader();

		if (reader->Read()) {
			orderId = reader->GetInt32(0);
		}

		
		reader->Close();
		

		float^ orderCost{};
		OrderCost form;
		form.ShowDialog();
		orderCost = form.cost;


		query = "SELECT Count(OrderId) From Equity Where ClientName = @ClientName and ClientSurname = @ClientSurname and ClientPhone = @phone and DeviceName = @DeviceName and DeviceModel = @DeviceModel and Date = @Date and Description = @Description";
		SqlCommand cmd_check_equity{query,%conn};

		cmd_check_equity.Parameters->AddWithValue("@ClientName",clientName);
		cmd_check_equity.Parameters->AddWithValue("@ClientSurname", clientSurname);
		cmd_check_equity.Parameters->AddWithValue("@phone", phoneNumber);
		cmd_check_equity.Parameters->AddWithValue("@DeviceName",deviceName);
		cmd_check_equity.Parameters->AddWithValue("@deviceModel", deviceModel);
		cmd_check_equity.Parameters->AddWithValue("@Date", date);
		cmd_check_equity.Parameters->AddWithValue("@Description", errorDescription);

		reader = cmd_check_equity.ExecuteReader();
		
		int amount{};
		
		if (reader->Read()) {
			amount = reader->GetInt32(0);
		}
		reader->Close();

		if(amount == 0)
		query = "INSERT INTO Equity(OrderId,Status,ClientName,ClientSurname, ClientEmail,ClientPhone,ClientAddress, DeviceName,DeviceModel,Date,Category,Price,Cost,Description) VALUES (@OrderId,@Status,@ClientName,@ClientSurname,@ClientEmail,@ClientPhone,@ClientAdress,@DeviceName,@DeviceModel,@Date,@Category,@Price,@Cost,@Description)";
		SqlCommand cmd_insert{ query,% conn };
		cmd_insert.Parameters->AddWithValue("@OrderId", orderId);
		cmd_insert.Parameters->AddWithValue("@Status", "In progress");
		cmd_insert.Parameters->AddWithValue("@ClientName", clientName);
		cmd_insert.Parameters->AddWithValue("@ClientSurname", clientSurname);
		cmd_insert.Parameters->AddWithValue("@ClientEmail", email);
		cmd_insert.Parameters->AddWithValue("@ClientPhone", phoneNumber);
		cmd_insert.Parameters->AddWithValue("@ClientAdress", clientAdress);
		cmd_insert.Parameters->AddWithValue("@DeviceName", deviceName);
		cmd_insert.Parameters->AddWithValue("@DeviceModel", deviceModel);
		cmd_insert.Parameters->AddWithValue("@Date", getData());
		cmd_insert.Parameters->AddWithValue("@Category", category);
		cmd_insert.Parameters->AddWithValue("@Price", price);
		cmd_insert.Parameters->AddWithValue("@Cost", orderCost);
		cmd_insert.Parameters->AddWithValue("@Description", errorDescription);

		cmd_insert.ExecuteNonQuery();


		// insert into logs - new logs
		query = "Insert into Logs(OrderId,EmployeeId,Date,Log) VALUES(@OrderId,@EmployeeId,@LogDate,@LogDescription)";
		SqlCommand cmd_insert_log{ query,% conn };
		cmd_insert_log.Parameters->AddWithValue("@OrderId", orderId);
		cmd_insert_log.Parameters->AddWithValue("@EmployeeId", employeeId);
		cmd_insert_log.Parameters->AddWithValue("@LogDate", date);
		cmd_insert_log.Parameters->AddWithValue("@LogDescription", "["+Convert::ToString(DateTime::Now)+"] " + "New order added" +"\n");

		cmd_insert_log.ExecuteNonQuery();

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
	comboBox1->Text ="";
	tbCLientAdress->Clear();
	tbPrice->Clear();
}

//exit button
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void radioStandard_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	realizationMode = 0;
}
private: System::Void radioExpress_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	realizationMode = 1;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void newOrderForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
