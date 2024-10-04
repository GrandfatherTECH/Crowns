#pragma once
#include <Windows.h>
#include <fstream>

namespace Crowns {
	

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Сводка для Craw
	/// </summary>
	public ref class Craw : public System::Windows::Forms::Form
	{

	private:
		String^ tooth;
		String^ string_surname;
		array<Boolean^>^ boolarr = gcnew array<Boolean^>(5);
	private: System::Windows::Forms::TextBox^ textBox3;

		   int idp;

	public:
		Craw()
		{
			InitializeComponent();
		}
		Craw(String^ txt1, String^ txt2, String^ txt3, String^ txt4, String^ txt5, String^ tooth, String^ surname, array<Boolean^>^ iboolarr, int idp)
		{
			InitializeComponent();
			
			this->Crowns::Craw::tooth = tooth;
			this->string_surname = surname;
			this->Crowns::Craw::idp = idp;
			this->boolarr = iboolarr;

			this->textBox1->Text = surname;
			this->textBox2->Text = tooth;

			this->tochka1->Text = txt1;
			this->tochka2->Text = txt2;
			this->tochka3->Text = txt3;
			this->tochka4->Text = txt4;
			this->tochka5->Text = txt5;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Craw()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ tochka1;
	private: System::Windows::Forms::TextBox^ tochka2;
	private: System::Windows::Forms::TextBox^ tochka3;
	private: System::Windows::Forms::TextBox^ tochka4;
	private: System::Windows::Forms::TextBox^ tochka5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Craw::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tochka1 = (gcnew System::Windows::Forms::TextBox());
			this->tochka2 = (gcnew System::Windows::Forms::TextBox());
			this->tochka3 = (gcnew System::Windows::Forms::TextBox());
			this->tochka4 = (gcnew System::Windows::Forms::TextBox());
			this->tochka5 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(266, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Пациент - ";
			this->label1->Click += gcnew System::EventHandler(this, &Craw::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(381, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(226, 32);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Craw::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(157, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(55, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Зуб - ";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(218, 84);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(40, 29);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Craw::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(151, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(178, 22);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Введите размеры L";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(144, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 22);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Точка 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(144, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 22);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Точка 2";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(144, 238);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(79, 22);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Точка 3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(144, 272);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(79, 22);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Точка 4";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(144, 307);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 22);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Точка 5";
			this->label8->Click += gcnew System::EventHandler(this, &Craw::label8_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(240, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(113, 56);
			this->button1->TabIndex = 10;
			this->button1->Text = L"Расчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Craw::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(132, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 56);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Другой\r\nзуб";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Craw::button2_Click);
			// 
			// tochka1
			// 
			this->tochka1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tochka1->Location = System::Drawing::Point(229, 165);
			this->tochka1->Name = L"tochka1";
			this->tochka1->Size = System::Drawing::Size(100, 29);
			this->tochka1->TabIndex = 13;
			this->tochka1->TextChanged += gcnew System::EventHandler(this, &Craw::textBox3_TextChanged);
			// 
			// tochka2
			// 
			this->tochka2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tochka2->Location = System::Drawing::Point(229, 200);
			this->tochka2->Name = L"tochka2";
			this->tochka2->Size = System::Drawing::Size(100, 29);
			this->tochka2->TabIndex = 14;
			this->tochka2->TextChanged += gcnew System::EventHandler(this, &Craw::tochka2_TextChanged);
			// 
			// tochka3
			// 
			this->tochka3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tochka3->Location = System::Drawing::Point(229, 235);
			this->tochka3->Name = L"tochka3";
			this->tochka3->Size = System::Drawing::Size(100, 29);
			this->tochka3->TabIndex = 15;
			// 
			// tochka4
			// 
			this->tochka4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tochka4->Location = System::Drawing::Point(229, 269);
			this->tochka4->Name = L"tochka4";
			this->tochka4->Size = System::Drawing::Size(100, 29);
			this->tochka4->TabIndex = 16;
			// 
			// tochka5
			// 
			this->tochka5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tochka5->Location = System::Drawing::Point(229, 304);
			this->tochka5->Name = L"tochka5";
			this->tochka5->Size = System::Drawing::Size(100, 29);
			this->tochka5->TabIndex = 17;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(543, 54);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(249, 354);
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold));
			this->textBox3->Location = System::Drawing::Point(359, 54);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(178, 341);
			this->textBox3->TabIndex = 19;
			this->textBox3->Text = L"Здесь будет отображена информация";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Craw::textBox3_TextChanged_1);
			// 
			// Craw
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(850, 409);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tochka5);
			this->Controls->Add(this->tochka4);
			this->Controls->Add(this->tochka3);
			this->Controls->Add(this->tochka2);
			this->Controls->Add(this->tochka1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Craw";
			this->Text = L"Craw";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
    }
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double convert_tooth;
		convert_tooth = double::Parse(tooth, Globalization::CultureInfo::InvariantCulture);
		double txt;
		String^ check;
		String^ s_idp;
		s_idp = Convert::ToString(idp);
		String^ currentdirectory = AppDomain::CurrentDomain->BaseDirectory;
		array<String^>^ filepath = IO::Directory::GetFiles(currentdirectory, "Teeth.accdb");
		String^ l_connection = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + filepath[0];
		String^ l_command = "";
		Object^ res; 
		LONG int32_res; 
		System::Data::OleDb::OleDbConnection^ conn = gcnew System::Data::OleDb::OleDbConnection(l_connection);
		conn->Open(); 
		System::Data::OleDb::OleDbCommand^ cmd;

		if (this->boolarr[0]->Equals(false))
		{
			txt = double::Parse(this->tochka1->Text, Globalization::CultureInfo::InvariantCulture);
			l_command = "UPDATE Teeth SET [Размер 1] = ? WHERE ([idPatient] = " + s_idp + "AND [Номер зуба] = " + tooth + ")";
			cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
			cmd->Parameters->AddWithValue("@Размер 1", txt);
			cmd->ExecuteNonQuery();

		}
		if (this->boolarr[1]->Equals(false))
		{
			txt = double::Parse(this->tochka2->Text, Globalization::CultureInfo::InvariantCulture);
			l_command = "UPDATE Teeth SET [Размер 2] = ? WHERE ([idPatient] = " + s_idp + "AND [Номер зуба] = " + tooth + ")";
			cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
			cmd->Parameters->AddWithValue("@Размер 2", txt);
			cmd->ExecuteNonQuery();
		}
		if (this->boolarr[2]->Equals(false))
		{
			txt = double::Parse(this->tochka3->Text, Globalization::CultureInfo::InvariantCulture);
			l_command = "UPDATE Teeth SET [Размер 3] = ? WHERE ([idPatient] = " + s_idp + "AND [Номер зуба] = " + tooth + ")";
			cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
			cmd->Parameters->AddWithValue("@Размер 3", txt);
			cmd->ExecuteNonQuery();
		}
		if (this->boolarr[3]->Equals(false))
		{
			txt = double::Parse(this->tochka4->Text, Globalization::CultureInfo::InvariantCulture);
			l_command = "UPDATE Teeth SET [Размер 4] = ? WHERE ([idPatient] = " + s_idp + "AND [Номер зуба] = " + tooth + ")";
			cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
			cmd->Parameters->AddWithValue("@Размер 4", txt);
			cmd->ExecuteNonQuery();
		}
		if (this->boolarr[4]->Equals(false))
		{
			txt = double::Parse(this->tochka5->Text, Globalization::CultureInfo::InvariantCulture);
			l_command = "UPDATE Teeth SET [Размер 5] = ? WHERE ([idPatient] = " + s_idp + "AND [Номер зуба] = " + tooth + ")";
			cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
			cmd->Parameters->AddWithValue("@Размер 5", txt);
			cmd->ExecuteNonQuery();
		}
		double razm1 = double::Parse(tochka1->Text, Globalization::CultureInfo::InvariantCulture);
		double razm2 = double::Parse(tochka2->Text, Globalization::CultureInfo::InvariantCulture);
		double razm3 = double::Parse(tochka3->Text, Globalization::CultureInfo::InvariantCulture);
		double razm4 = double::Parse(tochka4->Text, Globalization::CultureInfo::InvariantCulture); 
		double razm5 = double::Parse(tochka5->Text, Globalization::CultureInfo::InvariantCulture);

		if
		(
				razm1 - 2. >= 1.
			&&	razm2 - 2. >= 1.
			&&	razm3 - 2. >= 1.
			&&	razm4 - 2. >= 1.
			&&	razm5 - 2. >= 1.
		)
		{
			this->textBox3->Text = L"Можно поставить на этот зуб такие коронки:\n1. Штампованная 0.2-0.3мм\n2. Литая 0.3-0.5мм\n3. Циркониевая полная анатомия 0.4мм\n4. Литая золотая 0.45-1.4мм\n5. Пластмассовая 1-2мм\n6. Металлокерамическая 1.4-1.7мм";
		}

		else if
		(
				razm1 - 1.7 >= 1.
			&&	razm2 - 1.7 >= 1.
			&&	razm3 - 1.7 >= 1.
			&&	razm4 - 1.7 >= 1.
			&&	razm5 - 1.7 >= 1.
		)
		{
			this->textBox3->Text = L"Можно поставить на этот зуб такие коронки:\n1.Штампованная 0.2-0.3мм\n2.Литая 0.3-0.5мм\n3. Циркониевая полная анатомия 0.4мм\n4. Литая золотая 0.45-1.4мм\n5. Металлокерамическая 1.4-1.7мм";
		}

		else if
		(
				razm1 - 1.4 >= 1.
			&&	razm2 - 1.4 >= 1.
			&&	razm3 - 1.4 >= 1.
			&&	razm4 - 1.4 >= 1.
			&&	razm5 - 1.4 >= 1.
		)
		{
			this->textBox3->Text = L"Можно поставить на этот зуб такие коронки:\n1. Штампованная 0.2-0.3мм\n2. Литая 0.3-0.5мм\n3. Циркониевая полная анатомия 0.4мм\n4. Литая золотая 0.45-1.4мм";
		}

		else if
		(
				razm1 - 0.5 >= 1.
			&&	razm2 - 0.5 >= 1.
			&&	razm3 - 0.5 >= 1.
			&&	razm4 - 0.5 >= 1.
			&&	razm5 - 0.5 >= 1.
		)
		{
			this->textBox3->Text = L"Можно поставить на этот зуб такие коронки:\n1. Штампованная 0.2-0.3мм\n2. Литая 0.3-0.5мм\n3. Циркониевая полная анатомия 0.4мм";
		}

		else if
		(
				razm1 - 0.4 >= 1.
			&&	razm2 - 0.4 >= 1.
			&&	razm3 - 0.4 >= 1.
			&&	razm4 - 0.4 >= 1.
			&&	razm5 - 0.4 >= 1.
		)
		{
			this->textBox3->Text = L"Можно поставить на этот зуб такие коронки:\n1. Штампованная 0.2-0.3мм\n2. Циркониевая полная анатомия 0.4мм";
		}

		else if
		(
				razm1 - 0.3 >= 1.
			&&	razm2 - 0.3 >= 1.
			&&	razm3 - 0.3 >= 1.
			&&	razm4 - 0.3 >= 1.
			&&	razm5 - 0.3 >= 1.
		)
		{
			this->textBox3->Text = L"Можно поставить на этот зуб такие коронки:\n1.Штампованная 0.2-0.3мм";
		}
		else
		{
			this->textBox3->Text = L"Ни одно из условий не подходит";
		}
	}
private: System::Void tochka2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
