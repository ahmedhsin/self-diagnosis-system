#pragma once

namespace SelfDiagnosis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyPatiethistory
	/// </summary>
	public ref class MyPatiethistory : public System::Windows::Forms::Form
	{
	public:
		MyPatiethistory(void)
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
		~MyPatiethistory()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 51);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(354, 147);
			this->listBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(120, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Disease History";
			this->label1->Click += gcnew System::EventHandler(this, &MyPatiethistory::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(119, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 29);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Clear disease history";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyPatiethistory::button1_Click);
			// 
			// MyPatiethistory
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(395, 288);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Name = L"MyPatiethistory";
			this->Text = L"MyPatiethistory";
			this->Load += gcnew System::EventHandler(this, &MyPatiethistory::MyPatiethistory_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyPatiethistory_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < patient[current_index].numofdiseases; i++) {
			listBox1->Items->Add(toSystemString(disease[get_disease_idx(patient[current_index].diseases_history[i])].title));
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->Items->Count == 0)
		MessageBox::Show("There is no something to clear ");
	else {
		patient[current_index].numofdiseases = 0;
		listBox1->Items->Clear();
		MessageBox::Show("Clear Done");
	}
}
};
}
