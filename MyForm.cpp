#include "Includings.h"
#include "OrderCost.h"
#include "newOrderForm.cpp"
#include <vector>
#include <fstream>

#pragma once
//add log to table attached to exact order


//need to add configuring datagridViwe with built text searching and checklistbox
using namespace testGUI;
using std::vector;


static void printToFile(DataGridView^ dataGridView) {
	vector < vector<string>> fileData{};
	vector<string> data{};

	if (dataGridView->Rows->Count == 1) {
		return;
	}

	try {
		String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
		SqlConnection conn{ strConn };
		conn.Open();


		//client data
		String^ clientName{ "" };
		String^ clientSurname{ "" };
		String^ clientAdress{ "" };
		String^ clientPhone{ "" };
		String^ clientEmail{ "" };

		// device data
		String^ deviceName{ "" };
		String^ deviceModel{ "" };
		String^ deviceSerialNumber{ "" };
		String^ category{ "" };

		//order data
		int^ orderId{ 0 };
		int^ realizationType{ 0 };
		String^ status{ "" };
		String^ description{ "" };
		String^ symptoms{ "" };
		String^ comments{ "" };
		String^ date{ "" };
		double orderPrice{ 0.0 };
		double orderCost{ 0.0 };

		//helping variabels
		int^ deviceId{ 0 };
		int k{ 0 };
		for each (DataGridViewRow ^ row in dataGridView->Rows) {
			
			if (k == dataGridView->Rows->Count - 1) {
				break;
			}
			
			for each (DataGridViewCell ^ cell in row->Cells) {
				if (cell->OwningColumn->Name == "Client Name") {
					clientName = cell->Value->ToString();
				}
				if (cell->OwningColumn->Name == "Client Surname") {
					clientSurname = cell->Value->ToString();
				}
				if (cell->OwningColumn->Name == "Client Name") {
					clientName = cell->Value->ToString();
				}
				if (cell->OwningColumn->Name == "Device ID") {
					deviceId = Convert::ToInt32(cell->Value->ToString());
				}
				if (cell->OwningColumn->Name == "Order Status") {
					status = cell->Value->ToString();
				}
				if (cell->OwningColumn->Name == "Order Date") {
					date = cell->Value->ToString();
				}
				if (cell->OwningColumn->Name == "Order Price") {
					orderPrice = Convert::ToDouble(cell->Value->ToString());
				}
				if (cell->OwningColumn->Name == "Description") {
					description = cell->Value->ToString();
				}
			}
			int^ clientId{ 0 };

			//get Client
			String^ query = "SELECT ClientId From Clients Where ClientName = @name and ClientSurname= @surname";
			SqlCommand cmd_get_ClientId{ query,% conn };

			cmd_get_ClientId.Parameters->AddWithValue("@name", clientName);
			cmd_get_ClientId.Parameters->AddWithValue("@surname", clientSurname);

			SqlDataReader^ reader = cmd_get_ClientId.ExecuteReader();

			if (reader->Read()) {
				clientId = reader->GetInt32(0);
			}

			reader->Close();

			//get orderId

			query = "SELECT OrderId From Orders Where ClientId = @clientId and DeviceId = @ID and OrderStatus = @status and OrderPrice = @Price and Description = @des and OrderDate = @date";
			SqlCommand cmd_get_OrderId{ query,% conn };
			cmd_get_OrderId.Parameters->AddWithValue("@clientId", clientId);
			cmd_get_OrderId.Parameters->AddWithValue("@status", status);
			cmd_get_OrderId.Parameters->AddWithValue("@price", Convert::ToSingle(orderPrice));
			cmd_get_OrderId.Parameters->AddWithValue("@des", description);
			cmd_get_OrderId.Parameters->AddWithValue("@date", date);
			cmd_get_OrderId.Parameters->AddWithValue("@ID", deviceId);

			reader = cmd_get_OrderId.ExecuteReader();

			if (reader->Read()) {
				orderId = reader->GetInt32(0);
			}
			reader->Close();

			// get symptoms, comment, realization type from orders
			query = "Select Symptoms,Comments,ExpressRealization From Orders Where OrderId = @ID";
			SqlCommand cmd{ query,% conn };
			cmd.Parameters->AddWithValue("@ID", orderId);

			reader = cmd.ExecuteReader();

			if (reader->Read()) {
				symptoms = reader->GetString(0);
				comments = reader->GetString(1);
				realizationType = reader->GetInt32(2);
			}
			reader->Close();


			// get deviceSerialNumber from devices

			query = "SELECT SerialNumber From Devices WHERE DeviceId = @ID";

			SqlCommand cmd_get_serial{ query,% conn };
			cmd_get_serial.Parameters->AddWithValue("@ID", deviceId);

			reader = cmd_get_serial.ExecuteReader();

			if (reader->Read()) {
				deviceSerialNumber = reader->GetString(0);
			}
			reader->Close();

			// get deviceName, deviceModel, category, clientAdress,clientPhone,clientEmail, cost from equity
			query = "SELECT DeviceName,DeviceModel,Category,ClientAddress,ClientPhone,ClientEmail,Cost From Equity WHERE OrderId = @ID";
			SqlCommand cmd_get_equity{ query,% conn };
			cmd_get_equity.Parameters->AddWithValue("@ID", orderId);

			reader = cmd_get_equity.ExecuteReader();

			if (reader->Read()) {
				deviceName = reader->GetString(0);
				deviceModel = reader->GetString(1);
				category = reader->GetString(2);
				clientAdress = reader->GetString(3);
				clientPhone = reader->GetString(4);
				clientEmail = reader->GetString(5);
				orderCost = reader->GetDouble(6);
			}
			reader->Close();
			string realizationTypeStr{ "" };

			if (realizationType) {
				realizationTypeStr = "Standard";
			}
			else {
				realizationTypeStr = "Express";
			}

			//variables delcared below are required cause of msclr::interop::marshal_as() throwing exceptions about refering to deleted functions
			double incomeNum{ orderPrice - orderCost };
			string income{ std::to_string(incomeNum) + " PLN" };
			string pickupDate{ "To fill" };

			data.push_back(msclr::interop::marshal_as<string>(Convert::ToString(orderId)));

			data.push_back(msclr::interop::marshal_as<string>(clientName));
			data.push_back(msclr::interop::marshal_as<string>(clientSurname));
			data.push_back(msclr::interop::marshal_as<string>(clientPhone));
			data.push_back(msclr::interop::marshal_as<string>(clientEmail));
			data.push_back(msclr::interop::marshal_as<string>(clientAdress));

			data.push_back(msclr::interop::marshal_as<string>(deviceName));
			data.push_back(msclr::interop::marshal_as<string>(deviceModel));
			data.push_back(msclr::interop::marshal_as<string>(deviceSerialNumber));
			data.push_back(msclr::interop::marshal_as<string>(category));

			data.push_back(msclr::interop::marshal_as<string>(date));
			data.push_back(pickupDate);
			data.push_back(msclr::interop::marshal_as<string>(status));
			data.push_back(realizationTypeStr);
			data.push_back(msclr::interop::marshal_as<string>(description));
			data.push_back(msclr::interop::marshal_as<string>(symptoms));
			data.push_back(msclr::interop::marshal_as<string>(comments));

			data.push_back(std::to_string(orderPrice) + " PLN");
			data.push_back(std::to_string(orderCost) + " PLN");
			data.push_back(income);

			fileData.push_back(data);

			k++;
		}
		conn.Close();

		//push data into excel file

		try {
			// opening for xml file
			string s{ R"(<?xml version="1.0" encoding="UTF-8"?>
							<Workbook xmlns="urn:schemas-microsoft-com:office:spreadsheet"
									xmlns:ss="urn:schemas-microsoft-com:office:spreadsheet">
							<Worksheet ss:Name="Sheet1">
							<Table>
								<Row>
									<Cell><Data ss:Type="String">Numer zlecenia</Data></Cell>
									<Cell><Data ss:Type="String">Imie</Data></Cell>
									<Cell><Data ss:Type="String">Nazwisko</Data></Cell>
									<Cell><Data ss:Type="String">Nr. telefonu</Data></Cell>
									<Cell><Data ss:Type="String">E-mail</Data></Cell>
									<Cell><Data ss:Type="String">Adres</Data></Cell>
									<Cell><Data ss:Type="String">Nazwa urzadzenia</Data></Cell>
									<Cell><Data ss:Type="String">Model</Data></Cell>
									<Cell><Data ss:Type="String">Nr. Seryjny</Data></Cell>
									<Cell><Data ss:Type="String">Kategoria</Data></Cell>
									<Cell><Data ss:Type="String">Data przyjecia</Data></Cell>
									<Cell><Data ss:Type="String">Data oddania</Data></Cell>
									<Cell><Data ss:Type="String">Status</Data></Cell>
									<Cell><Data ss:Type="String">Typ realizacji</Data></Cell>
									<Cell><Data ss:Type="String">Opis</Data></Cell>
									<Cell><Data ss:Type="String">Okolicznosci</Data></Cell>
									<Cell><Data ss:Type="String">Uwagi</Data></Cell>
									<Cell><Data ss:Type="String">Cena</Data></Cell>
									<Cell><Data ss:Type="String">Koszt</Data></Cell>
									<Cell><Data ss:Type="String">Przychod</Data></Cell>
								</Row>

						 )" };
			// closer for .xml data
			string s_end{ R"(</Table> 
							</Worksheet>
							</Workbook>)" };

			std::ofstream out{ "Zlecenia.xml",std::ios::out | std::ios::binary }; // opening file
			out.clear();
			string pushToFile = s; // delcaring var to be put into file

			for (int i = 0; i <= fileData.size() - 1; i++) { // configuring rows' data to be put into .xml file
				string temp = R"(<Row>)"; // starting row
				for (string& text : fileData[i]) {
					temp += R"(<Cell><Data ss:Type="String">)" + text + R"(</Data></Cell>)";
				}
				pushToFile += temp;
				pushToFile += R"(</Row>)"; // ending file
			}

			pushToFile += s_end; // adding closers for table and workbook

			out << pushToFile; // pushing data into .xml file
			out.close(); // closing and saving file

			//MessageBox::Show("File printed to Zlecenia.xlsx", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ep) {
			MessageBox::Show(ep->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
	catch (Exception^ ef) {
		MessageBox::Show(ef->Message, "Error on sql connection", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
}

static void configureLogs(RichTextBox^ logs, int^ orderId) {
	//handling logs -> displaying in MyForm
	logs->Clear();
	String^ text{""};
	
	String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=false" };
	SqlConnection conn{strConn};
	conn.Open();

	String^ query = "SELECT Log FROM Logs where OrderId = @Id";
	SqlCommand cmd{ query,% conn };
	cmd.Parameters->AddWithValue("@Id", orderId);

	SqlDataReader^ reader = cmd.ExecuteReader();

	while (reader->Read()) {
		text += reader->GetString(0);
	}
	reader -> Close();

	logs->Text = text;
	logs->Update();

	conn.Close();
}


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
		String^ query;
		if (search != "") {
			query = "SELECT Orders.OrderId, Clients.ClientName, Clients.ClientSurname, Orders.EmployeeId, Orders.DeviceId, Orders.OrderStatus, Orders.OrderDate, Orders.OrderPrice, Orders.Description FROM Orders INNER JOIN Clients ON Clients.ClientId = Orders.ClientId WHERE Clients.ClientName = @text or Clients.ClientSurname = @text or Orders.OrderStatus = @text or Clients.ClientName+' '+Clients.ClientSurname=@text";
		}
		else {
			query = "SELECT Orders.OrderId,Clients.ClientName,Clients.ClientSurname,Orders.EmployeeId,Orders.DeviceId,Orders.OrderStatus,Orders.OrderDate,Orders.OrderPrice,Orders.Description FROM Orders INNER JOIN Clients ON Clients.ClientId = Orders.ClientId";
		}

		SqlCommand cmd{ query,% conn };

		if (search != "") {
			cmd.Parameters->AddWithValue("@text", search);
		}


		SqlDataReader^ reader = cmd.ExecuteReader();

		DataGridViewColumn^ column_Order_Id = gcnew DataGridViewTextBoxColumn();
		column_Order_Id->Name = "Order Id";
		column_Order_Id->HeaderText = "Order Id";
		//column_Order_Id->ValueType = System::Int32::typeid;
		dataView->Columns->Add(column_Order_Id);

		DataGridViewColumn^ column_Client_Name_Orders = gcnew DataGridViewTextBoxColumn();
		column_Client_Name_Orders->Name = "Client Name";
		column_Client_Name_Orders->HeaderText = "Client Name";
		//column_Order_Id->ValueType = System::Int32::typeid;
		dataView->Columns->Add(column_Client_Name_Orders);

		DataGridViewColumn^ column_Client_Surname_Orders = gcnew DataGridViewTextBoxColumn();
		column_Client_Surname_Orders->Name = "Client Surname";
		column_Client_Surname_Orders->HeaderText = "Client Surname";
		//column_Client_Id_Orders->ValueType = System::Int32::typeid;
		dataView->Columns->Add(column_Client_Surname_Orders);

		DataGridViewColumn^ column_Employee_Id = gcnew DataGridViewTextBoxColumn();
		column_Employee_Id->Name = "Employee ID";
		column_Employee_Id->HeaderText = "Employee ID";
		//column_Employee_Id->ValueType = System::Int32::typeid;
		dataView->Columns->Add(column_Employee_Id);


		DataGridViewColumn^ column_Device_Id_Orders = gcnew DataGridViewTextBoxColumn();
		column_Device_Id_Orders->Name = "Device ID";
		column_Device_Id_Orders->HeaderText = "Device ID";
		//column_Device_Id_Orders->ValueType = System::Int32::typeid;
		dataView->Columns->Add(column_Device_Id_Orders);

		DataGridViewColumn^ column_Order_Status = gcnew DataGridViewTextBoxColumn();
		column_Order_Status->Name = "Order Status";
		column_Order_Status->HeaderText = "Order Status";
		//column_Order_Status->ValueType = System::String::typeid;
		dataView->Columns->Add(column_Order_Status);

		DataGridViewColumn^ column_Order_Date = gcnew DataGridViewTextBoxColumn();
		column_Order_Date->Name = "Order Date";
		column_Order_Date->HeaderText = "Order Date";
		//column_Order_Date->ValueType = System::String::typeid;
		dataView->Columns->Add(column_Order_Date);

		DataGridViewColumn^ column_Order_Price = gcnew DataGridViewTextBoxColumn();
		column_Order_Price->Name = "Order Price";
		column_Order_Price->HeaderText = "Order Price";
		//column_Order_Price->ValueType = System::Single::typeid;
		dataView->Columns->Add(column_Order_Price);

		DataGridViewColumn^ column_Description = gcnew DataGridViewTextBoxColumn();
		column_Description->Name = "Description";
		column_Description->HeaderText = "Description";
		//column_Description->ValueType = System::String::typeid;
		dataView->Columns->Add(column_Description);

		// modify to allow searching via texbox in MyForm
		int i{ 0 };
		int j {0};
		bool isReaderEmpty{true};
		while (reader->Read()) {
			isReaderEmpty = false;
			DataGridViewRow^ row_color_edit;
			int^ orderId = reader->GetInt32(0);
			String^ clientName = reader->GetString(1);
			String^ clientSurname = reader->GetString(2);
			int employeeID = reader->GetInt32(3);
			int deviceID = reader->GetInt32(4);
			String^ orderStatus = reader->GetString(5);
			String^ orderDate = reader->GetString(6);
			float orderPrice = reader->GetFloat(7);
			String^ description = reader->GetString(8);


			dataView->Rows->Add(orderId,clientName,clientSurname,Convert::ToInt32(employeeID),Convert::ToInt32(deviceID),
				orderStatus,orderDate,Convert::ToSingle(orderPrice),description);
			
		}
		if (isReaderEmpty && search != "") {
			MessageBox::Show("No data found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			clearDataGridView(dataView);
			dataView->Update();
		}
		else {


			//change color of cell in status column
			for each (DataGridViewRow ^ row in dataView->Rows) {
				for each (DataGridViewCell ^ cell in row->Cells) {
					if (cell->OwningColumn->Name == "Order Status") {
						String^ status = cell->FormattedValue->ToString();
						if (status == Convert::ToString("In progress")) {
							cell->Style->BackColor = System::Drawing::Color::Yellow;
							break;
						}
						else if (status == Convert::ToString("Ready")) {
							cell->Style->BackColor = System::Drawing::Color::Lime;
							break;
						}
					}

				}
			}

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

	if (s != "") {
		query = "SELECT ClientId,ClientName,ClientSurname,ClientPhone,ClientEmail,ClientAdress FROM Clients WHERE ClientName = @text or ClientSurname = @text or ClientPhone = @text or ClientEmail = @text or ClientName+' '+ClientSurname=@text";
	}
	else {
		query = "SELECT ClientId,ClientName,ClientSurname,ClientPhone,ClientEmail,ClientAdress FROM Clients"; // Client iD like s+"%" or Client name like s+"%" or client surname like s+"%" or  client email like s+"%"
	}
	
	
	SqlCommand cmd{ query,% conn };

	if (s != "") {
		cmd.Parameters->AddWithValue("@text", s);
	}

	SqlDataReader^ reader = cmd.ExecuteReader();
	
	bool isReaderEmpty{ true };

	while (reader->Read()) {

		isReaderEmpty = false;
		int^ clientID = reader->GetInt32(0);
		String^ clientName = reader->GetString(1);
		String^ clientSurname = reader->GetString(2);
		String^ clientPhone = reader->GetString(3);
		String^ clientEmail = reader->GetString(4);
		String^ clientAdress = reader->GetString(5);

		dataView->Rows->Add(clientID, clientName, clientSurname, clientPhone, clientEmail, clientAdress);

	}
	if (isReaderEmpty && s != "") {
		MessageBox::Show("No data found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		clearDataGridView(dataView);
		dataView->Update();
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
	column_Device_Quantity->Name = "Quantity";
	column_Device_Quantity->HeaderText = "Quantity";
	dataView->Columns->Add(column_Device_Quantity);

	DataGridViewColumn^ column_Device_Serial = gcnew DataGridViewTextBoxColumn();
	column_Device_Serial->Name = "Serial Number";
	column_Device_Serial->HeaderText = "Serial Number";
	dataView->Columns->Add(column_Device_Serial);

	if (s != "") {
		query = "SELECT DeviceId,ClientId,DeviceName,DeviceModel,DeviceCategory,Quantity,SerialNumber FROM Devices WHERE DeviceName = @text or DeviceModel = @text or DeviceCategory = @text or DeviceName+' '+DeviceModel=@text";
	}
	else {
		query = "SELECT DeviceId,ClientId,DeviceName,DeviceModel,DeviceCategory,Quantity, SerialNumber FROM Devices";
	}
	
	// device iD like s+"%" or devicename like s+"%"
	SqlCommand cmd{ query,% conn };

	if (s != "") {
		cmd.Parameters->AddWithValue("@text", s);
	}

	SqlDataReader^ reader = cmd.ExecuteReader();



	bool isReaderEmpty{ true };

	while (reader->Read()) {
		isReaderEmpty = false;
		int^ deviceId = reader->GetInt32(0);
		int^ clientId = reader->GetInt32(1);
		String^ deviceName = reader->GetString(2);
		String^ deviceModel = reader->GetString(3);
		String^ deviceCategory = reader->GetString(4);
		int^ deviceQuantity = reader->GetInt32(5);
		String^ serialNumber = reader->GetString(6);

		dataView->Rows->Add(deviceId,clientId,deviceName,deviceModel,deviceCategory,deviceQuantity,serialNumber);

	}
	if (isReaderEmpty && s != "") {
		MessageBox::Show("No data found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		clearDataGridView(dataView);
		dataView->Update();
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
	
	// modify to allow searching via texbox in MyForm
	if (s != "") {
		query = "SELECT EmployeeId,EmployeeName,EmployeeSurname FROM Employees WHERE EmployeeName = @text or EmployeeSurname = @text or EmployeeName+' '+EmployeeSurname=@text";
	}
	else {
		query = "SELECT EmployeeId,EmployeeName,EmployeeSurname FROM Employees";

	}
	
	SqlCommand cmd{ query,% conn };

	if (s != "") {
		cmd.Parameters->AddWithValue("@text", s);
	}

	SqlDataReader^ reader = cmd.ExecuteReader();


	bool isReaderEmpty{ true };

	while (reader->Read()) {
		isReaderEmpty = false;
		dataView->Rows->Add(reader->GetInt32(0), reader->GetString(1),
		reader->GetString(2));

	}
	if (isReaderEmpty) {
		MessageBox::Show("No data found", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		clearDataGridView(dataView);
		dataView->Update();
	}


	dataView->Update();

	reader->Close();


	conn.Close();

}

static void displayGrid(DataGridView^ dataGridView,String^ mode,String^ text) {
	if (mode == "orders") {
		configureDataGrid_Orders(dataGridView, text);
	}
	else if (mode == "clients") {
		configureDataGrid_Clients(dataGridView, text);
	}
	else if (mode == "devices") {
		configureDataGrid_Devices(dataGridView, text);
	}
	else {
		configureDataGrid_Employees(dataGridView, text);
	}
}