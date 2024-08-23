#pragma once

namespace testGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for balanceForm
	/// </summary>
	public ref class balanceForm : public System::Windows::Forms::Form
	{
	public:
		balanceForm(void)
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
			this->chartBalance->Location = System::Drawing::Point(12, 59);
			this->chartBalance->Name = L"chartBalance";
			this->chartBalance->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chartBalance->Series->Add(series1);
			this->chartBalance->Size = System::Drawing::Size(833, 446);
			this->chartBalance->TabIndex = 0;
			this->chartBalance->Text = L"chart1";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(833, 47);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Balance";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// calendar
			// 
			this->calendar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->calendar->Location = System::Drawing::Point(851, 59);
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
			this->label3->Location = System::Drawing::Point(851, 10);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(262, 46);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Choose Date:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnExit->Location = System::Drawing::Point(851, 420);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(262, 85);
			this->btnExit->TabIndex = 7;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &balanceForm::btnExit_Click);
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOK->Location = System::Drawing::Point(851, 337);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(262, 77);
			this->btnOK->TabIndex = 8;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &balanceForm::btnOK_Click);
			// 
			// balanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1115, 514);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->calendar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->chartBalance);
			this->Name = L"balanceForm";
			this->Text = L"Balance";
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


}
};
}
