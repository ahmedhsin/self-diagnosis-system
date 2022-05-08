#pragma once

namespace SelfDiagnosis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MySpatient
	/// </summary>
	public ref class MySpatient : public System::Windows::Forms::Form
	{
	public:
		MySpatient(void)
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
		~MySpatient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ repassword;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ fname;


	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MySpatient::typeid));
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->repassword = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->radioButton1->Location = System::Drawing::Point(476, 1106);
			this->radioButton1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(27, 26);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->radioButton2->Location = System::Drawing::Point(996, 1106);
			this->radioButton2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(27, 26);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// repassword
			// 
			this->repassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->repassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->repassword->Location = System::Drawing::Point(544, 781);
			this->repassword->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->repassword->Name = L"repassword";
			this->repassword->PasswordChar = '*';
			this->repassword->Size = System::Drawing::Size(644, 44);
			this->repassword->TabIndex = 8;
			// 
			// password
			// 
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(544, 640);
			this->password->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(644, 44);
			this->password->TabIndex = 7;
			// 
			// username
			// 
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(544, 494);
			this->username->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(644, 44);
			this->username->TabIndex = 6;
			// 
			// fname
			// 
			this->fname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->fname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname->Location = System::Drawing::Point(544, 362);
			this->fname->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(644, 44);
			this->fname->TabIndex = 5;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->numericUpDown1->InterceptArrowKeys = false;
			this->numericUpDown1->Location = System::Drawing::Point(530, 933);
			this->numericUpDown1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 65);
			this->numericUpDown1->TabIndex = 11;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 16, 0, 0, 0 });
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1988, 1209);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(247, 102);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// MySpatient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(2284, 1354);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->repassword);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->fname);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->MaximizeBox = false;
			this->Name = L"MySpatient";
			this->Text = L"MySpatient";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void age_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
