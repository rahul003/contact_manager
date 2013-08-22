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
	/// Summary for RestoreContact
	/// </summary>
	public ref class RestoreContact : public System::Windows::Forms::Form
	{
	public:
		RestoreContact(void)
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
		~RestoreContact()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  RestoreContact_List;
	protected: 
	private: System::Windows::Forms::ColumnHeader^  RestoreContact_Name;
	private: System::Windows::Forms::ColumnHeader^  RestoreContact_Mobile;

	private: System::Windows::Forms::Label^  label1;




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
			this->RestoreContact_List = (gcnew System::Windows::Forms::ListView());
			this->RestoreContact_Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->RestoreContact_Mobile = (gcnew System::Windows::Forms::ColumnHeader());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// RestoreContact_List
			// 
			this->RestoreContact_List->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->RestoreContact_Name, 
				this->RestoreContact_Mobile});
			this->RestoreContact_List->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RestoreContact_List->FullRowSelect = true;
			this->RestoreContact_List->GridLines = true;
			this->RestoreContact_List->Location = System::Drawing::Point(69, 43);
			this->RestoreContact_List->Name = L"RestoreContact_List";
			this->RestoreContact_List->Size = System::Drawing::Size(278, 225);
			this->RestoreContact_List->TabIndex = 0;
			this->RestoreContact_List->UseCompatibleStateImageBehavior = false;
			this->RestoreContact_List->View = System::Windows::Forms::View::Details;
			this->RestoreContact_List->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &RestoreContact::RestoreContact_List_MouseDoubleClick);
			// 
			// RestoreContact_Name
			// 
			this->RestoreContact_Name->Text = L"Name";
			this->RestoreContact_Name->Width = 133;
			// 
			// RestoreContact_Mobile
			// 
			this->RestoreContact_Mobile->Text = L"Mobile";
			this->RestoreContact_Mobile->Width = 138;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(48, 292);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(325, 19);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Select the field to be restored and double click.";
			// 
			// RestoreContact
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(404, 345);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->RestoreContact_List);
			this->Name = L"RestoreContact";
			this->Text = L"RestoreContact";
			this->Load += gcnew System::EventHandler(this, &RestoreContact::RestoreContact_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RestoreContact_Load(System::Object^  sender, System::EventArgs^  e) {

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
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.contacts where userid="+userid+" and flag1=0;",conDatabase);
			 MySqlDataReader^ myReader;

			 try{

						 conDatabase->Open();
						 // Select the deleted contacts
						 myReader=cmdDatabase->ExecuteReader();
						 int count=0;
						 // Display the deleted contacts
						 while(myReader->Read())
						 {
							 RestoreContact_List->Items->Add(myReader->GetString("name"));
							 RestoreContact_List->Items[count]->SubItems->Add(myReader->GetString("mobile"));
							 count++;
						 }
				 }
				 catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				 }
			 
			 myReader->Close();
			 conDatabase->Close();
			 }

	private: System::Void RestoreContact_List_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

				 // Prompt the user if he wants to delete this contact
				 if (MessageBox::Show("Do you want to restore this contact?", "Restore Contact", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
				 {
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
					 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("update contactsdb.contacts set flag1=1 where userid="+userid+" and name='"+RestoreContact_List->FocusedItem->Text+"';",conDatabase);
					 try{

								 conDatabase->Open();
								 // Delete the selected contact
								 cmdDatabase->ExecuteReader();
								 conDatabase->Close();
								 MessageBox::Show("Contact Restored Successfully!");
								 String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
         sw->WriteLine("user Successfully restored contact "+RestoreContact_List->FocusedItem->Text+"");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
								 RestoreContact_List->Items->Clear();
								 RestoreContact_Load(sender,e);
							
						 }
						 catch(Exception^ ex){
							MessageBox::Show(ex->Message);
						 }

				 }
			 }
};
}
