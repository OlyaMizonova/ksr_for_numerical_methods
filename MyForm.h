#pragma once
#include"namesOfFunctions.h"
extern std::vector<vector<double>> v_Global;			
namespace ksr10form {

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

	private: System::Windows::Forms::Label^ enter_n;
	private: System::Windows::Forms::Label^ enter_m;
	private: System::Windows::Forms::TextBox^ get_n;
	private: System::Windows::Forms::TextBox^ get_m;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ drawGraphic;
	private: System::Windows::Forms::PictureBox^ graphic;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ enterT;
	private: System::Windows::Forms::TextBox^ get_T;
	private: System::Windows::Forms::DataGridView^ tableMy;
	private: System::Windows::Forms::TextBox^ getTime;


	private: System::Windows::Forms::Button^ layUp;
	private: System::Windows::Forms::Button^ layDown;
	private: System::Windows::Forms::Label^ label2;



	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->enter_n = (gcnew System::Windows::Forms::Label());
			this->enter_m = (gcnew System::Windows::Forms::Label());
			this->get_n = (gcnew System::Windows::Forms::TextBox());
			this->get_m = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->drawGraphic = (gcnew System::Windows::Forms::Button());
			this->graphic = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->enterT = (gcnew System::Windows::Forms::Label());
			this->get_T = (gcnew System::Windows::Forms::TextBox());
			this->tableMy = (gcnew System::Windows::Forms::DataGridView());
			this->getTime = (gcnew System::Windows::Forms::TextBox());
			this->layUp = (gcnew System::Windows::Forms::Button());
			this->layDown = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableMy))->BeginInit();
			this->SuspendLayout();
			// 
			// enter_n
			// 
			this->enter_n->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enter_n->Location = System::Drawing::Point(767, 9);
			this->enter_n->Name = L"enter_n";
			this->enter_n->Size = System::Drawing::Size(254, 19);
			this->enter_n->TabIndex = 1;
			this->enter_n->Text = L"Задайте число участков по x (n)";
			// 
			// enter_m
			// 
			this->enter_m->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enter_m->Location = System::Drawing::Point(767, 141);
			this->enter_m->Name = L"enter_m";
			this->enter_m->Size = System::Drawing::Size(260, 20);
			this->enter_m->TabIndex = 2;
			this->enter_m->Text = L"Задайте число участков по t (m)";
			// 
			// get_n
			// 
			this->get_n->Location = System::Drawing::Point(771, 37);
			this->get_n->Name = L"get_n";
			this->get_n->Size = System::Drawing::Size(100, 20);
			this->get_n->TabIndex = 3;
			this->get_n->Text = L"20";
			// 
			// get_m
			// 
			this->get_m->Location = System::Drawing::Point(771, 176);
			this->get_m->Name = L"get_m";
			this->get_m->Size = System::Drawing::Size(100, 20);
			this->get_m->TabIndex = 4;
			this->get_m->Text = L"50";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(767, 210);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 45);
			this->label1->TabIndex = 6;
			this->label1->Text = L"График какого слоя вы хотите увидеть\? (от 0 до m)";
			// 
			// drawGraphic
			// 
			this->drawGraphic->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->drawGraphic->Location = System::Drawing::Point(567, 15);
			this->drawGraphic->Name = L"drawGraphic";
			this->drawGraphic->Size = System::Drawing::Size(154, 76);
			this->drawGraphic->TabIndex = 7;
			this->drawGraphic->Text = L"Пересчитать таблицу";
			this->drawGraphic->UseVisualStyleBackColor = true;
			this->drawGraphic->Click += gcnew System::EventHandler(this, &MyForm::drawGraphic_Click);
			// 
			// graphic
			// 
			this->graphic->Location = System::Drawing::Point(26, 37);
			this->graphic->Name = L"graphic";
			this->graphic->Size = System::Drawing::Size(485, 346);
			this->graphic->TabIndex = 8;
			this->graphic->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(644, 325);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(377, 121);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(950, 334);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(71, 27);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// enterT
			// 
			this->enterT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enterT->Location = System::Drawing::Point(767, 71);
			this->enterT->Name = L"enterT";
			this->enterT->Size = System::Drawing::Size(260, 20);
			this->enterT->TabIndex = 11;
			this->enterT->Text = L"Задайте верхнюю границу по t (T)";
			// 
			// get_T
			// 
			this->get_T->Location = System::Drawing::Point(771, 106);
			this->get_T->Name = L"get_T";
			this->get_T->Size = System::Drawing::Size(100, 20);
			this->get_T->TabIndex = 12;
			this->get_T->Text = L"5";
			// 
			// tableMy
			// 
			this->tableMy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tableMy->Location = System::Drawing::Point(26, 407);
			this->tableMy->Name = L"tableMy";
			this->tableMy->Size = System::Drawing::Size(591, 221);
			this->tableMy->TabIndex = 13;
			// 
			// getTime
			// 
			this->getTime->Location = System::Drawing::Point(771, 266);
			this->getTime->Name = L"getTime";
			this->getTime->Size = System::Drawing::Size(100, 20);
			this->getTime->TabIndex = 15;
			this->getTime->Text = L"0";
			this->getTime->TextChanged += gcnew System::EventHandler(this, &MyForm::getTime_TextChanged);
			// 
			// layUp
			// 
			this->layUp->AutoSize = true;
			this->layUp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"layUp.Image")));
			this->layUp->Location = System::Drawing::Point(905, 266);
			this->layUp->Name = L"layUp";
			this->layUp->Size = System::Drawing::Size(23, 21);
			this->layUp->TabIndex = 16;
			this->layUp->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->layUp->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->layUp->UseVisualStyleBackColor = true;
			this->layUp->Click += gcnew System::EventHandler(this, &MyForm::layUp_Click);
			// 
			// layDown
			// 
			this->layDown->AutoSize = true;
			this->layDown->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"layDown.Image")));
			this->layDown->Location = System::Drawing::Point(877, 266);
			this->layDown->Name = L"layDown";
			this->layDown->Size = System::Drawing::Size(22, 21);
			this->layDown->TabIndex = 17;
			this->layDown->UseVisualStyleBackColor = true;
			this->layDown->Click += gcnew System::EventHandler(this, &MyForm::layDown_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(26, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(327, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"График функции U(x, t) - температура на стержне";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 662);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->layDown);
			this->Controls->Add(this->layUp);
			this->Controls->Add(this->getTime);
			this->Controls->Add(this->tableMy);
			this->Controls->Add(this->get_T);
			this->Controls->Add(this->enterT);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->graphic);
			this->Controls->Add(this->drawGraphic);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->get_m);
			this->Controls->Add(this->get_n);
			this->Controls->Add(this->enter_m);
			this->Controls->Add(this->enter_n);
			this->Name = L"MyForm";
			this->Text = L"Мизонова";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->graphic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableMy))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//private:vector<vector<double>> v;

		int n, m;
		double T;
		int lay;
	private: System::Void drawGraphic_Click(System::Object^ sender, System::EventArgs^ e) {
		T = Convert::ToDouble(get_T->Text);
		n = Convert::ToInt32(get_n->Text);
		m = Convert::ToInt32(get_m->Text);
		v_Global = differenceShceme(n, m, T);
		tableMy->Rows->Clear();
		tableMy->Columns->Clear();
		
		tableMy->Columns->Add("t", "t_i");
		for (int i = 0; i < n+1; i++) {
			tableMy->Columns->Add(Convert::ToString(i), "x" + Convert::ToString(i));
		}
		tableMy->Rows->Add();
		tableMy->Rows[0]->Cells[0]->Value = " ";
		for (int i = 1; i < n + 1; i++) {
			tableMy->Rows->Add();
			tableMy->Rows[0]->Cells[i]->Value = Convert::ToString(double(i-1) / n);
		}
		for (int i = 1; i < m+2; i++) {
			tableMy->Rows->Add();
			tableMy->Rows[i]->Cells[0]->Value = "t"+Convert::ToString(i-1)+" = " + Convert::ToString(double(i-1)*T / m);
		}

		for (int i = 1; i < m+1; i++) {
			for (int j = 0; j < n+1; j++) {
				tableMy->Rows[i]->Cells[j+1]->Value = v_Global[i-1][j];
			}
		}
	}
		  
#pragma endregion 
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	n = Convert::ToInt32(get_n->Text);
	m = Convert::ToInt32(get_m->Text);
	T = Convert::ToDouble(get_T->Text);
	v_Global = differenceShceme(n, m, T);
	lay = Convert::ToInt32(getTime->Text);


	tableMy->Columns->Add("t", "t_i");
	for (int i = 0; i < n + 1; i++) {
		tableMy->Columns->Add(Convert::ToString(i), "x" + Convert::ToString(i));
	}
	tableMy->Rows->Add();
	tableMy->Rows[0]->Cells[0]->Value = " ";
	for (int i = 1; i <= n + 1; i++) {
		tableMy->Rows->Add();
		tableMy->Rows[0]->Cells[i]->Value = Convert::ToString(double(i - 1) / n);
	}
	for (int i = 1; i < m + 2; i++) {
		tableMy->Rows->Add();
		tableMy->Rows[i]->Cells[0]->Value = "t" + Convert::ToString(i - 1) + " = " + Convert::ToString(double(i - 1) * T / m);
	}

	for (int i = 1; i < m + 1; i++) {
		for (int j = 0; j < n + 1; j++) {
			tableMy->Rows[i]->Cells[j + 1]->Value = v_Global[i - 1][j];
		}
	}
}


private: System::Void layDown_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lay > 0) { 
		lay--; 
		getTime->Text = Convert::ToString(lay);
	}
}
private: System::Void layUp_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lay < m) {
	lay++;
	getTime->Text = Convert::ToString(lay);
	}
}
private: System::Void getTime_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	vector<double> toDraw = v_Global[lay];

	// Создаем объект графики для PictureBox
	Graphics^ g = graphic->CreateGraphics();
	g->Clear(System::Drawing::Color::White); // Очищаем PictureBox

	// Определяем область рисования
	int width = graphic->Width;
	int height = graphic->Height;

	// Определяем масштаб
	double scaleX = 0.01 / 4;  // Масштаб по оси X (для преобразования пикселей в единицы функции)
	double scaleY = 150;   // Масштаб по оси Y (для увеличения амплитуды)

	// Определяем диапазон X
	double xMin = 0;
	double xMax = 1;
	double step = 1. / n;  // Шаг по оси X

	for (double x = 50.; x < width; x += 1. / scaleX) g->DrawLine(Pens::Gray, x, 0, x, height);
	for (double x = height / 2; x < height; x += 1. * scaleY)  g->DrawLine(Pens::Gray, 0, x, width, x);
	for (double x = height / 2; x >= 0; x -= 1. * scaleY)  g->DrawLine(Pens::Gray, 0, x, width, x);
	// Рисуем оси
	Pen^ axisPen = gcnew Pen(Color::Black, 2);
	g->DrawLine(axisPen, 0, height / 2, width, height / 2); // Ось X
	g->DrawLine(axisPen, 50, 0, 50, height);  // Ось Y

	// Рисуем график функции
	Pen^ graphPen = gcnew Pen(Color::Blue, 2);
	double x = xMin;
	for (int i = 0; i < n; i++)
	{
		// Преобразуем координаты функции в координаты экрана
		int screenX1 = (int)(50 + x / scaleX);
		int screenY1 = (int)(height / 2 - toDraw[i] * scaleY);

		int screenX2 = (int)(50 + (x + step) / scaleX);
		int screenY2 = (int)(height / 2 - toDraw[i + 1] * scaleY);

		// Рисуем линию между двумя точками
		g->DrawLine(graphPen, screenX1, screenY1, screenX2, screenY2);
		x += step;
	}
	String^ Text = String::Format("{0}", Convert::ToString(round(v_Global[lay][0] * 10000) / 10000));
	String^ Text1 = String::Format("{0}", Convert::ToString(1));
	String^ Text2 = String::Format("{0}","x");
	String^ Text3 = String::Format("{0}", "t");
	String^ Text0 = String::Format("{0}", "0");
	Brush^ br = gcnew SolidBrush(Color::Black);
	g->TextRenderingHint = System::Drawing::Text::TextRenderingHint::AntiAlias;
	g->DrawString(Text, Font, br, (int)(50 + xMin / scaleX)-45, (int)(height / 2 - toDraw[0] * scaleY));
	g->DrawString(Text1, Font, br, (int)(50 + x / scaleX) + 5, height / 2+5);
	g->DrawString(Text2, Font, br, width-15, (int)(height / 2 - 15));
	g->DrawString(Text3, Font, br, 40, 5);
	g->DrawString(Text0, Font, br, 55, (int)(height / 2 + 5));
}
};
}