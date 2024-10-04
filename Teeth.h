#pragma once

#include <fstream>
#include <msclr\marshal_cppstd.h>
#include "Craw.h";

namespace Crowns {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл¤ Teeth
	/// </summary>
	public ref class Teeth : public System::Windows::Forms::Form
	{
	public:
		Teeth(void)
		{
			InitializeComponent();
			
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Teeth()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Label^ label3;


	private:
		int idp;
		String^ string_surname;

	public:
		Void set_string_username(int input1, String^ input2)
		{
			this->idp = input1;
			this->string_surname = input2;
			this->label3->Text = input2;
		}

	private:
		/// <summary>
		/// ќб¤зательна¤ переменна¤ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл¤ поддержки конструктора Ч не измен¤йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Teeth::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(246, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Зубы пациента -";
			this->label1->Click += gcnew System::EventHandler(this, &Teeth::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(40, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 36);
			this->button1->TabIndex = 5;
			this->button1->Text = L"1.8";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Teeth::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Maroon;
			this->label2->Location = System::Drawing::Point(220, 302);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(449, 19);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Выбирите зуб клиента для определния подходящих коронок.";
			this->label2->Click += gcnew System::EventHandler(this, &Teeth::label2_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(93, 89);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(47, 36);
			this->button2->TabIndex = 7;
			this->button2->Text = L"1.7";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Teeth::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(146, 89);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 36);
			this->button3->TabIndex = 8;
			this->button3->Text = L"1.6";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Teeth::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(199, 89);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(47, 36);
			this->button4->TabIndex = 9;
			this->button4->Text = L"1.5";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Teeth::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(252, 89);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(47, 36);
			this->button5->TabIndex = 10;
			this->button5->Text = L"1.4";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Teeth::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(305, 89);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(47, 36);
			this->button6->TabIndex = 11;
			this->button6->Text = L"1.3";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Teeth::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(358, 89);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(47, 36);
			this->button7->TabIndex = 12;
			this->button7->Text = L"1.2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Teeth::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(411, 89);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(47, 36);
			this->button8->TabIndex = 13;
			this->button8->Text = L"1.1";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Teeth::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(464, 89);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(47, 36);
			this->button9->TabIndex = 14;
			this->button9->Text = L"2.1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Teeth::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(517, 89);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(47, 36);
			this->button10->TabIndex = 15;
			this->button10->Text = L"2.2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Teeth::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(570, 89);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(47, 36);
			this->button11->TabIndex = 16;
			this->button11->Text = L"2.3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Teeth::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(623, 89);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(47, 36);
			this->button12->TabIndex = 17;
			this->button12->Text = L"2.4";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Teeth::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(676, 89);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(47, 36);
			this->button13->TabIndex = 18;
			this->button13->Text = L"2.5";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Teeth::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(729, 89);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(47, 36);
			this->button14->TabIndex = 19;
			this->button14->Text = L"2.6";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Teeth::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(782, 89);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(47, 36);
			this->button15->TabIndex = 20;
			this->button15->Text = L"2.7";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Teeth::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(835, 89);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(47, 36);
			this->button16->TabIndex = 21;
			this->button16->Text = L"2.8";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Teeth::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(464, 131);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(47, 36);
			this->button17->TabIndex = 22;
			this->button17->Text = L"3.1";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Teeth::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(517, 131);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(47, 36);
			this->button18->TabIndex = 23;
			this->button18->Text = L"3.2";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Teeth::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(570, 131);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(47, 36);
			this->button19->TabIndex = 24;
			this->button19->Text = L"3.3";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Teeth::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(622, 131);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(47, 36);
			this->button20->TabIndex = 25;
			this->button20->Text = L"3.4";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Teeth::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(676, 131);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(47, 36);
			this->button21->TabIndex = 26;
			this->button21->Text = L"3.5";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Teeth::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(729, 131);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(47, 36);
			this->button22->TabIndex = 27;
			this->button22->Text = L"3.6";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Teeth::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(782, 131);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(47, 36);
			this->button23->TabIndex = 28;
			this->button23->Text = L"3.7";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Teeth::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(835, 131);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(47, 36);
			this->button24->TabIndex = 29;
			this->button24->Text = L"3.8";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Teeth::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(411, 131);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(47, 36);
			this->button25->TabIndex = 30;
			this->button25->Text = L"4.1";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Teeth::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(358, 131);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(47, 36);
			this->button26->TabIndex = 31;
			this->button26->Text = L"4.2";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Teeth::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(305, 131);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(47, 36);
			this->button27->TabIndex = 32;
			this->button27->Text = L"4.3";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Teeth::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(252, 131);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(47, 36);
			this->button28->TabIndex = 33;
			this->button28->Text = L"4.4";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Teeth::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(199, 131);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(47, 36);
			this->button29->TabIndex = 34;
			this->button29->Text = L"4.5";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Teeth::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(146, 131);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(47, 36);
			this->button30->TabIndex = 35;
			this->button30->Text = L"4.6";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &Teeth::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(93, 131);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(47, 36);
			this->button31->TabIndex = 36;
			this->button31->Text = L"4.7";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Teeth::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(40, 131);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(47, 36);
			this->button32->TabIndex = 37;
			this->button32->Text = L"4.8";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &Teeth::button32_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button33->Location = System::Drawing::Point(763, 291);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(119, 30);
			this->button33->TabIndex = 38;
			this->button33->Text = L"Вернуться";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Teeth::button33_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(416, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 24);
			this->label3->TabIndex = 39;
			this->label3->Click += gcnew System::EventHandler(this, &Teeth::label3_Click);
			this->label3->Text = L"Фамилия";
			// 
			// Teeth
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(931, 342);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Teeth";
			this->Text = L"Teeth";
			this->Load += gcnew System::EventHandler(this, &Teeth::Teeth_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
		Owner->Show();
		this->Close();
    }

	private: System::Void Click(String^ input)
	{
		String^ txt1 = "";
		String^ txt2 = "";
		String^ txt3 = "";
		String^ txt4 = "";
		String^ txt5 = "";
		String^ tooth;
		array<Boolean^>^ arr = gcnew array<Boolean^>(5);
		arr[0] = false;
		arr[1] = false;
		arr[2] = false;
		arr[3] = false;
		arr[4] = false;

		//tooth
		tooth = input;

		msclr::interop::marshal_context context;
		// std::fstream debug("D:/debug.txt", std::ios::out | std::ios::app);

		//std::fstream debug("D:/debug.txt", std::ios::out | std::ios::app);
		int check = 0;
		String^ convert;
		convert = idp.ToString();
		String^ currentdirectory = AppDomain::CurrentDomain->BaseDirectory;
		array<String^>^ filepath = IO::Directory::GetFiles(currentdirectory, "Teeth.accdb");
		String^ l_connection = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + filepath[0];
		String^ l_command = "SELECT ([Размер 1]) FROM Teeth WHERE ([idPatient]) = " + convert;
		Object^ res;

		l_command = "SELECT COUNT(*) FROM Teeth WHERE ([idPatient] = " + convert + "AND [Номер зуба] = " + tooth + ")";
		System::Data::OleDb::OleDbConnection^ conn = gcnew System::Data::OleDb::OleDbConnection(l_connection);
		conn->Open();
		System::Data::OleDb::OleDbCommand^ cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
		res = cmd->ExecuteScalar();
		check = safe_cast<int>(res);
		if (check == 0)
		{
			l_command = "INSERT INTO Teeth ([idPatient], [Номер зуба]) VALUES (?,?)";
			System::Data::OleDb::OleDbConnection^ conn = gcnew System::Data::OleDb::OleDbConnection(l_connection);
			conn->Open();
			System::Data::OleDb::OleDbCommand^ cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
			cmd->Parameters->AddWithValue("@idPatient", idp);
			double d_tooth = double::Parse(tooth, Globalization::CultureInfo::InvariantCulture);
			//debug << "tooth::" << context.marshal_as<std::string>(tooth) << std::endl;
			cmd->Parameters->AddWithValue("@Номер зуба", d_tooth);
			cmd->ExecuteNonQuery();

		}
		if (check != 0)
		{
			//txt1
			l_command = "SELECT ([Размер 1]) FROM Teeth WHERE ([idPatient] = " + convert + "AND [Номер зуба] = " + tooth + ")";
			conn = gcnew System::Data::OleDb::OleDbConnection(l_connection);
			conn->Open();
			cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
			res = cmd->ExecuteScalar();
			txt1 = res->ToString();
			// debug << "txt1::" << context.marshal_as<std::string>(txt1) << std::endl;
			if (!String::IsNullOrEmpty(txt1))
			{
				arr[0] = true;
			}

			//txt2
			l_command = "SELECT ([Размер 2]) FROM Teeth WHERE ([idPatient] = " + convert + "AND [Номер зуба] = " + tooth + ")";
			res;
			conn = gcnew System::Data::OleDb::OleDbConnection(l_connection);
			conn->Open();
			cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
			res = cmd->ExecuteScalar();
			txt2 = res->ToString();
			if (!String::IsNullOrEmpty(txt2))
			{
				arr[1] = true;
			}

			//txt3
			l_command = "SELECT ([Размер 3]) FROM Teeth WHERE ([idPatient] = " + convert + "AND [Номер зуба] = " + tooth + ")";
			res;
			conn = gcnew System::Data::OleDb::OleDbConnection(l_connection);
			conn->Open();
			cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
			res = cmd->ExecuteScalar();
			txt3 = res->ToString();
			if (!String::IsNullOrEmpty(txt3))
			{
				arr[2] = true;
			}

			//txt4
			l_command = "SELECT ([Размер 4]) FROM Teeth WHERE ([idPatient] = " + convert + "AND [Номер зуба] = " + tooth + ")";
			res;
			conn = gcnew System::Data::OleDb::OleDbConnection(l_connection);
			conn->Open();
			cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
			res = cmd->ExecuteScalar();
			txt4 = res->ToString();
			if (!String::IsNullOrEmpty(txt4))
			{
				arr[3] = true;
			}

			//txt5
			l_command = "SELECT ([Размер 5]) FROM Teeth WHERE ([idPatient] = " + convert + "AND [Номер зуба] = " + tooth + ")";
			res;
			conn = gcnew System::Data::OleDb::OleDbConnection(l_connection);
			conn->Open();
			cmd = gcnew System::Data::OleDb::OleDbCommand(l_command, conn);
			res = cmd->ExecuteScalar();
			txt5 = res->ToString();
			if (!String::IsNullOrEmpty(txt5))
			{
				arr[4] = true;
			}
		}

		Craw^ nclient = gcnew Craw(txt1, txt2, txt3, txt4, txt5, tooth, string_surname, arr, idp);
		nclient->Owner = this;
		nclient->Show();
		this->Hide();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button1->Text);
	}
    private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button2->Text);
    }
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button3->Text);
	}
    private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button4->Text);
    }
    private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button5->Text);
    }
    private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button6->Text);
    }
    private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button7->Text);
    }
    private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button8->Text);
    }
    private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button9->Text);
    }
    private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button10->Text);
    }
    private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button11->Text);
    }
    private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button12->Text);
    }
    private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button13->Text);
    }
    private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button14->Text);
    }
    private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button15->Text);
    }
    private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button16->Text);
    }
    private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button24->Text);
    }
    private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button23->Text);
    }
    private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button22->Text);
    }
    private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button21->Text);
    }
    private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button20->Text);
    }
    private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button19->Text);
    }
    private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button18->Text);
    }
    private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button17->Text);
    }
    private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button25->Text);
    }
    private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button26->Text);
    }
    private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button27->Text);
    }
    private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button28->Text);
    }
    private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button29->Text);
    }
    private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button30->Text);
    }
    private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button31->Text);
    }
    private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
		Click(this->button32->Text);
    }

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {}
private: System::Void Teeth_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
