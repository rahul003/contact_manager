#pragma once

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
	/// Summary for ResetPassword
	/// </summary>
	public ref class ResetPassword : public System::Windows::Forms::Form
	{
	public:
		ResetPassword(void)
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
		~ResetPassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Label_UserName;
	protected: 
	private: System::Windows::Forms::Label^  Label_Question;
	private: System::Windows::Forms::Label^  Label_Answer;
	private: System::Windows::Forms::TextBox^  Text_UserName;
	private: System::Windows::Forms::TextBox^  Text_Answer;
	private: System::Windows::Forms::RichTextBox^  RichText_Question;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  Label_Password;
	private: System::Windows::Forms::Label^  Label_RePassword;
	private: System::Windows::Forms::TextBox^  Text_Password;
	private: System::Windows::Forms::TextBox^  Text_RePassword;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::Button^  Button_Reset;




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
			this->Label_UserName = (gcnew System::Windows::Forms::Label());
			this->Label_Question = (gcnew System::Windows::Forms::Label());
			this->Label_Answer = (gcnew System::Windows::Forms::Label());
			this->Text_UserName = (gcnew System::Windows::Forms::TextBox());
			this->Text_Answer = (gcnew System::Windows::Forms::TextBox());
			this->RichText_Question = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Label_Password = (gcnew System::Windows::Forms::Label());
			this->Label_RePassword = (gcnew System::Windows::Forms::Label());
			this->Text_Password = (gcnew System::Windows::Forms::TextBox());
			this->Text_RePassword = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Button_Reset = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Label_UserName
			// 
			this->Label_UserName->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Label_UserName->AutoSize = true;
			this->Label_UserName->Location = System::Drawing::Point(3, 15);
			this->Label_UserName->Name = L"Label_UserName";
			this->Label_UserName->Size = System::Drawing::Size(86, 19);
			this->Label_UserName->TabIndex = 0;
			this->Label_UserName->Text = L"User Name";
			// 
			// Label_Question
			// 
			this->Label_Question->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Label_Question->AutoSize = true;
			this->Label_Question->Location = System::Drawing::Point(3, 64);
			this->Label_Question->Name = L"Label_Question";
			this->Label_Question->Size = System::Drawing::Size(139, 19);
			this->Label_Question->TabIndex = 1;
			this->Label_Question->Text = L"Security Question:";
			// 
			// Label_Answer
			// 
			this->Label_Answer->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Label_Answer->AutoSize = true;
			this->Label_Answer->Location = System::Drawing::Point(3, 113);
			this->Label_Answer->Name = L"Label_Answer";
			this->Label_Answer->Size = System::Drawing::Size(122, 19);
			this->Label_Answer->TabIndex = 2;
			this->Label_Answer->Text = L"Security Answer";
			// 
			// Text_UserName
			// 
			this->Text_UserName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Text_UserName->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Text_UserName->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Text_UserName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Text_UserName->Location = System::Drawing::Point(183, 11);
			this->Text_UserName->Name = L"Text_UserName";
			this->Text_UserName->Size = System::Drawing::Size(190, 27);
			this->Text_UserName->TabIndex = 1;
			// 
			// Text_Answer
			// 
			this->Text_Answer->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Text_Answer->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Text_Answer->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Text_Answer->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Text_Answer->Location = System::Drawing::Point(183, 109);
			this->Text_Answer->Name = L"Text_Answer";
			this->Text_Answer->Size = System::Drawing::Size(190, 27);
			this->Text_Answer->TabIndex = 4;
			// 
			// RichText_Question
			// 
			this->RichText_Question->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->RichText_Question->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->RichText_Question->Location = System::Drawing::Point(183, 57);
			this->RichText_Question->Name = L"RichText_Question";
			this->RichText_Question->ReadOnly = true;
			this->RichText_Question->Size = System::Drawing::Size(190, 32);
			this->RichText_Question->TabIndex = 3;
			this->RichText_Question->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->Location = System::Drawing::Point(477, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Get Question";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ResetPassword::button1_Click);
			// 
			// Label_Password
			// 
			this->Label_Password->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Label_Password->AutoSize = true;
			this->Label_Password->Location = System::Drawing::Point(3, 162);
			this->Label_Password->Name = L"Label_Password";
			this->Label_Password->Size = System::Drawing::Size(110, 19);
			this->Label_Password->TabIndex = 7;
			this->Label_Password->Text = L"New Password";
			// 
			// Label_RePassword
			// 
			this->Label_RePassword->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->Label_RePassword->AutoSize = true;
			this->Label_RePassword->Location = System::Drawing::Point(3, 213);
			this->Label_RePassword->Name = L"Label_RePassword";
			this->Label_RePassword->Size = System::Drawing::Size(135, 19);
			this->Label_RePassword->TabIndex = 8;
			this->Label_RePassword->Text = L"Re-Type Password";
			// 
			// Text_Password
			// 
			this->Text_Password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Text_Password->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Text_Password->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Text_Password->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Text_Password->Location = System::Drawing::Point(183, 158);
			this->Text_Password->Name = L"Text_Password";
			this->Text_Password->PasswordChar = '*';
			this->Text_Password->Size = System::Drawing::Size(190, 27);
			this->Text_Password->TabIndex = 5;
			// 
			// Text_RePassword
			// 
			this->Text_RePassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Text_RePassword->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Text_RePassword->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Text_RePassword->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Text_RePassword->Location = System::Drawing::Point(183, 209);
			this->Text_RePassword->Name = L"Text_RePassword";
			this->Text_RePassword->PasswordChar = '*';
			this->Text_RePassword->Size = System::Drawing::Size(190, 27);
			this->Text_RePassword->TabIndex = 6;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->Controls->Add(this->Label_UserName, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->Label_Question, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->Label_Answer, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->Text_UserName, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->Label_Password, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->Label_RePassword, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->Text_RePassword, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->Text_Password, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->Text_Answer, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->RichText_Question, 1, 1);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(60, 48);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(411, 249);
			this->tableLayoutPanel1->TabIndex = 12;
			// 
			// Button_Reset
			// 
			this->Button_Reset->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button_Reset->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Button_Reset->Location = System::Drawing::Point(209, 327);
			this->Button_Reset->Name = L"Button_Reset";
			this->Button_Reset->Size = System::Drawing::Size(85, 38);
			this->Button_Reset->TabIndex = 7;
			this->Button_Reset->Text = L"Reset";
			this->Button_Reset->UseVisualStyleBackColor = true;
			this->Button_Reset->Click += gcnew System::EventHandler(this, &ResetPassword::Button_Reset_Click);
			// 
			// ResetPassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 404);
			this->Controls->Add(this->Button_Reset);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->button1);
			this->Name = L"ResetPassword";
			this->Text = L"Reset Password";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 // Check if the username is valid
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
						MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select userid from contactsdb.login where username='"+Text_UserName->Text+"';",conDatabase);
						int count=0;	
						try{
								conDatabase->Open();
								myReader=cmdDatabase->ExecuteReader();
								while(myReader->Read())
								{
									count+=1;
								}
								myReader->Close();
							 }
							 catch(Exception^ ex){
								MessageBox::Show(ex->Message);
							 }

							 // If the username does not exist
							 if(count==0)
							 {
								 MessageBox::Show("Invalid User Name!");
							 }
							 // If it exists display the security question
							 else
							 {
								 cmdDatabase=gcnew MySqlCommand("select question from contactsdb.login where username='"+Text_UserName->Text+"';",conDatabase);
								 myReader=cmdDatabase->ExecuteReader();
								 myReader->Read();
								 RichText_Question->Text=myReader->GetString("question");
								 Text_UserName->ReadOnly=true;
								 myReader->Close();
								 conDatabase->Close();
							 }
			 }
private: System::Void Button_Reset_Click(System::Object^  sender, System::EventArgs^  e) {

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
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select answer from contactsdb.login where username='"+Text_UserName->Text+"';",conDatabase);
			 try{
						conDatabase->Open();
						myReader=cmdDatabase->ExecuteReader();
						myReader->Read();
						if(Text_Answer->Text!=myReader->GetString("answer"))
						{
							MessageBox::Show("Invalid Security Answer!");
						}
						else if(Text_Password->Text=="")
						{
							MessageBox::Show("Invalid Password!");
						}
						else if(Text_Password->Text!=Text_RePassword->Text)
						{
							MessageBox::Show("Passwords do not match!");
						}
						else
						{
							myReader->Close();
							cmdDatabase=gcnew MySqlCommand("update contactsdb.login set password='"+Text_Password->Text+"' where username='"+Text_UserName->Text+"';",conDatabase);
							// Update new password
							myReader=cmdDatabase->ExecuteReader();
							MessageBox::Show("Password Updated Successfully!");
						}
						myReader->Close();
						conDatabase->Close();
					 }
					 catch(Exception^ ex){
					MessageBox::Show(ex->Message);
					 }
		 }
};
}
