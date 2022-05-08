#pragma once

namespace SelfDiagnosis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MySdoctor
	/// </summary>
	public ref class MySdoctor : public System::Windows::Forms::Form
	{
	public:
		MySdoctor(void)
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
		~MySdoctor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ fname;
	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ repassword;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MySdoctor::typeid));
			this->fname = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->repassword = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// fname
			// 
			this->fname->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->fname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fname->Location = System::Drawing::Point(550, 360);
			this->fname->Margin = System::Windows::Forms::Padding(4);
			this->fname->Name = L"fname";
			this->fname->Size = System::Drawing::Size(644, 44);
			this->fname->TabIndex = 1;
			// 
			// username
			// 
			this->username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username->Location = System::Drawing::Point(550, 502);
			this->username->Margin = System::Windows::Forms::Padding(4);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(644, 44);
			this->username->TabIndex = 2;
			// 
			// password
			// 
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(550, 642);
			this->password->Margin = System::Windows::Forms::Padding(4);
			this->password->Name = L"password";
			this->password->PasswordChar = '*';
			this->password->Size = System::Drawing::Size(644, 44);
			this->password->TabIndex = 3;
			// 
			// repassword
			// 
			this->repassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->repassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->repassword->Location = System::Drawing::Point(550, 779);
			this->repassword->Margin = System::Windows::Forms::Padding(4);
			this->repassword->Name = L"repassword";
			this->repassword->PasswordChar = '*';
			this->repassword->Size = System::Drawing::Size(644, 44);
			this->repassword->TabIndex = 4;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(1982, 1205);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(247, 102);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			// 
			// MySdoctor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(2284, 1354);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->repassword);
			this->Controls->Add(this->password);
			this->Controls->Add(this->username);
			this->Controls->Add(this->fname);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->MaximizeBox = false;
			this->Name = L"MySdoctor";
			this->Text = L"MySdoctor";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
