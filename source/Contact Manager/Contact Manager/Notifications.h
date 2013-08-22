#pragma once
#include <time.h>
#include <cstdio>      /* printf, fgets */
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include "Add_Contact.h" 
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
	/// Summary for Notifications
	/// </summary>
	public ref class Notifications : public System::Windows::Forms::Form
	{
	public:
		Notifications(void)
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
		~Notifications()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView_today;
	protected: 

	protected: 

	protected: 
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ListView^  listView_all;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::ColumnHeader^  columnHeader6;
	private: System::Windows::Forms::ColumnHeader^  columnHeader7;
	private: System::Windows::Forms::ColumnHeader^  columnHeader8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;









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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Notifications::typeid));
			this->listView_today = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->listView_all = (gcnew System::Windows::Forms::ListView());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// listView_today
			// 
			this->listView_today->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader1, 
				this->columnHeader2, this->columnHeader3, this->columnHeader4});
			this->listView_today->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView_today->GridLines = true;
			this->listView_today->Location = System::Drawing::Point(151, 50);
			this->listView_today->MultiSelect = false;
			this->listView_today->Name = L"listView_today";
			this->listView_today->Size = System::Drawing::Size(400, 187);
			this->listView_today->TabIndex = 1;
			this->listView_today->UseCompatibleStateImageBehavior = false;
			this->listView_today->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Date";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Time";
			this->columnHeader2->Width = 64;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Description";
			this->columnHeader3->Width = 168;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Contact";
			this->columnHeader4->Width = 103;
			// 
			// listView_all
			// 
			this->listView_all->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {this->columnHeader5, 
				this->columnHeader6, this->columnHeader7, this->columnHeader8});
			this->listView_all->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->listView_all->FullRowSelect = true;
			this->listView_all->GridLines = true;
			this->listView_all->Location = System::Drawing::Point(151, 311);
			this->listView_all->MultiSelect = false;
			this->listView_all->Name = L"listView_all";
			this->listView_all->Size = System::Drawing::Size(400, 191);
			this->listView_all->TabIndex = 3;
			this->listView_all->UseCompatibleStateImageBehavior = false;
			this->listView_all->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Date";
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Time";
			// 
			// columnHeader7
			// 
			this->columnHeader7->Text = L"Description";
			this->columnHeader7->Width = 160;
			// 
			// columnHeader8
			// 
			this->columnHeader8->Text = L"Contact";
			this->columnHeader8->Width = 114;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(147, 285);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 23);
			this->label1->TabIndex = 4;
			this->label1->Text = L"All Set Reminders";
			this->label1->Click += gcnew System::EventHandler(this, &Notifications::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(147, 24);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(162, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Today\'s Reminders";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 81);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(133, 135);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(12, 329);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(133, 135);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// Notifications
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(581, 544);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listView_all);
			this->Controls->Add(this->listView_today);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Notifications";
			this->Text = L"Notifications";
			this->Load += gcnew System::EventHandler(this, &Notifications::Notifications_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Notifications_Load(System::Object^  sender, System::EventArgs^  e) {

				 time_t now = time(NULL);
				   struct tm *t = localtime(&now);
		 
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

		   		 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
				 int rownum_all=0;
				 int rownum_today=0;
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.reminder where userid="+userid+" order by date;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{

						 conDatabase->Open();
						 myReader=cmdDatabase->ExecuteReader();
						 String^ date;
					     String^ date1;
						 String^ month;
				     	 String^ year;
						 String^ y;
						 String^ text;
						 String^ time;
						 String^ contact;
						 
						  while(myReader->Read())
						 {
							 
							 date=myReader->GetString("date");
							 text=myReader->GetString("text");
							 time=myReader->GetString("time");
							 y=time;
							 contact=myReader->GetString("cnsno");
							 if(date[3] != '0')
							 {
							 date1=Convert::ToString(date[3])+Convert::ToString(date[4]);
							 }
							 if(date[3] == '0')
							 {
							 date1=Convert::ToString(date[4]);
							 }
							 if(date[0] == '1')
							 {
							 month=Convert::ToString(date[0])+Convert::ToString(date[1]);
							 }
							 if(date[0] == '0')
							 {
							 month=Convert::ToString(date[1]);
							 }
							 
							 if(time[1] == ':')
							 {
								 time="0"+time;
							 }
							 if(time->Length == 4)
							 {
								 time=Convert::ToString(time[0])+Convert::ToString(time[1])+Convert::ToString(time[2])+"0"+Convert::ToString(time[3]);
								 
							 }
							 year=Convert::ToString(date[6])+Convert::ToString(date[7])+Convert::ToString(date[8])+Convert::ToString(date[9]);
							 
							 // display all the reminders in listView_all 
								listView_all->Items->Add(date);
								listView_all->Items[rownum_all]->SubItems->Add(time);
								listView_all->Items[rownum_all]->SubItems->Add(text);
								listView_all->Items[rownum_all]->SubItems->Add(contact);
								rownum_all++;
							 
							// compare today's date and check whether it is equal to the date set in the reminder
							 if(Convert::ToString(t->tm_mon+1) == month && Convert::ToString(t->tm_mday)==date1 && Convert::ToString(t->tm_year+1900)==year  )
							 {
								// display today's reminders in listView_today
								listView_today->Items->Add(date);
								listView_today->Items[rownum_today]->SubItems->Add(time);
								
								listView_today->Items[rownum_today]->SubItems->Add(text);
								listView_today->Items[rownum_today]->SubItems->Add(contact);
								rownum_today++;
							 }

						  }
				 }
				 catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				 }
				 myReader->Close();
				 conDatabase->Close();

			 }
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
