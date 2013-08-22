// ADD CONTACT FORM
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
	/// Summary for Add_Contact
	/// </summary>
	public ref class Add_Contact : public System::Windows::Forms::Form
	{
	public:
		Add_Contact(void)
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
		~Add_Contact()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Add_Name;
	private: System::Windows::Forms::Label^  Add_Mobile;
	private: System::Windows::Forms::Label^  Add_Email_Id;
	private: System::Windows::Forms::Label^  Add_Tele;
	protected: 



	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  Add_Add;

	private: System::Windows::Forms::TextBox^  Add_Name_Text;

	private: System::Windows::Forms::TextBox^  Add_Mobile_Text;

	private: System::Windows::Forms::TextBox^  Add_Email_Id_Text;

	private: System::Windows::Forms::TextBox^  Add_Telephone_Text;

	private: System::Windows::Forms::RichTextBox^  Add_Address_RichText;
	private: System::Windows::Forms::TextBox^  Add_TelCode_Text;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Add_Contact::typeid));
			this->Add_Name = (gcnew System::Windows::Forms::Label());
			this->Add_Mobile = (gcnew System::Windows::Forms::Label());
			this->Add_Email_Id = (gcnew System::Windows::Forms::Label());
			this->Add_Tele = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Add_Add = (gcnew System::Windows::Forms::Button());
			this->Add_Name_Text = (gcnew System::Windows::Forms::TextBox());
			this->Add_Mobile_Text = (gcnew System::Windows::Forms::TextBox());
			this->Add_Email_Id_Text = (gcnew System::Windows::Forms::TextBox());
			this->Add_Telephone_Text = (gcnew System::Windows::Forms::TextBox());
			this->Add_Address_RichText = (gcnew System::Windows::Forms::RichTextBox());
			this->Add_TelCode_Text = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// Add_Name
			// 
			this->Add_Name->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Add_Name->AutoSize = true;
			this->Add_Name->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_Name->ForeColor = System::Drawing::Color::Teal;
			this->Add_Name->Location = System::Drawing::Point(67, 20);
			this->Add_Name->Name = L"Add_Name";
			this->Add_Name->Size = System::Drawing::Size(54, 19);
			this->Add_Name->TabIndex = 0;
			this->Add_Name->Text = L"Name";
			// 
			// Add_Mobile
			// 
			this->Add_Mobile->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Add_Mobile->AutoSize = true;
			this->Add_Mobile->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_Mobile->ForeColor = System::Drawing::Color::Teal;
			this->Add_Mobile->Location = System::Drawing::Point(67, 79);
			this->Add_Mobile->Name = L"Add_Mobile";
			this->Add_Mobile->Size = System::Drawing::Size(63, 19);
			this->Add_Mobile->TabIndex = 1;
			this->Add_Mobile->Text = L"Mobile";
			// 
			// Add_Email_Id
			// 
			this->Add_Email_Id->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Add_Email_Id->AutoSize = true;
			this->Add_Email_Id->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_Email_Id->ForeColor = System::Drawing::Color::Teal;
			this->Add_Email_Id->Location = System::Drawing::Point(67, 138);
			this->Add_Email_Id->Name = L"Add_Email_Id";
			this->Add_Email_Id->Size = System::Drawing::Size(76, 19);
			this->Add_Email_Id->TabIndex = 2;
			this->Add_Email_Id->Text = L"Email_id";
			// 
			// Add_Tele
			// 
			this->Add_Tele->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Add_Tele->AutoSize = true;
			this->Add_Tele->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_Tele->ForeColor = System::Drawing::Color::Teal;
			this->Add_Tele->Location = System::Drawing::Point(67, 197);
			this->Add_Tele->Name = L"Add_Tele";
			this->Add_Tele->Size = System::Drawing::Size(90, 19);
			this->Add_Tele->TabIndex = 3;
			this->Add_Tele->Text = L"Telephone";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Teal;
			this->label5->Location = System::Drawing::Point(67, 257);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(70, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Address";
			// 
			// Add_Add
			// 
			this->Add_Add->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Add_Add.BackgroundImage")));
			this->Add_Add->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Add_Add->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_Add->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Add_Add->Location = System::Drawing::Point(215, 350);
			this->Add_Add->Name = L"Add_Add";
			this->Add_Add->Size = System::Drawing::Size(73, 68);
			this->Add_Add->TabIndex = 12;
			this->Add_Add->UseVisualStyleBackColor = true;
			this->Add_Add->Click += gcnew System::EventHandler(this, &Add_Contact::Add_Add_Click);
			// 
			// Add_Name_Text
			// 
			this->Add_Name_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Add_Name_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Add_Name_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_Name_Text->ForeColor = System::Drawing::Color::Teal;
			this->Add_Name_Text->Location = System::Drawing::Point(254, 16);
			this->Add_Name_Text->Name = L"Add_Name_Text";
			this->Add_Name_Text->Size = System::Drawing::Size(184, 26);
			this->Add_Name_Text->TabIndex = 6;
			this->Add_Name_Text->TextChanged += gcnew System::EventHandler(this, &Add_Contact::Add_Name_Text_TextChanged);
			// 
			// Add_Mobile_Text
			// 
			this->Add_Mobile_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Add_Mobile_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Add_Mobile_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_Mobile_Text->ForeColor = System::Drawing::Color::Teal;
			this->Add_Mobile_Text->Location = System::Drawing::Point(254, 75);
			this->Add_Mobile_Text->Name = L"Add_Mobile_Text";
			this->Add_Mobile_Text->Size = System::Drawing::Size(184, 26);
			this->Add_Mobile_Text->TabIndex = 7;
			this->Add_Mobile_Text->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add_Contact::Add_Mobile_Text_KeyPress);
			// 
			// Add_Email_Id_Text
			// 
			this->Add_Email_Id_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Add_Email_Id_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Add_Email_Id_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_Email_Id_Text->ForeColor = System::Drawing::Color::Teal;
			this->Add_Email_Id_Text->Location = System::Drawing::Point(254, 134);
			this->Add_Email_Id_Text->Name = L"Add_Email_Id_Text";
			this->Add_Email_Id_Text->Size = System::Drawing::Size(184, 26);
			this->Add_Email_Id_Text->TabIndex = 8;
			// 
			// Add_Telephone_Text
			// 
			this->Add_Telephone_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Add_Telephone_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Add_Telephone_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_Telephone_Text->ForeColor = System::Drawing::Color::Teal;
			this->Add_Telephone_Text->Location = System::Drawing::Point(254, 193);
			this->Add_Telephone_Text->Name = L"Add_Telephone_Text";
			this->Add_Telephone_Text->Size = System::Drawing::Size(184, 26);
			this->Add_Telephone_Text->TabIndex = 10;
			this->Add_Telephone_Text->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add_Contact::Add_Telephone_Text_KeyPress);
			// 
			// Add_Address_RichText
			// 
			this->Add_Address_RichText->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Add_Address_RichText->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tableLayoutPanel1->SetColumnSpan(this->Add_Address_RichText, 2);
			this->Add_Address_RichText->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_Address_RichText->ForeColor = System::Drawing::Color::Teal;
			this->Add_Address_RichText->Location = System::Drawing::Point(177, 239);
			this->Add_Address_RichText->Name = L"Add_Address_RichText";
			this->Add_Address_RichText->Size = System::Drawing::Size(257, 55);
			this->Add_Address_RichText->TabIndex = 11;
			this->Add_Address_RichText->Text = L"";
			this->Add_Address_RichText->TextChanged += gcnew System::EventHandler(this, &Add_Contact::richTextBox1_TextChanged);
			// 
			// Add_TelCode_Text
			// 
			this->Add_TelCode_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Add_TelCode_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Add_TelCode_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_TelCode_Text->ForeColor = System::Drawing::Color::Teal;
			this->Add_TelCode_Text->Location = System::Drawing::Point(173, 193);
			this->Add_TelCode_Text->Name = L"Add_TelCode_Text";
			this->Add_TelCode_Text->Size = System::Drawing::Size(63, 26);
			this->Add_TelCode_Text->TabIndex = 9;
			this->Add_TelCode_Text->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Add_Contact::Add_TelCode_Text_KeyPress);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 4;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				26.66667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				21.06667F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				52.53333F)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->Add_TelCode_Text, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->Add_Mobile_Text, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->Add_Name_Text, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->Add_Email_Id_Text, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->Add_Telephone_Text, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox4, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox5, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox2, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->Add_Name, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->Add_Tele, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->Add_Email_Id, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->Add_Mobile, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label5, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->Add_Address_RichText, 2, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(28, 32);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(447, 297);
			this->tableLayoutPanel1->TabIndex = 12;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(57, 53);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(4, 62);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(55, 53);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(3, 239);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(57, 55);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(3, 121);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(57, 53);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 17;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 180);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(58, 53);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			// 
			// Add_Contact
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(506, 445);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->Add_Add);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Add_Contact";
			this->Text = L"Add Contact";
			this->Load += gcnew System::EventHandler(this, &Add_Contact::Add_Contact_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }

private: System::Void Add_Add_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(String::IsNullOrWhiteSpace(this->Add_Name_Text->Text))
					{
						MessageBox::Show("Name is compulsory!");
					}
					else if(String::IsNullOrWhiteSpace(this->Add_Mobile_Text->Text))
					{
						MessageBox::Show("Mobile is compulsory!");
					}
					else if((String::IsNullOrWhiteSpace(this->Add_TelCode_Text->Text) && !(String::IsNullOrWhiteSpace(this->Add_Telephone_Text->Text))) || (!(String::IsNullOrWhiteSpace(this->Add_TelCode_Text->Text)) && String::IsNullOrWhiteSpace(this->Add_Telephone_Text->Text)))
					{
						MessageBox::Show("Both Code and Number should be filled in Telephone!");
					}
					else
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
						MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select name from contactsdb.contacts where userid="+userid+" and name='"+this->Add_Name_Text->Text+"';",conDatabase);
						int count=0;	
						try{
								conDatabase->Open();
								myReader=cmdDatabase->ExecuteReader();
								//check how many contacts with the given name are in the table
								while(myReader->Read())
								{
									count+=1;
								}
								myReader->Close();
							 }
							 catch(Exception^ ex){
								MessageBox::Show(ex->Message);
							 }
						if(count!=0)
						{
							MessageBox::Show(count + " Contact already exists!");
						}
						else
						{	//if it is 0. add it
							String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
       sw->WriteLine("user Successfully added contact "+Add_Name_Text->Text+"");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
							//insert name,mobile
							cmdDatabase=gcnew MySqlCommand("insert into contactsdb.contacts (`userid`,`name`,`mobile`) values ("+userid+",'"+this->Add_Name_Text->Text+"','"+this->Add_Mobile_Text->Text+"');",conDatabase);
							try{
								myReader=cmdDatabase->ExecuteReader();
								myReader->Close();
							 }
							 catch(Exception^ ex){
								MessageBox::Show(ex->Message);
							 }
							 //get sno of this contact
							cmdDatabase=gcnew MySqlCommand("select sno from contactsdb.contacts where userid="+userid+" and name='"+this->Add_Name_Text->Text+"';",conDatabase);
							int sno;
							try{
								myReader=cmdDatabase->ExecuteReader();
								myReader->Read();
								sno = myReader->GetInt32("sno");
								myReader->Close();
							 }
							 catch(Exception^ ex){
								MessageBox::Show(ex->Message);
							 }
							 //now insert the fields to the second table based on this sno
							 if(!String::IsNullOrWhiteSpace(this->Add_Email_Id_Text->Text)){
								
								cmdDatabase=gcnew MySqlCommand("insert into contactsdb.contacts1 (`userid`,`sno`,`fieldname`,`value`) values ("+userid+","+sno+",'Email Id','"+this->Add_Email_Id_Text->Text+"');",conDatabase);
								try{
									myReader=cmdDatabase->ExecuteReader();
									myReader->Close();
								 }
								 catch(Exception^ ex){
									MessageBox::Show(ex->Message);
								 }
							}
							String^ telephone=L"";
							if(!String::IsNullOrWhiteSpace(this->Add_TelCode_Text->Text)){
								telephone=this->Add_TelCode_Text->Text+" - "+this->Add_Telephone_Text->Text;
								cmdDatabase=gcnew MySqlCommand("insert into contactsdb.contacts1 (`userid`,`sno`,`fieldname`,`value`) values ("+userid+","+sno+",'Telephone','"+telephone+"');",conDatabase);
								try{
									myReader=cmdDatabase->ExecuteReader();
									myReader->Close();
								 }
								 catch(Exception^ ex){
									MessageBox::Show(ex->Message);
								 }
							} 
							if(!String::IsNullOrWhiteSpace(this->Add_Address_RichText->Text))
							{
								cmdDatabase=gcnew MySqlCommand("insert into contactsdb.contacts1 (`userid`,`sno`,`fieldname`,`value`) values ("+userid+","+sno+",'Address','"+this->Add_Address_RichText->Text+"');",conDatabase);
								try{
									myReader=cmdDatabase->ExecuteReader();
									myReader->Close();
								 }
								 catch(Exception^ ex){
									MessageBox::Show(ex->Message);
								 }
							}
						}
						this->Close();
						 
					 }
		 }
private: System::Void Add_Name_Text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
		 
		 //Source: http://www.daniweb.com/software-development/cpp/threads/310070/numeric-textbox-for-c-windows-forms
private: System::Void Add_Mobile_Text_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

			 // Accept only digits and the Backspace character in mobile field
			if(!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
		 }
private: System::Void Add_TelCode_Text_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

			   // Accept only digits and the Backspace character
			if(!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
		 }
private: System::Void Add_Telephone_Text_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
			   // Accept only digits and the Backspace character
			if(!Char::IsDigit(e->KeyChar) && e->KeyChar != 0x08)
			e->Handled = true;
		 }
private: System::Void Add_Contact_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
