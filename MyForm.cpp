#include "Includings.h"
#include "classes.h"
#include <memory>

static void clearDataGridView(DataGridView^ dataView) {
	dataView->Columns->Clear();
	dataView->Rows->Clear();
}

static void configureDataGrid_Orders(DataGridView^ dataView, String^ search) {

	clearDataGridView(dataView);
	try {

		String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
		SqlConnection conn{ strConn };
		conn.Open();
		String^ query{ "SELECT OrderId,ClientId,EmployeeId,DeviceId,OrderStatus,OrderDate,OrderPrice,Description FROM Orders" };

		SqlCommand cmd{ query,% conn };

		SqlDataReader^ reader = cmd.ExecuteReader();

		DataGridViewColumn^ column_Order_Id = gcnew DataGridViewTextBoxColumn();
		column_Order_Id->Name = "Order ID";
		column_Order_Id->HeaderText = "Order ID";
		column_Order_Id->ValueType = System::Int32::typeid;
		dataView->Columns->Add(column_Order_Id);

		DataGridViewColumn^ column_Client_Id_Orders = gcnew DataGridViewTextBoxColumn();
		column_Client_Id_Orders->Name = "Client ID";
		column_Client_Id_Orders->HeaderText = "Client ID";
		column_Client_Id_Orders->ValueType = System::Int32::typeid;
		dataView->Columns->Add(column_Client_Id_Orders);

		DataGridViewColumn^ column_Employee_Id = gcnew DataGridViewTextBoxColumn();
		column_Employee_Id->Name = "Employee ID";
		column_Employee_Id->HeaderText = "Employee ID";
		column_Employee_Id->ValueType = System::Int32::typeid;
		dataView->Columns->Add(column_Employee_Id);


		DataGridViewColumn^ column_Device_Id_Orders = gcnew DataGridViewTextBoxColumn();
		column_Device_Id_Orders->Name = "Device ID";
		column_Device_Id_Orders->HeaderText = "Device ID";
		column_Device_Id_Orders->ValueType = System::Int32::typeid;
		dataView->Columns->Add(column_Device_Id_Orders);

		DataGridViewColumn^ column_Order_Status = gcnew DataGridViewTextBoxColumn();
		column_Order_Status->Name = "Order Status";
		column_Order_Status->HeaderText = "Order Status";
		column_Order_Status->ValueType = System::String::typeid;
		dataView->Columns->Add(column_Order_Status);

		DataGridViewColumn^ column_Order_Date = gcnew DataGridViewTextBoxColumn();
		column_Order_Date->Name = "Order Date";
		column_Order_Date->HeaderText = "Order Date";
		column_Order_Date->ValueType = System::String::typeid;
		dataView->Columns->Add(column_Order_Date);

		DataGridViewColumn^ column_Order_Price = gcnew DataGridViewTextBoxColumn();
		column_Order_Price->Name = "Order Price";
		column_Order_Price->HeaderText = "Order Price";
		column_Order_Price->ValueType = System::Single::typeid;
		dataView->Columns->Add(column_Order_Price);

		DataGridViewColumn^ column_Description = gcnew DataGridViewTextBoxColumn();
		column_Description->Name = "Description";
		column_Description->HeaderText = "Description";
		column_Description->ValueType = System::String::typeid;
		dataView->Columns->Add(column_Description);

		// modify to allow searching via texbox in MyForm


		int i{ 0 };
		while (reader->Read()) {
			i = 0;
			for (int j = 0; j <= i - 1; j++) {
				reader->Read();
			}
			++i;

			int orderID = reader->GetInt32(0);
			int clientID = reader->GetInt32(1);
			int employeeID = reader->GetInt32(2);
			int deviceID = reader->GetInt32(3);
			String^ orderStatus = reader->GetString(4);
			String^ orderDate = reader->GetString(5);
			float orderPrice = reader->GetFloat(6);
			String^ description = reader->GetString(7);


			dataView->Rows->Add(Convert::ToInt32(orderID),Convert::ToInt32(clientID),Convert::ToInt32(employeeID),Convert::ToInt32(deviceID),
				orderStatus,orderDate,Convert::ToSingle(orderPrice),description);

			/*dataView->Rows->Add(reader->GetInt32(0), reader->GetInt32(1),
				reader->GetInt32(2), reader->GetInt32(3), reader->GetInt32(4),
				reader->GetString(5), Convert::ToString(reader->GetFloat(6)), reader->GetString(7));*/
		
		
		}



		

	
	reader->Close();
	dataView->Update();

	conn.Close();
	}
	catch (Exception^ edv) {
		MessageBox::Show(edv->Message, "Error on tests", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
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


	query = "SELECT ClientId,ClientName,ClientSurname,ClientPhone,ClientEmail,ClientAdress FROM Clients"; // Client iD like s+"%" or Client name like s+"%" or client surname like s+"%" or  client email like s+"%"
	SqlCommand cmd{ query,% conn };

	SqlDataReader^ reader = cmd.ExecuteReader();
	
	int i;
	while (reader->Read()) {
		i = 0;
		for (int j = 0; j <= i - 1; j++) {
			reader->Read();
		}
		++i;


		int^ clientID = reader->GetInt32(0);
		String^ clientName = reader->GetString(1);
		String^ clientSurname = reader->GetString(2);
		String^ clientPhone = reader->GetString(3);
		String^ clientEmail = reader->GetString(4);
		String^ clientAdress = reader->GetString(5);

		dataView->Rows->Add(clientID, clientName, clientSurname, clientPhone, clientEmail, clientAdress);


		/*dataView->Rows->Add(reader->GetInt32(0), reader->GetString(1),
			reader->GetString(2), reader->GetString(3), reader->GetString(5), reader->GetString(6));*/

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

	DataGridViewColumn^ column_Device_Quantity = gcnew DataGridViewTextBoxColumn();
	column_Device_Quantity->Name = "DQuantity";
	column_Device_Quantity->HeaderText = "Quantity";
	dataView->Columns->Add(column_Device_Quantity);


	query = "SELECT DeviceId,ClientId,DeviceName,DeviceModel,DeviceCategory,Quantity FROM Devices"; // device iD like s+"%" or devicename like s+"%"
	SqlCommand cmd{ query,% conn };

	SqlDataReader^ reader = cmd.ExecuteReader();

	int i;
	while (reader->Read()) {
		i = 0;
		for (int j = 0; j <= i - 1; j++) {
			reader->Read();
		}
		++i;

		int^ deviceId = reader->GetInt32(0);
		int^ clientId = reader->GetInt32(1);
		String^ deviceName = reader->GetString(2);
		String^ deviceModel = reader->GetString(3);
		String^ deviceCategory = reader->GetString(4);
		int^ deviceQuantity = reader->GetInt32(5);


		dataView->Rows->Add(deviceId,clientId,deviceName,deviceModel,deviceCategory,deviceQuantity);

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
//need to add configuring datagridViwe with built text searching and checklistbox 
static void configureCheckListBox_Orders(CheckedListBox^ checklist) {
	//here will be code to configure checklistbox
	//for now it will be empty

}
static void configureCheckListBox_Clients(CheckedListBox^ checklist) {
	//here will be code to configure checklistbox
	//for now it will be empty

}
static void configureCheckListBox_Devices(CheckedListBox^ checklist) {
	//here will be code to configure checklistbox
	//for now it will be empty

}