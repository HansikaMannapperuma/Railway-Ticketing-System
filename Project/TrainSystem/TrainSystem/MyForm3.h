#pragma once

namespace TrainSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			FillTrainID();
			FillUserID();

		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(403, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin Panel";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->tabControl1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(12, 70);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(452, 621);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Update Train Details";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(6, 26);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(440, 589);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->comboBox2);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->label14);
			this->tabPage1->Controls->Add(this->label13);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label10);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Location = System::Drawing::Point(4, 29);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(432, 556);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Update/Delete";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(275, 478);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(87, 38);
			this->button7->TabIndex = 3;
			this->button7->Text = L"Clear";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm3::button7_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(152, 478);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(89, 38);
			this->button6->TabIndex = 3;
			this->button6->Text = L"Delete";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm3::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(33, 478);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(93, 38);
			this->button5->TabIndex = 3;
			this->button5->Text = L"Update";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm3::button5_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(208, 398);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(168, 27);
			this->textBox7->TabIndex = 2;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(208, 355);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(168, 27);
			this->textBox6->TabIndex = 2;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(208, 300);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(168, 27);
			this->textBox5->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(208, 254);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(168, 27);
			this->textBox4->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(208, 192);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(168, 27);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(208, 136);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 27);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(208, 83);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 27);
			this->textBox1->TabIndex = 2;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(208, 34);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(168, 28);
			this->comboBox2->TabIndex = 1;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm3::comboBox2_SelectedIndexChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(18, 399);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(108, 24);
			this->label15->TabIndex = 0;
			this->label15->Text = L"No. of seats";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(18, 356);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(108, 24);
			this->label14->TabIndex = 0;
			this->label14->Text = L"Ticket Price";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(18, 303);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(110, 24);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Arrival Time";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(18, 257);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(90, 24);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Arrival To";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(18, 195);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(141, 24);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Departure Time";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(18, 139);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(143, 24);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Departure From";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(18, 83);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(109, 24);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Train Name";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(18, 34);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(75, 24);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Train ID";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->button9);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->textBox9);
			this->tabPage2->Controls->Add(this->textBox10);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->textBox14);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->label17);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->label20);
			this->tabPage2->Controls->Add(this->label21);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Location = System::Drawing::Point(4, 29);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(432, 556);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Add";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(267, 481);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(87, 38);
			this->button8->TabIndex = 22;
			this->button8->Text = L"Clear";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm3::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(89, 481);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(89, 38);
			this->button9->TabIndex = 21;
			this->button9->Text = L"Add";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm3::button9_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(227, 401);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(168, 27);
			this->textBox8->TabIndex = 18;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(227, 358);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(168, 27);
			this->textBox9->TabIndex = 17;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(227, 303);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(168, 27);
			this->textBox10->TabIndex = 16;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(227, 257);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(168, 27);
			this->textBox11->TabIndex = 15;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(227, 195);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(168, 27);
			this->textBox12->TabIndex = 14;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(227, 139);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(168, 27);
			this->textBox13->TabIndex = 19;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(227, 86);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(168, 27);
			this->textBox14->TabIndex = 13;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(37, 402);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(108, 24);
			this->label16->TabIndex = 10;
			this->label16->Text = L"No. of seats";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(37, 359);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(108, 24);
			this->label17->TabIndex = 9;
			this->label17->Text = L"Ticket Price";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(37, 306);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(110, 24);
			this->label18->TabIndex = 8;
			this->label18->Text = L"Arrival Time";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(37, 260);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(90, 24);
			this->label19->TabIndex = 7;
			this->label19->Text = L"Arrival To";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(37, 198);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(141, 24);
			this->label20->TabIndex = 6;
			this->label20->Text = L"Departure Time";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(37, 142);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(143, 24);
			this->label21->TabIndex = 5;
			this->label21->Text = L"Departure From";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(37, 86);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(109, 24);
			this->label22->TabIndex = 11;
			this->label22->Text = L"Train Name";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->dataGridView1);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(479, 70);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(588, 633);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Approve Users";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm3::groupBox2_Enter);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(413, 89);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 48);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Block";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(343, 216);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(210, 48);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Load all users\' Data";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(28, 216);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(252, 48);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Load Pending Users\' Data";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(279, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(103, 48);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Approve";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(103, 48);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(199, 28);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm3::comboBox1_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(17, 293);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(561, 318);
			this->dataGridView1->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(99, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 24);
			this->label5->TabIndex = 0;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(115, 102);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 24);
			this->label4->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label6->Location = System::Drawing::Point(15, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(431, 18);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Click the \'Load Pending users\' data to view users to be approved";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(105, 102);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 24);
			this->label7->TabIndex = 0;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 102);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 24);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Status";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 24);
			this->label2->TabIndex = 0;
			this->label2->Text = L"User ID";
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1079, 753);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm3";
			this->Text = L"MyForm3";
			this->groupBox1->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void comboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ TrVal = comboBox2->Text;

	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("select*from train_system.train_details where train_id='" +TrVal +"';", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read())
		{
			String^ TrName = myReader->GetString("train_name");
			textBox1->Text = TrName;
			String^ de_from = myReader->GetString("departure_from");
			textBox2->Text = de_from;
			String^ de_time = myReader->GetString("departure_time");
			textBox3->Text = de_time;
			String^ ar_to = myReader->GetString("arrival_to");
			textBox4->Text = ar_to;
			String^ ar_time = myReader->GetString("arrival_time");
			textBox5->Text = ar_time;
			String^ ticket_price = myReader->GetInt32("ticket_price").ToString();
			textBox6->Text = ticket_price;
			String^ seats = myReader->GetInt32("seats").ToString();
			textBox7->Text = seats;
			


		}
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ TrainID = comboBox2->Text;

	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("update train_system.train_details set train_name='" + this->textBox1->Text + "',depature_from='" + this->textBox2->Text +"',departure_time='" + this->textBox3->Text + "',arrival_to='" + this->textBox4->Text + "',arrival_time='" + this->textBox5->Text + "',ticket_price'" + this->textBox6->Text + "',seats='" + this->textBox7->Text + "' where train_id='" + TrainID + "';", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show("updated successfully", "success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}

}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ TrainID = comboBox2->Text;

	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Delete from train_system.train_details where train_id='" + TrainID + "';", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show("Deleted Successfully", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	comboBox2->Text = " ";
	textBox1->Text = " ";
	textBox2->Text = " ";
	textBox3->Text = " ";
	textBox4->Text = " ";
	textBox5->Text = " ";
	textBox6->Text = " ";
	textBox7->Text = " ";

}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("Insert into train_system.train_details(train_name,departure_from,departure_time,arrival_to,arrival_time,ticket_price,seats) values('" + this->textBox14->Text +"','" + this->textBox13->Text + "','" + this->textBox12->Text + "','" + this->textBox11->Text + "','" + this->textBox10->Text + "','" + this->textBox9->Text + "','" + this->textBox8->Text + "');", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show("Train Added Successfuly", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox14->Text = " ";
	textBox13->Text = " ";
	textBox12->Text = " ";
	textBox11->Text = " ";
	textBox10->Text = " ";
	textBox9->Text = " ";
	textBox8->Text = " ";
	
	
}

	   private: System::Void FillTrainID(void) {
		   String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
		   MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		   MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("select train_id from train_system.train_details;", conDataBase); //change sql query as you want
		   MySqlDataReader^ myReader;

		   try
		   {

			   conDataBase->Open();
			   myReader = cmdDataBase->ExecuteReader();

			   while (myReader->Read())
			   {
				   String^ train_id;
				   train_id = myReader->GetString("train_id");
				   comboBox2->Items->Add(train_id);

			   }
		   }
		   catch (Exception^ ex)
		   {
			   conDataBase->Close();
			   MessageBox::Show(ex->Message);
		   }

	   }

private: System::Void FillUserID(void) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("select user_id from train_system.users;", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		while (myReader->Read())
		{
			String^ user_id;
			user_id = myReader->GetString("user_id");
			comboBox1->Items->Add(user_id);

		}
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}

}
	   
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ UserId = comboBox1->Text;

	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("select status from train_system.users where user_id='" + UserId + "';", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		if (myReader->Read())
		{
			String^ status = myReader->GetString("status");
			label4->Text = status;

		}
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ statusdet = "pending";

	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("select*from train_system.users where status= '" + statusdet + "';", conDataBase); //change sql query as you want
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
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	

	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("select*from train_system.users;", conDataBase); //change sql query as you want
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
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ UserID = comboBox1->Text;

	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("update train_system.users set status='" + "approved" + "' where user_id='" + UserID + "';", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show("User Approved Successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ UserID = comboBox1->Text;

	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("update train_system.users set status='" + "blocked" + "' where user_id='" + UserID + "';", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();

		MessageBox::Show("User Blocked Successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}

}
};
}
