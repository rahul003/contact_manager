#pragma once

namespace dbinstall {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(242, 269);
			this->button1->Margin = System::Windows::Forms::Padding(5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(144, 104);
			this->label1->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(96, 23);
			this->label1->TabIndex = 1;
			this->label1->Text = L"UserName";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(144, 157);
			this->label2->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(258, 104);
			this->textBox1->Margin = System::Windows::Forms::Padding(5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(164, 31);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(258, 154);
			this->textBox2->Margin = System::Windows::Forms::Padding(5);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(164, 31);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(168, 46);
			this->label3->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(248, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"MySql Login Details Required";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(258, 207);
			this->textBox3->Margin = System::Windows::Forms::Padding(5);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(164, 31);
			this->textBox3->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(144, 210);
			this->label4->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 23);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Port";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 98);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(124, 135);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(450, 336);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(5);
			this->Name = L"Form1";
			this->Text = L"MySql Login";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {


				 try{
				 String^ constring=L"datasource=127.0.0.1;port="+textBox3->Text+";username="+textBox1->Text+";password="+textBox2->Text+"";
				 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("create database contactsdb;" ,conDatabase);
				 conDatabase->Open();
				 cmdDatabase->ExecuteReader();
				 conDatabase->Close();
				  
				 cmdDatabase=gcnew MySqlCommand("CREATE  TABLE contactsdb.contacts (sno INT NOT NULL AUTO_INCREMENT , name VARCHAR(45) NOT NULL ,mobile VARCHAR(45) NOT NULL ,userid VARCHAR(45) NOT NULL ,flag1 BINARY NOT NULL DEFAULT 1 ,PRIMARY KEY (sno));",conDatabase);
				 conDatabase->Open();
				 cmdDatabase->ExecuteReader();
				 conDatabase->Close();
				 cmdDatabase=gcnew MySqlCommand("CREATE  TABLE contactsdb.contacts1 (sno INT NOT NULL ,userid VARCHAR(45) NOT NULL ,fieldname VARCHAR(45) NOT NULL ,value VARCHAR(45) NOT NULL ,flag2 BINARY NOT NULL DEFAULT 1 );",conDatabase);
				 conDatabase->Open();
				 cmdDatabase->ExecuteReader();
				 conDatabase->Close();
				 cmdDatabase=gcnew MySqlCommand("CREATE  TABLE contactsdb.reminder (userid INT NOT NULL ,date VARCHAR(45) NOT NULL ,text VARCHAR(45) NOT NULL ,cnsno VARCHAR(45) NOT NULL ,time VARCHAR(45) NOT NULL );",conDatabase);
				 conDatabase->Open();
				 cmdDatabase->ExecuteReader();
				 conDatabase->Close();
				 cmdDatabase=gcnew MySqlCommand("CREATE  TABLE contactsdb.login (userid INT NOT NULL AUTO_INCREMENT ,username VARCHAR(45) NOT NULL ,password VARCHAR(45) NOT NULL ,question VARCHAR(45) NULL ,answer VARCHAR(45) NULL ,PRIMARY KEY (userid) ,UNIQUE INDEX username_UNIQUE (username ASC) );",conDatabase);
				 conDatabase->Open();
				 cmdDatabase->ExecuteReader();
				 conDatabase->Close();
				 //MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.contacts;",conDatabase);
				/* MySqlDataReader^ myReader;
					 conDatabase->Open();
					 cmdDatabase->ExecuteReader();
					conDatabase->Close();*/
				 StreamWriter^ sw = File::CreateText( "dblogin.txt" );
				 try
				 {
					 //sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"\n");
					 sw->WriteLine(""+textBox1->Text+"");
					 sw->WriteLine(""+textBox2->Text+"");
					 sw->WriteLine(""+textBox3->Text+"");
				 }
				 finally
				 {
					 if ( sw )
						 delete (IDisposable^)sw;
				 }

				 MessageBox::Show("MySQL details are saved. Now run Contacts++ to get started!","Done");
				 Application::Exit();
				 }

				 catch(Exception^ ex){

					 MessageBox::Show(ex->Message);

				 }
			 }
};
}

