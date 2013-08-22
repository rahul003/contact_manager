#pragma once

namespace ContactManager {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for developers
	/// </summary>
	public ref class developers : public System::Windows::Forms::Form
	{
	public:
		developers(void)
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
		~developers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Rohit Kamra";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(32, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Rahul Huilgol";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(32, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 19);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Aditya Jha";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 19);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Harshith Reddy";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(31, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(81, 19);
			this->label5->TabIndex = 4;
			this->label5->Text = L"BhanuTeja";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(31, 234);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 19);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Prashanth Verma";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(195, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(143, 19);
			this->label7->TabIndex = 11;
			this->label7->Text = L"kuriti@iitg.ernet.in";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(197, 203);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(180, 19);
			this->label8->TabIndex = 10;
			this->label8->Text = L"bhanutejaiit@gmail.com";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(197, 170);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(186, 19);
			this->label9->TabIndex = 9;
			this->label9->Text = L"harshith2794@gmail.com";
			this->label9->Click += gcnew System::EventHandler(this, &developers::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(197, 138);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 19);
			this->label10->TabIndex = 8;
			this->label10->Text = L"akjsid26@gmail.com";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(197, 110);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(184, 19);
			this->label11->TabIndex = 7;
			this->label11->Text = L"rahul.huilgol@gmail.com";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(197, 80);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(172, 19);
			this->label12->TabIndex = 6;
			this->label12->Text = L"rohit121292@gmail.com";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(45, 38);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(92, 16);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Developers : -";
			// 
			// developers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 287);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"developers";
			this->Text = L"Developers";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
};
}
