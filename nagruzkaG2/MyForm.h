#pragma once
#include <cmath> // для round

using namespace std;


namespace nagruzkaG2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label_rez;
	private: System::Windows::Forms::Label^ label_F;
	private: System::Windows::Forms::TextBox^ textBox_F;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox_plotn;
	private: System::Windows::Forms::Label^ label_py;
	private: System::Windows::Forms::TextBox^ textBox_py;

	private: System::Windows::Forms::Button^ button1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label_rez = (gcnew System::Windows::Forms::Label());
			this->label_F = (gcnew System::Windows::Forms::Label());
			this->textBox_F = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox_plotn = (gcnew System::Windows::Forms::PictureBox());
			this->label_py = (gcnew System::Windows::Forms::Label());
			this->textBox_py = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_plotn))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(380, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Расчетная активная нанрузка предприятия , кВт";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label_rez
			// 
			this->label_rez->AutoSize = true;
			this->label_rez->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_rez->ForeColor = System::Drawing::Color::Orange;
			this->label_rez->Location = System::Drawing::Point(260, 50);
			this->label_rez->Name = L"label_rez";
			this->label_rez->Size = System::Drawing::Size(21, 24);
			this->label_rez->TabIndex = 1;
			this->label_rez->Text = L"0";
			this->label_rez->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_F
			// 
			this->label_F->AutoSize = true;
			this->label_F->Location = System::Drawing::Point(12, 92);
			this->label_F->Name = L"label_F";
			this->label_F->Size = System::Drawing::Size(125, 13);
			this->label_F->TabIndex = 2;
			this->label_F->Text = L"Площадь помещения F";
			// 
			// textBox_F
			// 
			this->textBox_F->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_F->Location = System::Drawing::Point(15, 108);
			this->textBox_F->Name = L"textBox_F";
			this->textBox_F->Size = System::Drawing::Size(113, 21);
			this->textBox_F->TabIndex = 3;
			this->textBox_F->Text = L"0";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(117, 33);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(137, 39);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox_plotn
			// 
			this->pictureBox_plotn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox_plotn.Image")));
			this->pictureBox_plotn->Location = System::Drawing::Point(2, 148);
			this->pictureBox_plotn->Name = L"pictureBox_plotn";
			this->pictureBox_plotn->Size = System::Drawing::Size(406, 236);
			this->pictureBox_plotn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox_plotn->TabIndex = 5;
			this->pictureBox_plotn->TabStop = false;
			// 
			// label_py
			// 
			this->label_py->AutoSize = true;
			this->label_py->Location = System::Drawing::Point(161, 92);
			this->label_py->Name = L"label_py";
			this->label_py->Size = System::Drawing::Size(201, 13);
			this->label_py->TabIndex = 6;
			this->label_py->Text = L"Плотность электрической нагрузки, p";
			this->label_py->UseMnemonic = false;
			// 
			// textBox_py
			// 
			this->textBox_py->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox_py->Location = System::Drawing::Point(164, 108);
			this->textBox_py->Name = L"textBox_py";
			this->textBox_py->Size = System::Drawing::Size(100, 21);
			this->textBox_py->TabIndex = 7;
			this->textBox_py->Text = L"0";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(308, 106);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Рассчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(408, 383);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_py);
			this->Controls->Add(this->label_py);
			this->Controls->Add(this->pictureBox_plotn);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox_F);
			this->Controls->Add(this->label_F);
			this->Controls->Add(this->label_rez);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Нагрузка по площади";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox_plotn))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		float F = System::Convert::ToSingle(textBox_F->Text), py = System::Convert::ToSingle(textBox_py->Text); // добавляем сюда входные переменные думаем над типом данных
			float P = round(F * py*100)/100; //  formula
			label_rez->Text = P.ToString();

	}
};
}
