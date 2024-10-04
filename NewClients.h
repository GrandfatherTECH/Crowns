#pragma once
#ifndef NEWCLIENTS_H
#define NEWCLIENTS_H
#endif // !NEWCLIENTS_H

// public ref class MyForm : public System::Windows::Forms::Form {};


#include "MyForm.h"
namespace Crowns {
	
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// сводка для NewClients
	/// </summary>

	

	public ref class NewClients : public System::Windows::Forms::Form
	{
	public:
		NewClients(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// освободить все используемые ресурсы.
		/// </summary>
		~NewClients()
		{
			if (components)
			{
				delete components;
			}
		}


	private:

		System::Windows::Forms::Label^																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																										 label1;
		System::Windows::Forms::Button^ button1;
		System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;



		/// <summary>
		/// обязательна¤ переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// требуемый метод для поддержки конструктора, не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(NewClients::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(272, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(328, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введите данные нового пациента";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label1->Click += gcnew System::EventHandler(this, &NewClients::label1_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(144, 314);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(267, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Занести в базу ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NewClients::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(544, 314);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(138, 39);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Вернуться";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NewClients::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(106, 96);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(213, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Фамилия";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &NewClients::textBox1_TextChanged);
			this->textBox1->GotFocus += gcnew System::EventHandler(this, &NewClients::textBox1_Remove);
			this->textBox1->LostFocus += gcnew System::EventHandler(this, &NewClients::textBox1_Add);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(325, 96);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Имя";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &NewClients::textBox2_TextChanged);
			this->textBox2->GotFocus += gcnew System::EventHandler(this, &NewClients::textBox2_Remove);
			this->textBox2->LostFocus += gcnew System::EventHandler(this, &NewClients::textBox2_Add);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(544, 96);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(213, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"Отчество";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &NewClients::textBox3_TextChanged);
			this->textBox3->GotFocus += gcnew System::EventHandler(this, &NewClients::textBox3_Remove);
			this->textBox3->LostFocus += gcnew System::EventHandler(this, &NewClients::textBox3_Add);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(106, 144);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(213, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"Пол";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &NewClients::textBox4_TextChanged);
			this->textBox4->GotFocus += gcnew System::EventHandler(this, &NewClients::textBox4_Remove);
			this->textBox4->LostFocus += gcnew System::EventHandler(this, &NewClients::textBox4_Add);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(325, 144);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(213, 20);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"Дата рождения";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &NewClients::textBox5_TextChanged);
			this->textBox5->GotFocus += gcnew System::EventHandler(this, &NewClients::textBox5_Remove);
			this->textBox5->LostFocus += gcnew System::EventHandler(this, &NewClients::textBox5_Add);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(544, 144);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(213, 20);
			this->textBox6->TabIndex = 9;
			this->textBox6->Text = L"Возраст";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &NewClients::textBox6_TextChanged);
			this->textBox6->GotFocus += gcnew System::EventHandler(this, &NewClients::textBox6_Remove);
			this->textBox6->LostFocus += gcnew System::EventHandler(this, &NewClients::textBox6_Add);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(220, 191);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(213, 20);
			this->textBox7->TabIndex = 10;
			this->textBox7->Text = L"Телефон";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &NewClients::textBox7_TextChanged);
			this->textBox7->GotFocus += gcnew System::EventHandler(this, &NewClients::textBox7_Remove);
			this->textBox7->LostFocus += gcnew System::EventHandler(this, &NewClients::textBox7_Add);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(439, 191);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(213, 20);
			this->textBox8->TabIndex = 11;
			this->textBox8->Text = L"Адрес проживания";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &NewClients::textBox8_TextChanged);
			this->textBox8->GotFocus += gcnew System::EventHandler(this, &NewClients::textBox8_Remove);
			this->textBox8->LostFocus += gcnew System::EventHandler(this, &NewClients::textBox8_Add);
			// 
			// NewClients
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(871, 385);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"NewClients";
			this->Text = L"NewClients";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			Owner->Show();
			this->Close();
		}
	private: 
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if 
			(
					this->textBox1->Text != "Фамилия" 
				&&	this->textBox2->Text != "Имя" 
				&&	this->textBox3->Text != "Отчество" 
				&&	this->textBox4->Text != "Пол" 
				&&	this->textBox5->Text != "Дата рождения" 
				&&	this->textBox6->Text != "Возраст" 
				&&	this->textBox7->Text != "Телефон" 
				&&	this->textBox8->Text != "Адрес проживания"
			)
			{
				String^ currentdirectory = AppDomain::CurrentDomain->BaseDirectory;
				array<String^>^ filepath = IO::Directory::GetFiles(currentdirectory, "Teeth.accdb");
				String^ l_connection = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + filepath[0];
				String^ l_command = "INSERT INTO Patients ([Фамилия], [Имя], [Отчество], [Пол], [Дата рождения], [Возраст], [Телефон], [Адрес проживания]) VALUES (?,?,?,?,?,?,?,?)";									
				System::Data::OleDb::OleDbConnection^ conn = gcnew System::Data::OleDb::OleDbConnection(l_connection);
				conn->Open();
				System::Data::OleDb::OleDbCommand^ cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);

				cmd->Parameters->AddWithValue("@Фамилия",			this->textBox1->Text);
				cmd->Parameters->AddWithValue("@Имя",				this->textBox2->Text);
				cmd->Parameters->AddWithValue("@Отчество",			this->textBox3->Text);
				cmd->Parameters->AddWithValue("@Пол",				this->textBox4->Text);
				cmd->Parameters->AddWithValue("@Дата рождения",		this->textBox5->Text);
				cmd->Parameters->AddWithValue("@Возраст",			this->textBox6->Text);
				cmd->Parameters->AddWithValue("@Телефон",			this->textBox7->Text);
				cmd->Parameters->AddWithValue("@Адрес проживания",	this->textBox8->Text);
				cmd->ExecuteNonQuery();
						
				conn->Close();
				MessageBox::Show("Пациент добавлен в базу", "Сохранено!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		Void textBox1_Remove(Object^ sender, EventArgs^ e)
		{
			if (this->textBox1->Text == "Фамилия")
			{
				this->textBox1->Text = "";
			}
		}
		Void textBox1_Add(Object^ sender, EventArgs^ e)
		{
			if (String::IsNullOrEmpty(this->textBox1->Text))
			{
				this->textBox1->Text = "Фамилия";
			}
		}
		System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		Void textBox2_Remove(Object^ sender, EventArgs^ e)
		{
			if (this->textBox2->Text == "Имя")
			{
				this->textBox2->Text = "";
			}
		}
		Void textBox2_Add(Object^ sender, EventArgs^ e)
		{
			if (String::IsNullOrEmpty(this->textBox2->Text))
			{
				this->textBox2->Text = "Имя";
			}
		}
		System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		Void textBox3_Remove(Object^ sender, EventArgs^ e)
		{
			if (this->textBox3->Text == "Отчество")
			{
				this->textBox3->Text = "";
			}
		}
		Void textBox3_Add(Object^ sender, EventArgs^ e)
		{
			if (String::IsNullOrEmpty(this->textBox3->Text))
			{
				this->textBox3->Text = "Отчество";
			}
		}
		System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		Void textBox4_Remove(Object^ sender, EventArgs^ e)
		{
			if (this->textBox4->Text == "Пол")
			{
				this->textBox4->Text = "";
			}
		}
		Void textBox4_Add(Object^ sender, EventArgs^ e)
		{
			if (String::IsNullOrEmpty(this->textBox4->Text))
			{
				this->textBox4->Text = "Пол";
			}
		}
		System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		Void textBox5_Remove(Object^ sender, EventArgs^ e)
		{
			if (this->textBox5->Text == "Дата рождения")
			{
				this->textBox5->Text = "";
			}
		}
		Void textBox5_Add(Object^ sender, EventArgs^ e)
		{
			if (String::IsNullOrEmpty(this->textBox5->Text))
			{
				this->textBox5->Text = "Дата рождения";
			}
		}
		System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		Void textBox6_Remove(Object^ sender, EventArgs^ e)
		{
			if (this->textBox6->Text == "Возраст")
			{
				this->textBox6->Text = "";
			}
		}
		Void textBox6_Add(Object^ sender, EventArgs^ e)
		{
			if (String::IsNullOrEmpty(this->textBox6->Text))
			{
				this->textBox6->Text = "Возраст";
			}
		}
		System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		Void textBox7_Remove(Object^ sender, EventArgs^ e)
		{
			if (this->textBox7->Text == "Телефон")
			{
				this->textBox7->Text = "";
			}
		}
		Void textBox7_Add(Object^ sender, EventArgs^ e)
		{
			if (String::IsNullOrEmpty(this->textBox7->Text))
			{
				this->textBox7->Text = "Телефон";
			}
		}
		System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		}
		Void textBox8_Remove(Object^ sender, EventArgs^ e)
		{
			if (this->textBox8->Text == "Адрес проживания")
			{
				this->textBox8->Text = "";
			}
		}
		Void textBox8_Add(Object^ sender, EventArgs^ e)
		{
			if (String::IsNullOrEmpty(this->textBox8->Text))
			{
				this->textBox8->Text = "Адрес проживания";
			}
		}
};
}
