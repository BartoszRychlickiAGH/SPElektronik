#pragma once
#include "balanceForm.cpp"
#include "newOrderForm.cpp"
namespace testGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms::DataVisualization;
	using namespace System::Windows::Forms::DataVisualization::Charting;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for balanceForm
	/// </summary>
	public ref class balanceForm : public System::Windows::Forms::Form
	{
	public:
		String^ mode{"day"};
		balanceForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			//configuring pie chart displaying income and cost for today
			this->chartBalance->Series->Clear();
			this->chartBalance->Titles->Clear();


			try{
				String^ today{Convert::ToString(calendar->TodayDate)};

				String^ day{""};
				String^ month{""};
				String^ year{ "" };
				int income{0};
				int costs{0};
				
				//MessageBox::Show(today,"Info",MessageBoxButtons::OK,MessageBoxIcon::Information);
				// MM/D/YYYY
				
				int i{0};
				for each (wchar_t c in today->ToCharArray()) {
					if (c == '/') {
						i++;
						continue;
					}
					if (i == 0) {
						month += c;
					}
					else if (i == 1) {
						day += c;
					}
					else {
						year += c;
					}
					if (c == ' ') {
						break;
					}
				}
				bool isReaderEmpty{true};
				String^ date_temp = day + "." + month + "." + year;

				String^ strConn{"Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False"};
				SqlConnection conn{strConn};
				conn.Open();

				String^ query{"SELECT Price,Cost From Equity Where Date=@date"};
				SqlCommand cmd{query,%conn};

				cmd.Parameters->AddWithValue("@date", getData());

				SqlDataReader^ reader = cmd.ExecuteReader();

				

				while (reader->Read()) {

					isReaderEmpty = false;

					income += static_cast<int>(reader->GetInt32(0)); // errror in static cast

					costs += static_cast<int>(reader->GetInt32(1));
					
				}

				if (isReaderEmpty) {
					// add to chart category that the was no completed orders today
					// change netIncome label to text: No income today
					isReaderEmpty = false;

					

					Series^ empty_series = gcnew Series();

					empty_series->ChartType = SeriesChartType::Pie;

					empty_series->Points->AddXY("No completed orders today", 100);

					for each (DataPoint ^ p in empty_series->Points) {
						p->Color = Color::Gray;
						p->LegendText = "No data";
						break;
					}


					this->chartBalance->Series->Add(empty_series);

					this->llNetIncome->Text = Convert::ToString("Net income: No orders completed today");
					return;
				}

				//setting chart
				Series^ series = gcnew Series();

				series->Name = "Capital";

				series->ChartType = SeriesChartType::Pie; // setting chart type to pie

				// declaration of points
				DataPoint^ dp_income = gcnew DataPoint();
				DataPoint^ dp_costs = gcnew DataPoint();
				

				// setting XY values for points

				dp_income->AxisLabel = Convert::ToString((income - costs) / income * 100) + "%"; // income
				dp_income->YValues = gcnew array<double>{(income - costs) / income};

				dp_costs->AxisLabel = Convert::ToString(costs / income * 100) + "%"; // costs
				dp_costs->YValues = gcnew array<double>{costs / income};


				//setting points' colors
				dp_income->Color = Color::LightGreen;
				dp_costs->Color = Color::MediumVioletRed;
				
				//setting points' legend name
				dp_income->LegendText = "Income = " + Convert::ToString(income - costs) + " PLN";
				dp_costs->LegendText = "Costs = " + Convert::ToString(costs) + " PLN";

				//adding points to series
				series->Points->Add(dp_income);
				series->Points->Add(dp_costs);
				
				
				//adding series to chart
				this->chartBalance->Series->Clear();
				this->chartBalance->Series->Add(series);


				//configuring chart title
				this->chartBalance->Titles->Clear();
				this->chartBalance->Titles->Add("Today balance chart"); // [DONE]
				
				for each (Title ^ title in this->chartBalance->Titles) {

					System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 18, FontStyle::Bold);
					title->Font = font;

					break;
				}

				i = 0;
				

				
				this->llNetIncome->Text = Convert::ToString("Net income: " + Convert::ToString(income) + " PLN");
				this->chartBalance->Update();

				conn.Close();
			}catch(Exception^ ei){
				MessageBox::Show(ei->Message,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
				return;
			}

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~balanceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chartBalance;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MonthCalendar^ calendar;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::RadioButton^ radioDay;
	private: System::Windows::Forms::RadioButton^ radioMonth;
	private: System::Windows::Forms::RadioButton^ radioYear;
	private: System::Windows::Forms::Label^ llNetIncome;
private: System::Windows::Forms::Button^ btnReset;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chartBalance = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->calendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->radioDay = (gcnew System::Windows::Forms::RadioButton());
			this->radioMonth = (gcnew System::Windows::Forms::RadioButton());
			this->radioYear = (gcnew System::Windows::Forms::RadioButton());
			this->llNetIncome = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartBalance))->BeginInit();
			this->SuspendLayout();
			// 
			// chartBalance
			// 
			this->chartBalance->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chartBalance->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chartBalance->Legends->Add(legend1);
			this->chartBalance->Location = System::Drawing::Point(12, 94);
			this->chartBalance->Name = L"chartBalance";
			this->chartBalance->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chartBalance->Series->Add(series1);
			this->chartBalance->Size = System::Drawing::Size(933, 515);
			this->chartBalance->TabIndex = 0;
			this->chartBalance->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(982, 47);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Balance";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// calendar
			// 
			this->calendar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->calendar->Location = System::Drawing::Point(970, 94);
			this->calendar->Name = L"calendar";
			this->calendar->TabIndex = 5;
			this->calendar->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &balanceForm::monthCalendar1_DateChanged);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(963, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(304, 46);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Choose Date:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnExit
			// 
			this->btnExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnExit->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExit->Location = System::Drawing::Point(970, 631);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(262, 85);
			this->btnExit->TabIndex = 7;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &balanceForm::btnExit_Click);
			// 
			// btnOK
			// 
			this->btnOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnOK->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOK->Location = System::Drawing::Point(970, 463);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(262, 77);
			this->btnOK->TabIndex = 8;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &balanceForm::btnOK_Click);
			// 
			// radioDay
			// 
			this->radioDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioDay->Location = System::Drawing::Point(970, 346);
			this->radioDay->Name = L"radioDay";
			this->radioDay->Size = System::Drawing::Size(185, 33);
			this->radioDay->TabIndex = 9;
			this->radioDay->TabStop = true;
			this->radioDay->Text = L"Day";
			this->radioDay->UseVisualStyleBackColor = true;
			this->radioDay->CheckedChanged += gcnew System::EventHandler(this, &balanceForm::radioDay_CheckedChanged);
			// 
			// radioMonth
			// 
			this->radioMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioMonth->Location = System::Drawing::Point(970, 385);
			this->radioMonth->Name = L"radioMonth";
			this->radioMonth->Size = System::Drawing::Size(210, 33);
			this->radioMonth->TabIndex = 10;
			this->radioMonth->TabStop = true;
			this->radioMonth->Text = L"Month";
			this->radioMonth->UseVisualStyleBackColor = true;
			this->radioMonth->CheckedChanged += gcnew System::EventHandler(this, &balanceForm::radioMonth_CheckedChanged);
			// 
			// radioYear
			// 
			this->radioYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->radioYear->Location = System::Drawing::Point(970, 424);
			this->radioYear->Name = L"radioYear";
			this->radioYear->Size = System::Drawing::Size(217, 33);
			this->radioYear->TabIndex = 11;
			this->radioYear->TabStop = true;
			this->radioYear->Text = L"Annual";
			this->radioYear->UseVisualStyleBackColor = true;
			this->radioYear->CheckedChanged += gcnew System::EventHandler(this, &balanceForm::radioYear_CheckedChanged);
			// 
			// llNetIncome
			// 
			this->llNetIncome->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->llNetIncome->Location = System::Drawing::Point(16, 637);
			this->llNetIncome->Name = L"llNetIncome";
			this->llNetIncome->Size = System::Drawing::Size(929, 72);
			this->llNetIncome->TabIndex = 12;
			this->llNetIncome->Text = L"Net Income:";
			this->llNetIncome->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnReset->Location = System::Drawing::Point(970, 546);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(262, 79);
			this->btnReset->TabIndex = 13;
			this->btnReset->Text = L"Reset";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &balanceForm::btnReset_Click);
			// 
			// balanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1264, 731);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->llNetIncome);
			this->Controls->Add(this->radioYear);
			this->Controls->Add(this->radioMonth);
			this->Controls->Add(this->radioDay);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->calendar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chartBalance);
			this->Name = L"balanceForm";
			this->Text = L"Balance";
			this->Load += gcnew System::EventHandler(this, &balanceForm::balanceForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chartBalance))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void monthCalendar1_DateChanged(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
	}

private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {

		this->chartBalance->Series->Clear();
		this->chartBalance->Titles->Clear();

	try{
		this->chartBalance->Series->Clear();
		String^ date = calendar->SelectionStart.ToString("yyyy-MM-dd");
		String^ display_date{}; // this variable will be set based on selected date and chosen mode
		String^ day{ "" };
		String^ month{ "" };
		String^ year{ "" };

		//message box to show selected date
		//MessageBox::Show(date,"Info",MessageBoxButtons::OK,MessageBoxIcon::Information);
		

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


		Series^ series = gcnew Series();

		series->Name = "Capital";

		this->chartBalance->Series->Add(series);
		String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
		SqlConnection conn{ strConn };
		conn.Open();
		i = 0;
		int income{ 0 }, costs{ 0 };
		bool isReaderEmpty{ true };


		for each (Series ^ s in this->chartBalance->Series) {
			
			
			if (mode == "day") {
				// pie chart
				s->ChartType = SeriesChartType::Pie;


				//configuring chart title
				this->chartBalance->Titles->Clear();

				this->chartBalance->Titles->Add("Daily balance chart for selected: "+day); // [DONE]

				for each (Title ^ title in this->chartBalance->Titles) {

					System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 18, FontStyle::Bold);
					title->Font = font;

					break;
				}

				

                String^ query{"SELECT Price,Cost From Equity Where TRIM(Date)=@date"};
                SqlCommand cmd{query, %conn};

                string dayTempDate = msclr::interop::marshal_as<string>(day);
                dayTempDate.push_back('.');
                dayTempDate += msclr::interop::marshal_as<string>(month);
                dayTempDate.push_back('.');
                dayTempDate += msclr::interop::marshal_as<string>(year);

                cmd.Parameters->AddWithValue("@date", msclr::interop::marshal_as<String^>(dayTempDate));

                SqlDataReader^ reader = cmd.ExecuteReader();

                while (reader->Read()) {
                    isReaderEmpty = false;

					income += static_cast<int>(reader->GetInt32(0)); // errror in static cast

					costs += static_cast<int>(reader->GetInt32(1));
                }
				reader->Close();

				if (isReaderEmpty) {

					Series^ empty_series = gcnew Series();

					empty_series->ChartType = SeriesChartType::Pie;

					empty_series->Points->AddXY("No completed orders today", 100);

					for each (DataPoint ^ p in empty_series->Points) {
						p->Color = Color::Gray;
						p->LegendText = "No data";
						break;
					}


					this->chartBalance->Series->Add(empty_series);

					this->llNetIncome->Text = Convert::ToString("Net income: No orders completed today");
					return;
				}

				//setting chart
				Series^ series = gcnew Series();

				series->Name = "Capital";

				series->ChartType = SeriesChartType::Pie; // setting chart type to pie

				// declaration of points
				DataPoint^ dp_income = gcnew DataPoint();
				DataPoint^ dp_costs = gcnew DataPoint();


				// setting XY values for points

				dp_income->AxisLabel = Convert::ToString((income - costs) / income * 100) + "%"; // income
				dp_income->YValues = gcnew array<double>{(income - costs) / income};

				dp_costs->AxisLabel = Convert::ToString(costs / income * 100) + "%"; // costs
				dp_costs->YValues = gcnew array<double>{costs / income};


				//setting points' colors
				dp_income->Color = Color::LightGreen;
				dp_costs->Color = Color::MediumVioletRed;

				//setting points' legend name
				dp_income->LegendText = "Income = " + Convert::ToString(income - costs) + " PLN";
				dp_costs->LegendText = "Costs = " + Convert::ToString(costs) + " PLN";

				//adding points to series
				series->Points->Add(dp_income);
				series->Points->Add(dp_costs);


				//adding series to chart
				this->chartBalance->Series->Clear();
				this->chartBalance->Series->Add(series);


				this->llNetIncome->Text = Convert::ToString("Net income: " + Convert::ToString(income) + " PLN");
				conn.Close();

			}
			else if (mode == "month") {

				//set chart title

				this->chartBalance->Titles->Clear();




				if (month == "1") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: January");
				}
				else if (month == "2") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: February");
				}
				else if (month == "3") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: March ");
				}
				else if (month == "4") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: April");
				}
				else if (month == "5") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: May");
				}
				else if (month == "6") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: June");
				}
				else if (month == "7") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: July");
				}
				else if (month == "8") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: August");
				}
				else if (month == "9") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: September");
				}
				else if (month == " 10") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: October");
				}
				else if (month == "11") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: November");
				}
				else if (month == "12") {
					this->chartBalance->Titles->Add("Monthly balance chart for selected: December");
				}







				for each (Title ^ title in this->chartBalance->Titles) {

					System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 18, FontStyle::Bold);
					title->Font = font;

					break;
				}




				s->ChartType = SeriesChartType::Pie;

				String^ query{ "SELECT Price,Cost From Equity Where Date like '%'+@date" };
				SqlCommand cmd{ query,% conn };

				cmd.Parameters->AddWithValue("@date", month + "."+year);

				SqlDataReader^ reader = cmd.ExecuteReader();


				while (reader->Read()) {

					isReaderEmpty = false;

					income += static_cast<int>(reader->GetInt32(0)); // errror in static cast

					costs += static_cast<int>(reader->GetInt32(1));

				}

				if (isReaderEmpty) {

					Series^ empty_series = gcnew Series();

					empty_series->ChartType = SeriesChartType::Pie;

					empty_series->Points->AddXY("No completed orders today", 100);

					for each (DataPoint ^ p in empty_series->Points) {
						p->Color = Color::Gray;
						p->LegendText = "No data";
						break;
					}


					this->chartBalance->Series->Add(empty_series);

					this->llNetIncome->Text = Convert::ToString("Net income: No orders completed today");
					return;
				}

				//setting chart
				Series^ series = gcnew Series();

				series->Name = "Capital";

				series->ChartType = SeriesChartType::Pie; // setting chart type to pie

				// declaration of points
				DataPoint^ dp_income = gcnew DataPoint();
				DataPoint^ dp_costs = gcnew DataPoint();


				// setting XY values for points

				dp_income->AxisLabel = Convert::ToString((income - costs) / income * 100) + "%"; // income
				dp_income->YValues = gcnew array<double>{(income - costs) / income};

				dp_costs->AxisLabel = Convert::ToString(costs / income * 100) + "%"; // costs
				dp_costs->YValues = gcnew array<double>{costs / income};


				//setting points' colors
				dp_income->Color = Color::LightGreen;
				dp_costs->Color = Color::MediumVioletRed;

				//setting points' legend name
				dp_income->LegendText = "Income = " + Convert::ToString(income - costs) + " PLN";
				dp_costs->LegendText = "Costs = " + Convert::ToString(costs) + " PLN";

				//adding points to series
				series->Points->Add(dp_income);
				series->Points->Add(dp_costs);

				//adding series to chart
				this->chartBalance->Series->Clear();
				this->chartBalance->Series->Add(series);


				//configuring chart title
	
				this->llNetIncome->Text = Convert::ToString("Net income: " + Convert::ToString(income) + " PLN");
				

			}
			else {
				// column chart
				s->ChartType = SeriesChartType::Pie;

				this->chartBalance->Titles->Clear();

				this->chartBalance->Titles->Add("Annual balance chart for selected: " + year); // [DONE]

				for each (Title ^ title in this->chartBalance->Titles) {

					System::Drawing::Font^ font = gcnew System::Drawing::Font("Arial", 18, FontStyle::Bold);
					title->Font = font;

					break;
				}


				String^ query{ "SELECT Price,Cost From Equity Where Date like '%'+@date" };
				SqlCommand cmd{ query,% conn };

				cmd.Parameters->AddWithValue("@date", Convert::ToString(year));

				SqlDataReader^ reader = cmd.ExecuteReader();


				while (reader->Read()) {

					isReaderEmpty = false;

					income += static_cast<int>(reader->GetInt32(0)); // errror in static cast

					costs += static_cast<int>(reader->GetInt32(1));

				}

				if (isReaderEmpty) {

					Series^ empty_series = gcnew Series();

					empty_series->ChartType = SeriesChartType::Pie;

					empty_series->Points->AddXY("No completed orders today", 100);

					for each (DataPoint ^ p in empty_series->Points) {
						p->Color = Color::Gray;
						p->LegendText = "No data";
						break;
					}


					this->chartBalance->Series->Add(empty_series);

					this->llNetIncome->Text = Convert::ToString("Net income: No orders completed today");
					return;
				}

				//setting chart
				Series^ series = gcnew Series();

				series->Name = "Capital";

				series->ChartType = SeriesChartType::Pie; // setting chart type to pie

				// declaration of points
				DataPoint^ dp_income = gcnew DataPoint();
				DataPoint^ dp_costs = gcnew DataPoint();


				// setting XY values for points

				dp_income->AxisLabel = Convert::ToString((income - costs) / income * 100) + "%"; // income
				dp_income->YValues = gcnew array<double>{(income - costs) / income};

				dp_costs->AxisLabel = Convert::ToString(costs / income * 100) + "%"; // costs
				dp_costs->YValues = gcnew array<double>{costs / income};


				//setting points' colors
				dp_income->Color = Color::LightGreen;
				dp_costs->Color = Color::MediumVioletRed;

				//setting points' legend name
				dp_income->LegendText = "Income = " + Convert::ToString(income - costs) + " PLN";
				dp_costs->LegendText = "Costs = " + Convert::ToString(costs) + " PLN";

				//adding points to series
				series->Points->Add(dp_income);
				series->Points->Add(dp_costs);

				//adding series to chart
				this->chartBalance->Series->Clear();
				this->chartBalance->Series->Add(series);


				//configuring chart title



				this->llNetIncome->Text = Convert::ToString("Net income: " + Convert::ToString(income) + " PLN");


			}

			this->llNetIncome->Update();
			this->chartBalance->Update();
			
			break;
		}
		conn.Close();

	}
	catch (Exception^ eb) {
		MessageBox::Show(eb->Message,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
		return;
	}

}

	   //functions to change chart displaying mode based on date format, which is manipulated by radio buttons
private: System::Void radioDay_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	mode = "day";
}
private: System::Void radioMonth_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	mode = "month";
}
private: System::Void radioYear_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	mode = "year";
}
private: System::Void balanceForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
	SqlConnection conn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
	conn.Open();


	String^ query = "Delete From Equity";
	SqlCommand cmd{ query,% conn };

	cmd.ExecuteNonQuery();

	conn.Close();
}
};
}
