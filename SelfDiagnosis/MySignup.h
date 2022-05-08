#pragma once

namespace SelfDiagnosis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MySignup
	/// </summary>
	public ref class MySignup : public System::Windows::Forms::Form
	{
	public:
		MySignup(void)
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
		~MySignup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::LinkLabel^ Signup;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MySignup::typeid));
			this->Signup = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// Signup
			// 
			this->Signup->AutoSize = true;
			this->Signup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(105)), static_cast<System::Int32>(static_cast<System::Byte>(159)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)));
			this->Signup->DisabledLinkColor = System::Drawing::Color::White;
			this->Signup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Signup->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->Signup->LinkColor = System::Drawing::Color::Black;
			this->Signup->Location = System::Drawing::Point(1137, 1083);
			this->Signup->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->Signup->Name = L"Signup";
			this->Signup->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Signup->Size = System::Drawing::Size(0, 37);
			this->Signup->TabIndex = 4;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(790, 748);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(338, 250);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MySignup::pictureBox1_Click_2);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1316, 748);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(338, 250);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MySignup::pictureBox2_Click);
			// 
			// MySignup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(2284, 1354);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Signup);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->MaximizeBox = false;
			this->Name = L"MySignup";
			this->Text = L"MySignup";
			this->Load += gcnew System::EventHandler(this, &MySignup::MySignup_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Hello");
	}
	private: System::Void MySignup_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void pictureBox1_Click_2(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Patient");
	}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Doctor");
}
};
}
