
#pragma once
using namespace System;
using namespace System::Windows::Forms;
using namespace System::ComponentModel;
using namespace System::Collections;

static void configureDate(String^ date,String^ day,String^ month,String^ year) {
	int i{ 0 };


	for each (wchar_t c in date->ToCharArray()) {
		if (c == '-') {
			i++;
			continue;
		}
		if (i == 0) {
			year += c;
		}
		else if (i == 1) {
			month += c;
		}
		else {
			day += c;
		}
	}

	{
		// checking if selected month or selected day is less than 10 cause of format, in database number of month or number of day is represented in a single number but day,month store Strings that can store 0X number where X is less than 10
		int j{ 0 };
		int dayInt{ Convert::ToInt32(day) };
		int monthInt{ Convert::ToInt32(month) };
		if (dayInt < 10) {
			for each (wchar_t c in day->ToCharArray()) {
				if (j == 1) {
					String^ temp = Convert::ToString(c);
					day = temp;
				}
				j++;
			}

		}
		if (monthInt < 10) {
			j = 0;
			for each (wchar_t c in month->ToCharArray()) {
				if (j == 1) {
					String^ temp = Convert::ToString(c);
					month = temp;
				}
				j++;
			}

		}
	}





}
