#pragma once
#include "MyForm1.h"

namespace practika {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(126, 314);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 41);
			this->button1->TabIndex = 0;
			this->button1->Text = L"����� ������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(233, 314);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(102, 41);
			this->button2->TabIndex = 1;
			this->button2->Text = L"������ �����";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(339, 314);
			this->button3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(113, 41);
			this->button3->TabIndex = 2;
			this->button3->Text = L"�����";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(9, 10);
			this->listBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(541, 147);
			this->listBox1->TabIndex = 3;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(9, 204);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(269, 106);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"����� ������ ";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(390, 16);
			this->checkBox4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(103, 17);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"�������������";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(4, 56);
			this->checkBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(97, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"������������";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(4, 35);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(81, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"���������";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(4, 17);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(89, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"����������";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Location = System::Drawing::Point(282, 204);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox2->Size = System::Drawing::Size(268, 106);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"���� ������";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(89, 47);
			this->radioButton5->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(62, 17);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"������";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(89, 29);
			this->radioButton4->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(64, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"������\r\n";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(16, 68);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(69, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"�������";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(16, 47);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(55, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"�����";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(16, 26);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(69, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"�������";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(100, 161);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(450, 20);
			this->textBox1->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(14, 165);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(80, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"������� �����";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(626, 402);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"�������� �������� �.�. 23 ��";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		{
			MyForm1^ f = gcnew MyForm1();
			this->Hide();
			f->ShowDialog();
			this->Show();
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text != "") {
			this->listBox1->Items->Clear();
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial",
				14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204))); this->listBox1->ForeColor = System::Drawing::Color::Black; this->listBox1->Items->Add(this->textBox1->Text);
		}
		if (textBox1->Text != "") {
			this->listBox1->Items->Clear();
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial",
				14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204))); this->listBox1->ForeColor = System::Drawing::Color::Black; this->listBox1->Items->Add(this->textBox1->Text);

			if (radioButton1->Checked == true) {
				this->listBox1->ForeColor
					= System::Drawing::Color::Red;
			}

			if (radioButton2->Checked == true) {
				this->listBox1->ForeColor
					= System::Drawing::Color::Blue;
			}
			if (radioButton3->Checked == true) {
				this->listBox1->ForeColor
					= System::Drawing::Color::Green;
			}
			if (radioButton4->Checked == true) {
				this->listBox1->ForeColor
					= System::Drawing::Color::Yellow;
			}
			if (radioButton5->Checked == true) {
				this->listBox1->ForeColor =
					System::Drawing::Color::Black;
			}
			if (checkBox1->Checked == true) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if (checkBox2->Checked == true) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if (checkBox3->Checked == true) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if (checkBox4->Checked == true) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if ((checkBox1->Checked == true) && (checkBox2->Checked == true)) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if ((checkBox1->Checked == true) && ((checkBox2->Checked == true)) && (checkBox3->Checked == true)) { this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic) | System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204))); }

			if ((checkBox1->Checked == true) && (checkBox2->Checked == true) && (checkBox3->Checked == true) && (checkBox4->Checked == true)) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline | System::Drawing::FontStyle::Strikeout), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if ((checkBox2->Checked == true) && (checkBox3->Checked == true) && (checkBox4->Checked == true)) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline | System::Drawing::FontStyle::Strikeout), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if ((checkBox2->Checked == true) && (checkBox3->Checked == true)) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if ((checkBox2->Checked == true) && (checkBox4->Checked == true)) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Strikeout), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if ((checkBox1->Checked == true) && (checkBox3->Checked ==
				true)) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if ((checkBox3->Checked == true) && (checkBox4->Checked == true)) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Underline | System::Drawing::FontStyle::Strikeout), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if ((checkBox1->Checked == true) && (checkBox4->Checked == true)) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if ((checkBox1->Checked == true) && (checkBox3->Checked == true)) {
				this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>(System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}

			if ((checkBox1->Checked == true) && ((checkBox2->Checked ==
				true)) && (checkBox4->Checked == true)) {
				this->listBox1->Font =
					(gcnew System::Drawing::Font(L"Arial", 14, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Strikeout)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			}
		}
		else
		{
			MessageBox::Show("????????? ?????????? ??????", "?????? ????? ??????",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	};

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	};
}