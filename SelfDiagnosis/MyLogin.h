#pragma once
namespace SelfDiagnosis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyLogin
	/// </summary>
	public ref class MyLogin : public System::Windows::Forms::Form
	{
	public:
		MyLogin(void)
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
		~MyLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ Username;
	private: System::Windows::Forms::TextBox^ Password;
	protected:



	private: System::Windows::Forms::LinkLabel^ Signup;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyLogin::typeid));
			this->Username = (gcnew System::Windows::Forms::TextBox());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->Signup = (gcnew System::Windows::Forms::LinkLabel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Username
			// 
			this->Username->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Username->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username->Location = System::Drawing::Point(406, 383);
			this->Username->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(322, 22);
			this->Username->TabIndex = 0;
			// 
			// Password
			// 
			this->Password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->Location = System::Drawing::Point(406, 456);
			this->Password->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Password->Name = L"Password";
			this->Password->PasswordChar = '*';
			this->Password->Size = System::Drawing::Size(322, 24);
			this->Password->TabIndex = 1;
			// 
			// Signup
			// 
			this->Signup->AutoSize = true;
			this->Signup->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(111)), static_cast<System::Int32>(static_cast<System::Byte>(155)),
				static_cast<System::Int32>(static_cast<System::Byte>(164)));
			this->Signup->DisabledLinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(42)), static_cast<System::Int32>(static_cast<System::Byte>(186)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)));
			this->Signup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Signup->LinkBehavior = System::Windows::Forms::LinkBehavior::NeverUnderline;
			this->Signup->LinkColor = System::Drawing::Color::Black;
			this->Signup->Location = System::Drawing::Point(716, 590);
			this->Signup->Name = L"Signup";
			this->Signup->Size = System::Drawing::Size(73, 20);
			this->Signup->TabIndex = 3;
			this->Signup->TabStop = true;
			this->Signup->Text = L"Sign Up";
			this->Signup->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyLogin::Signup_LinkClicked);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(504, 519);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(136, 46);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyLogin::pictureBox1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// MyLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1136, 706);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Signup);
			this->Controls->Add(this->Password);
			this->Controls->Add(this->Username);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyLogin";
			this->Text = L"MyLogin";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_Click(System::Object^ sender, System::EventArgs^ e) {
	//int temp = login(toStandardString(Username->Text), toStandardString(Password->Text));
		//if (temp) {
	//		MessageBox::Show("Found !");
	//	}
	//	else
	//	{
	//		MessageBox::Show("Not Found !");
	//	}
	}
private: System::Void Signup_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
}

private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	int temp = login(toStandardString(Username->Text), toStandardString(Password->Text));
		if (temp) {
			if (temp == 1) {
				current_index = get_idx(toStandardString(Username->Text), true);
				current_form = 3;
				this->Close();
			}
			else {
				current_index = get_idx(toStandardString(Username->Text), false);
				current_form = 4;
				this->Close();
			}
		}
		else
		{
			MessageBox::Show("Not Found !");
		}
}
};
}
