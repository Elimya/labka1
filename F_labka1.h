#pragma once
#include "F_labka12.h"

namespace labka1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для F_labka1
	/// </summary>
	public ref class F_labka1 : public System::Windows::Forms::Form
	{
	public:
		F_labka1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~F_labka1()
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
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 15));
			this->button1->Location = System::Drawing::Point(52, 269);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 50);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Вывод текста";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &F_labka1::button1_Click);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->Font = (gcnew System::Drawing::Font(L"Arial", 15));
			this->button2->Location = System::Drawing::Point(218, 269);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(153, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Запуск формы";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &F_labka1::button2_Click);
			// 
			// button3
			// 
			this->button3->AutoSize = true;
			this->button3->Font = (gcnew System::Drawing::Font(L"Arial", 15));
			this->button3->Location = System::Drawing::Point(388, 269);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 50);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Выход";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &F_labka1::button3_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(27, 28);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(526, 134);
			this->listBox1->TabIndex = 3;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Bold));
			this->checkBox1->Location = System::Drawing::Point(12, 199);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(135, 23);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Полужирный";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &F_labka1::checkBox1_Checked);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Italic));
			this->checkBox2->Location = System::Drawing::Point(153, 200);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(79, 23);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->Text = L"Курсив";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Underline));
			this->checkBox3->Location = System::Drawing::Point(254, 200);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(131, 22);
			this->checkBox3->TabIndex = 6;
			this->checkBox3->Text = L"Подчеркнутый";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Arial", 12, System::Drawing::FontStyle::Strikeout));
			this->checkBox4->Location = System::Drawing::Point(409, 200);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(139, 22);
			this->checkBox4->TabIndex = 7;
			this->checkBox4->Text = L"Перечеркнутый";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &F_labka1::checkBox4_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(123, 229);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(436, 20);
			this->textBox1->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 232);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Введите текст:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Red;
			this->radioButton1->Location = System::Drawing::Point(27, 357);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(70, 17);
			this->radioButton1->TabIndex = 10;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Красный";
			this->radioButton1->UseVisualStyleBackColor = false;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &F_labka1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Blue;
			this->radioButton2->ForeColor = System::Drawing::Color::White;
			this->radioButton2->Location = System::Drawing::Point(123, 357);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(56, 17);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Синий";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Lime;
			this->radioButton3->Location = System::Drawing::Point(321, 357);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(64, 17);
			this->radioButton3->TabIndex = 12;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Зленый";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Yellow;
			this->radioButton4->Location = System::Drawing::Point(218, 357);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(67, 17);
			this->radioButton4->TabIndex = 13;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Желтый";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->BackColor = System::Drawing::Color::Black;
			this->radioButton5->ForeColor = System::Drawing::Color::White;
			this->radioButton5->Location = System::Drawing::Point(443, 357);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(65, 17);
			this->radioButton5->TabIndex = 14;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Черный";
			this->radioButton5->UseVisualStyleBackColor = false;
			// 
			// F_labka1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(583, 406);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"F_labka1";
			this->Text = L"laba 1 Rustambekov Timur VT-23-1";
			this->Load += gcnew System::EventHandler(this, &F_labka1::F_labka1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender,System::EventArgs^ e){
	if (textBox1->Text != "") {
		this->listBox1->Items->Clear();
		this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
		this->listBox1->ForeColor = System::Drawing::Color::Black;
		this->listBox1->Items->Add(this->textBox1 -> Text);
	if (radioButton1->Checked == true) {
	this -> listBox1->ForeColor = System::Drawing::Color::Red;
}
	if (radioButton2->Checked == true) {
	this -> listBox1->ForeColor = System::Drawing::Color::Blue;
}
	if (radioButton3->Checked == true) {
	this -> listBox1->ForeColor = System::Drawing::Color::Green;
}
	if (radioButton4->Checked == true) {
	this -> listBox1->ForeColor = System::Drawing::Color::Yellow;
}
	if (radioButton5->Checked == true) {
	this -> listBox1->ForeColor = System::Drawing::Color::Black;
}
	if (checkBox1->Checked == true) {
	this->listBox1 -> Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
}
	if (checkBox2->Checked == true) {
	this->listBox1 -> Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
}
	if (checkBox3->Checked == true) {
	this->listBox1 -> Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
}
	if (checkBox4->Checked == true) {
	this->listBox1 -> Font = (gcnew System::Drawing::Font(L"Arial", 14, System::Drawing::FontStyle::Strikeout, System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
}
	if ((checkBox1->Checked == true) && (checkBox2 -> Checked == true)) {
	this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
}
	if ((checkBox1->Checked == true) && (checkBox2 -> Checked == true) && (checkBox3->Checked == true))this->listBox1 -> Font = (gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)| System::Drawing::FontStyle::Underline)),System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
	if ((checkBox1->Checked == true) && (checkBox2 -> Checked == true) && (checkBox3->Checked == true) && (checkBox4 -> Checked == true))this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing::FontStyle>((((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)| System::Drawing::FontStyle::Underline)| System::Drawing::FontStyle::Strikeout)),System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
	if ((checkBox2->Checked == true) && (checkBox3 -> Checked == true) && (checkBox4->Checked == true))this->listBox1 -> Font = (gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)| System::Drawing::FontStyle::Strikeout)),System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
	if ((checkBox2->Checked == true) && (checkBox3 -> Checked == true))this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)),System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
	if ((checkBox2->Checked == true) && (checkBox4 -> Checked == true))this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Strikeout)),System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
	if ((checkBox1->Checked == true) && (checkBox3 -> Checked == true))this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
	if ((checkBox3->Checked == true) && (checkBox4 -> Checked == true))this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Underline | System::Drawing::FontStyle::Strikeout)),System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
	if ((checkBox1->Checked == true) && (checkBox4 -> Checked == true))this->listBox1->Font = (gcnew System::Drawing::Font(L"Arial", 14,static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Strikeout)),System::Drawing::GraphicsUnit::Point,static_cast<System::Byte>(204)));
	}
	else
	{
		MessageBox::Show("Заполните пожалуйста данные", "Ошибка ввода данных", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		F_labka12^ f = gcnew F_labka12();
		this->Hide();
		f->ShowDialog();
		this->Show();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox1_Checked(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void F_labka1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
