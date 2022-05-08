#pragma once

namespace SelfDiagnosis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyDiagnosis
	/// </summary>
	public ref class MyDiagnosis : public System::Windows::Forms::Form
	{
	public:
		MyDiagnosis(void)
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
		~MyDiagnosis()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

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
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(12, 28);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(375, 184);
			this->checkedListBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(129, 231);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(116, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyDiagnosis::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 5);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Symptoms";
			// 
			// MyDiagnosis
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(403, 271);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MyDiagnosis";
			this->Text = L"MyDiagnosis";
			this->Load += gcnew System::EventHandler(this, &MyDiagnosis::MyDiagnosis_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyDiagnosis_Load(System::Object^ sender, System::EventArgs^ e) {
		string allsymptoms[1000];
		int numofallsymptoms = 0;
		for (int i = 0; i < numofdiseases; i++) {
			for (int j = 0; j < disease[i].numofsymp; j++) {
				allsymptoms[numofallsymptoms++] = disease[i].symp[j];
			}
		}
		for (int i = 0; i < numofallsymptoms; i++) {
			for (int j = 0; j < numofallsymptoms; j++) {
				if (allsymptoms[i] == allsymptoms[j] && i != j)
					allsymptoms[i] = "0";
			}
		}
		for (int i = 0; i < numofallsymptoms; i++) {
			if(allsymptoms[i] != "0")
				checkedListBox1->Items->Add(toSystemString(allsymptoms[i]));
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (checkedListBox1->CheckedItems->Count == 0)
			MessageBox::Show("Please Select yout symptoms");
		else {
			string symptoms[1000];
			for (int i = 0; i < checkedListBox1->CheckedItems->Count; i++) {
				symptoms[i] = toStandardString(checkedListBox1->CheckedItems[i]->ToString());
			}
			multireturn temp = diagnose(current_index, checkedListBox1->CheckedItems->Count, symptoms);
			if (temp.percent >= 60) {
				MessageBox::Show("Your Disease is : " + toSystemString(disease[temp.ans].title));
			}
			else if (temp.percent > 0) {
				MessageBox::Show("NO Match found !! related diseases with matching percentage\nYour Disease is : " + toSystemString(disease[temp.ans].title) + " Percent is : " + temp.percent);
			}
			else {
				MessageBox::Show("No Match Found !!");
			}
		}
	}
};
}
