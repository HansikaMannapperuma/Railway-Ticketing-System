#pragma once
#include "MyForm3.h";
#include "MyForm4.h";
namespace TrainSystem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 17, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(472, 49);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(337, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(341, 213);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(378, 297);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 17);
			this->label4->TabIndex = 1;
			this->label4->Text = L"*Not an Account";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(413, 356);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 44);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(514, 284);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(137, 41);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Sign Up";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm2::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(575, 356);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 48);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm2::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(482, 164);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(154, 22);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(482, 213);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(154, 22);
			this->textBox2->TabIndex = 3;
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 517);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm2::MyForm2_FormClosing);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm2_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (MessageBox::Show("Do you really want to exit?", "Train Ticketting System", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
		else
		{
			e->Cancel = true;

		}
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = " ";
	textBox2->Text = " ";


}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ constring = "datasource=localhost;port=3306;username=root;password=root"; //replace with your username & password
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew  MySqlCommand("select*from train_system.users where username='" + this->textBox1->Text +"' and password='"+ this->textBox2->Text+"';", conDataBase); //change sql query as you want
	MySqlDataReader^ myReader;

	try
	{

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		int count = 0;

		while (myReader->Read())
		{
			count++;
		}

		//string^status=myReader->GetString("status");
		if (count == 1)
		{
			String^ status = myReader->GetString("status");
			if (status == "approved")
			{
			MessageBox::Show("Username and Password correct", "Success", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			this->Hide();
			MyForm3^ form3 = gcnew MyForm3();
			form3->ShowDialog();

			}
			
			else if (status=="blocked")
			{
				MessageBox::Show("You're a blocked users.Please contact Admin", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}

			else if (status == "pending")
			{
				MessageBox::Show("You're a pending user.please wait for approval", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			

		}

		else if (count > 1)
		{
			MessageBox::Show("Duplicate usernames found. Contact Admin", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		}

		else
		{
			MessageBox::Show("username or password Incorrect. Try Again", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
	catch (Exception^ ex)
	{
		conDataBase->Close();
		MessageBox::Show(ex->Message);
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
	MyForm4^ form4 = gcnew MyForm4;
	form4->ShowDialog();


}
};
}
