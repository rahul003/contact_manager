// Contacts Management System
// Developed By Aditya,Rohit,Rahul,Harshith,Bhanu,Prashanth 
// Under Dr.P.K.Das

// This software has been developed to manage contacts of various people
// The software is focussed to help people remember the various details about other people(for e.g. email, mobile etc.)
// You can import and export various contacts in csv formats
// It is sort of a soft copy of contacts diary that people use to keep contact records

// LOGIN FORM

#pragma once
#include "Global.h"
#include "Form2.h"
#include "Register.h"
#include "Reset Password.h"
#include "settings.h"
#include "developers.h"
using namespace System;
using namespace System::IO;
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
	private: System::Windows::Forms::TextBox^  Username_Text;
	protected: 
	private: System::Windows::Forms::TextBox^  Password_Text;
	private: System::Windows::Forms::Label^  username_Label;
	private: System::Windows::Forms::Label^  Password_Label;
	private: System::Windows::Forms::Button^  Login_Button;
	private: System::Windows::Forms::Button^  Register_Button;
	private: System::Windows::Forms::LinkLabel^  Forgot_Password_Link;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::LinkLabel^  linkLabel2;
	private: System::ComponentModel::IContainer^  components;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->Username_Text = (gcnew System::Windows::Forms::TextBox());
			this->Password_Text = (gcnew System::Windows::Forms::TextBox());
			this->username_Label = (gcnew System::Windows::Forms::Label());
			this->Password_Label = (gcnew System::Windows::Forms::Label());
			this->Login_Button = (gcnew System::Windows::Forms::Button());
			this->Register_Button = (gcnew System::Windows::Forms::Button());
			this->Forgot_Password_Link = (gcnew System::Windows::Forms::LinkLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Username_Text
			// 
			this->Username_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Username_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Username_Text->Location = System::Drawing::Point(130, 62);
			this->Username_Text->Name = L"Username_Text";
			this->Username_Text->Size = System::Drawing::Size(134, 27);
			this->Username_Text->TabIndex = 0;
			// 
			// Password_Text
			// 
			this->Password_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Password_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Password_Text->Location = System::Drawing::Point(130, 112);
			this->Password_Text->Name = L"Password_Text";
			this->Password_Text->PasswordChar = '*';
			this->Password_Text->Size = System::Drawing::Size(134, 27);
			this->Password_Text->TabIndex = 1;
			// 
			// username_Label
			// 
			this->username_Label->AutoSize = true;
			this->username_Label->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->username_Label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->username_Label->Location = System::Drawing::Point(29, 65);
			this->username_Label->Name = L"username_Label";
			this->username_Label->Size = System::Drawing::Size(86, 19);
			this->username_Label->TabIndex = 2;
			this->username_Label->Text = L"User Name";
			// 
			// Password_Label
			// 
			this->Password_Label->AutoSize = true;
			this->Password_Label->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Password_Label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Password_Label->Location = System::Drawing::Point(29, 115);
			this->Password_Label->Name = L"Password_Label";
			this->Password_Label->Size = System::Drawing::Size(74, 19);
			this->Password_Label->TabIndex = 3;
			this->Password_Label->Text = L"Password";
			// 
			// Login_Button
			// 
			this->Login_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Login_Button->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Login_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Login_Button->Location = System::Drawing::Point(157, 183);
			this->Login_Button->Name = L"Login_Button";
			this->Login_Button->Size = System::Drawing::Size(78, 39);
			this->Login_Button->TabIndex = 4;
			this->Login_Button->Text = L"Login";
			this->Login_Button->UseVisualStyleBackColor = true;
			this->Login_Button->Click += gcnew System::EventHandler(this, &Form1::Login_Button_Click);
			// 
			// Register_Button
			// 
			this->Register_Button->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Register_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Register_Button->Location = System::Drawing::Point(163, 416);
			this->Register_Button->Name = L"Register_Button";
			this->Register_Button->Size = System::Drawing::Size(90, 53);
			this->Register_Button->TabIndex = 5;
			this->Register_Button->Text = L"Register";
			this->Register_Button->UseVisualStyleBackColor = true;
			this->Register_Button->Click += gcnew System::EventHandler(this, &Form1::Register_Button_Click);
			// 
			// Forgot_Password_Link
			// 
			this->Forgot_Password_Link->AutoSize = true;
			this->Forgot_Password_Link->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Forgot_Password_Link->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Forgot_Password_Link->Location = System::Drawing::Point(490, 433);
			this->Forgot_Password_Link->Name = L"Forgot_Password_Link";
			this->Forgot_Password_Link->Size = System::Drawing::Size(135, 19);
			this->Forgot_Password_Link->TabIndex = 6;
			this->Forgot_Password_Link->TabStop = true;
			this->Forgot_Password_Link->Text = L"Forgot Password \?";
			this->Forgot_Password_Link->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::Forgot_Password_Link_LinkClicked);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(68, 130);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(232, 239);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(422, 416);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(62, 53);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(97, 416);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(60, 53);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(56, 166);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(76, 73);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label1->Location = System::Drawing::Point(72, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 19);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Login to get started!";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->Controls->Add(this->username_Label);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Password_Label);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->Username_Text);
			this->panel1->Controls->Add(this->Password_Text);
			this->panel1->Controls->Add(this->Login_Button);
			this->panel1->Location = System::Drawing::Point(364, 107);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(295, 284);
			this->panel1->TabIndex = 12;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label2->Location = System::Drawing::Point(281, 22);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(157, 33);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Contacts++";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel1->Location = System::Drawing::Point(579, 22);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(119, 19);
			this->linkLabel1->TabIndex = 14;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"MySQL settings";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->linkLabel2->Location = System::Drawing::Point(30, 22);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(86, 19);
			this->linkLabel2->TabIndex = 15;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Developers";
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel2_LinkClicked);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ClientSize = System::Drawing::Size(710, 504);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Forgot_Password_Link);
			this->Controls->Add(this->Register_Button);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Login_Button_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 // Fetching name, password, port of the database from 'dblogin.txt' 
				 
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
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.login where username='"+this->Username_Text->Text+"' and password='"+this->Password_Text->Text+"';",conDatabase);
				 MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("select * from contactsdb.login where username='"+this->Username_Text->Text+"';",conDatabase);
				 MySqlDataReader^ myReader;
				 try{
					 
					 // Executing query to check whether username and password match or not
					 conDatabase->Open();
					 myReader=cmdDatabase->ExecuteReader();
					 int count=0;

					 while(myReader->Read())
					 {
						count++;
					 }
					 
					 // If both username and password match then load Form2
					 if(count==1)
					 {
						 userid = myReader->GetInt32("userid");
						 myReader->Close();
						 Form2^ form2 = gcnew Form2();
						 form2->Show();
						 this->Visible = false;
					 }
					 else
					 {
						 myReader->Close();
						 myReader=cmdDatabase1->ExecuteReader();
						 int count1=0;
						 while(myReader->Read())
						 {
							count1++;
						 }

						 // Else in case if only username matches so ask him whether he forgot his password or not
						 if(count1==1)
						 {
							 if (MessageBox::Show("Did you forget your password?", "Forgot Password", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
							 {
								 ResetPassword^ reset=gcnew ResetPassword();
								 reset->Show();
							 }
						 }
						 // Else we deny him the access
						 else
						 {
							 MessageBox::Show("Incorrect Combination of username and password. Try again");
						 }
						 myReader->Close();
					}
				 }

				 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
				 }


				 

			 }
private: System::Void Register_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 // The window to register a new user is displayed
			 Register ^signup =gcnew Register();
			signup->Show();

		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 
			 // We check for the value timer every second and once it is  we make this form visible
			 // This comes in use when a logged in user logs out
			 if(logout==1 ){
				 this->Visible=true;
				logout = 0;
			 }

		 }
private: System::Void Forgot_Password_Link_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

			 // The window to reset the password is displayed
			 ResetPassword^ reset=gcnew ResetPassword();
								 reset->Show();

		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 
			 // The window to change the database connection settings is displayed
			 settings^ set1 = gcnew settings();
						 set1->Show();

		 }
private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {

			 developers^ set2 = gcnew developers();
			 set2->Show();

		 }
};
}

