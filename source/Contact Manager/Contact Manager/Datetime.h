#pragma once
#include "Global.h"

namespace ContactManager {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Datetime
	/// </summary>
	public ref class Datetime : public System::Windows::Forms::Form
	{
	public:
		Datetime(void)
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
		~Datetime()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Datetime::typeid));
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Constantia", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Pixel, 
				static_cast<System::Byte>(1), true));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(242, 59);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeftLayout = true;
			this->dateTimePicker1->Size = System::Drawing::Size(144, 27);
			this->dateTimePicker1->TabIndex = 0;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &Datetime::dateTimePicker1_ValueChanged);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown1->Location = System::Drawing::Point(326, 145);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {23, 0, 0, 0});
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(60, 31);
			this->numericUpDown1->TabIndex = 1;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->numericUpDown2->Location = System::Drawing::Point(326, 193);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {59, 0, 0, 0});
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(60, 31);
			this->numericUpDown2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(196, 263);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(190, 88);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Details...";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(171, 378);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 36);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Remind me";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Datetime::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(66, 23);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(98, 94);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(66, 139);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(98, 94);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(192, 145);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 23);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Hours(HH)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(192, 195);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 23);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Minutes(MM)";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(66, 263);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(98, 94);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// Datetime
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(457, 437);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->dateTimePicker1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Datetime";
			this->Text = L"Set Reminder";
			this->Load += gcnew System::EventHandler(this, &Datetime::Datetime_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 String^ name;
			 String^ pass;
			 String^ port;
	StreamReader^ sr = gcnew StreamReader( "dblogin.txt" );
	try
      {
            name = sr->ReadLine() ;
			pass = sr->ReadLine() ;  
			port = sr->ReadLine() ;
      }
      finally
      {
         delete sr;
      }
				 String^ constring=L"datasource=127.0.0.1;port="+port+";username="+name+";password="+pass+"";
				 String^ name1;
						MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
						MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select name from contactsdb.contacts where sno="+cn_sno+";",conDatabase);
						MySqlDataReader^ myReader;
						conDatabase->Open();
						try{
							
							// select the name of user whose reminder is being changed
							myReader=cmdDatabase->ExecuteReader();
							myReader->Read();
							name1=myReader->GetString("name");
							myReader->Close();
						}
						 catch(Exception^ ex){
							MessageBox::Show(ex->Message);
						 }
						cmdDatabase=gcnew MySqlCommand("insert into contactsdb.reminder (`userid`,`time`,`date`,`text`,`cnsno`) values ("+userid+",'"+numericUpDown1->Text+":"+numericUpDown2->Text+"','"+dateTimePicker1->Text+"','"+textBox1->Text+"','"+name1+"')"+";",conDatabase);
					try{
							// insert the reminder into database
							myReader=cmdDatabase->ExecuteReader();
							MessageBox::Show("Reminder Added Successfully!");
						}
						 catch(Exception^ ex){
							MessageBox::Show(ex->Message);
						 }
						 conDatabase->Close();
						 this->Close();
						 String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
         sw->WriteLine("user added a reminder for that contact");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
			 }
private: System::Void Datetime_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
