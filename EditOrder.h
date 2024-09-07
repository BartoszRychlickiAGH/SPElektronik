#pragma once
#include "ContextMenuStrip.cpp"
//#include "MyForm.h"
#include "OrderCost.h"
#include "MyForm.cpp"



namespace testGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RichTextBox^ tbStatus;
	private: System::Windows::Forms::RichTextBox^ tbDate;
	private: System::Windows::Forms::RichTextBox^ tbPrice;
	private: System::Windows::Forms::RichTextBox^ tbDescription;
		   DataGridViewRow^ row;
	public:
		MyForm1(DataGridViewRow^ row)
		{
			InitializeComponent();
			this->row = row;
			//
			//TODO: Add the constructor code here
			//

			//creating elements
			// 
			// lepiej bêdzie zrobiæ 4 formsy na ka¿dy tryb


		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}




	protected:

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
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbStatus = (gcnew System::Windows::Forms::RichTextBox());
			this->tbDate = (gcnew System::Windows::Forms::RichTextBox());
			this->tbPrice = (gcnew System::Windows::Forms::RichTextBox());
			this->tbDescription = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// btnOK
			// 
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOK->Location = System::Drawing::Point(14, 354);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(181, 70);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MyForm1::btnOK_Click);
			// 
			// btnClear
			// 
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnClear->Location = System::Drawing::Point(220, 354);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(181, 70);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"CLEAR";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm1::btnClear_Click);
			// 
			// btnExit
			// 
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExit->Location = System::Drawing::Point(427, 354);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(181, 70);
			this->btnExit->TabIndex = 2;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm1::btnExit_Click);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(141, 46);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Status:";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(594, 56);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Edit Order";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(13, 221);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(141, 46);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Price:";
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(13, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 46);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Date:";
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(13, 278);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(180, 46);
			this->label5->TabIndex = 7;
			this->label5->Text = L"Description:";
			// 
			// tbStatus
			// 
			this->tbStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbStatus->Location = System::Drawing::Point(182, 87);
			this->tbStatus->Name = L"tbStatus";
			this->tbStatus->Size = System::Drawing::Size(424, 46);
			this->tbStatus->TabIndex = 8;
			this->tbStatus->Text = L"";
			// 
			// tbDate
			// 
			this->tbDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbDate->Location = System::Drawing::Point(182, 152);
			this->tbDate->Name = L"tbDate";
			this->tbDate->Size = System::Drawing::Size(424, 46);
			this->tbDate->TabIndex = 9;
			this->tbDate->Text = L"";
			// 
			// tbPrice
			// 
			this->tbPrice->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPrice->Location = System::Drawing::Point(182, 221);
			this->tbPrice->Name = L"tbPrice";
			this->tbPrice->Size = System::Drawing::Size(424, 46);
			this->tbPrice->TabIndex = 10;
			this->tbPrice->Text = L"";
			// 
			// tbDescription
			// 
			this->tbDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbDescription->Location = System::Drawing::Point(182, 278);
			this->tbDescription->Name = L"tbDescription";
			this->tbDescription->Size = System::Drawing::Size(424, 46);
			this->tbDescription->TabIndex = 11;
			this->tbDescription->Text = L"";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(618, 448);
			this->Controls->Add(this->tbDescription);
			this->Controls->Add(this->tbPrice);
			this->Controls->Add(this->tbDate);
			this->Controls->Add(this->tbStatus);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnOK);
			this->Name = L"MyForm1";
			this->Text = L"Edit Order";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		// get current data from row
		int^ OrderId{};
		String^ query;
		String^ strConn = "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False";
		SqlConnection conn{strConn};
		conn.Open();
		String^ text{""};
		String^ clientName{""};
		String^ clientSurname{ "" };

		for each (DataGridViewCell ^ cell in row->Cells) { // error OrderId = nullptr

			if (cell->OwningColumn->Name == "Client Name"){
				clientName = Convert::ToString(cell->Value);
			}
			if (cell->OwningColumn->Name == "Client Surname") {
				clientSurname = Convert::ToString(cell->Value);
			}
		}
		query = "select Orders.OrderId From Orders Inner join clients on orders.ClientId = clients.ClientId Where clients.ClientName = @Name and clients.ClientSurname = @Surname";
		
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@Name", clientName);
		cmd.Parameters->AddWithValue("@Surname", clientSurname);

		SqlDataReader^ reader = cmd.ExecuteReader();

		if (reader->Read()) {
			OrderId = reader->GetInt32(0);
		}
		reader->Close();


		//check if date is in correct format
		if (tbDate->Text != "" && !isDate(tbDate->Text)) {
			MessageBox::Show("Date must be in correct format!!!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		//check if price is in correct format
		if (tbPrice->Text != "" && !isMoney(tbPrice->Text)) {
			MessageBox::Show("Price must be in correct format!!!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		//check if status is in correct format
		if (tbStatus->Text != "" && tbStatus->Text != "Ready" && tbStatus->Text != "In progress") {
			MessageBox::Show("Status can be only 'Ready' or 'In progress'!!!","Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
			return;
		}



		if (tbStatus->Text != "") {
			query = "UPDATE Orders SET OrderStatus = @Status WHERE OrderId = @Id";
			SqlCommand cmd{ query,%conn };
			cmd.Parameters->AddWithValue("@Status", tbStatus->Text);
			cmd.Parameters->AddWithValue("@Id", OrderId);
			text += Convert::ToString("Changed status to " + tbStatus->Text+".");
			cmd.ExecuteNonQuery();

			//update equity
			query = "UPDATE Equity SET Status = @Status WHERE OrderId = @Id";
			SqlCommand cmd_equity{ query,% conn };
			cmd_equity.Parameters->AddWithValue("@Status", tbStatus->Text);

			cmd_equity.Parameters->AddWithValue("@Id", OrderId);
		}
		if (tbDate->Text != "") {
			query = "UPDATE Orders SET OrderDate = @Date WHERE OrderId = @Id";
			SqlCommand cmd{ query,% conn };
			cmd.Parameters->AddWithValue("@Date", tbDate->Text);
			cmd.Parameters->AddWithValue("@Id", OrderId);
			text += Convert::ToString("Changed date to " + tbDate->Text+".");
			cmd.ExecuteNonQuery();

			//update equity
			query = "UPDATE Equity SET Date = @date WHERE OrderId = @Id";
			SqlCommand cmd_equity{ query,% conn };
			cmd_equity.Parameters->AddWithValue("@date", tbDate->Text);

			cmd_equity.Parameters->AddWithValue("@Id", OrderId);
		}
		if (tbDescription->Text != "") {
			query = "UPDATE Orders SET Description = @des WHERE OrderId = @Id";
			SqlCommand cmd{ query,% conn };
			cmd.Parameters->AddWithValue("@Sdes", tbDescription->Text);
			cmd.Parameters->AddWithValue("@Id", OrderId);
			text += Convert::ToString("Changed description to " + tbDescription->Text + ".");
			cmd.ExecuteNonQuery();

			//update equity
			query = "UPDATE Equity SET Sescription = @Description WHERE OrderId = @Id";
			SqlCommand cmd_equity{ query,% conn };
			cmd_equity.Parameters->AddWithValue("@Description", tbDescription->Text);
			cmd_equity.Parameters->AddWithValue("@Id", OrderId);

			cmd_equity.ExecuteNonQuery();
		}
		if (tbPrice->Text != "") {
			query = "UPDATE Orders SET OrderPrice = @Price WHERE OrderId = @Id";
			SqlCommand cmd{ query,% conn };
			cmd.Parameters->AddWithValue("@Price", Convert::ToSingle(tbPrice -> Text));
			cmd.Parameters->AddWithValue("@Id", OrderId);
			text += Convert::ToString("Changed price to " + tbPrice->Text + ".");
			cmd.ExecuteNonQuery();

			//update equity
			query = "UPDATE Equity SET Price = @Price WHERE OrderId = @Id";
			SqlCommand cmd_equity{ query,% conn };
			cmd_equity.Parameters->AddWithValue("@Price", Convert::ToSingle(tbPrice->Text));

			cmd_equity.Parameters->AddWithValue("@Id", OrderId);
		}
		


		//check if order in equity

		query = "SELECT Count(Date) FROM Equity WHERE OrderId = @Id";
		SqlCommand cmd_check{ query,% conn };
		cmd_check.Parameters->AddWithValue("@Id", OrderId);

		reader = cmd_check.ExecuteReader();

		int count{ 0 };

		if (reader->Read()) {
			count = reader->GetInt32(0);
		}
		reader->Close();

		
		if (count == 1) {
			if (tbPrice->Text != "") {
				query = "UPDATE Equity SET Price = @Price WHERE OrderId = @Id";

				SqlCommand cmd_equity{ query,% conn };
				cmd_equity.Parameters->AddWithValue("@Price", Convert::ToSingle(tbPrice->Text));
				cmd_equity.Parameters->AddWithValue("@Id", OrderId);

				cmd_equity.ExecuteNonQuery();
			}
			if (tbDescription->Text != "") {
				query = "UPDATE Equity SET Description = @Des WHERE OrderId = @Id";

				SqlCommand cmd_equity{ query,% conn };
				cmd_equity.Parameters->AddWithValue("@Des", tbDescription->Text);
				cmd_equity.Parameters->AddWithValue("@Id", OrderId);

				cmd_equity.ExecuteNonQuery();
			}
			if (tbDate->Text != "") {
				query = "UPDATE Equity SET Date = @Date WHERE OrderId = @Id";

				SqlCommand cmd_equity{ query,% conn };
				cmd_equity.Parameters->AddWithValue("@Date", tbDate->Text);
				cmd_equity.Parameters->AddWithValue("@Id", OrderId);

				cmd_equity.ExecuteNonQuery();
			}
		
		}



		String^ actuallog{""};
		
		//get actual log
		query = "SELECT Log FROM Logs WHERE OrderId = @Id";

		SqlCommand cmd_log{ query,% conn };
		cmd_log.Parameters->AddWithValue("@Id", OrderId);

		reader = cmd_log.ExecuteReader();

		if (reader->Read()) {
			actuallog = reader->GetString(0);
		}
		reader->Close();

		// modify logs

		actuallog += Convert::ToString("[" + DateTime::Now.ToString() + "] " + text + "\n");


		
		// add to logs of orderId
		
		query = "UPDATE Logs SET Log = @Log WHERE OrderId = @Id";
		SqlCommand cmd_log_update{ query,% conn };
		cmd_log_update.Parameters->AddWithValue("@Log", actuallog);
		cmd_log_update.Parameters->AddWithValue("@Id", OrderId);

		cmd_log_update.ExecuteNonQuery();
		
		conn.Close();
		this->Close();
	}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	tbStatus->Text = "";
	tbDate->Text = "";
	tbPrice->Text = "";
	tbDescription->Text = "";
}
};
}
