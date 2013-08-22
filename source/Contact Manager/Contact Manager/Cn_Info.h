#pragma once
#include "Global.h"
#include <windows.h>
#using <mscorlib.dll>
#include "Datetime.h"
#include "Restore Field.h"

using namespace System;
using namespace System::IO;

namespace ContactManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Cn_Info
	/// </summary>
	public ref class Cn_Info : public System::Windows::Forms::Form
	{
	public:
		Cn_Info(void)
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
		~Cn_Info()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 
	private: System::Windows::Forms::TextBox^  Path_Text;
	private: System::Windows::Forms::Button^  Browse_Button;
	private: System::Windows::Forms::Button^  Upload_Button;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  Name_Edit;
	private: System::Windows::Forms::Button^  Name_Done;
	private: System::Windows::Forms::Button^  Edit_Mobile;
	private: System::Windows::Forms::Button^  Done_Mobile;
	private: System::Windows::Forms::Button^  Edit_Field;
	private: System::Windows::Forms::Button^  Done_Field;
	private: System::Windows::Forms::Button^  Delete_Field;
	private: System::Windows::Forms::Button^  Restore_Field;
	private: System::Windows::Forms::TextBox^  Name_Text;
	private: System::Windows::Forms::TextBox^  Mobile_Text;
	private: System::Windows::Forms::RichTextBox^  Contents_RichText;













	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ComboBox^  Combo_Field;
	private: System::Windows::Forms::Button^  Delete_Contact;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;



	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;

	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
			 System::String^ Name;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Cn_Info::typeid));
			this->Path_Text = (gcnew System::Windows::Forms::TextBox());
			this->Browse_Button = (gcnew System::Windows::Forms::Button());
			this->Upload_Button = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->Name_Edit = (gcnew System::Windows::Forms::Button());
			this->Name_Done = (gcnew System::Windows::Forms::Button());
			this->Edit_Mobile = (gcnew System::Windows::Forms::Button());
			this->Done_Mobile = (gcnew System::Windows::Forms::Button());
			this->Edit_Field = (gcnew System::Windows::Forms::Button());
			this->Done_Field = (gcnew System::Windows::Forms::Button());
			this->Delete_Field = (gcnew System::Windows::Forms::Button());
			this->Restore_Field = (gcnew System::Windows::Forms::Button());
			this->Name_Text = (gcnew System::Windows::Forms::TextBox());
			this->Mobile_Text = (gcnew System::Windows::Forms::TextBox());
			this->Contents_RichText = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Combo_Field = (gcnew System::Windows::Forms::ComboBox());
			this->Delete_Contact = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// Path_Text
			// 
			this->Path_Text->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Path_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Path_Text->Location = System::Drawing::Point(53, 290);
			this->Path_Text->Name = L"Path_Text";
			this->Path_Text->Size = System::Drawing::Size(183, 26);
			this->Path_Text->TabIndex = 1;
			// 
			// Browse_Button
			// 
			this->Browse_Button->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Browse_Button->Location = System::Drawing::Point(53, 250);
			this->Browse_Button->Name = L"Browse_Button";
			this->Browse_Button->Size = System::Drawing::Size(75, 34);
			this->Browse_Button->TabIndex = 2;
			this->Browse_Button->Text = L"Browse";
			this->Browse_Button->UseVisualStyleBackColor = true;
			this->Browse_Button->Click += gcnew System::EventHandler(this, &Cn_Info::Browse_Button_Click);
			// 
			// Upload_Button
			// 
			this->Upload_Button->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Upload_Button->Location = System::Drawing::Point(161, 250);
			this->Upload_Button->Name = L"Upload_Button";
			this->Upload_Button->Size = System::Drawing::Size(75, 34);
			this->Upload_Button->TabIndex = 3;
			this->Upload_Button->Text = L"Upload";
			this->Upload_Button->UseVisualStyleBackColor = true;
			this->Upload_Button->Click += gcnew System::EventHandler(this, &Cn_Info::Upload_Button_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &Cn_Info::openFileDialog1_FileOk);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(73, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Name";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Mobile";
			this->label2->Click += gcnew System::EventHandler(this, &Cn_Info::label2_Click);
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(73, 163);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 18);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Field";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(73, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 18);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Contents";
			// 
			// Name_Edit
			// 
			this->Name_Edit->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Name_Edit->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name_Edit->Location = System::Drawing::Point(325, 20);
			this->Name_Edit->Name = L"Name_Edit";
			this->Name_Edit->Size = System::Drawing::Size(69, 28);
			this->Name_Edit->TabIndex = 8;
			this->Name_Edit->Text = L"Edit";
			this->Name_Edit->UseVisualStyleBackColor = true;
			this->Name_Edit->Click += gcnew System::EventHandler(this, &Cn_Info::Name_Edit_Click);
			// 
			// Name_Done
			// 
			this->Name_Done->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Name_Done->Enabled = false;
			this->Name_Done->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name_Done->Location = System::Drawing::Point(400, 21);
			this->Name_Done->Name = L"Name_Done";
			this->Name_Done->Size = System::Drawing::Size(72, 27);
			this->Name_Done->TabIndex = 9;
			this->Name_Done->Text = L"Done";
			this->Name_Done->UseVisualStyleBackColor = true;
			this->Name_Done->Click += gcnew System::EventHandler(this, &Cn_Info::Name_Done_Click);
			// 
			// Edit_Mobile
			// 
			this->Edit_Mobile->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Edit_Mobile->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Edit_Mobile->Location = System::Drawing::Point(325, 87);
			this->Edit_Mobile->Name = L"Edit_Mobile";
			this->Edit_Mobile->Size = System::Drawing::Size(69, 33);
			this->Edit_Mobile->TabIndex = 10;
			this->Edit_Mobile->Text = L"Edit";
			this->Edit_Mobile->UseVisualStyleBackColor = true;
			this->Edit_Mobile->Click += gcnew System::EventHandler(this, &Cn_Info::Edit_Mobile_Click);
			// 
			// Done_Mobile
			// 
			this->Done_Mobile->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Done_Mobile->Enabled = false;
			this->Done_Mobile->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Done_Mobile->Location = System::Drawing::Point(400, 89);
			this->Done_Mobile->Name = L"Done_Mobile";
			this->Done_Mobile->Size = System::Drawing::Size(72, 29);
			this->Done_Mobile->TabIndex = 11;
			this->Done_Mobile->Text = L"Done";
			this->Done_Mobile->UseVisualStyleBackColor = true;
			this->Done_Mobile->Click += gcnew System::EventHandler(this, &Cn_Info::Done_Mobile_Click);
			// 
			// Edit_Field
			// 
			this->Edit_Field->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Edit_Field->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Edit_Field->Location = System::Drawing::Point(325, 158);
			this->Edit_Field->Name = L"Edit_Field";
			this->Edit_Field->Size = System::Drawing::Size(69, 29);
			this->Edit_Field->TabIndex = 12;
			this->Edit_Field->Text = L"Edit";
			this->Edit_Field->UseVisualStyleBackColor = true;
			this->Edit_Field->Click += gcnew System::EventHandler(this, &Cn_Info::Edit_Field_Click);
			// 
			// Done_Field
			// 
			this->Done_Field->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Done_Field->Enabled = false;
			this->Done_Field->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Done_Field->Location = System::Drawing::Point(400, 158);
			this->Done_Field->Name = L"Done_Field";
			this->Done_Field->Size = System::Drawing::Size(72, 29);
			this->Done_Field->TabIndex = 13;
			this->Done_Field->Text = L"Done";
			this->Done_Field->UseVisualStyleBackColor = true;
			this->Done_Field->Click += gcnew System::EventHandler(this, &Cn_Info::Done_Field_Click);
			// 
			// Delete_Field
			// 
			this->Delete_Field->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Delete_Field->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Delete_Field->Location = System::Drawing::Point(478, 157);
			this->Delete_Field->Name = L"Delete_Field";
			this->Delete_Field->Size = System::Drawing::Size(70, 30);
			this->Delete_Field->TabIndex = 14;
			this->Delete_Field->Text = L"Delete";
			this->Delete_Field->UseVisualStyleBackColor = true;
			this->Delete_Field->Click += gcnew System::EventHandler(this, &Cn_Info::Delete_Field_Click);
			// 
			// Restore_Field
			// 
			this->Restore_Field->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Restore_Field->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Restore_Field->Location = System::Drawing::Point(554, 158);
			this->Restore_Field->Name = L"Restore_Field";
			this->Restore_Field->Size = System::Drawing::Size(72, 29);
			this->Restore_Field->TabIndex = 15;
			this->Restore_Field->Text = L"Restore";
			this->Restore_Field->UseVisualStyleBackColor = true;
			this->Restore_Field->Click += gcnew System::EventHandler(this, &Cn_Info::Restore_Field_Click);
			// 
			// Name_Text
			// 
			this->Name_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Name_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Name_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Name_Text->Location = System::Drawing::Point(146, 21);
			this->Name_Text->Name = L"Name_Text";
			this->Name_Text->ReadOnly = true;
			this->Name_Text->Size = System::Drawing::Size(173, 26);
			this->Name_Text->TabIndex = 16;
			// 
			// Mobile_Text
			// 
			this->Mobile_Text->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Mobile_Text->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Mobile_Text->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Mobile_Text->Location = System::Drawing::Point(146, 90);
			this->Mobile_Text->Name = L"Mobile_Text";
			this->Mobile_Text->ReadOnly = true;
			this->Mobile_Text->Size = System::Drawing::Size(173, 26);
			this->Mobile_Text->TabIndex = 17;
			// 
			// Contents_RichText
			// 
			this->Contents_RichText->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Contents_RichText->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Contents_RichText->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Contents_RichText->Location = System::Drawing::Point(146, 210);
			this->Contents_RichText->Name = L"Contents_RichText";
			this->Contents_RichText->ReadOnly = true;
			this->Contents_RichText->Size = System::Drawing::Size(173, 64);
			this->Contents_RichText->TabIndex = 18;
			this->Contents_RichText->Text = L"";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(537, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(143, 49);
			this->button1->TabIndex = 19;
			this->button1->Text = L"Add Reminder";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Cn_Info::button1_Click);
			// 
			// Combo_Field
			// 
			this->Combo_Field->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Combo_Field->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->Combo_Field->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Combo_Field->FormattingEnabled = true;
			this->Combo_Field->Items->AddRange(gcnew cli::array< System::Object^  >(16) {L"Telephone", L"Email Id", L"Group", L"State", 
				L"City", L"Address", L"Hobbies", L"Favourite Music", L"Favourite Movies", L"Favourite Dishes", L"Favourite Places", L"Favourite Sports", 
				L"Favourite Teams", L"Favourite Quotes", L"Inspirational people", L" "});
			this->Combo_Field->Location = System::Drawing::Point(146, 159);
			this->Combo_Field->Name = L"Combo_Field";
			this->Combo_Field->Size = System::Drawing::Size(173, 26);
			this->Combo_Field->TabIndex = 20;
			this->Combo_Field->Text = L"Select";
			this->Combo_Field->SelectedIndexChanged += gcnew System::EventHandler(this, &Cn_Info::Combo_Field_SelectedIndexChanged);
			// 
			// Delete_Contact
			// 
			this->Delete_Contact->Font = (gcnew System::Drawing::Font(L"Constantia", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Delete_Contact->Location = System::Drawing::Point(127, 392);
			this->Delete_Contact->Name = L"Delete_Contact";
			this->Delete_Contact->Size = System::Drawing::Size(128, 49);
			this->Delete_Contact->TabIndex = 21;
			this->Delete_Contact->Text = L"Delete Contact";
			this->Delete_Contact->UseVisualStyleBackColor = true;
			this->Delete_Contact->Click += gcnew System::EventHandler(this, &Cn_Info::Delete_Contact_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->BackColor = System::Drawing::SystemColors::Control;
			this->tableLayoutPanel1->ColumnCount = 7;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute, 
				70)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle()));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				33.8784F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				32.97498F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 
				33.14663F)));
			this->tableLayoutPanel1->Controls->Add(this->label1, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->Combo_Field, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->Contents_RichText, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->label4, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->Name_Text, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->Mobile_Text, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->Name_Edit, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->Edit_Mobile, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->Edit_Field, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->Name_Done, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->Done_Mobile, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->Done_Field, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->Delete_Field, 5, 2);
			this->tableLayoutPanel1->Controls->Add(this->Restore_Field, 6, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox4, 0, 3);
			this->tableLayoutPanel1->Location = System::Drawing::Point(297, 45);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(629, 277);
			this->tableLayoutPanel1->TabIndex = 25;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(64, 62);
			this->pictureBox1->TabIndex = 25;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(3, 72);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 62);
			this->pictureBox2->TabIndex = 26;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(3, 141);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(64, 62);
			this->pictureBox3->TabIndex = 27;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(3, 211);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(64, 62);
			this->pictureBox4->TabIndex = 28;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(53, 375);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(68, 66);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 26;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(463, 375);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(68, 66);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 27;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(54, 45);
			this->pictureBox8->ImageLocation = L""+userid+".JPG";
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(182, 170);
			this->pictureBox8->TabIndex = 28;
			this->pictureBox8->TabStop = false;
			// 
			// Cn_Info
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(982, 492);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->Delete_Contact);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Upload_Button);
			this->Controls->Add(this->Browse_Button);
			this->Controls->Add(this->Path_Text);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Cn_Info";
			this->Text = L"Contact Information";
			this->Load += gcnew System::EventHandler(this, &Cn_Info::Cn_Info_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Browse_Button_Click(System::Object^  sender, System::EventArgs^  e) {
			//browse for insert pic
			openFileDialog1->ShowDialog();																				
			 }

private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
			 //get path of file to textfield
			 Path_Text->Text = openFileDialog1->FileName;
		 }

private: System::Void Upload_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		try {

        // Copy the file from the location to default folder
        File::Copy(Path_Text->Text,""+cn_sno+".jpg",true);                                 
        this->pictureBox8->ImageLocation = L""+cn_sno+".jpg";
    } catch (Exception^ ex) {
       MessageBox::Show(ex->Message);
    }

	String^ path = "Log\\Logfile_"+userid+".txt";
	StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"\n");
         sw->WriteLine("user Uploaded New Image for that contact");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
		 }


private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 Datetime^ datetime=gcnew Datetime();
			 datetime->Show();
		 }


private: System::Void Name_Edit_Click(System::Object^  sender, System::EventArgs^  e) {
	//edit disables edit, enables done button and text field
	Name = this->Name_Text->Text;
	this->Name_Text->ReadOnly = false;
	this->Name_Done->Enabled = true;
	this->Name_Edit->Enabled = false;
	String^ path = "Log\\Logfile_"+userid+".txt";
	StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
       sw->WriteLine("user edited name for that contact");
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
}


private: System::Void Name_Done_Click(System::Object^  sender, System::EventArgs^  e) {
			 //done button saves the text in field. and disables,enables button
			 this->Name_Text->ReadOnly = true;
			 this->Name_Done->Enabled = false;
			 this->Name_Edit->Enabled = true;
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
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select name from contactsdb.contacts where userid="+userid+" and name='"+this->Name_Text->Text+"';",conDatabase);
			 try{
			 		conDatabase->Open();
					myReader=cmdDatabase->ExecuteReader();
					int count=0;
					while(myReader->Read())
					{
						count+=1;
					}
					myReader->Close();
					if(count!=0)
					{
						MessageBox::Show("Contact Name Already exists!");
						this->Name_Text->Text = Name;
					}
					else
					{
							cmdDatabase=gcnew MySqlCommand("update contactsdb.contacts set name='"+this->Name_Text->Text+"' where sno="+cn_sno+";",conDatabase);
							try{
										myReader=cmdDatabase->ExecuteReader();
										myReader->Close();
		 					}
							catch(Exception^ ex){
												MessageBox::Show(ex->Message);
							}
					}
		 	 }
			 catch(Exception^ ex){
									MessageBox::Show(ex->Message);
			 }
			 conDatabase->Close();

		 }

private: System::Void Edit_Mobile_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Mobile_Text->ReadOnly = false;
			 this->Done_Mobile->Enabled = true;
			 this->Edit_Mobile->Enabled = false;
			 String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
         sw->WriteLine("user edited mobile number for that contact");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
		 }

private: System::Void Done_Mobile_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Mobile_Text->ReadOnly = true;
			 this->Done_Mobile->Enabled = false;
			 this->Edit_Mobile->Enabled = true;
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
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("update contactsdb.contacts set mobile='"+this->Mobile_Text->Text+"' where sno="+cn_sno+";",conDatabase);
								 
			 try{
						conDatabase->Open();
						myReader=cmdDatabase->ExecuteReader();
						myReader->Close();
				}
			 catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
			 conDatabase->Close();

		 }
private: System::Void Edit_Field_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Contents_RichText->ReadOnly = false;
			 this->Done_Field->Enabled = true;
			 this->Edit_Field->Enabled = false;
			 String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
         sw->WriteLine("user edited some ComboBox fields for that contact");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
		 }

private: System::Void Done_Field_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Contents_RichText->ReadOnly = true;
			 this->Done_Field->Enabled = false;
			 this->Edit_Field->Enabled = true;
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
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select fieldname from contactsdb.contacts1 where sno="+cn_sno+" and fieldname='"+this->Combo_Field->Text+"' and flag2=1;",conDatabase);
			 try{
						conDatabase->Open();
						myReader=cmdDatabase->ExecuteReader();
						int count=0;
						while(myReader->Read())
						{
							count+=1;
						}
						myReader->Close();
						if(count!=0)
						{
							cmdDatabase=gcnew MySqlCommand("update contactsdb.contacts1 set value='"+this->Contents_RichText->Text+"' where sno="+cn_sno+" and fieldname='"+this->Combo_Field->Text+"' and flag2=1;",conDatabase);					 
							 try{
										myReader=cmdDatabase->ExecuteReader();
										myReader->Close();
								}
							 catch(Exception^ ex){
										MessageBox::Show(ex->Message);
								 }
						}
						else
						{
							cmdDatabase=gcnew MySqlCommand("insert into contactsdb.contacts1 (`userid`,`sno`,`fieldname`,`value`) values ("+userid+","+cn_sno+",'"+this->Combo_Field->Text+"','"+this->Contents_RichText->Text+"');",conDatabase);					 
							 try{
										myReader=cmdDatabase->ExecuteReader();
										myReader->Close();
								}
							 catch(Exception^ ex){
										MessageBox::Show(ex->Message);
								 }
						}
				}
			 catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
			 conDatabase->Close();

		 }
private: System::Void Cn_Info_Load(System::Object^  sender, System::EventArgs^  e) {
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
						MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.contacts where userid="+userid+" and sno='"+cn_sno+"';",conDatabase);
						conDatabase->Open();
						myReader=cmdDatabase->ExecuteReader();
						myReader->Read();
						this->Name_Text->Text=myReader->GetString("name");
						this->Mobile_Text->Text=myReader->GetString("mobile");
						myReader->Close();
						conDatabase->Close();

		 }
private: System::Void Delete_Contact_Click(System::Object^  sender, System::EventArgs^  e) {
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
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("update contactsdb.contacts set flag1=0 where sno="+cn_sno+";",conDatabase);					 
			 try{
						conDatabase->Open();
						myReader=cmdDatabase->ExecuteReader();
						myReader->Close();
						this->Close();
				}
			 catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
			 conDatabase->Close();
			 String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
   try
   {
	   sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
         sw->WriteLine("user deleted that contact");
      
   }
   finally
   {
      if ( sw )
         delete (IDisposable^)sw;
   }
		 }
private: System::Void Delete_Field_Click(System::Object^  sender, System::EventArgs^  e) {

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
			 MySqlCommand^ cmdDatabase=gcnew MySqlCommand("update contactsdb.contacts1 set flag2=0 where sno="+cn_sno+" and fieldname='"+Combo_Field->Text+"';",conDatabase);					 
			 try{
						conDatabase->Open();
						myReader=cmdDatabase->ExecuteReader();
						myReader->Close();
				}
			 catch(Exception^ ex){
						MessageBox::Show(ex->Message);
				 }
			 conDatabase->Close();
			 MessageBox::Show("Field deleted successfully!");
			 this->Contents_RichText->Text="";
			 String^ path = "Log\\Logfile_"+userid+".txt";
				 StreamWriter^ sw = File::AppendText( path );
			try
			{
					sw->WriteLine(DateTime::Now.ToShortDateString()+" "+DateTime::Now.ToShortTimeString()+"");
					sw->WriteLine("user deleted a comboBox field for that contact");
      
			}
			finally
			{
					if ( sw )
					delete (IDisposable^)sw;
			}
		 }
private: System::Void Combo_Field_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

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
						MySqlCommand^ cmdDatabase=gcnew MySqlCommand("select * from contactsdb.contacts1 where sno="+cn_sno+" and fieldname='"+this->Combo_Field->Text+"' and flag2=1;",conDatabase);
						//MessageBox::Show("select * from contactsdb.contacts1 where sno="+cn_sno+" and fieldname='"+this->Combo_Field->Text+"' and flag2=1;");
						try{
							conDatabase->Open();
							myReader=cmdDatabase->ExecuteReader();
							this->Contents_RichText->Text="";
							while(myReader->Read())
							{
								this->Contents_RichText->Text+=myReader->GetString("value")+"\r\n";
							}
						}
						catch(Exception^ ex){
									MessageBox::Show(ex->Message);
						}
						myReader->Close();
						conDatabase->Close();

		 }
private: System::Void Restore_Field_Click(System::Object^  sender, System::EventArgs^  e) {

			 RestoreField^ restore=gcnew RestoreField();
			 restore->Show();

		 }

};
}
