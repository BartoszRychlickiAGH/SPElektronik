#pragma once


#include "MyForm.cpp"
#include "newOrderForm.h"
#include <vector>
#include "EditOrder.h"
#include "EditDevice.h"
#include "EditClient.h"
#include "balanceForm.h"

namespace testGUI {


	using std::vector;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		String^ mode = "orders";
		MyForm(void)
		{
			InitializeComponent();

			clearDataGridView(this->dataGridView);

			try {
				
				configureDataGrid_Orders(this->dataGridView, tbSearch->Text);
				

			}catch(Exception^ edy) {
				MessageBox::Show(edy->Message);
				return;
			}
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




	private: System::Windows::Forms::ToolStripMenuItem^ employeesToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip2;

	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator4;
	private: System::Windows::Forms::ToolStripTextBox^ tbSearch;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator5;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ deleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ printFileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripButton^ btnSearch;
	private: System::Windows::Forms::ToolStripButton^ BalanceMenu;
	private: System::Windows::Forms::RichTextBox^ logs;

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
			this->logs = (gcnew System::Windows::Forms::RichTextBox());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->toolStrip2 = (gcnew System::Windows::Forms::ToolStrip());
			this->btnSearch = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tbSearch = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->deleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printFileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->newOrderBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->showAllMenu = (gcnew System::Windows::Forms::ToolStripDropDownButton());
			this->ordersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->usersToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->devicesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->employeesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->BalanceMenu = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitBtn = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripContainer1->ContentPanel->SuspendLayout();
			this->toolStripContainer1->TopToolStripPanel->SuspendLayout();
			this->toolStripContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->BeginInit();
			this->toolStrip2->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStripContainer1
			// 
			this->toolStripContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			// 
			// toolStripContainer1.ContentPanel
			// 
			this->toolStripContainer1->ContentPanel->Controls->Add(this->logs);
			this->toolStripContainer1->ContentPanel->Controls->Add(this->dataGridView);
			this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(1724, 907);
			this->toolStripContainer1->Location = System::Drawing::Point(12, 12);
			this->toolStripContainer1->Name = L"toolStripContainer1";
			this->toolStripContainer1->Size = System::Drawing::Size(1724, 934);
			this->toolStripContainer1->TabIndex = 0;
			this->toolStripContainer1->Text = L"toolStripContainer1";
			// 
			// toolStripContainer1.TopToolStripPanel
			// 
			this->toolStripContainer1->TopToolStripPanel->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStrip2);
			this->toolStripContainer1->TopToolStripPanel->Controls->Add(this->toolStrip1);
			this->toolStripContainer1->TopToolStripPanel->Click += gcnew System::EventHandler(this, &MyForm::toolStripContainer1_TopToolStripPanel_Click);
			// 
			// logs
			// 
			this->logs->Location = System::Drawing::Point(0, 10);
			this->logs->Name = L"logs";
			this->logs->Size = System::Drawing::Size(288, 894);
			this->logs->TabIndex = 1;
			this->logs->Text = L"";
			// 
			// dataGridView
			// 
			this->dataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView->BackgroundColor = System::Drawing::Color::DarkGray;
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(294, 10);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->RowHeadersWidth = 51;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(1430, 894);
			this->dataGridView->TabIndex = 0;
			this->dataGridView->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::ContextMenuStrip_Hide);
			this->dataGridView->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::ContextMenuStrip1);
			this->dataGridView->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::ContextMenuStrip_Hide);
			// 
			// toolStrip2
			// 
			this->toolStrip2->AutoSize = false;
			this->toolStrip2->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->btnSearch, this->toolStripSeparator4,
					this->tbSearch, this->toolStripSeparator5
			});
			this->toolStrip2->Location = System::Drawing::Point(4, 0);
			this->toolStrip2->Name = L"toolStrip2";
			this->toolStrip2->Size = System::Drawing::Size(456, 27);
			this->toolStrip2->TabIndex = 1;
			// 
			// btnSearch
			// 
			this->btnSearch->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->btnSearch->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSearch.Image")));
			this->btnSearch->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(60, 24);
			this->btnSearch->Text = L"Search:";
			this->btnSearch->Click += gcnew System::EventHandler(this, &MyForm::btnSearch_Click);
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
			this->tbSearch->Size = System::Drawing::Size(180, 27);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(6, 27);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->editToolStripMenuItem,
					this->deleteToolStripMenuItem, this->printFileToolStripMenuItem
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(136, 76);
			this->contextMenuStrip1->Opening += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::contextMenuStrip1_Opening);
			this->contextMenuStrip1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::ContextMenuStrip_Hide);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(135, 24);
			this->editToolStripMenuItem->Text = L"Edit";
			this->editToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::editToolStripMenuItem_Click);
			// 
			// deleteToolStripMenuItem
			// 
			this->deleteToolStripMenuItem->Name = L"deleteToolStripMenuItem";
			this->deleteToolStripMenuItem->Size = System::Drawing::Size(135, 24);
			this->deleteToolStripMenuItem->Text = L"Delete";
			this->deleteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::deleteToolStripMenuItem_Click);
			// 
			// printFileToolStripMenuItem
			// 
			this->printFileToolStripMenuItem->Name = L"printFileToolStripMenuItem";
			this->printFileToolStripMenuItem->Size = System::Drawing::Size(135, 24);
			this->printFileToolStripMenuItem->Text = L"Print File";
			this->printFileToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::printFileToolStripMenuItem_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->toolStrip1->AutoSize = false;
			this->toolStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->newOrderBtn, this->toolStripSeparator1,
					this->showAllMenu, this->toolStripSeparator2, this->BalanceMenu, this->toolStripSeparator3, this->exitBtn
			});
			this->toolStrip1->Location = System::Drawing::Point(1176, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(391, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
			// 
			// newOrderBtn
			// 
			this->newOrderBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->newOrderBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newOrderBtn.Image")));
			this->newOrderBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newOrderBtn->Name = L"newOrderBtn";
			this->newOrderBtn->Size = System::Drawing::Size(85, 24);
			this->newOrderBtn->Text = L"New Order";
			this->newOrderBtn->Click += gcnew System::EventHandler(this, &MyForm::newOrderBtn_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 27);
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
			this->showAllMenu->Size = System::Drawing::Size(81, 24);
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
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 27);
			// 
			// BalanceMenu
			// 
			this->BalanceMenu->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->BalanceMenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BalanceMenu.Image")));
			this->BalanceMenu->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->BalanceMenu->Name = L"BalanceMenu";
			this->BalanceMenu->Size = System::Drawing::Size(65, 24);
			this->BalanceMenu->Text = L"Balance";
			this->BalanceMenu->Click += gcnew System::EventHandler(this, &MyForm::BalanceMenu_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 27);
			// 
			// exitBtn
			// 
			this->exitBtn->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->exitBtn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitBtn.Image")));
			this->exitBtn->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(37, 24);
			this->exitBtn->Text = L"Exit";
			this->exitBtn->Click += gcnew System::EventHandler(this, &MyForm::exitBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(1737, 958);
			this->Controls->Add(this->toolStripContainer1);
			this->Name = L"MyForm";
			this->Text = L"Main Interface";
			this->toolStripContainer1->ContentPanel->ResumeLayout(false);
			this->toolStripContainer1->TopToolStripPanel->ResumeLayout(false);
			this->toolStripContainer1->ResumeLayout(false);
			this->toolStripContainer1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView))->EndInit();
			this->toolStrip2->ResumeLayout(false);
			this->toolStrip2->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
//loading toolstripcontainer
private: System::Void toolStripContainer1_ContentPanel_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripContainer1_ContentPanel_Load_1(System::Object^ sender, System::EventArgs^ e) {
}


//exit button
private: System::Void exitBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	logs->Clear();
	logs->Update();

	tbSearch->Text = "";
	
	this->Close();
}

//useless function
private: System::Void toolStripContainer1_TopToolStripPanel_Click(System::Object^ sender, System::EventArgs^ e) {
}



//show all
private: System::Void usersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = "clients";

	logs->Clear();
	logs->Update();

	tbSearch->Text = "";

	configureDataGrid_Clients(this->dataGridView,tbSearch->Text);

}
private: System::Void newOrderBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	logs->Text = "";
	logs->Update();
	this->Hide();

	newOrderForm newOrder;
	newOrder.ShowDialog();

	configureDataGrid_Orders(this->dataGridView,tbSearch->Text);
	mode = "orders";

	tbSearch->Text = "";

	this->Show();

}
private: System::Void ordersToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = "orders";

	logs->Clear();
	logs->Update();

	tbSearch->Text = "";

	configureDataGrid_Orders(this->dataGridView,tbSearch->Text);
	
}
private: System::Void devicesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	mode = "devices";

	logs->Clear();
	logs->Update();

	tbSearch->Text = "";

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
	mode = "employees";

	logs->Clear();
	logs->Update();

	tbSearch->Text = "";

	configureDataGrid_Employees(this->dataGridView,tbSearch->Text);
}
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
	public: int index{0};
private: System::Void ContextMenuStrip_Hide(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (mode == "employees") {
		return;
	}
	try {
		if (dataGridView->Rows->Count > 1) {

			int amountRows{ dataGridView->Rows->Count - 1};

			for each (DataGridViewRow ^ row in dataGridView->Rows) {
				
				
				
				System::Drawing::Rectangle rect = dataGridView->GetRowDisplayRectangle(row->Index, true);
				if(rect.Contains(e->Location)){
					index = row->Index;
					if (e->Button == System::Windows::Forms::MouseButtons::Right) {
						logs->Text = "";
						logs->Update();

					


						// Pobierz prostok¹t odpowiadaj¹cy wierszowi
						// SprawdŸ, czy punkt klikniêcia znajduje siê w prostok¹cie wiersza
						if (rect.Contains(e->Location)) {
							// Wybierz wiersz
							dataGridView->ClearSelection();
							row->Selected = true;
						
							int index_row{ row->Index };

							if (index_row == amountRows) {
								return;
							}
						
						
							index = row->Index;
							// Poka¿ ContextMenuStrip w miejscu klikniêcia
							contextMenuStrip1->Show(dataGridView, e->Location);

							displayGrid(dataGridView, mode, tbSearch->Text);
							return;
						}

					}else if (e->Button == System::Windows::Forms::MouseButtons::Left) {

						int index_row{ row->Index };

						if (index_row == amountRows) {
							return;
						}

						if (mode != "orders") {
							return;
						}

						contextMenuStrip1->Hide();
						String^ Description{ "" };
						String^ name{""};
						String^ surname{""};
						int^ orderId{};

					
					

						String^ strCOnn{"Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False"};
						SqlConnection conn{ strCOnn };
						conn.Open();




						for each (DataGridViewCell ^ cell in row->Cells) {

							if (cell->OwningColumn->Name == "Description") {
								Description = Convert::ToString(cell->Value);
							}
							if (cell->OwningColumn->Name == "Client Name") {
								name = Convert::ToString(cell->Value);
							}
							if (cell->OwningColumn->Name == "Client Surname") {
								surname = Convert::ToString(cell->Value);
							}
						}

						String^ query{ "SELECT OrderId From Orders INNER JOIN Clients ON Clients.ClientId = Orders.ClientId Where Orders.Description = @des and Clients.ClientName = @name and Clients.ClientSurname =@surname" };
						SqlCommand cmd{query,%conn};
						
						cmd.Parameters->AddWithValue("@des",Description);
						cmd.Parameters->AddWithValue("@name", name);
						cmd.Parameters->AddWithValue("@surname", surname);

						SqlDataReader^ reader = cmd.ExecuteReader();

						if (reader->Read()) {
							orderId = reader->GetInt32(0);
						}
						reader->Close();

						configureLogs(logs, orderId);

						conn.Close();
						return;
					}
				}
			}
		}
	}
	catch (Exception^ ec) {
		MessageBox::Show(ec->Message,"Error",MessageBoxButtons::OK,MessageBoxIcon::Error);
		return;
	}

}




private: System::Void ContextMenuStrip1(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) { // double click -> here status will be changed
	if (mode != "orders") {
		return;
	}
	if (dataGridView->Rows->Count > 1) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left){

			int amountRows{0};
			
			for each (DataGridViewRow ^ row in dataGridView->Rows){
				amountRows++;

					if (index  != amountRows-1) {
						continue;
					}


				System::Drawing::Rectangle rect = dataGridView->GetRowDisplayRectangle(index, true); // SprawdŸ, czy punkt klikniêcia znajduje siê w prostok¹cie wiersza
				
				if (rect.Contains(e->Location)){

					
					
					try {
						// Wybierz wiersz
						String^ status{ "" };
						String^ descruption{ "" };
						String^ name{ "" };
						String^ surname{ "" };
						int^ deviceId{ 0 };
						int^ orderId{0};

						for each (DataGridViewCell ^ cell in row->Cells) {
							if (cell->OwningColumn->Name == "Client Name") {
								name = Convert::ToString(cell->Value);
							}
							else if (cell->OwningColumn->Name == "Client Surname") {
								surname = Convert::ToString(cell->Value);
							}
							else if (cell->OwningColumn->Name == "Description") {
								descruption = Convert::ToString(cell->Value);
							}
							else if (cell->OwningColumn->Name == "Order Status") {
								status = Convert::ToString(cell->Value);
							}
							else if (cell->OwningColumn->Name == "Device ID") {
								deviceId = Convert::ToInt32(cell->Value);
							}
						}

						//get OrderId
						String^ strConn{"Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False"};
						SqlConnection conn{ strConn };
						conn.Open();

						String^ query{ "SELECT Orders.OrderId from orders inner join clients on Clients.ClientId = Orders.ClientId WHERE Orders.Description = @des and Clients.ClientName = @name and CLients.ClientSurname = @surname and orders.Deviceid=@ID" };;
						SqlCommand cmd{ query,% conn };
						String^ logs{""};

						cmd.Parameters->AddWithValue("@des", descruption);
						cmd.Parameters->AddWithValue("@name", name);
						cmd.Parameters->AddWithValue("@surname", surname);
						cmd.Parameters->AddWithValue("@ID", deviceId);

						SqlDataReader^ reader = cmd.ExecuteReader();

						if (reader->Read()) {
							orderId = reader->GetInt32(0);
						}
						reader->Close();



						//get log for exact order
						query = "select Log from Logs where OrderId = @ID";

						SqlCommand cmd_get_logs{ query,% conn };
						cmd_get_logs.Parameters->AddWithValue("@ID", orderId);

						reader = cmd_get_logs.ExecuteReader();

						if (reader->Read()) {
							logs = reader->GetString(0);
						}
						reader->Close();



						if (status == "Ready") {
							query = "UPDATE Orders SET Orders.OrderStatus = 'In progress' WHERE Orders.OrderId = @ID";
							logs += "[" + Convert::ToString(DateTime::Now) + "] " + "Status changed to:" + "In progress" + ".\n";
						}
						else if (status == "In progress") {
							query = "UPDATE Orders SET Orders.OrderStatus = 'Ready' WHERE Orders.OrderId = @ID";
							logs += "[" + Convert::ToString(DateTime::Now) + "] " + "Status changed to:" + "Ready" + ".\n";
						}

						SqlCommand cmd_update_status{query,%conn};
						cmd_update_status.Parameters->AddWithValue("@ID", orderId);

						cmd_update_status.ExecuteNonQuery();

						query = "UPDATE Logs SET Logs.Log = @logs WHERE Logs.OrderId = @ID";
						
						SqlCommand cmd_update_logs{ query,% conn };
						cmd_update_logs.Parameters->AddWithValue("@logs", logs);
						cmd_update_logs.Parameters->AddWithValue("@ID", orderId);

						cmd_update_logs.ExecuteNonQuery();
						if (status == "In progress") {
							insertIntoEquity(name, surname, orderId);
						}


						conn.Close();
					}
					catch (Exception^ el) {
						MessageBox::Show(el->Message,"Error", MessageBoxButtons::OK,MessageBoxIcon::Error);
						return;
					}



				}
				break;
			}
		}
	}
	displayGrid(dataGridView, mode, tbSearch->Text);
}

	   //contextMenuStrip
private: System::Void editToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // edit row
	logs->Clear();
	logs->Update();
	for each (DataGridViewRow ^ row in dataGridView->Rows) {
		if (index==row->Index) { // index = 3 - error
			

			if (mode == "orders") {
				MyForm1^ edit = gcnew MyForm1(row);
				edit->ShowDialog();
			}
			else if (mode == "clients") {
				EditClient^ edit = gcnew EditClient(row);
				edit->ShowDialog();

			}
			else if (mode == "devices") {
				EditDevice^ edit = gcnew EditDevice(row);
				edit->ShowDialog();

			}
			displayGrid(dataGridView, mode, tbSearch->Text);
		}

		if (row->Index > index) {
			break;
		}
	}
}


private: System::Void deleteToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // delete row
	logs->Clear();
	logs->Update();
	int^ ID{};
	int i{ 0 };
	String^ strConn{ "Data Source=(localdb)\\ProjectModels;Initial Catalog=constructionDB;Integrated Security=True;Encrypt=False" };
	SqlConnection conn{ strConn };
	conn.Open();
	String^ query;
	DataGridViewRow^ row_get_id;
	vector<int> IDs;


		try {
		for each (DataGridViewRow ^ row in dataGridView->Rows) {
			if (index == i) {
				row_get_id = row;
				break;
			}
			++i;
			if (i > index) {
				break;
			}

		}

		String^ clientName;
		String^ clientSurname;

		for each (DataGridViewCell ^ cell in row_get_id->Cells) {
			if (mode == "orders") { // doeasnt have ID
				if (cell->OwningColumn->Name == "Client Name") {
					clientName = Convert::ToString(cell->Value);
				}
				if (cell->OwningColumn->Name == "Client Surname") {
					clientSurname = Convert::ToString(cell->Value);
				}
			}
			else if (mode == "clients") {
				if (cell->OwningColumn->Name == "Client ID") {
					ID = Convert::ToInt32(cell->Value);
				}
			}
			else if (mode == "devices") {
				if (cell->OwningColumn->Name == "Device Id") {
					ID = Convert::ToInt32(cell->Value);
				}

			}
			
		}
		if (clientName != "" && clientSurname != "" && mode == "orders") { // error below
			query = "SELECT Orders.OrderId FROM Orders INNER JOIN Clients ON Orders.ClientId = Clients.ClientId WHERE Clients.ClientName = @name AND Clients.ClientSurname = @surname";
			SqlCommand cmd{query,%conn};

			cmd.Parameters->AddWithValue("@name",clientName);
			cmd.Parameters->AddWithValue("@surname",clientSurname);

			SqlDataReader^ reader = cmd.ExecuteReader();

			if (reader->Read()) {
				ID = reader->GetInt32(0);
			}
			reader->Close();
		}
		

		if (mode == "orders") {
			int quantity{0};
			
			
			//delete logs attached to exact order

			query = "DELETE FROM logs where OrderId = @ID";
			SqlCommand cmd_delete_log{query,%conn};
			cmd_delete_log.Parameters->AddWithValue("@ID", ID);

			cmd_delete_log.ExecuteNonQuery();

			//delete order from odrers

			query = "DELETE FROM Orders WHERE OrderID =@ID ";
			SqlCommand cmd{query,%conn};
			cmd.Parameters->AddWithValue("@ID", ID);

			cmd.ExecuteNonQuery();

			//edit quantity of device or delete device
			query = "SELECT Devices.Quantity from devices INNER JOIN Orders ON Devices.DeviceId = Orders.DeviceId WHERE Orders.OrderID= @id ";
			
			SqlCommand cmd_get{query,%conn};
			cmd_get.Parameters->AddWithValue("@id",ID);

			SqlDataReader^ reader = cmd_get.ExecuteReader();

			if (reader->Read()) {
				quantity = reader->GetInt32(0);
			}
			reader->Close();

			if (quantity > 1) {
				query = "UPDATE Devices set Devices.Quantity = @quantity WHERE Devices.DeviceId = (SELECT Orders.DeviceID From Orders WHERE Orders.OrderId = @orderId)";
				SqlCommand cmd_update{query,%conn};

				cmd_update.Parameters->AddWithValue("@quantity",--quantity);
				cmd_update.Parameters->AddWithValue("@orderId",ID);

				cmd_update.ExecuteNonQuery();
			}
			else {
				query = "DELETE From Devices WHERE Devices.DeviceId = (Select Orders.DeviceId From Orders Where Orders.OrderId = @ID)";
				SqlCommand cmd_delete{query,%conn};
				cmd_delete.Parameters->AddWithValue("@ID",ID);

				cmd_delete.ExecuteNonQuery();
			}

		}
		else if (mode == "clients") {

			//getting OrderID to delete all logs attached to client's orders - vector of IDs
			query = "SELECT Orders.OrderId FROM Orders WHERE Orders.ClientId = @ID";
			SqlCommand cmd_get{ query,% conn };
			cmd_get.Parameters->AddWithValue("@ID", ID);

			SqlDataReader^ reader = cmd_get.ExecuteReader();


			while (reader -> Read()) {
				IDs.push_back(reader->GetInt32(0));
			}
			reader->Close();
			//delete logs for exact orders from logs table

			query = "DELETE FROM logs Where OrderId = @ID";
			SqlCommand cmd_delete_log(query, % conn);

			for (int^ i : IDs) {
				cmd_delete_log.Parameters->AddWithValue("@ID",i);
				cmd_delete_log.ExecuteNonQuery();
			}


			//delete orders attached to client

			query = "DELETE FROM Orders WHERE ClientId = @Id";
			SqlCommand cmd_order{query,%conn};
			cmd_order.Parameters->AddWithValue("@Id",ID);

			cmd_order.ExecuteNonQuery();
			
			//delete devices attached to client

			query = "DELETE FROM Devices WHERE ClientId = @ID";
			SqlCommand cmd_Devices{query,%conn};
			cmd_Devices.Parameters->AddWithValue("@ID",ID);

			cmd_Devices.ExecuteNonQuery();

			//delete client
			query = "DELETE FROM Clients WHERE ClientId =@ID ";
			SqlCommand cmd{ query,% conn };
			cmd.Parameters->AddWithValue("@ID", ID);

			cmd.ExecuteNonQuery();


		}
		else if (mode == "devices") {
			//delete logs for exact order from logs table
			int^ orderId{0};

			query = "SELECT Orders.OrderId FROM Orders WHERE Orders.DeviceId = @ID";
			SqlCommand cmd_getOrder_Id{query,%conn};
			cmd_getOrder_Id.Parameters->AddWithValue("@ID", ID);

			SqlDataReader^ reader = cmd_getOrder_Id.ExecuteReader();

			if (reader->Read()) {
				orderId = reader->GetInt32(0);
			}
			reader->Close();

			//get orderid with deviceid
			query = "DELETE FROM Logs  where OrderId = @ID";
			SqlCommand cmd_logs_delete{ query,% conn };
			cmd_logs_delete.Parameters->AddWithValue("@ID", orderId);

			cmd_logs_delete.ExecuteNonQuery();


			//delete order attached to device
			query = "DELETE FROM Orders WHERE DeviceID = @Id";
			SqlCommand cmd_order{ query,% conn };
			cmd_order.Parameters->AddWithValue("@Id",ID);

			cmd_order.ExecuteNonQuery();


			query = "DELETE FROM Devices WHERE DeviceID =@ID ";
			SqlCommand cmd{ query,% conn };
			cmd.Parameters->AddWithValue("@ID", ID);

			cmd.ExecuteNonQuery();


		}
		conn.Close();
	}
	catch (Exception^ ed) {
		MessageBox::Show(ed->Message);
		return;
	}


	displayGrid(dataGridView, mode,tbSearch->Text);

}
private: System::Void printFileToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) { // print file
}
private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
	logs->Clear();
	logs->Update();

	displayGrid(dataGridView, mode, tbSearch->Text);

}
private: System::Void BalanceMenu_Click(System::Object^ sender, System::EventArgs^ e) { // blalance
	logs->Text = "";
	logs->Update();
	this->Hide();
	
	balanceForm form;
	form.ShowDialog(); // error ?

	this->Show();
}
};
}