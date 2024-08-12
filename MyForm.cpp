#include "Includings.h"

static void clearDataGridView(DataGridView^ dataView) {
	dataView->Columns->Clear();
	dataView->Rows->Clear();
}

static void configureDataGrid_Orders(DataGridView^ dataView,String^ s) {
	
	clearDataGridView(dataView);
	String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
	SqlConnection conn{ strConn };
	conn.Open();
	String^ query{};
	
	 // Orders
	DataGridViewColumn^ column_Order_Id = gcnew DataGridViewTextBoxColumn();
	column_Order_Id->Name = "Order ID";
	column_Order_Id->HeaderText = "Order ID";
	dataView->Columns->Add(column_Order_Id);

	DataGridViewColumn^ column_Client_Id_Orders = gcnew DataGridViewTextBoxColumn();
	column_Client_Id_Orders->Name = "Client ID";
	column_Client_Id_Orders->HeaderText = "Client ID";
	dataView->Columns->Add(column_Client_Id_Orders);

	DataGridViewColumn^ column_Employee_Id = gcnew DataGridViewTextBoxColumn();
	column_Employee_Id->Name = "Employee ID";
	column_Employee_Id->HeaderText = "Employee ID";
	dataView->Columns->Add(column_Employee_Id);


	DataGridViewColumn^ column_Device_Id_Orders = gcnew DataGridViewTextBoxColumn();
	column_Device_Id_Orders->Name = "Device ID";
	column_Device_Id_Orders->HeaderText = "Device ID";
	dataView->Columns->Add(column_Device_Id_Orders);

	DataGridViewColumn^ column_Order_Status = gcnew DataGridViewTextBoxColumn();
	column_Order_Status->Name = "Order Status";
	column_Order_Status->HeaderText = "Order Status";
	dataView->Columns->Add(column_Order_Status);

	DataGridViewColumn^ column_Order_Date = gcnew DataGridViewTextBoxColumn();
	column_Order_Date->Name = "Order Date";
	column_Order_Date->HeaderText = "Order Date";
	dataView->Columns->Add(column_Order_Date);

	DataGridViewColumn^ column_Order_Price = gcnew DataGridViewTextBoxColumn();
	column_Order_Price->Name = "Order Price";
	column_Order_Price->HeaderText = "Order Price";
	dataView->Columns->Add(column_Order_Price);

	DataGridViewColumn^ column_Description = gcnew DataGridViewTextBoxColumn();
	column_Description->Name = "Description";
	column_Description->HeaderText = "Description";
	dataView->Columns->Add(column_Description);

	query = "SELECT * FROM Orders"; // modify to allow searching via texbox in MyForm
	

	SqlCommand cmd{ query,% conn };

	SqlDataReader^ reader = cmd.ExecuteReader();
	int i;
	while (reader->Read()) {
		i = 0;
		for (int j = 0; j <= i - 1; j++) {
			reader->Read();
		}
		++i;

		dataView->Rows->Add(reader->GetInt32(0), reader->GetInt32(1),
			reader->GetInt32(2), reader->GetInt32(3), reader->GetString(5), reader->GetString(6)
			, reader->GetFloat(7), reader->GetString(8));



	}
	reader->Close();
	dataView->Update();

	conn.Close();
}

static void configureDataGrid_Clients(DataGridView^ dataView, String^ s) {
	
	clearDataGridView(dataView);
	String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
	SqlConnection conn{ strConn };
	conn.Open();

	String^ query{};

	DataGridViewColumn^ column_Client_Id = gcnew DataGridViewTextBoxColumn();
	column_Client_Id->Name = "Client ID";
	column_Client_Id->HeaderText = "Client ID";
	dataView->Columns->Add(column_Client_Id);

	DataGridViewColumn^ column_Client_Name = gcnew DataGridViewTextBoxColumn();
	column_Client_Name->Name = "Client Name";
	column_Client_Name->HeaderText = "Client Name";
	dataView->Columns->Add(column_Client_Name);

	DataGridViewColumn^ column_Client_Surname = gcnew DataGridViewTextBoxColumn();
	column_Client_Surname->Name = "CLient Surname";
	column_Client_Surname->HeaderText = "Client Surname";
	dataView->Columns->Add(column_Client_Surname);

	DataGridViewColumn^ column_Client_Phone = gcnew DataGridViewTextBoxColumn();
	column_Client_Phone->Name = "Client Phone Number";
	column_Client_Phone->HeaderText = "Client Phone Number";
	dataView->Columns->Add(column_Client_Phone);

	DataGridViewColumn^ column_Client_Email = gcnew DataGridViewTextBoxColumn();
	column_Client_Email->Name = "Client Email";
	column_Client_Email->HeaderText = "Client Email";
	dataView->Columns->Add(column_Client_Email);

	DataGridViewColumn^ column_Client_Adress = gcnew DataGridViewTextBoxColumn();
	column_Client_Adress->Name = "Client Adress";
	column_Client_Adress->HeaderText = "Client Adress";
	dataView->Columns->Add(column_Client_Adress);


	query = "SELECT * FROM Clients"; // Client iD like s+"%" or Client name like s+"%" or client surname like s+"%" or  client email like s+"%"
	SqlCommand cmd{ query,% conn };

	SqlDataReader^ reader = cmd.ExecuteReader();
	
	int i;
	while (reader->Read()) {
		i = 0;
		for (int j = 0; j <= i - 1; j++) {
			reader->Read();
		}
		++i;

		dataView->Rows->Add(reader->GetInt32(0), reader->GetString(1),
			reader->GetString(2), reader->GetString(3), reader->GetString(5), reader->GetString(6));

	}
	reader->Close();
	dataView->Update();

	conn.Close();
}
static void configureDataGrid_Devices(DataGridView^ dataView,String^ s) {

	clearDataGridView(dataView);
	String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
	SqlConnection conn{ strConn };
	conn.Open();

	String^ query{};

	DataGridViewColumn^ column_Device_Id = gcnew DataGridViewTextBoxColumn();
	column_Device_Id->Name = "Device Id";
	column_Device_Id->HeaderText = "Device Id";
	dataView->Columns->Add(column_Device_Id);

	DataGridViewColumn^ column_Client_Id_Devices = gcnew DataGridViewTextBoxColumn();
	column_Client_Id_Devices->Name = "CLient Id";
	column_Client_Id_Devices->HeaderText = "Client Id";
	dataView->Columns->Add(column_Client_Id_Devices);

	DataGridViewColumn^ column_Device_Name = gcnew DataGridViewTextBoxColumn();
	column_Device_Name->Name = "Device Name";
	column_Device_Name->HeaderText = "Device Name";
	dataView->Columns->Add(column_Device_Name);

	DataGridViewColumn^ column_Device_Type = gcnew DataGridViewTextBoxColumn();
	column_Device_Type->Name = "Device Type";
	column_Device_Type->HeaderText = "Client Email";
	dataView->Columns->Add(column_Device_Type);

	DataGridViewColumn^ column_Device_Category = gcnew DataGridViewTextBoxColumn();
	column_Device_Category->Name = "Device Category";
	column_Device_Category->HeaderText = "Device Category";
	dataView->Columns->Add(column_Device_Category);


	query = "SELECT * FROM Devices"; // device iD like s+"%" or devicename like s+"%"
	SqlCommand cmd{ query,% conn };

	SqlDataReader^ reader = cmd.ExecuteReader();

	int i;
	while (reader->Read()) {
		i = 0;
		for (int j = 0; j <= i - 1; j++) {
			reader->Read();
		}
		++i;

		dataView->Rows->Add(reader->GetInt32(0), reader->GetInt32(1),
			reader->GetString(2), reader->GetString(3), reader->GetString(5));

	}
	reader->Close();
	dataView->Update();

	conn.Close();
}
static void configureDataGrid_Employees(DataGridView^ dataView,String^ s) {

	clearDataGridView(dataView);
	String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
	SqlConnection conn{ strConn };
	conn.Open();

	String^ query{};

	DataGridViewColumn^ column_Employee_Id = gcnew DataGridViewTextBoxColumn();
	column_Employee_Id->Name = "Employee Id";
	column_Employee_Id->HeaderText = "Employee Id";
	dataView->Columns->Add(column_Employee_Id);

	DataGridViewColumn^ column_Employee_Name = gcnew DataGridViewTextBoxColumn();
	column_Employee_Name->Name = "Employee Name";
	column_Employee_Name->HeaderText = "Employee Name";
	dataView->Columns->Add(column_Employee_Name);

	DataGridViewColumn^ column_Employee_Surname = gcnew DataGridViewTextBoxColumn();
	column_Employee_Surname->Name = "Employee Surname";
	column_Employee_Surname->HeaderText = "Employee Surname";
	dataView->Columns->Add(column_Employee_Surname);


	query = "SELECT * FROM Employees"; // modify to allow searching via texbox in MyForm
	SqlCommand cmd{ query,% conn };

	SqlDataReader^ reader = cmd.ExecuteReader();

	int i;
	while (reader->Read()) {
		i = 0;
		for (int j = 0; j <= i - 1; j++) {
			reader->Read();
		}
		++i;

		dataView->Rows->Add(reader->GetInt32(0), reader->GetString(1),
		reader->GetString(2));

	}
	dataView->Update();

	reader->Close();


	conn.Close();

}

