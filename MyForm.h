#pragma once

#include "Includings.h"
#include "MyForm.cpp"
#include "newOrderForm.h"


namespace testGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();

			clearDataGridView(this->dataGridView);
			configureDataGrid_Orders(this->dataGridView,tbSearch->Text);

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripContainer^ toolStripContainer1;
	private: System::Windows::Forms::CheckedListBox^ filters;
	private: System::Windows::Forms::DataGridView^ dataGridView;

	protected:


	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ newOrderBtn;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripDropDownButton^ showAllMenu;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;


	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^ exitBtn;

	private: System::Windows::Forms::ToolStripMenuItem^ ordersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ usersToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ devicesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripDropDownButton^ BalanceMenu;
	private: System::Windows::Forms::ToolStripMenuItem^ dayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ monthToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ annualToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ employeesToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip2;
	private: System::Windows::Forms::ToolStripLabel^ toolStripLabel1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripTextBox^ tbSearch;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;

	private: System::ComponentModel::IContainer^ components;








	protected:







	protected:


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		/// 
		// ContextMenuStrip^ contextMenuStrip1;

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
			this->filters = (gcnew System::Windows::Forms::CheckedListBox());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tbSearch = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->newOrderBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->showAllMenu = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->ordersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->devicesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->employeesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->BalanceMenu = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->dayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->monthToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->annualToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->toolStrip2->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->filters);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->dataGridView);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(708, 518);
			this->toolStripContainer1->Location = System::Drawing::Point(12, 12);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(708, 549);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->BackColor = System::Drawing::Color::PaleTurquoise;
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStrip2);
			this->toolStripContainer1->TopToolStripPanel->Click += gcnew System::EventHandler(this, &MyForm::toolStripContainer1_TopToolStripPanel_Click);
			// 
			// filters
			// 
			this->filters->FormattingEnabled = true;
			this->filters->Location = System::Drawing::Point(0, 10);
			this->filters->Name = L"filters";
			this->filters->Size = System::Drawing::Size(158, 514);
			this->filters->TabIndex = 1;
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->ContextMenuStrip = this->contextMenuStrip1;
			this->dataGridView->Location = System::Drawing::Point(164, 10);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(541, 511);
			this->dataGridView->TabIndex = 0;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			// 
			// toolStrip2
			// 
			this->toolStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripLabel1,
					this->toolStripSeparator4, this->tbSearch, this->toolStripSeparator5
			});
			this->toolStrip2->Location = System::Drawing::Point(4, 0);
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->Size = System::Drawing::Size(183, 27);
			this->toolStrip2->TabIndex = 1;
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(56, 24);
			this->toolStripLabel1->Text = L"Search:";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(6, 27);
			// 
			// tbSearch
			// 
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(100, 27);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 27);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->newOrderBtn, this->toolStripSeparator1,
					this->showAllMenu, this->toolStripSeparator2, this->BalanceMenu, this->toolStripSeparator3, this->exitBtn
			});
			this->toolStrip1->Location = System::Drawing::Point(369, 9);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(309, 31);
			this->toolStrip1->TabIndex = 0;
			// 
			// newOrderBtn
			// 
			this->newOrderBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->newOrderBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newOrderBtn.Image")));
			this->newOrderBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newOrderBtn->Name = L"newOrderBtn";
			this->newOrderBtn->Size = System::Drawing::Size(85, 28);
			this->newOrderBtn->Text = L"New Order";
			this->newOrderBtn->Click += gcnew System::EventHandler(this, &MyForm::newOrderBtn_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 31);
			// 
			// showAllMenu
			// 
			this->showAllMenu->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->showAllMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ordersToolStripMenuItem,
					this->usersToolStripMenuItem, this->devicesToolStripMenuItem, this->employeesToolStripMenuItem
			});
			this->showAllMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"showAllMenu.Image")));
			this->showAllMenu->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->showAllMenu->Name = L"showAllMenu";
			this->showAllMenu->Size = System::Drawing::Size(81, 28);
			this->showAllMenu->Text = L"Show All";
			// 
			// ordersToolStripMenuItem
			// 
			this->ordersToolStripMenuItem->Name = L"ordersToolStripMenuItem";
			this->ordersToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->ordersToolStripMenuItem->Text = L"Orders";
			this->ordersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ordersToolStripMenuItem_Click);
			// 
			// usersToolStripMenuItem
			// 
			this->usersToolStripMenuItem->Name = L"usersToolStripMenuItem";
			this->usersToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->usersToolStripMenuItem->Text = L"Clients";
			this->usersToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::usersToolStripMenuItem_Click);
			// 
			// devicesToolStripMenuItem
			// 
			this->devicesToolStripMenuItem->Name = L"devicesToolStripMenuItem";
			this->devicesToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->devicesToolStripMenuItem->Text = L"Devices";
			this->devicesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::devicesToolStripMenuItem_Click);
			// 
			// employeesToolStripMenuItem
			// 
			this->employeesToolStripMenuItem->Name = L"employeesToolStripMenuItem";
			this->employeesToolStripMenuItem->Size = System::Drawing::Size(164, 26);
			this->employeesToolStripMenuItem->Text = L"Employees";
			this->employeesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::employeesToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 31);
			// 
			// BalanceMenu
			// 
			this->BalanceMenu->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->dayToolStripMenuItem,
					this->monthToolStripMenuItem, this->annualToolStripMenuItem
			});
			this->BalanceMenu->Name = L"BalanceMenu";
			this->BalanceMenu->Size = System::Drawing::Size(75, 28);
			this->BalanceMenu->Text = L"Balance";
			// 
			// dayToolStripMenuItem
			// 
			this->dayToolStripMenuItem->Name = L"dayToolStripMenuItem";
			this->dayToolStripMenuItem->Size = System::Drawing::Size(138, 26);
			this->dayToolStripMenuItem->Text = L"Day";
			this->dayToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dayToolStripMenuItem_Click);
			// 
			// monthToolStripMenuItem
			// 
			this->monthToolStripMenuItem->Name = L"monthToolStripMenuItem";
			this->monthToolStripMenuItem->Size = System::Drawing::Size(138, 26);
			this->monthToolStripMenuItem->Text = L"Month";
			this->monthToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::monthToolStripMenuItem_Click);
			// 
			// annualToolStripMenuItem
			// 
			this->annualToolStripMenuItem->Name = L"annualToolStripMenuItem";
			this->annualToolStripMenuItem->Size = System::Drawing::Size(138, 26);
			this->annualToolStripMenuItem->Text = L"Annual";
			this->annualToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::annualToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 31);
			// 
			// exitBtn
			// 
			this->exitBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->exitBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitBtn.Image")));
			this->exitBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(37, 28);
			this->exitBtn->Text = L"Exit";
			this->exitBtn->Click += gcnew System::EventHandler(this, &MyForm::exitBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(732, 573);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->toolStripContainer1);
			this->Name = L"MyForm";
			this->Text = L"Main Interface";
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->PerformLayout();
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->toolStrip2->ResumeLayout(false);
			this->toolStrip2->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//loading toolstripcontainer
private: System::Void toolStripContainer1_ContentPanel_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripContainer1_ContentPanel_Load_1(System::Object^ sender, System::EventArgs^ e) {
}


//exit button
private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

//useless function
private: System::Void toolStripContainer1_TopToolStripPanel_Click(System::Object^ sender, System::EventArgs^ e) {
}



//show all
private: System::Void usersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	clearDataGridView(this->dataGridView);
	configureDataGrid_Clients(this->dataGridView,tbSearch->Text);
}
private: System::Void newOrderBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();

	newOrderForm newOrder;
	newOrder.ShowDialog();

	this->Show();

}
private: System::Void ordersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	clearDataGridView(this->dataGridView);
	configureDataGrid_Orders(this->dataGridView,tbSearch->Text);
}
private: System::Void devicesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	clearDataGridView(this->dataGridView);
	configureDataGrid_Devices(this->dataGridView,tbSearch->Text);
}



//balance
private: System::Void dayToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void monthToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void annualToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}


	private: System::Void contextMenuStrip1_Opening(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
private: System::Void employeesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	clearDataGridView(this->dataGridView);
	configureDataGrid_Employees(this->dataGridView,tbSearch->Text);
}
};
}

