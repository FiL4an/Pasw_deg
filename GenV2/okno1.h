#pragma once
bool b8, b12, b16;
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <clocale>
int a;
using namespace std;
bool g = 0;
char* gen(int a) {
	char alph[] = {
		// Латинский алфавит (маленькие буквы)
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		// Латинский алфавит (большие буквы)
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		// Кириллица (маленькие буквы)
		'а', 'б', 'в', 'г', 'д', 'е', 'ё', 'ж', 'з', 'и', 'й', 'к', 'л', 'м', 'н', 'о', 'п', 'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я',
		// Кириллица (большие буквы)
		'А', 'Б', 'В', 'Г', 'Д', 'Е', 'Ё', 'Ж', 'З', 'И', 'Й', 'К', 'Л', 'М', 'Н', 'О', 'П', 'Р', 'С', 'Т', 'У', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ', 'Ъ', 'Ы', 'Ь', 'Э', 'Ю', 'Я',
		// Цифры
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
		// Специальные символы
		'!', '"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', ':', ';', '<', '=', '>', '?', '@', '[', '\\', ']', '^', '_', '{', '|', '}', '~'
	};

	int counter = 0;
	if (a == 1) counter = 8;
	if (a == 2) counter = 12;
	if (a == 3) counter = 16;

	char* valuer = new char[counter + 1];

	for (int i = 0; i <= counter; i++) {
		valuer[i] = alph[rand() % (sizeof(alph) / sizeof(alph[0]))];
	}
		
	valuer[counter] = '\0';

	return valuer;
}

namespace generator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для okno1
	/// </summary>
	public ref class okno1 : public System::Windows::Forms::Form
	{
	public:
		okno1(void)
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
		~okno1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ vivod;
	protected:

	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Button^ gb;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		char* z;/// </summary> 
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)

		{
		

			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(okno1::typeid));
			this->vivod = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->gb = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// vivod
			// 
			this->vivod->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->vivod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->vivod->ForeColor = System::Drawing::SystemColors::Desktop;
			this->vivod->Location = System::Drawing::Point(150, 150);
			this->vivod->Name = L"vivod";
			this->vivod->Size = System::Drawing::Size(200, 15);
			this->vivod->TabIndex = 0;
			this->vivod->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Impact", 8.25F, System::Drawing::FontStyle::Italic));
			this->radioButton1->Location = System::Drawing::Point(150, 194);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(45, 19);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"<-- 8";
			this->radioButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &okno1::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::SystemColors::Control;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Impact", 8.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(224, 194);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(49, 19);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"<-- 12";
			this->radioButton2->UseVisualStyleBackColor = false;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &okno1::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Impact", 8.25F, System::Drawing::FontStyle::Italic));
			this->radioButton3->Location = System::Drawing::Point(301, 194);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(49, 19);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"<-- 16";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// gb
			// 
			this->gb->Cursor = System::Windows::Forms::Cursors::Hand;
			this->gb->Font = (gcnew System::Drawing::Font(L"Impact", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gb->Location = System::Drawing::Point(175, 117);
			this->gb->Name = L"gb";
			this->gb->Size = System::Drawing::Size(150, 30);
			this->gb->TabIndex = 4;
			this->gb->Text = L"Generate";
			this->gb->UseVisualStyleBackColor = true;
			this->gb->Click += gcnew System::EventHandler(this, &okno1::button1_Click);
			// 
			// okno1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 361);
			this->Controls->Add(this->gb);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->vivod);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"okno1";
			this->Text = L"PG V.1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton1->Checked == true) a == 1;}

	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton2->Checked == true) a == 2;}

	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->radioButton3->Checked == true) a == 3;
	}
		   void button1_Click(Object^ sender, EventArgs^ e)
		   {
			   // Определяем длину строки на основе выбранной радиокнопки
			   int selectedIndex = 1; // По умолчанию 8 символов
			   if (radioButton2->Checked) selectedIndex = 2;
			   if (radioButton3->Checked) selectedIndex = 3;

			   // Генерация строки
			   char* randomString = gen(selectedIndex);

			   // Обновление текста label
			   vivod->Text = gcnew String(randomString); // Преобразование char* в String^

			   delete[] randomString; // Освобождение памяти
		   }

};
}
