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
	/// Summary for RestoreField
	/// </summary>
	public ref class RestoreField : public System::Windows::Forms::Form
	{
	public:
		RestoreField(void)
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
		~RestoreField()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  Combo_Field;
	protected: 
	private: System::Windows::Forms::Label^  Field_Label;
	private: System::Windows::Forms::ListBox^  List_Contents;
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
			this->Combo_Field = (gcnew System::Windows::Forms::ComboBox());
			this->Field_Label = (gcnew System::Windows::Forms::Label());
			this->List_Contents = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Combo_Field
			// 
			this->Combo_Field->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Combo_Field->FormattingEnabled = true;
			this->Combo_Field->Items->AddRange(gcnew cli::array< System::Object^  >(15) {L"Telephone", L"Email Id", L"Group", L"State", 
				L"City", L"Address", L"Hobbies", L"Favourite Music", L"Favourite Movies", L"Favourite Dishes", L"Favourite Places", L"Favourite Sports", 
				L"Favourite Teams", L"Favourite Quotes", L"Inspirational people"});
			this->Combo_Field->Location = System::Drawing::Point(150, 38);
			this->Combo_Field->Name = L"Combo_Field";
			this->Combo_Field->Size = System::Drawing::Size(178, 27);
			this->Combo_Field->TabIndex = 0;
			this->Combo_Field->Text = L"Select";
			this->Combo_Field->SelectedIndexChanged += gcnew System::EventHandler(this, &RestoreField::Combo_Field_SelectedIndexChanged);
			// 
			// Field_Label
			// 
			this->Field_Label->AutoSize = true;
			this->Field_Label->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Field_Label->Location = System::Drawing::Point(73, 41);
			this->Field_Label->Name = L"Field_Label";
			this->Field_Label->Size = System::Drawing::Size(42, 19);
			this->Field_Label->TabIndex = 1;
			this->Field_Label->Text = L"Field";
			// 
			// List_Contents
			// 
			this->List_Contents->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->List_Contents->FormattingEnabled = true;
			this->List_Contents->ItemHeight = 19;
			this->List_Contents->Location = System::Drawing::Point(151, 81);
			this->List_Contents->Name = L"List_Contents";
			this->List_Contents->Size = System::Drawing::Size(177, 156);
			this->List_Contents->TabIndex = 2;
			this->List_Contents->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &RestoreField::listBox1_MouseDoubleClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(43, 272);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(325, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Select the field to be restored and double click.";
			// 
			// RestoreField
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(419, 315);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->List_Contents);
			this->Controls->Add(this->Field_Label);
			this->Controls->Add(this->Combo_Field);
			this->Name = L"RestoreField";
			this->Text = L"RestoreField";
			this->Load += gcnew System::EventHandler(this, &RestoreField::RestoreField_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RestoreField_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void listBox1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

				 // prompt the user if he wants to restore the field
			 if (MessageBox::Show("Do you want to restore this value?", "Restore Value", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
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
						MySqlDataReader^ myReader;
						MySqlCommand^ cmdDatabase=gcnew MySqlCommand("update contactsdb.contacts1 set flag2=1 where sno="+cn_sno+" and flag2=0 and fieldname='"+this->Combo_Field->Text+"' and value='"+this->List_Contents->Text+"';",conDatabase);
						try{
							conDatabase->Open();
							// restore the selected field
							myReader=cmdDatabase->ExecuteReader();
						}
						catch(Exception^ ex){
									MessageBox::Show(ex->Message);
						}
						myReader->Close();
						conDatabase->Close();
						MessageBox::Show("Value Restored Successfully!");
						String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
         sw->WriteLine("user Restored a comboBox Field for that contact");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
						Combo_Field_SelectedIndexChanged(sender,e);
			 }

			 }
	private: System::Void Combo_Field_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

				 List_Contents->Items->Clear();
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
						MySqlDataReader^ myReader;
						MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select value from contactsdb.contacts1 where sno="+cn_sno+" and flag2=0 and fieldname='"+this->Combo_Field->Text+"';",conDatabase);
						try{
							conDatabase->Open();
							// Restore the values that have been deleted in the selected field
							myReader=cmdDatabase->ExecuteReader();
							while(myReader->Read())
							{
								this->List_Contents->Items->Add(myReader->GetString("value"));
							}
						}
						catch(Exception^ ex){
									MessageBox::Show(ex->Message);
						}
						myReader->Close();
						conDatabase->Close();
			 }
	};
}
