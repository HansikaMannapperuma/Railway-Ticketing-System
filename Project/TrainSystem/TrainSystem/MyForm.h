#pragma once
#include "MyForm2.h";
//#include "MyForm4.h";

namespace TrainSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			comboBox1->Text = "Choose one...";
			comboBox2->Text = "Choose one...";

			comboBox3->Text = "0";
			comboBox3->Items->Add("1");
			comboBox3->Items->Add("2");
			comboBox3->Items->Add("3");
			comboBox3->Items->Add("4");
			comboBox3->Items->Add("5");

			comboBox4->Text = "0";
			comboBox4->Items->Add("1");
			comboBox4->Items->Add("2");
			comboBox4->Items->Add("3");
			comboBox4->Items->Add("4");
			comboBox4->Items->Add("5");


			FillComboFrom();
			FillComboTo();
			FillTrainID();
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox9;

















	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label44;













	private: System::Windows::Forms::GroupBox^ groupBox10;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::GroupBox^ groupBox11;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TabPage^ tabPage2;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Label^ label33;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label35;
private: System::Windows::Forms::Label^ label34;
private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::RichTextBox^ richTextBox1;
private: System::Drawing::Printing::PrintDocument^ printDocument1;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
private: System::ComponentModel::IContainer^ components;
























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox9->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(363, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(749, 80);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Train Ticketting System";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1342, 110);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Location = System::Drawing::Point(1370, 17);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(534, 104);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(241, 65);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(56, 25);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Time";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(6, 68);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 25);
			this->label10->TabIndex = 3;
			this->label10->Text = L"Date";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(262, 21);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(87, 41);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Sign up";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(87, 21);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 41);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Login";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->comboBox1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Location = System::Drawing::Point(12, 128);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(397, 132);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(113, 51);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(215, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 25);
			this->label2->TabIndex = 0;
			this->label2->Text = L"From";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->comboBox2);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Location = System::Drawing::Point(445, 128);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(397, 132);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(123, 54);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(215, 24);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(37, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"To";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton2);
			this->groupBox5->Controls->Add(this->radioButton1);
			this->groupBox5->Controls->Add(this->label4);
			this->groupBox5->Location = System::Drawing::Point(878, 128);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(300, 132);
			this->groupBox5->TabIndex = 5;
			this->groupBox5->TabStop = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->radioButton2->Location = System::Drawing::Point(166, 89);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(80, 24);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Return";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(35, 89);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(76, 24);
			this->radioButton1->TabIndex = 3;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Single";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(32, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 25);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Ticket Type";
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->comboBox4);
			this->groupBox6->Controls->Add(this->comboBox3);
			this->groupBox6->Controls->Add(this->label7);
			this->groupBox6->Controls->Add(this->label6);
			this->groupBox6->Controls->Add(this->label5);
			this->groupBox6->Location = System::Drawing::Point(12, 288);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(397, 132);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Location = System::Drawing::Point(103, 94);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(92, 24);
			this->comboBox4->TabIndex = 1;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox4_SelectedIndexChanged);
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(103, 56);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(92, 24);
			this->comboBox3->TabIndex = 1;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox3_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(17, 90);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 25);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Child";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(17, 56);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 25);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Adults";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(17, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(170, 25);
			this->label5->TabIndex = 3;
			this->label5->Text = L"No, of passengers";
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label43);
			this->groupBox7->Controls->Add(this->comboBox5);
			this->groupBox7->Controls->Add(this->label42);
			this->groupBox7->Controls->Add(this->label41);
			this->groupBox7->Controls->Add(this->label8);
			this->groupBox7->Controls->Add(this->label44);
			this->groupBox7->Location = System::Drawing::Point(445, 288);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(733, 132);
			this->groupBox7->TabIndex = 7;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"groupBox7";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(320, 52);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(141, 25);
			this->label43->TabIndex = 6;
			this->label43->Text = L"Depature Time";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Location = System::Drawing::Point(123, 52);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(92, 24);
			this->comboBox5->TabIndex = 1;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(27, 93);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(114, 25);
			this->label42->TabIndex = 6;
			this->label42->Text = L"Train Name";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(27, 52);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(81, 25);
			this->label41->TabIndex = 6;
			this->label41->Text = L"Train ID";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(187, 18);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 25);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Train Details";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(510, 59);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(38, 17);
			this->label44->TabIndex = 6;
			this->label44->Text = L"lbl27";
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->button1);
			this->groupBox8->Controls->Add(this->dataGridView1);
			this->groupBox8->Controls->Add(this->label9);
			this->groupBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox8->Location = System::Drawing::Point(12, 439);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(1166, 552);
			this->groupBox8->TabIndex = 8;
			this->groupBox8->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(188, 47);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(283, 41);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Click here to view the train list";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(6, 110);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1080, 408);
			this->dataGridView1->TabIndex = 9;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(17, 54);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 25);
			this->label9->TabIndex = 7;
			this->label9->Text = L"Select train";
			// 
			// groupBox9
			// 
			this->groupBox9->Controls->Add(this->tabControl1);
			this->groupBox9->Location = System::Drawing::Point(1208, 128);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(696, 667);
			this->groupBox9->TabIndex = 6;
			this->groupBox9->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 18);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(687, 643);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->label33);
			this->tabPage1->Controls->Add(this->label35);
			this->tabPage1->Controls->Add(this->label32);
			this->tabPage1->Controls->Add(this->label34);
			this->tabPage1->Controls->Add(this->label31);
			this->tabPage1->Controls->Add(this->label30);
			this->tabPage1->Controls->Add(this->label29);
			this->tabPage1->Controls->Add(this->label28);
			this->tabPage1->Controls->Add(this->label27);
			this->tabPage1->Controls->Add(this->label26);
			this->tabPage1->Controls->Add(this->label25);
			this->tabPage1->Controls->Add(this->label24);
			this->tabPage1->Controls->Add(this->label23);
			this->tabPage1->Controls->Add(this->label22);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->label18);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->label16);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(679, 614);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ticket";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(409, 513);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(84, 33);
			this->button5->TabIndex = 14;
			this->button5->Text = L"Clear";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(246, 513);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(86, 35);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Print";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label33->Location = System::Drawing::Point(506, 460);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(44, 20);
			this->label33->TabIndex = 12;
			this->label33->Text = L"lbl33";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label35->Location = System::Drawing::Point(597, 369);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(44, 20);
			this->label35->TabIndex = 11;
			this->label35->Text = L"lbl35";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label32->Location = System::Drawing::Point(529, 367);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(44, 20);
			this->label32->TabIndex = 11;
			this->label32->Text = L"lbl32";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label34->Location = System::Drawing::Point(597, 306);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(44, 20);
			this->label34->TabIndex = 10;
			this->label34->Text = L"lbl34";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label31->Location = System::Drawing::Point(529, 306);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(44, 20);
			this->label31->TabIndex = 10;
			this->label31->Text = L"lbl31";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label30->Location = System::Drawing::Point(558, 189);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(44, 20);
			this->label30->TabIndex = 9;
			this->label30->Text = L"lbl30";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label29->Location = System::Drawing::Point(556, 114);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(44, 20);
			this->label29->TabIndex = 8;
			this->label29->Text = L"lbl29";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(405, 454);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(61, 26);
			this->label28->TabIndex = 7;
			this->label28->Text = L"Total";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(396, 361);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(89, 25);
			this->label27->TabIndex = 6;
			this->label27->Text = L"Children";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(396, 306);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(70, 25);
			this->label26->TabIndex = 5;
			this->label26->Text = L"Adults";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(387, 250);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(140, 26);
			this->label25->TabIndex = 4;
			this->label25->Text = L"No. of tickets";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(387, 176);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(60, 26);
			this->label24->TabIndex = 3;
			this->label24->Text = L"Time";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(390, 114);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(57, 26);
			this->label23->TabIndex = 3;
			this->label23->Text = L"Date";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label22->Location = System::Drawing::Point(220, 396);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(44, 20);
			this->label22->TabIndex = 2;
			this->label22->Text = L"lbl22";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label21->Location = System::Drawing::Point(220, 321);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(44, 20);
			this->label21->TabIndex = 2;
			this->label21->Text = L"lbl21";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label20->Location = System::Drawing::Point(220, 256);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(49, 20);
			this->label20->TabIndex = 2;
			this->label20->Text = L"lbl 20";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Yi Baiti", 13));
			this->label19->Location = System::Drawing::Point(218, 176);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(82, 22);
			this->label19->TabIndex = 2;
			this->label19->Text = L"3rd class";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(218, 109);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(44, 20);
			this->label18->TabIndex = 2;
			this->label18->Text = L"lbl18";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(36, 390);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(36, 26);
			this->label17->TabIndex = 1;
			this->label17->Text = L"To";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(36, 315);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(62, 26);
			this->label16->TabIndex = 1;
			this->label16->Text = L"From";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(35, 250);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(119, 26);
			this->label15->TabIndex = 1;
			this->label15->Text = L"Ticket type";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(35, 176);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(60, 26);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Class";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(35, 109);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(134, 26);
			this->label13->TabIndex = 1;
			this->label13->Text = L"Ref. Number";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(298, 20);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(166, 31);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Train Details";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(679, 614);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Receipt";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(5, 7);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(668, 601);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// groupBox10
			// 
			this->groupBox10->Controls->Add(this->button6);
			this->groupBox10->Controls->Add(this->label40);
			this->groupBox10->Controls->Add(this->label39);
			this->groupBox10->Controls->Add(this->label37);
			this->groupBox10->Controls->Add(this->label38);
			this->groupBox10->Controls->Add(this->label36);
			this->groupBox10->Location = System::Drawing::Point(1208, 823);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(696, 182);
			this->groupBox10->TabIndex = 9;
			this->groupBox10->TabStop = false;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(516, 57);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(156, 111);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Reset Available Seats Count";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label40->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label40->Location = System::Drawing::Point(285, 106);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(44, 20);
			this->label40->TabIndex = 6;
			this->label40->Text = L"lbl40";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label39->Location = System::Drawing::Point(285, 59);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(44, 20);
			this->label39->TabIndex = 6;
			this->label39->Text = L"lbl39";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(43, 109);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(191, 25);
			this->label37->TabIndex = 4;
			this->label37->Text = L"Train Depature Time";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(344, 57);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(40, 20);
			this->label38->TabIndex = 6;
			this->label38->Text = L"/  50";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(43, 50);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(200, 25);
			this->label36->TabIndex = 4;
			this->label36->Text = L"No. of Available seats";
			// 
			// groupBox11
			// 
			this->groupBox11->Controls->Add(this->label45);
			this->groupBox11->Controls->Add(this->comboBox6);
			this->groupBox11->Controls->Add(this->label46);
			this->groupBox11->Controls->Add(this->label47);
			this->groupBox11->Controls->Add(this->label48);
			this->groupBox11->Controls->Add(this->label50);
			this->groupBox11->Controls->Add(this->label49);
			this->groupBox11->Location = System::Drawing::Point(445, 288);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(733, 132);
			this->groupBox11->TabIndex = 7;
			this->groupBox11->TabStop = false;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(320, 52);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(141, 25);
			this->label45->TabIndex = 6;
			this->label45->Text = L"Depature Time";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Location = System::Drawing::Point(123, 52);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(92, 24);
			this->comboBox6->TabIndex = 1;
			this->comboBox6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox6_SelectedIndexChanged);
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(27, 93);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(114, 25);
			this->label46->TabIndex = 6;
			this->label46->Text = L"Train Name";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->Location = System::Drawing::Point(27, 52);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(81, 25);
			this->label47->TabIndex = 6;
			this->label47->Text = L"Train ID";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(187, 18);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(121, 25);
			this->label48->TabIndex = 6;
			this->label48->Text = L"Train Details";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label50->Location = System::Drawing::Point(177, 98);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(44, 20);
			this->label50->TabIndex = 6;
			this->label50->Text = L"lbl50";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->label49->Location = System::Drawing::Point(510, 59);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(44, 20);
			this->label49->TabIndex = 6;
			this->label49->Text = L"lbl49";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1924, 1033);
			this->Controls->Add(this->groupBox10);
			this->Controls->Add(this->groupBox9);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->groupBox11);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox9->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void FillComboFrom(void) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select DISTINCT departure_from from train_system.train_details;", conDataBase); //change sql query as you want
		MySqlDataReader^ myReader;

		try
		{

			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read())
			{
				String^ De_From;
				De_From = myReader->GetString("departure_from");
				comboBox1->Items->Add(De_From);
			}
		}
		catch (Exception^ ex)
		{
			conDataBase->Close();
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void FillComboTo(void) {
		String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select DISTINCT arrival_to from train_system.train_details;", conDataBase); //change sql query as you want
		MySqlDataReader^ myReader;

		try
		{

			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			while (myReader->Read())
			{
				String^ Ar_To;
				Ar_To = myReader->GetString("arrival_to");
				comboBox2->Items->Add(Ar_To);
			}
		}
		catch (Exception^ ex)
		{
			conDataBase->Close();
			MessageBox::Show(ex->Message);
		}
	}



	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		label21->Text = comboBox1->Text;

		Random^ refNumber = gcnew Random;
		int randNumber = refNumber->Next(232, 99999);
		label18->Text = Convert::ToString(randNumber);


	}
	private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		label22->Text = comboBox2->Text;
	}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	label31->Text = comboBox3->Text;
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	label32->Text = comboBox4->Text;
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label20->Text = "single";
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	label20->Text = "Return";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select * from train_system.train_details;", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{
		

		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bsource = gcnew BindingSource();
		bsource->DataSource = dbdataset;
		dataGridView1->DataSource = bsource;
		sda->Update(dbdataset);
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}

}
	   private: System::Void FillTrainID(void) {
		   String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
		   MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		   MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select train_id from train_system.train_details;", conDataBase); //change sql query as you want
		   MySqlDataReader^ myReader;

		   try
		   {

			   conDataBase->Open();
			   myReader = cmdDataBase->ExecuteReader();

			   while (myReader->Read())
			   {
				   String^ Tr_ID;
				   Tr_ID = myReader->GetString("train_id");
				   comboBox6->Items->Add(Tr_ID);

			   }
		   }
		   catch (Exception^ ex)
		   {
			   conDataBase->Close();
			   MessageBox::Show(ex->Message);
		   }

	   }

private: System::Void comboBox6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ Tr_ID_Combo = comboBox6->Text;
	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Select * from train_system.train_details where train_id=' "+Tr_ID_Combo+"';", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if(myReader->Read())
		{
			String^ TrName = myReader->GetString("train_name");
			label50->Text = TrName;

			String^ DeTime = myReader->GetString("departure_time");
			label49->Text = DeTime;
			label40->Text = DeTime;

			String^ TPrice = myReader->GetInt32("ticket_price").ToString();
			label34->Text = TPrice + ".00 LKR";

			double TPrice1 = Convert::ToInt32(TPrice);
			label35->Text = System::Convert::ToString(TPrice1 / 2) + ".00 LKR";

			double numbofadults = Convert::ToInt32(comboBox3->Text);
			double numbofchildren = Convert::ToInt32(comboBox4->Text);
			double TPrice2 = (TPrice1 * numbofadults) + (TPrice1 / 2) * numbofchildren;

			if (label20->Text == "Return") {
				double TotPrice = TPrice2;
				label33->Text = System::Convert::ToString(TotPrice * 2) + ".00LKR";
			}

			else {
				double TotPrice = TPrice2;
				label33->Text = System::Convert::ToString(TotPrice) + ".00 LKR";
			}

			//label40->Text->DeTime;
			String^ Seats = myReader->GetString("seats");
			label39->Text = Seats;


		}
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}

	//print rich text
	richTextBox1->Text = "";
	richTextBox1->AppendText("\t      " + label1->Text + Environment::NewLine);
	richTextBox1->AppendText("=================================================" + Environment::NewLine);
	richTextBox1->AppendText("\t\t" + label10->Text + Environment::NewLine);
	richTextBox1->AppendText("\n" + Environment::NewLine);
	richTextBox1->AppendText("Ref No.: " + label18->Text+"\t\t Date: "+label29->Text + Environment::NewLine);
	richTextBox1->AppendText("Class.: " + label19->Text + "\t\t Time: " + label30->Text + Environment::NewLine);
	richTextBox1->AppendText("\n" + Environment::NewLine);
	richTextBox1->AppendText("Ticket Type: " + label20->Text + "\t\t No. Of Tickets: "  + Environment::NewLine);
	richTextBox1->AppendText("\t\t\t Adults : " + label31->Text +"\t"+ label34->Text + Environment::NewLine);
	richTextBox1->AppendText("\t\t\t Children : " + label32->Text + "\t"+label35->Text + Environment::NewLine);
	richTextBox1->AppendText("\n" + Environment::NewLine);
	richTextBox1->AppendText("From : " + label21->Text +"\t\t Total: "+ label33->Text + Environment::NewLine);
	richTextBox1->AppendText("\n" + Environment::NewLine);
	richTextBox1->AppendText("To : " + label22->Text + Environment::NewLine);
	richTextBox1->AppendText("=================================================" + Environment::NewLine);
	richTextBox1->AppendText("=================================================" + Environment::NewLine);
	richTextBox1->AppendText("\t\t\tTrain Name :" + label50->Text + Environment::NewLine);
	richTextBox1->AppendText("\t\t\tTrain ID :" + comboBox6->Text + Environment::NewLine);


}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	DateTime idate = DateTime::Now;
	label10->Text = idate.ToLongDateString();
	label29->Text = idate.ToShortDateString();
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime idate = DateTime::Now;
	label11->Text = idate.ToLongTimeString();
	label30->Text = idate.ToLongTimeString();

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ TrVal = comboBox5->Text;
	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("update train_system.train_details set seats=50 where train_id='"+TrVal+"';", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Reset Success", "success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	label18->Text =" ";
	label20->Text = " ";
	label21->Text = " ";
	label22->Text = " ";
	label31->Text = " ";
	label34->Text = " ";
	label32->Text = " ";
	label35->Text = " ";
	label33->Text = " ";
	comboBox1->Text = " ";
	comboBox2->Text = " ";

	comboBox3->Text = " ";
	comboBox4->Text = " ";
	comboBox6->Text = " ";
	


}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Do you really want to exit?", "Train Ticketting System ", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}

	else
	{
		e->Cancel = true;
	}
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	String^ drawString = richTextBox1->Text;
	System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("calibri", 15);
	SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
	PointF drawPoint = PointF(150.0F, 150.0F);
	e->Graphics->DrawString(drawString, drawFont, drawBrush, drawPoint);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	//reduce seat number
	int seatsnew;

	String^ TrVal = comboBox6->Text;
	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("select*from train_system.train_details where train_id='" + TrVal + "';", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read())
		{
			int seats = myReader->GetInt32("seats");
			seatsnew = seats - 1;
		}
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}
	conDataBase->Close();

	//open again

	String^ constring1 = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase1 = gcnew MySqlConnection(constring1);
	MySqlCommand^ cmdDataBase1 = gcnew  MySqlCommand("update train_system.train_details set seats='" + seatsnew + "' where train_id='" + TrVal + "';", conDataBase1); //change sql query as you want
	MySqlDataReader^ myReader1;

	try
	{

		conDataBase1->Open();
		myReader1 = cmdDataBase1->ExecuteReader();

		if (myReader1->Read())
		{


		}
	}
	catch (Exception^ ex)
	{
		conDataBase1->Close();
		MessageBox::Show(ex->Message);
	}


	printPreviewDialog1->Document = printDocument1;
	printPreviewDialog1->ShowDialog();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm2^ form2 = gcnew MyForm2();
	form2->ShowDialog();



}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm4^ form4 = gcnew MyForm4();
	form4->ShowDialog();

}
};
}

