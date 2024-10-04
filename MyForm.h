#pragma once

#ifndef MYFORM_H
#define MYFORM_H
#endif // !MYFORM_H

public ref class NewClients : public System::Windows::Forms::Form {};

#include <fstream>
#include <msclr\marshal_cppstd.h>
#include "Teeth.h"
#include "NewClients.h"

namespace Crowns {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	

	/// <summary>
	/// 
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;





	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ patronymic;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dateofbirth;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phoneNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ address;

	


	///
	/// Form load and update Form
	///
	private:
		String^ l_connection;
		String^ l_command;
		OleDbConnection^ conn;
		OleDbCommand^ cmd;
		OleDbDataAdapter^ sda;
		DataTable^ dt;
		DataTable^ nulltb;
	private: System::Windows::Forms::Button^ button4;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->patronymic = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dateofbirth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phoneNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(818, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Поиск";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(408, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(195, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Фамилия пациента";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(609, 22);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(203, 32);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(38, 18);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 39);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Новый пациент";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(720, 302);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(244, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Открыть зубы пациента";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(49, 302);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(660, 34);
			this->label2->TabIndex = 6;
			this->label2->Text = L"выбирите одним нажатием фамилию пациента и нажмите кнопку \"Открыть зубы клиента\" "
				L"\r\nили заведите нового пациента.";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->id, this->surname,
					this->name, this->patronymic, this->sex, this->dateofbirth, this->age, this->phoneNumber, this->address
			});
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->Location = System::Drawing::Point(74, 72);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::CellSelect;
			this->dataGridView1->Size = System::Drawing::Size(846, 202);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick_1);
			// 
			// id
			// 
			this->id->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->id->DataPropertyName = L"id";
			this->id->HeaderText = L"№";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Width = 43;
			// 
			// surname
			// 
			this->surname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->surname->DataPropertyName = L"Фамилия";
			this->surname->HeaderText = L"Фамилия";
			this->surname->Name = L"surname";
			this->surname->ReadOnly = true;
			this->surname->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->surname->Width = 81;
			// 
			// name
			// 
			this->name->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->name->DataPropertyName = L"Имя";
			this->name->HeaderText = L"Имя";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->name->Width = 54;
			// 
			// patronymic
			// 
			this->patronymic->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->patronymic->DataPropertyName = L"Отчество";
			this->patronymic->HeaderText = L"Отчество";
			this->patronymic->Name = L"patronymic";
			this->patronymic->ReadOnly = true;
			this->patronymic->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->patronymic->Width = 79;
			// 
			// sex
			// 
			this->sex->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->sex->DataPropertyName = L"Пол";
			this->sex->HeaderText = L"Пол";
			this->sex->Name = L"sex";
			this->sex->ReadOnly = true;
			this->sex->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->sex->Width = 52;
			// 
			// dateofbirth
			// 
			this->dateofbirth->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->dateofbirth->DataPropertyName = L"Дата рождения";
			this->dateofbirth->HeaderText = L"Дата рождения";
			this->dateofbirth->Name = L"dateofbirth";
			this->dateofbirth->ReadOnly = true;
			this->dateofbirth->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dateofbirth->Width = 80;
			// 
			// age
			// 
			this->age->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->age->DataPropertyName = L"Возраст";
			this->age->HeaderText = L"Возраст";
			this->age->Name = L"age";
			this->age->ReadOnly = true;
			this->age->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->age->Width = 59;
			// 
			// phoneNumber
			// 
			this->phoneNumber->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->phoneNumber->DataPropertyName = L"Телефон";
			this->phoneNumber->HeaderText = L"Номер телефона";
			this->phoneNumber->Name = L"phoneNumber";
			this->phoneNumber->ReadOnly = true;
			this->phoneNumber->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->phoneNumber->Width = 85;
			// 
			// address
			// 
			this->address->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->address->DataPropertyName = L"Адрес проживания";
			this->address->HeaderText = L"Адрес проживания";
			this->address->Name = L"address";
			this->address->ReadOnly = true;
			this->address->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->address->Width = 85;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(224, 18);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(180, 39);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Обновить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(985, 396);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {}
		System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}
		System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}
		System::Void dataGridView1_CellClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}

		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ search = this->textBox1->Text;
			int rowIndex = -1;
			for each (System::Windows::Forms::DataGridViewRow^ row in dataGridView1->Rows)
			{
				if (row->Cells[1]->Value->ToString()->Equals(search))
				{
					rowIndex = row->Index;
					dataGridView1->ClearSelection();
					dataGridView1->Rows[rowIndex]->Cells[1]->Selected = true;
					break;
				}
			}
		}
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
		{ 
			NewClients^ nclient = gcnew NewClients(); 
			nclient->Owner = this;
			nclient->Show();
			this->Hide();
		}
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (dataGridView1->SelectedCells->Count > 0 && dataGridView1->CurrentCell->ColumnIndex == 1)
			{
				// std::fstream debug("D:/debug.txt", std::ios::out | std::ios::app);
				int rowIndex = dataGridView1->CurrentCell->RowIndex;
				int columnIndex = dataGridView1->CurrentCell->ColumnIndex;
				// debug << rowIndex << ", " << columnIndex << std::endl; 
				String^ str = dataGridView1->Rows[rowIndex]->Cells[columnIndex]->Value->ToString();
				// msclr::interop::marshal_context context;
				// debug << "surname::" << context.marshal_as<std::string>(str) << std::endl;
				Teeth^ zybi = gcnew Teeth();
				zybi->Owner = this;
				String^ currentdirectory = AppDomain::CurrentDomain->BaseDirectory;
				array<String^>^ filepath = IO::Directory::GetFiles(currentdirectory, "Teeth.accdb");
				String^ l_connection = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + filepath[0];
				String^ l_command = "SELECT ([id]) FROM Patients WHERE ([Фамилия]) = '" + str + "'";
				// debug << context.marshal_as<std::string>(l_command) << std::endl;
				Object^ res;
				int int_res;
				System::Data::OleDb::OleDbConnection^ conn = gcnew System::Data::OleDb::OleDbConnection(l_connection); 
				conn->Open(); 
				System::Data::OleDb::OleDbCommand^ cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn); 
				res = cmd->ExecuteScalar();
				// int err;
				// debug << context.marshal_as<std::string>(transfer) << std::endl;
				int_res = Convert::ToInt32(res);
				// debug << "int_res::" << int_res << std::endl << "err::" << err << std::endl;
				zybi->set_string_username(int_res, str);
				zybi->Show();
				this->Hide();
			}
		}
		System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
		{
			String^ currentdirectory = AppDomain::CurrentDomain->BaseDirectory;
			array<String^>^ filepath = IO::Directory::GetFiles(currentdirectory, "Teeth.accdb");
			l_connection = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + filepath[0];
			l_command = "select * from Patients"; 

			conn	= gcnew OleDbConnection(l_connection);
			cmd		= gcnew OleDbCommand(l_command, conn); 
			sda		= gcnew OleDbDataAdapter(cmd); 
			dt		= gcnew DataTable(); 

			conn->Open();
			sda->Fill(dt); 
			dataGridView1->DataSource = dt;

			conn->Close();
		}
		System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
		{
			String^ currentdirectory = AppDomain::CurrentDomain->BaseDirectory;
			array<String^>^ filepath = IO::Directory::GetFiles(currentdirectory, "Teeth.accdb");
			l_connection = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + filepath[0];
			l_command = "select * from Patients";

			conn	= gcnew OleDbConnection(l_connection);
			cmd		= gcnew OleDbCommand(l_command, conn);
			sda		= gcnew OleDbDataAdapter(cmd);
			dt		= gcnew DataTable();

			dataGridView1->Columns->Clear();
			conn->Open();
			sda->Fill(dt);
			dataGridView1->DataSource = dt;
			dataGridView1->Refresh();

			conn->Close();
		}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};

}
