
#pragma once

#include <regex>
#include <string>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <Windows.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::SqlClient;

using std::regex, std::regex_match, std::string;


//namespace Logs {
//	static void addToLogs(String^ description, int^ orderId, int^ employeeId) {
//		try {
//			String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=logs;Integrated Security=False" };
//			SqlConnection conn{ strConn };
//			conn.Open();
//
//			String^ query = "INSERT INTO @orderid (Description,EmployeeId,Date) VALUES (@description,@employeeId,@date)";
//			SqlCommand cmd_insert{ query,% conn };
//			cmd_insert.Parameters->AddWithValue("@description", description);
//			cmd_insert.Parameters->AddWithValue("@employeeId", employeeId);
//			cmd_insert.Parameters->AddWithValue("@date", Convert::ToString(DateTime::Now));
//			cmd_insert.Parameters->AddWithValue("@orderid", orderId);
//
//			cmd_insert.ExecuteNonQuery();
//
//			conn.Close();
//		}
//		catch (Exception^ el) {
//			MessageBox::Show("Error in adding to logs", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
//			return;
//		}
//
//	}
//
//
//	static void deleteTable(int^ ID) {
//		String^ logsCnn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=logs;Integrated Security=False" };
//		SqlConnection logs_conn{ logsCnn };
//		logs_conn.Open();
//		String^ query = "DROP TABLE @ID";
//		SqlCommand cmd_drop{ query,% logs_conn };
//		cmd_drop.Parameters->AddWithValue("@ID", ID);
//
//		cmd_drop.ExecuteNonQuery();
//
//		logs_conn.Close();
//	}
//
//}