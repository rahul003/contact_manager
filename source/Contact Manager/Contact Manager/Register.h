//REGISTER FORM

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
	/// Summary for Register
	/// </summary>
	public ref class Register : public System::Windows::Forms::Form
	{
	public:
		Register(void)
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
		~Register()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Username_Register_Label;
	protected: 
	private: System::Windows::Forms::Label^  Password_Register_Label;
	private: System::Windows::Forms::Label^  Security_Register_Label;
	private: System::Windows::Forms::Label^  Answer_Register_Label;
	private: System::Windows::Forms::TextBox^  Username_Register_Text;
	private: System::Windows::Forms::TextBox^  Password_Register_Text;
	private: System::Windows::Forms::TextBox^  Answer_Register_Text;
	private: System::Windows::Forms::RichTextBox^  Security_Register_RichText;
	private: System::Windows::Forms::Button^  Register_Register_Button;
	private: System::Windows::Forms::Label^  RePassword_Register_Label;
	private: System::Windows::Forms::TextBox^  RePassword_Register_Text;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Register::typeid));
			this->Username_Register_Label = (gcnew System::Windows::Forms::Label());
			this->Password_Register_Label = (gcnew System::Windows::Forms::Label());
			this->Security_Register_Label = (gcnew System::Windows::Forms::Label());
			this->Answer_Register_Label = (gcnew System::Windows::Forms::Label());
			this->Username_Register_Text = (gcnew System::Windows::Forms::TextBox());
			this->Password_Register_Text = (gcnew System::Windows::Forms::TextBox());
			this->Answer_Register_Text = (gcnew System::Windows::Forms::TextBox());
			this->Security_Register_RichText = (gcnew System::Windows::Forms::RichTextBox());
			this->Register_Register_Button = (gcnew System::Windows::Forms::Button());
			this->RePassword_Register_Label = (gcnew System::Windows::Forms::Label());
			this->RePassword_Register_Text = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Username_Register_Label
			// 
			this->Username_Register_Label->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Username_Register_Label->AutoSize = true;
			this->Username_Register_Label->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Username_Register_Label->Location = System::Drawing::Point(3, 17);
			this->Username_Register_Label->Name = L"Username_Register_Label";
			this->Username_Register_Label->Size = System::Drawing::Size(86, 19);
			this->Username_Register_Label->TabIndex = 0;
			this->Username_Register_Label->Text = L"User Name";
			// 
			// Password_Register_Label
			// 
			this->Password_Register_Label->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Password_Register_Label->AutoSize = true;
			this->Password_Register_Label->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Password_Register_Label->Location = System::Drawing::Point(3, 70);
			this->Password_Register_Label->Name = L"Password_Register_Label";
			this->Password_Register_Label->Size = System::Drawing::Size(74, 19);
			this->Password_Register_Label->TabIndex = 1;
			this->Password_Register_Label->Text = L"Password";
			// 
			// Security_Register_Label
			// 
			this->Security_Register_Label->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Security_Register_Label->AutoSize = true;
			this->Security_Register_Label->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Security_Register_Label->Location = System::Drawing::Point(3, 176);
			this->Security_Register_Label->Name = L"Security_Register_Label";
			this->Security_Register_Label->Size = System::Drawing::Size(143, 19);
			this->Security_Register_Label->TabIndex = 2;
			this->Security_Register_Label->Text = L"Security Question :";
			// 
			// Answer_Register_Label
			// 
			this->Answer_Register_Label->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Answer_Register_Label->AutoSize = true;
			this->Answer_Register_Label->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Answer_Register_Label->Location = System::Drawing::Point(3, 231);
			this->Answer_Register_Label->Name = L"Answer_Register_Label";
			this->Answer_Register_Label->Size = System::Drawing::Size(122, 19);
			this->Answer_Register_Label->TabIndex = 3;
			this->Answer_Register_Label->Text = L"Security Answer";
			this->Answer_Register_Label->Click += gcnew System::EventHandler(this, &Register::Answer_Register_Label_Click);
			// 
			// Username_Register_Text
			// 
			this->Username_Register_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Username_Register_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Username_Register_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Username_Register_Text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Username_Register_Text->Location = System::Drawing::Point(174, 13);
			this->Username_Register_Text->Name = L"Username_Register_Text";
			this->Username_Register_Text->Size = System::Drawing::Size(166, 27);
			this->Username_Register_Text->TabIndex = 1;
			// 
			// Password_Register_Text
			// 
			this->Password_Register_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Password_Register_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Password_Register_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Password_Register_Text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Password_Register_Text->Location = System::Drawing::Point(174, 66);
			this->Password_Register_Text->Name = L"Password_Register_Text";
			this->Password_Register_Text->PasswordChar = '*';
			this->Password_Register_Text->Size = System::Drawing::Size(166, 27);
			this->Password_Register_Text->TabIndex = 2;
			// 
			// Answer_Register_Text
			// 
			this->Answer_Register_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Answer_Register_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Answer_Register_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Answer_Register_Text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Answer_Register_Text->Location = System::Drawing::Point(174, 227);
			this->Answer_Register_Text->Name = L"Answer_Register_Text";
			this->Answer_Register_Text->Size = System::Drawing::Size(166, 27);
			this->Answer_Register_Text->TabIndex = 5;
			// 
			// Security_Register_RichText
			// 
			this->Security_Register_RichText->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Security_Register_RichText->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Security_Register_RichText->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Security_Register_RichText->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Security_Register_RichText->Location = System::Drawing::Point(174, 162);
			this->Security_Register_RichText->Name = L"Security_Register_RichText";
			this->Security_Register_RichText->Size = System::Drawing::Size(166, 47);
			this->Security_Register_RichText->TabIndex = 4;
			this->Security_Register_RichText->Text = L"";
			this->Security_Register_RichText->TextChanged += gcnew System::EventHandler(this, &Register::Security_Register_RichText_TextChanged);
			// 
			// Register_Register_Button
			// 
			this->Register_Register_Button->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_Register_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Register_Register_Button->Location = System::Drawing::Point(207, 369);
			this->Register_Register_Button->Name = L"Register_Register_Button";
			this->Register_Register_Button->Size = System::Drawing::Size(85, 48);
			this->Register_Register_Button->TabIndex = 6;
			this->Register_Register_Button->Text = L"Register";
			this->Register_Register_Button->UseVisualStyleBackColor = true;
			this->Register_Register_Button->Click += gcnew System::EventHandler(this, &Register::Register_Register_Button_Click);
			// 
			// RePassword_Register_Label
			// 
			this->RePassword_Register_Label->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->RePassword_Register_Label->AutoSize = true;
			this->RePassword_Register_Label->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RePassword_Register_Label->Location = System::Drawing::Point(3, 123);
			this->RePassword_Register_Label->Name = L"RePassword_Register_Label";
			this->RePassword_Register_Label->Size = System::Drawing::Size(135, 19);
			this->RePassword_Register_Label->TabIndex = 10;
			this->RePassword_Register_Label->Text = L"Re-Type Password";
			// 
			// RePassword_Register_Text
			// 
			this->RePassword_Register_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->RePassword_Register_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->RePassword_Register_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RePassword_Register_Text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->RePassword_Register_Text->Location = System::Drawing::Point(174, 119);
			this->RePassword_Register_Text->Name = L"RePassword_Register_Text";
			this->RePassword_Register_Text->PasswordChar = '*';
			this->RePassword_Register_Text->Size = System::Drawing::Size(166, 27);
			this->RePassword_Register_Text->TabIndex = 3;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50)));
			this->tableLayoutPanel1->Controls->Add(this->Username_Register_Label, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->RePassword_Register_Text, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->Answer_Register_Text, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->Security_Register_RichText, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->Password_Register_Label, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->RePassword_Register_Label, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->Security_Register_Label, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->Answer_Register_Label, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->Password_Register_Text, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->Username_Register_Text, 1, 0);
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(38, 69);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(343, 269);
			this->tableLayoutPanel1->TabIndex = 12;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(34, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 23);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Now fill up the form and let\'s get started!";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(116, 358);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(85, 73);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// Register
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(428, 467);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->Register_Register_Button);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Register";
			this->Text = L"Register";
			this->Load += gcnew System::EventHandler(this, &Register::Register_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Register_Register_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				if(String::IsNullOrWhiteSpace(Username_Register_Text->Text))
				{
					MessageBox::Show("Invalid Name!");
				}
				else if(Password_Register_Text->Text=="")
				{
					MessageBox::Show("Invalid Password!");
				}
				else if(Password_Register_Text->Text!=RePassword_Register_Text->Text)
				{
					MessageBox::Show("Passwords do no match!");
				}
				else if(Security_Register_RichText->Text=="")
				{
					MessageBox::Show("Invalid Security Question!");
				}
				else if(Answer_Register_Text->Text=="")
				{
					MessageBox::Show("Invalid Security Answer!");
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
					 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select username from contactsdb.login where username='"+Username_Register_Text->Text+"';",conDatabase); 
					 MySqlDataReader^ myReader;
					 try{
						 conDatabase->Open();
						 // Check if the user name already exists
						 myReader=cmdDatabase->ExecuteReader();	
						 int count=0;
						 while(myReader->Read())
						 {
							 count+=1;
						 }
						 if(count!=0)
						 {
							 MessageBox::Show("Username already exists!");
						 }
						 else
						 {
							 myReader->Close();
							 // insert user credentials into the database
							cmdDatabase=gcnew MySqlCommand("insert into contactsdb.login (username,password,question,answer) values('"+this->Username_Register_Text->Text+"','"+this->Password_Register_Text->Text+"','"+this->Security_Register_RichText->Text+"','"+this->Answer_Register_Text->Text+"');",conDatabase);
							try
							{
								cmdDatabase->ExecuteReader();
								MessageBox::Show("Registration Successful!");

								this->Hide();
							}
							catch(Exception^ ex){
								MessageBox::Show(ex->Message);
							}
						 }
					 }
					 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
					 }
					 myReader->Close();
				}

			 
			 }
private: System::Void Register_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Security_Register_RichText_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Answer_Register_Label_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
