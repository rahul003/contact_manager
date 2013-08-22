// CONTACT MANAGER FORM

#pragma once
#include "Global.h"
#include "Add_Contact.h"
#include "Cn_Info.h"
#include "Notifications.h"
#include "Restore Contact.h"

namespace ContactManager {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace std;
	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  Contacts_Listview;
	protected: 

	protected: 
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::Button^  Refresh_Contacts_Button;
	private: System::Windows::Forms::Button^  Add_Contact_Button;
	private: System::Windows::Forms::ComboBox^  Combo_Field;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Query_Text;


	private: System::Windows::Forms::Button^  Import_Button;
	private: System::Windows::Forms::Button^  Export_Button;

	private: System::Windows::Forms::Button^  Notification_Button;
	private: System::Windows::Forms::Button^  Restore_Contact;
	private: System::Windows::Forms::Button^  Delete_Contact;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;

	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Button^  Search_Button;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Label^  Label_Username;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form2::typeid));
			this->Contacts_Listview = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->Refresh_Contacts_Button = (gcnew System::Windows::Forms::Button());
			this->Add_Contact_Button = (gcnew System::Windows::Forms::Button());
			this->Combo_Field = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Query_Text = (gcnew System::Windows::Forms::TextBox());
			this->Import_Button = (gcnew System::Windows::Forms::Button());
			this->Export_Button = (gcnew System::Windows::Forms::Button());
			this->Notification_Button = (gcnew System::Windows::Forms::Button());
			this->Restore_Contact = (gcnew System::Windows::Forms::Button());
			this->Delete_Contact = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->Search_Button = (gcnew System::Windows::Forms::Button());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->Label_Username = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			this->SuspendLayout();
			// 
			// Contacts_Listview
			// 
			this->Contacts_Listview->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) {this->columnHeader1, 
				this->columnHeader2});
			this->Contacts_Listview->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Contacts_Listview->FullRowSelect = true;
			this->Contacts_Listview->GridLines = true;
			this->Contacts_Listview->Location = System::Drawing::Point(250, 104);
			this->Contacts_Listview->Name = L"Contacts_Listview";
			this->Contacts_Listview->Size = System::Drawing::Size(366, 377);
			this->Contacts_Listview->TabIndex = 0;
			this->Contacts_Listview->UseCompatibleStateImageBehavior = false;
			this->Contacts_Listview->View = System::Windows::Forms::View::Details;
			this->Contacts_Listview->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &Form2::Contacts_Listview_MouseDoubleClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Name";
			this->columnHeader1->Width = 184;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Mobile";
			this->columnHeader2->Width = 212;
			// 
			// Refresh_Contacts_Button
			// 
			this->Refresh_Contacts_Button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Refresh_Contacts_Button->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Refresh_Contacts_Button->Location = System::Drawing::Point(103, 24);
			this->Refresh_Contacts_Button->Name = L"Refresh_Contacts_Button";
			this->Refresh_Contacts_Button->Size = System::Drawing::Size(78, 30);
			this->Refresh_Contacts_Button->TabIndex = 1;
			this->Refresh_Contacts_Button->Text = L"Refresh";
			this->Refresh_Contacts_Button->UseVisualStyleBackColor = true;
			this->Refresh_Contacts_Button->Click += gcnew System::EventHandler(this, &Form2::Refresh_Contacts_Button_Click);
			// 
			// Add_Contact_Button
			// 
			this->Add_Contact_Button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Add_Contact_Button->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Add_Contact_Button->Location = System::Drawing::Point(103, 101);
			this->Add_Contact_Button->Name = L"Add_Contact_Button";
			this->Add_Contact_Button->Size = System::Drawing::Size(78, 28);
			this->Add_Contact_Button->TabIndex = 2;
			this->Add_Contact_Button->Text = L"Add Contact";
			this->Add_Contact_Button->UseVisualStyleBackColor = true;
			this->Add_Contact_Button->Click += gcnew System::EventHandler(this, &Form2::Add_Contact_Button_Click);
			// 
			// Combo_Field
			// 
			this->Combo_Field->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Combo_Field->FormattingEnabled = true;
			this->Combo_Field->Items->AddRange(gcnew cli::array< System::Object^  >(16) {L"Name", L"Mobile", L"Email Id", L"Group", L"State", 
				L"City", L"Address", L"Hobbies", L"Favourite Music", L"Favourite Movies", L"Favourite Dishes", L"Favourite Places", L"Favourite Sports", 
				L"Favourite Teams", L"Favourite Quotes", L"Inspirational people"});
			this->Combo_Field->Location = System::Drawing::Point(794, 199);
			this->Combo_Field->Name = L"Combo_Field";
			this->Combo_Field->Size = System::Drawing::Size(121, 27);
			this->Combo_Field->TabIndex = 3;
			this->Combo_Field->Text = L"Name";
			this->Combo_Field->SelectedIndexChanged += gcnew System::EventHandler(this, &Form2::Combo_Field_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(732, 202);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(45, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Field";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(732, 240);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 19);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Query";
			// 
			// Query_Text
			// 
			this->Query_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Query_Text->Location = System::Drawing::Point(794, 237);
			this->Query_Text->Name = L"Query_Text";
			this->Query_Text->Size = System::Drawing::Size(121, 27);
			this->Query_Text->TabIndex = 6;
			this->Query_Text->TextChanged += gcnew System::EventHandler(this, &Form2::Query_Text_TextChanged);
			// 
			// Import_Button
			// 
			this->Import_Button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Import_Button->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Import_Button->Location = System::Drawing::Point(101, 251);
			this->Import_Button->Name = L"Import_Button";
			this->Import_Button->Size = System::Drawing::Size(82, 32);
			this->Import_Button->TabIndex = 8;
			this->Import_Button->Text = L"Import";
			this->Import_Button->UseVisualStyleBackColor = true;
			this->Import_Button->Click += gcnew System::EventHandler(this, &Form2::Import_Button_Click);
			// 
			// Export_Button
			// 
			this->Export_Button->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Export_Button->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Export_Button->Location = System::Drawing::Point(99, 327);
			this->Export_Button->Name = L"Export_Button";
			this->Export_Button->Size = System::Drawing::Size(85, 33);
			this->Export_Button->TabIndex = 9;
			this->Export_Button->Text = L"Export";
			this->Export_Button->UseVisualStyleBackColor = true;
			this->Export_Button->Click += gcnew System::EventHandler(this, &Form2::Export_Button_Click);
			// 
			// Notification_Button
			// 
			this->Notification_Button->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Notification_Button->Location = System::Drawing::Point(750, 423);
			this->Notification_Button->Name = L"Notification_Button";
			this->Notification_Button->Size = System::Drawing::Size(172, 44);
			this->Notification_Button->TabIndex = 11;
			this->Notification_Button->Text = L"View Notifications";
			this->Notification_Button->UseVisualStyleBackColor = true;
			this->Notification_Button->Click += gcnew System::EventHandler(this, &Form2::Notification_Button_Click);
			// 
			// Restore_Contact
			// 
			this->Restore_Contact->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Restore_Contact->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Restore_Contact->Location = System::Drawing::Point(101, 404);
			this->Restore_Contact->Name = L"Restore_Contact";
			this->Restore_Contact->Size = System::Drawing::Size(81, 33);
			this->Restore_Contact->TabIndex = 12;
			this->Restore_Contact->Text = L"Restore";
			this->Restore_Contact->UseVisualStyleBackColor = true;
			this->Restore_Contact->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// Delete_Contact
			// 
			this->Delete_Contact->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Delete_Contact->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Delete_Contact->Location = System::Drawing::Point(101, 176);
			this->Delete_Contact->Name = L"Delete_Contact";
			this->Delete_Contact->Size = System::Drawing::Size(82, 29);
			this->Delete_Contact->TabIndex = 13;
			this->Delete_Contact->Text = L"Delete Contact";
			this->Delete_Contact->UseVisualStyleBackColor = true;
			this->Delete_Contact->Click += gcnew System::EventHandler(this, &Form2::Delete_Contact_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 60000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form2::timer1_Tick);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"CSV files|*.csv";
			this->openFileDialog1->Title = L"Select file to import";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				50.45454F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				49.54546F)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox7, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->Refresh_Contacts_Button, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->Restore_Contact, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->Add_Contact_Button, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->Delete_Contact, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->Import_Button, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->Export_Button, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox5, 0, 4);
			this->tableLayoutPanel1->Location = System::Drawing::Point(23, 23);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle()));
			this->tableLayoutPanel1->Size = System::Drawing::Size(189, 458);
			this->tableLayoutPanel1->TabIndex = 14;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form2::tableLayoutPanel1_Paint);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(11, 385);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(72, 71);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 16;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(77, 72);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(10, 81);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(74, 69);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(12, 156);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(71, 70);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 16;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(12, 232);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(71, 71);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 17;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(12, 309);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(71, 70);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 18;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(663, 404);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(72, 75);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(322, 19);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(77, 72);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 17;
			this->pictureBox9->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(750, 39);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(165, 34);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Logout";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click_1);
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(654, 199);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(72, 72);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 20;
			this->pictureBox8->TabStop = false;
			// 
			// Search_Button
			// 
			this->Search_Button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Search_Button->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Search_Button->Location = System::Drawing::Point(750, 286);
			this->Search_Button->Name = L"Search_Button";
			this->Search_Button->Size = System::Drawing::Size(165, 40);
			this->Search_Button->TabIndex = 7;
			this->Search_Button->Text = L"Search";
			this->Search_Button->UseVisualStyleBackColor = true;
			this->Search_Button->Click += gcnew System::EventHandler(this, &Form2::Search_Button_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(654, 19);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(72, 72);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 21;
			this->pictureBox10->TabStop = false;
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->DefaultExt = L"csv";
			this->saveFileDialog1->FileName = L"Table";
			this->saveFileDialog1->Filter = L"CSV Files|*.csv";
			// 
			// Label_Username
			// 
			this->Label_Username->AutoSize = true;
			this->Label_Username->Font = (gcnew System::Drawing::Font(L"Constantia", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Label_Username->Location = System::Drawing::Point(425, 47);
			this->Label_Username->Name = L"Label_Username";
			this->Label_Username->Size = System::Drawing::Size(51, 19);
			this->Label_Username->TabIndex = 22;
			this->Label_Username->Text = L"label3";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(942, 524);
			this->Controls->Add(this->Label_Username);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->Notification_Button);
			this->Controls->Add(this->Search_Button);
			this->Controls->Add(this->Query_Text);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Combo_Field);
			this->Controls->Add(this->Contacts_Listview);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Form2";
			this->Text = L"Contact Manager";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form2::Form2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {
				 
		// Create Logfile(if it doesn't exist)
		String^ path = "Log\\Logfile_"+userid+".txt";
		if (  !File::Exists( path ) )
	{
      StreamWriter^ sw = File::CreateText( path );
      try
      {
		  sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
         sw->WriteLine("user logged in\n");
      }
      finally
      {
         if ( sw )
            delete (IDisposable^)sw;
      }
				 }

				 else{
				 
				 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
       sw->WriteLine("user logged in");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
				 }
	Contacts_Listview->Items->Clear();
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
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.contacts where userid="+userid+" and flag1=1 order by name;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{

						 conDatabase->Open();
						 // Display all contacts in listview
						 myReader=cmdDatabase->ExecuteReader();
						 int count=0;
						 while(myReader->Read())
						 {
							 Contacts_Listview->Items->Add(myReader->GetString("name"));
							 Contacts_Listview->Items[count]->SubItems->Add(myReader->GetString("mobile"));
							 count++;
						 }
						  myReader->Close();
				 }
				 catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				 }
				 cmdDatabase=gcnew MySqlCommand("select username from contactsdb.login where userid="+userid+";",conDatabase);
				 try{

						 myReader=cmdDatabase->ExecuteReader();
						 myReader->Read();
						 Label_Username->Text="Hi "+ myReader->GetString("username") + "!";
				 }
				 catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				 }
				 myReader->Close();
				 conDatabase->Close();

			 }
private: System::Void Refresh_Contacts_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		Contacts_Listview->Items->Clear();//clear the listview items
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
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.contacts where userid="+userid+" and flag1=1 order by name;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{

						 conDatabase->Open();

						 // Exexute query to obtain all contacts for the logged in user
						 myReader=cmdDatabase->ExecuteReader();
						 int count=0;
						 while(myReader->Read())
						 {
							 //display
							 Contacts_Listview->Items->Add(myReader->GetString("name"));
							 Contacts_Listview->Items[count]->SubItems->Add(myReader->GetString("mobile"));
							 count++;
						 }
				 }
				 catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				 }
				 myReader->Close();
				 conDatabase->Close();
				 String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
				 //logging activity
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
        sw->WriteLine("user Refreshed Contact List");
      
   }
   finally
   {
	   //after writing delete the streamwriter
      if ( sw )
         delete (IDisposable^)sw;
   }

		 }
private: System::Void Add_Contact_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			 //add contact form opens now
			 Add_Contact^ addform = gcnew Add_Contact();
			 addform->Show();
		 }
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 //logout
			 this->Hide();
			 logout=1;
			 String^ path = "Log\\Logfile_"+userid+".txt";
			 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
         sw->WriteLine("user logged Out");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
		 }
private: System::Void Contacts_Listview_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 
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
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.contacts where userid="+userid+" and name='"+Contacts_Listview->FocusedItem->Text+"';",conDatabase);
			 MySqlDataReader^ myReader;

			 try{

				conDatabase->Open();

				// Display the form for a particular contact
				myReader=cmdDatabase->ExecuteReader();
				myReader->Read();
				cn_sno = myReader->GetInt32("sno");
				Cn_Info^ contact_info = gcnew Cn_Info();
				contact_info->Show();
				String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
       sw->WriteLine("user viewed contact info for "+Contacts_Listview->FocusedItem->Text+"");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
				 }
				 catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				 }
			 
			 myReader->Close();
			 conDatabase->Close();

}


private: System::Void Search_Button_Click(System::Object^  sender, System::EventArgs^  e) {

	Contacts_Listview->Items->Clear();
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
			 if(Combo_Field->Text=="Name")
			 {
				 //search by name
				 //where name is like "query_text"% . % is a wildcard here
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.contacts where userid="+userid+" and name like '"+Query_Text->Text+"%' and flag1=1;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{

						 conDatabase->Open();
						 // Execute query to display contacts corresponding to text in search box
						 myReader=cmdDatabase->ExecuteReader();
						 int count=0;
						 while(myReader->Read())
						 {
							 //add to listview the results
							 Contacts_Listview->Items->Add(myReader->GetString("name"));
							 Contacts_Listview->Items[count]->SubItems->Add(myReader->GetString("mobile"));
							 count++;
						 }
						 if(count==0) MessageBox::Show("No matches found!"); 
				 }
				 catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				 }
				 myReader->Close();
				 conDatabase->Close();
			 }

			 else if(Combo_Field->Text=="Mobile")
			 {
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.contacts where userid="+userid+" and mobile like '"+Query_Text->Text+"%' and flag1=1;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{

						 conDatabase->Open();
						 myReader=cmdDatabase->ExecuteReader();
						 int count=0;
						 while(myReader->Read())
						 {
							 Contacts_Listview->Items->Add(myReader->GetString("name"));
							 Contacts_Listview->Items[count]->SubItems->Add(myReader->GetString("mobile"));
							 count++;
						 }
						 if(count==0) MessageBox::Show("No matches found!"); 
				 }
				 catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				 }
				 myReader->Close();
				 conDatabase->Close();
			 }
			 else
			 {
				 //fetch contacts
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.contacts a, contactsdb.contacts1 b where a.sno=b.sno and fieldname='"+Combo_Field->Text+"' and value like '"+Query_Text->Text+"%' and flag1=1 and flag2=1;",conDatabase);
				 MySqlDataReader^ myReader;
				 try{

						 conDatabase->Open();
						 myReader=cmdDatabase->ExecuteReader();
						 int count=0;
						 while(myReader->Read())
						 {
							 //add to listview name and mobile on home form
							 Contacts_Listview->Items->Add(myReader->GetString("name"));
							 Contacts_Listview->Items[count]->SubItems->Add(myReader->GetString("mobile"));
							 count++;
						 }
						 if(count==0) MessageBox::Show("No matches found!"); 
				 }
				 catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				 }
				 myReader->Close();
				 conDatabase->Close();
			 }

		 }
		 
private: System::Void Query_Text_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Combo_Field_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void Notification_Button_Click(System::Object^  sender, System::EventArgs^  e) {

			 //open notifications panel
			 Notifications^ notify=gcnew Notifications();
			 notify->Show();
			 String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
         sw->WriteLine("user viewed latest Notifications");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
}


private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			RestoreContact^ restore=gcnew RestoreContact();
			restore->Show();
			Refresh_Contacts_Button_Click(sender,e);
		 }


private: System::Void Delete_Contact_Click(System::Object^  sender, System::EventArgs^  e) {
			//confirm deletion
			 if (MessageBox::Show("Are you sure you want to delete "+Contacts_Listview->FocusedItem->Text+" from the contacts list ?", "Delete Contact", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
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
			//make flag1=0 for the contact deleted in contacts table
				 String^ constring=L"datasource=127.0.0.1;port="+port+";username="+name+";password="+pass+"";
				 MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
				 MySqlDataReader^ myReader;
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("update contactsdb.contacts set flag1=0 where name='"+Contacts_Listview->FocusedItem->Text+"';",conDatabase);					 
				 try{
							conDatabase->Open();
							myReader=cmdDatabase->ExecuteReader();
							myReader->Close();
					}
				 catch(Exception^ ex){
							MessageBox::Show(ex->Message);
					 }
				 conDatabase->Close();
				 MessageBox::Show("Contact Deleted Successfully!");
				 String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
         sw->WriteLine("user deleted contact "+Contacts_Listview->FocusedItem->Text+"");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
				 Refresh_Contacts_Button_Click(sender,e);
			 }
		// }
	}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

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
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.reminder where userid="+userid+";",conDatabase);
				 MySqlDataReader^ myReader;
				  try{

						 conDatabase->Open();
						 myReader=cmdDatabase->ExecuteReader();
						 String^ date;
					     String^ date1;
						    String^ month;
							String^ year;
							String^ contact;
						 String^ text;
						 String^ time;
						  while(myReader->Read())
						 {
							 date=myReader->GetString("date");
							 text=myReader->GetString("text");
							 contact=myReader->GetString("cnsno");
							  //separating month date and year and convert to string from the variable date
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
							 year=Convert::ToString(date[6])+Convert::ToString(date[7])+Convert::ToString(date[8])+Convert::ToString(date[9]);
							
							 //compare the system date, month and year with each reminder from table
							 if(Convert::ToString(t->tm_mon+1) == month && Convert::ToString(t->tm_mday)==date1 && Convert::ToString(t->tm_year+1900)==year  )
							 {
								 //now compare time
								 time=myReader->GetString("time");
								 
								 String^ hut;
								 String^ h;
								 h=":";
								 hut=Convert::ToString(t->tm_hour)+h+Convert::ToString(t->tm_min);
								 if(time==hut)
								 {
									 //at the reminder time, message popup
									 MessageBox::Show("Reminder " + "for "+ contact + ": " + text,"Reminder");
								 }
							 }

						  }
				  }
						  catch(Exception^ ex){
					MessageBox::Show(ex->Message);
				 }
				  
				 myReader->Close();
				 conDatabase->Close();
		 }

private: System::Void Import_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	if ( openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )//if a file is selected from the open file dialog 
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
					//String^ constring=L"datasource=127.0.0.1;port=3306;username=root;password=admin";
					MySqlConnection^ conDatabase=gcnew MySqlConnection(constring);
					

					sr = gcnew
					System::IO::StreamReader(openFileDialog1->FileName);
					String^ line;
					String^ sno;
					
					array<String^>^ contact = gcnew array<String^>(5000);
					array<String^>^ field = gcnew array<String^>(500);  //here we store all the fields of the csv file from first line
					int count=0;
					int i,j,linenum;
					int numFields=0;
					linenum=0;
					while ( line = sr->ReadLine() )
					{
						j=0;
						count=0;
						linenum++;
						for(i=0;i<(line->Length);i++)
						{
							if(line[i]==',') 				//extract substring from the line
								{
									count++;
									if(linenum==1)
									{
										field[count-1]=line->Substring(j,i-j); 
									}
									else
									{
										contact[count-1]=line->Substring(j,i-j);
									}
									j=i+1;
								}
							
						}
						count++;
						if(linenum==1)
							{field[count-1]=line->Substring(j,i-j);
						continue;}
						else{
							contact[count-1]=line->Substring(j,i-j);
						}
						//contact here stores the name of the contacts
						//now count has the number of fields

						MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select name from contactsdb.contacts where userid='"+userid+"' and name='"+contact[0]+"' and flag1=1;",conDatabase); 
						try{
							conDatabase->Open();
							MySqlDataReader^ myReader=cmdDatabase->ExecuteReader();	
							int contactexists=0;
							while(myReader->Read())
							{
								contactexists+=1;
							}
							myReader->Close();
							conDatabase->Close();
							if(contactexists!=0)
							{
								MessageBox::Show("cont already exists!");
							}
							else
							{
								//inserting first name and mobile into contacts
								MySqlCommand^ cmdDatabase=gcnew MySqlCommand("insert into contactsdb.contacts (`userid`,`name`,`mobile`) values ("+userid+",'"+contact[0]+"','"+contact[1]+"')"+";",conDatabase);
								try{
									conDatabase->Open();
									myReader=cmdDatabase->ExecuteReader();
									myReader->Close();
									conDatabase->Close();
								}
								catch(Exception^ ex){
									MessageBox::Show(ex->Message);
								}

								//the other fields
								numFields=2;
								while(numFields<count)
								{	
									MySqlCommand^ cmdDatabase1=gcnew MySqlCommand("select * from contactsdb.contacts where userid='"+userid+"' and name='"+contact[0]+"';",conDatabase); 
									conDatabase->Open();
									myReader=cmdDatabase1->ExecuteReader();
									myReader->Read();
									sno=myReader->GetString("sno");
									//get sno corresponding to the contact from the first table
									myReader->Close();
									conDatabase->Close();
									//insert the other fields in contacts1 table
									MySqlCommand^ cmdDatabase=gcnew MySqlCommand("insert into contactsdb.contacts1 (`userid`,`sno`,`fieldname`,`value`) values ("+userid+","+sno+",'"+field[numFields]+"','"+contact[numFields]+"')"+";",conDatabase);
									try{
											conDatabase->Open();
											myReader=cmdDatabase->ExecuteReader();
											myReader->Close();
											conDatabase->Close();

									  }
									catch(Exception^ ex)
									{
										MessageBox::Show(ex->Message);
									}
									numFields++; 
								}					
							}
						}
						catch(Exception^ ex){
							MessageBox::Show(ex->Message);
						}
					}
				 sr->Close();
			  }
		 }
private: System::Void Export_Button_Click(System::Object^  sender, System::EventArgs^  e) {

	if ( saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK )//if a file is selected from the open file dialog 
	{


	//System::IO::FileStream ^ fs = safe_cast<System::IO::FileStream*>(saveFileDialog1->OpenFile());


	array<int^>^ contactsno;
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
			 MySqlCommand^ cmdDatabase;
			
			 // Count the no. of contacts for this user
			int count;
			  cmdDatabase=gcnew MySqlCommand("SELECT * FROM contactsdb.contacts WHERE userid = "+userid+";",conDatabase);
			 try{
				 conDatabase->Open();
				 MySqlDataReader^ myReader=cmdDatabase->ExecuteReader();
				 count=0;
				 while(myReader->Read())
				 {
					 count+=1;
				 }
				
				 // Make an array to store contacts no corresponding to this user id
				 contactsno = gcnew array<int^>(count);
				 myReader->Close();
				 conDatabase->Close();
				

				 try{
					 conDatabase->Open();
					 // Fetch Contacts no corresponding to this user
					 MySqlDataReader^ myReader=cmdDatabase->ExecuteReader();
					
					 int index=0;
					 while( myReader->Read())
					 {
						 contactsno[index]=myReader->GetInt32("sno");
						index++;
					 }

					 myReader->Close();
					 conDatabase->Close();
				 }
				 catch(Exception^ ex){
					 MessageBox::Show(ex->Message);
				 }


			 }
			 catch(Exception^ ex){
				 MessageBox::Show(ex->Message);
			 }

			 String^ buff;
			 buff = gcnew String("name,mobile");
			 array<String^>^ fields=gcnew array<String^>(500);
			 fields[0]="name";
			 fields[1]="mobile";
			 
			 // Fetch the fieldnames
			 int loopcounter=0,numFields=1;
			 for(loopcounter=0;loopcounter<count;loopcounter++)
			 {
				 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select fieldname from contactsdb.contacts1 where userid="+userid+" and sno="+contactsno[loopcounter]+" ;",conDatabase);
				 conDatabase->Open();
				 MySqlDataReader^ myReader=cmdDatabase->ExecuteReader();
				 int i;
				 while(myReader->Read())
				 {
					 for(i=2;i<=numFields;i++)
						{ 
							if(fields[i]==myReader->GetString("fieldname"))
							{//already there
								break;
							}
					    }
					 if(i>numFields)
					 {//write fieldname to file
						 numFields++;
						 fields[numFields]=myReader->GetString("fieldname");
						 buff+=","+fields[numFields];
						 //MessageBox::Show(buff);
					 }
				 }
				 
				 myReader->Close();
				 conDatabase->Close();
			 }

			 // Construct the string to be exported for each contact and store in exportedfile
			array<String^>^ exportedfile =gcnew array<String^>(count+1);

			 cmdDatabase=gcnew MySqlCommand("select name,mobile from contactsdb.contacts where userid="+userid+";",conDatabase);
			  try{
				  conDatabase->Open();
				  MySqlDataReader^ myReader=cmdDatabase->ExecuteReader();
				  int iteratecontact=0;
				  while(myReader->Read())
				  {
					  exportedfile[iteratecontact]=myReader->GetString("name")+ "," + myReader->GetString("mobile");
					  iteratecontact++;
				  }

				  myReader->Close();
				  conDatabase->Close();
			  }

			  catch(Exception^ ex){
				  MessageBox::Show(ex->Message);
			  }
			 

		

			 for(loopcounter=0;loopcounter<count;loopcounter++)
			  {
				  int i;
				  String^ temp;
				  MySqlCommand^ cmdDatabase;
				 MySqlDataReader^ myReader;
				  conDatabase->Open();
				  for(i=2;i<=numFields;i++)
				  {
					  temp="";
					  cmdDatabase=gcnew MySqlCommand("select value from contactsdb.contacts1 where userid="+userid+" and sno="+contactsno[loopcounter]+" and fieldname='"+fields[i]+"';",conDatabase);

					  myReader=cmdDatabase->ExecuteReader();
					  int count=0;
					  while(myReader->Read())
					  {
						  if(count==0)
						  {
							  temp=myReader->GetString("value");
						  }
							  
						  else
						  {
							  temp+=" $ "+myReader->GetString("value");
						  }
						count++;
					  }
					  myReader->Close();
					  exportedfile[loopcounter]+=","+temp;
				  }
				  myReader->Close();
				conDatabase->Close();
				
		 }


			 // Writing to the file Contact_userid.csv the contents of exportedfile
			 //System::IO::StreamWriter ^final = gcnew System::IO::StreamWriter("Contacts_"+userid+".csv");
			 System::IO::StreamWriter ^final = gcnew System::IO::StreamWriter( saveFileDialog1->OpenFile());
			
			 int iteratecontact=0;
			 int iteratefield=0;
			 while(iteratefield<=numFields)
			 {
				 if(iteratefield)
				 {
					 final->Write(",");
				 }
				 final->Write(fields[iteratefield]);
				 
				 iteratefield++;
			 }

			 final->WriteLine();
			 while(iteratecontact<count)
			 {
				 final->WriteLine(exportedfile[iteratecontact]);
				 iteratecontact++;
			 }
			 final->Close();
			 MessageBox::Show("Done");
		 }
	}

private: System::Void Form2_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			 // When close button is clicked application is exited
			 Application::Exit();
		 }
private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 // Hide this form and set logout to 1 so that Form1 is displayed
			this->Hide();
			 logout=1;
			 
			 String^ path = "Log\\Logfile_"+userid+".txt";
			 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString());
         sw->WriteLine("user logged Out");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }


		 }
};
}
