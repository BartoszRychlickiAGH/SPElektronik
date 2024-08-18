#include "includings.h"
#include <msclr/marshal_cppstd.h>
#include <cstdlib>
#include <map>

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Windows::Forms;
using std::map, std::pair;


static bool isText(String^ input) { // this function check if given input is a text

	string text{ "" };

	text = msclr::interop::marshal_as<string>(input);

	for (char c : text) {
		if (!isalpha(c)) {
			return false;
		}
	}

	return true;
}
static bool isMoney(String^ input) {
	string text{ msclr::interop::marshal_as<string>(input) };


	if (regex_match(text, regex("^[0-9]+\.[0-9]{2}$"))) {
		return true;
	}

	return false;
}


static bool isNumber(String^ input) { // this function check if given input is a number

	string text{ msclr::interop::marshal_as<string>(input) };

	for (char c : text) {
		if (!isdigit(c)) {
			return true;
		}
	}

	return false;
}

static bool isEmail(String^ input) { // this function check if given input is an email address
	string text{ msclr::interop::marshal_as<string>(input) };

	if (regex_match(text, regex("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$"))) {
		return true;
	}

	return false;
}

//void SelectFromDB() {}


static bool employeeIDExist(String^ employeeId) {
	bool exist{};
	int^ ID{};
	if (isNumber(employeeId)) {
		return false;
	}
	ID = Convert::ToInt32(employeeId);
	try {
		String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
		SqlConnection conn{ strConn };
		conn.Open();

		String^ query = "SELECT Count(EmployeeName) FROM Employees WHERE employeeID = @ID";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@ID", ID);

		SqlDataReader^ reader = cmd.ExecuteReader();

		if (reader->Read()) {
			exist = reader->GetInt32(0);
		}
		reader->Close();

		conn.Close();
	}
	catch (Exception^ e) {
		return true;
	}
	return !exist;
}

static bool deviceExist(String^ deviceName, String^ deviceModel) {
	int number{};
	bool exist{};
	try {
		String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
		SqlConnection conn{ strConn };
		conn.Open();

		String^ query = "SELECT Count(DeviceId) FROM Devices WHERE DeviceName = @deviceName AND DeviceModel = @deviceModel";
		SqlCommand cmd{ query,% conn };
		cmd.Parameters->AddWithValue("@deviceName", deviceName);
		cmd.Parameters->AddWithValue("@deviceModel", deviceModel);

		SqlDataReader^ reader = cmd.ExecuteReader();

		if (reader->Read()) {
			number =  reader->GetInt32(0);
		}

		if (number == 1) {
			exist = true;
		}
		else {
			exist = false;
		}

		reader->Close();
		conn.Close();

	}
	catch (Exception^ ed) {
		MessageBox::Show(ed->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		exist = true;
	}
	return exist;
}

static bool clientExist(int^ iD = 0, String^ name = "", String^ surname = "", String^ email = "") {

	try {
		String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
		SqlConnection conn{ strConn };
		conn.Open();

		String^ query;
		SqlDataReader^ reader;
		if (iD != 0) {
			query = "SELECT Count(ClientAdress) From Clients Where CLientId = @ID";
			SqlCommand cmd{query,%conn};
			
			cmd.Parameters->AddWithValue("@ID", iD);
			
			reader = cmd.ExecuteReader();
		}
		else if (email != "") {
			query = "SELECT Count(ClientAdress) From Clients Where ClientEmail = @Email";
			
			SqlCommand cmd{query,%conn};
			cmd.Parameters->AddWithValue("@Email", email);

			reader = cmd.ExecuteReader();
		}
		else if (name != "" && surname != "") {
			query = "SELECT Count(ClientAdress) From Clients Where ClientName = @Name AND ClientSurname = @Surname";
			SqlCommand cmd{query,%conn};

			cmd.Parameters->AddWithValue("@Name", name);
			cmd.Parameters->AddWithValue("@Surname", surname);

			reader = cmd.ExecuteReader();
		}
		if (reader->Read()) {
			return !reader->GetInt32(0);
		}

		reader->Close();
		conn.Close();
	}
	catch (Exception^ e) {
		MessageBox::Show(e->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return true;
	}
	return true;
}

static String^ getData() {
	String^ date;
	//write code to get current time
	{
		map<string, string> mapa;

		mapa.insert(pair<string, string>("Jan", "1"));
		mapa.insert(pair<string, string>("Feb", "2"));
		mapa.insert(pair<string, string>("Mar", "3"));
		mapa.insert(pair<string, string>("Apr", "4"));
		mapa.insert(pair<string, string>("May", "5"));
		mapa.insert(pair<string, string>("Jun", "6"));
		mapa.insert(pair<string, string>("Jul", "7"));
		mapa.insert(pair<string, string>("Aug", "8"));
		mapa.insert(pair<string, string>("Sep", "9"));
		mapa.insert(pair<string, string>("Oct", "10"));
		mapa.insert(pair<string, string>("Nov", "11"));
		mapa.insert(pair<string, string>("Dec", "12"));


		string s{}, month{}, day{}, year{}; // variables to store current time

		time_t c_time = time(nullptr);
		string current_time = std::asctime(std::localtime(&c_time));

		//cout << current_time << endl;

		s.push_back(current_time[4]), s.push_back(current_time[5]);  s.push_back(current_time[6]);
		//cout << s << endl;


		for (auto it = mapa.begin(); it != mapa.end(); ++it) {
			if (it->first == s) {
				month = it->second;
			}
		}


		day.push_back(current_time[8]);
		day.push_back(current_time[9]);

		for (int i = 20; i <= 23; i++) {
			year.push_back(current_time[i]);
		}
		string date1 = day + "." + month + "." + year;

		date = gcnew String(date1.c_str());
	}

	return date;
}