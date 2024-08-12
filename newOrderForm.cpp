#include "includings.h"
#include <msclr/marshal_cppstd.h>


using namespace System;

static bool isText(String^ input) { // this function check if given input is a text
	
	string text{""};

	text = msclr::interop::marshal_as<string>(input);
	
	for(char c: text) {
		if(!isalpha(c)) {
			return false;
		}
	}

	return true;
}

static bool isNumber(String^ input) { // this function check if given input is a number

	string text{msclr::interop::marshal_as<string>(input)};

	for (char c : text) {
		if(!isdigit(c)) {
			return false;
		}
	}

	return true;
}

static bool isEmail(String^ input) { // this function check if given input is an email address
	string text{msclr::interop::marshal_as<string>(input)};

	if (!regex_match(text, regex("+[@]+[.]+"))) {
		return false;
	}

	return true;
}

//void SelectFromDB() {}


static bool employeeIDExist(String^ employeeId) {
	bool exist{};
	int ID{};
	if (!isNumber(employeeId)) {
		return false;
	}
	ID = Convert::ToInt32(employeeId);
	try {
		String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
		SqlConnection conn{ strConn };
		conn.Open();

		String^ query = "SELECT Count(EmployeeName) FROM Employees WHERE employeeID = @ID";
		SqlCommand cmd{query,%conn};
		cmd.Parameters->AddWithValue("@ID", ID);

		SqlDataReader^ reader = cmd.ExecuteReader();

		if (reader->Read()) {
			exist = reader->GetInt32(0);
		}
		reader->Close();

		conn.Close();
	}catch (Exception^ e) {
		return false;
	}
	return !exist;
}