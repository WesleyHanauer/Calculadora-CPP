#pragma once
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>

std::string termo = "";
double num1;
double num2;
char operacao;
double resultado;

namespace Calculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Calculadora : public System::Windows::Forms::Form
	{
	public:
		Calculadora(void)
		{
			InitializeComponent();
		}
	protected:

		~Calculadora()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ igual;
	private: System::Windows::Forms::Button^ nove;
	private: System::Windows::Forms::Button^ oito;
	private: System::Windows::Forms::Button^ vezes;
	private: System::Windows::Forms::Button^ quatro;
	private: System::Windows::Forms::Button^ seis;
	private: System::Windows::Forms::Button^ cinco;
	private: System::Windows::Forms::Button^ menos;
	private: System::Windows::Forms::Button^ um;
	private: System::Windows::Forms::Button^ tres;
	private: System::Windows::Forms::Button^ dois;
	private: System::Windows::Forms::Button^ mais;
	private: System::Windows::Forms::Button^ zero;
	private: System::Windows::Forms::Button^ virgula;
	private: System::Windows::Forms::Button^ maisMenos;
	private: System::Windows::Forms::Button^ dividir;
	private: System::Windows::Forms::Button^ raiz;
	private: System::Windows::Forms::Button^ quadrado;
	private: System::Windows::Forms::Button^ apagar;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ sete;

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->igual = (gcnew System::Windows::Forms::Button());
			this->nove = (gcnew System::Windows::Forms::Button());
			this->oito = (gcnew System::Windows::Forms::Button());
			this->vezes = (gcnew System::Windows::Forms::Button());
			this->quatro = (gcnew System::Windows::Forms::Button());
			this->seis = (gcnew System::Windows::Forms::Button());
			this->cinco = (gcnew System::Windows::Forms::Button());
			this->menos = (gcnew System::Windows::Forms::Button());
			this->um = (gcnew System::Windows::Forms::Button());
			this->tres = (gcnew System::Windows::Forms::Button());
			this->dois = (gcnew System::Windows::Forms::Button());
			this->mais = (gcnew System::Windows::Forms::Button());
			this->zero = (gcnew System::Windows::Forms::Button());
			this->virgula = (gcnew System::Windows::Forms::Button());
			this->maisMenos = (gcnew System::Windows::Forms::Button());
			this->sete = (gcnew System::Windows::Forms::Button());
			this->dividir = (gcnew System::Windows::Forms::Button());
			this->raiz = (gcnew System::Windows::Forms::Button());
			this->quadrado = (gcnew System::Windows::Forms::Button());
			this->apagar = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// igual
			// 
			this->igual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->igual->Location = System::Drawing::Point(270, 424);
			this->igual->Name = L"igual";
			this->igual->Size = System::Drawing::Size(80, 80);
			this->igual->TabIndex = 3;
			this->igual->Text = L"=";
			this->igual->UseVisualStyleBackColor = true;
			this->igual->Click += gcnew System::EventHandler(this, &Calculadora::igualEVT);
			// 
			// nove
			// 
			this->nove->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nove->Location = System::Drawing::Point(184, 166);
			this->nove->Name = L"nove";
			this->nove->Size = System::Drawing::Size(80, 80);
			this->nove->TabIndex = 13;
			this->nove->Text = L"9";
			this->nove->UseVisualStyleBackColor = true;
			this->nove->Click += gcnew System::EventHandler(this, &Calculadora::noveEVT);
			// 
			// oito
			// 
			this->oito->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->oito->Location = System::Drawing::Point(98, 166);
			this->oito->Name = L"oito";
			this->oito->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->oito->Size = System::Drawing::Size(80, 80);
			this->oito->TabIndex = 14;
			this->oito->Text = L"8";
			this->oito->UseVisualStyleBackColor = true;
			this->oito->Click += gcnew System::EventHandler(this, &Calculadora::oitoEVT);
			// 
			// vezes
			// 
			this->vezes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->vezes->Location = System::Drawing::Point(270, 166);
			this->vezes->Name = L"vezes";
			this->vezes->Size = System::Drawing::Size(80, 80);
			this->vezes->TabIndex = 15;
			this->vezes->Text = L"X";
			this->vezes->UseVisualStyleBackColor = true;
			this->vezes->Click += gcnew System::EventHandler(this, &Calculadora::vezesEVT);
			// 
			// quatro
			// 
			this->quatro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quatro->Location = System::Drawing::Point(12, 252);
			this->quatro->Name = L"quatro";
			this->quatro->Size = System::Drawing::Size(80, 80);
			this->quatro->TabIndex = 8;
			this->quatro->Text = L"4";
			this->quatro->UseVisualStyleBackColor = true;
			this->quatro->Click += gcnew System::EventHandler(this, &Calculadora::quatroEVT);
			// 
			// seis
			// 
			this->seis->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seis->Location = System::Drawing::Point(184, 252);
			this->seis->Name = L"seis";
			this->seis->Size = System::Drawing::Size(80, 80);
			this->seis->TabIndex = 9;
			this->seis->Text = L"6";
			this->seis->UseVisualStyleBackColor = true;
			this->seis->Click += gcnew System::EventHandler(this, &Calculadora::seisEVT);
			// 
			// cinco
			// 
			this->cinco->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cinco->Location = System::Drawing::Point(98, 252);
			this->cinco->Name = L"cinco";
			this->cinco->Size = System::Drawing::Size(80, 80);
			this->cinco->TabIndex = 10;
			this->cinco->Text = L"5";
			this->cinco->UseVisualStyleBackColor = true;
			this->cinco->Click += gcnew System::EventHandler(this, &Calculadora::cincoEVT);
			// 
			// menos
			// 
			this->menos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menos->Location = System::Drawing::Point(270, 252);
			this->menos->Name = L"menos";
			this->menos->Size = System::Drawing::Size(80, 80);
			this->menos->TabIndex = 11;
			this->menos->Text = L"-";
			this->menos->UseVisualStyleBackColor = true;
			this->menos->Click += gcnew System::EventHandler(this, &Calculadora::menosEVT);
			// 
			// um
			// 
			this->um->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->um->Location = System::Drawing::Point(12, 338);
			this->um->Name = L"um";
			this->um->Size = System::Drawing::Size(80, 80);
			this->um->TabIndex = 4;
			this->um->Text = L"1";
			this->um->UseVisualStyleBackColor = true;
			this->um->Click += gcnew System::EventHandler(this, &Calculadora::umEVT);
			// 
			// tres
			// 
			this->tres->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tres->Location = System::Drawing::Point(184, 338);
			this->tres->Name = L"tres";
			this->tres->Size = System::Drawing::Size(80, 80);
			this->tres->TabIndex = 5;
			this->tres->Text = L"3";
			this->tres->UseVisualStyleBackColor = true;
			this->tres->Click += gcnew System::EventHandler(this, &Calculadora::tresEVT);
			// 
			// dois
			// 
			this->dois->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dois->Location = System::Drawing::Point(98, 338);
			this->dois->Name = L"dois";
			this->dois->Size = System::Drawing::Size(80, 80);
			this->dois->TabIndex = 6;
			this->dois->Text = L"2";
			this->dois->UseVisualStyleBackColor = true;
			this->dois->Click += gcnew System::EventHandler(this, &Calculadora::doisEVT);
			// 
			// mais
			// 
			this->mais->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->mais->Location = System::Drawing::Point(270, 338);
			this->mais->Name = L"mais";
			this->mais->Size = System::Drawing::Size(80, 80);
			this->mais->TabIndex = 7;
			this->mais->Text = L"+";
			this->mais->UseVisualStyleBackColor = true;
			this->mais->Click += gcnew System::EventHandler(this, &Calculadora::maisEVT);
			// 
			// zero
			// 
			this->zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->zero->Location = System::Drawing::Point(98, 424);
			this->zero->Name = L"zero";
			this->zero->Size = System::Drawing::Size(80, 80);
			this->zero->TabIndex = 2;
			this->zero->Text = L"0";
			this->zero->UseVisualStyleBackColor = true;
			this->zero->Click += gcnew System::EventHandler(this, &Calculadora::zeroEVT);
			// 
			// virgula
			// 
			this->virgula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->virgula->Location = System::Drawing::Point(184, 424);
			this->virgula->Name = L"virgula";
			this->virgula->Size = System::Drawing::Size(80, 80);
			this->virgula->TabIndex = 1;
			this->virgula->Text = L",";
			this->virgula->UseVisualStyleBackColor = true;
			this->virgula->Click += gcnew System::EventHandler(this, &Calculadora::virgulaEVT);
			// 
			// maisMenos
			// 
			this->maisMenos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->maisMenos->Location = System::Drawing::Point(12, 424);
			this->maisMenos->Name = L"maisMenos";
			this->maisMenos->Size = System::Drawing::Size(80, 80);
			this->maisMenos->TabIndex = 0;
			this->maisMenos->Text = L"±";
			this->maisMenos->UseVisualStyleBackColor = true;
			this->maisMenos->Click += gcnew System::EventHandler(this, &Calculadora::maisMenosEVT);
			// 
			// sete
			// 
			this->sete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sete->Location = System::Drawing::Point(12, 166);
			this->sete->Name = L"sete";
			this->sete->Size = System::Drawing::Size(80, 80);
			this->sete->TabIndex = 12;
			this->sete->Text = L"7";
			this->sete->UseVisualStyleBackColor = true;
			this->sete->Click += gcnew System::EventHandler(this, &Calculadora::seteEVT);
			// 
			// dividir
			// 
			this->dividir->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dividir->Location = System::Drawing::Point(270, 80);
			this->dividir->Name = L"dividir";
			this->dividir->Size = System::Drawing::Size(80, 80);
			this->dividir->TabIndex = 19;
			this->dividir->Text = L"÷";
			this->dividir->UseVisualStyleBackColor = true;
			this->dividir->Click += gcnew System::EventHandler(this, &Calculadora::dividirEVT);
			// 
			// raiz
			// 
			this->raiz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->raiz->Location = System::Drawing::Point(12, 80);
			this->raiz->Name = L"raiz";
			this->raiz->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->raiz->Size = System::Drawing::Size(80, 80);
			this->raiz->TabIndex = 18;
			this->raiz->Text = L"√";
			this->raiz->UseVisualStyleBackColor = true;
			this->raiz->Click += gcnew System::EventHandler(this, &Calculadora::raizEVT);
			// 
			// quadrado
			// 
			this->quadrado->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quadrado->Location = System::Drawing::Point(98, 80);
			this->quadrado->Name = L"quadrado";
			this->quadrado->Size = System::Drawing::Size(80, 80);
			this->quadrado->TabIndex = 17;
			this->quadrado->Text = L"x²";
			this->quadrado->UseVisualStyleBackColor = true;
			this->quadrado->Click += gcnew System::EventHandler(this, &Calculadora::quadradoEVT);
			// 
			// apagar
			// 
			this->apagar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->apagar->Location = System::Drawing::Point(184, 80);
			this->apagar->Name = L"apagar";
			this->apagar->Size = System::Drawing::Size(80, 80);
			this->apagar->TabIndex = 16;
			this->apagar->Text = L"C";
			this->apagar->UseVisualStyleBackColor = true;
			this->apagar->Click += gcnew System::EventHandler(this, &Calculadora::apagarEVT);
			// 
			// textBox1
			// 
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(338, 62);
			this->textBox1->TabIndex = 20;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(362, 518);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dividir);
			this->Controls->Add(this->raiz);
			this->Controls->Add(this->quadrado);
			this->Controls->Add(this->apagar);
			this->Controls->Add(this->vezes);
			this->Controls->Add(this->oito);
			this->Controls->Add(this->nove);
			this->Controls->Add(this->sete);
			this->Controls->Add(this->menos);
			this->Controls->Add(this->cinco);
			this->Controls->Add(this->seis);
			this->Controls->Add(this->quatro);
			this->Controls->Add(this->mais);
			this->Controls->Add(this->dois);
			this->Controls->Add(this->tres);
			this->Controls->Add(this->um);
			this->Controls->Add(this->igual);
			this->Controls->Add(this->zero);
			this->Controls->Add(this->virgula);
			this->Controls->Add(this->maisMenos);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &Calculadora::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		
	}
void reset() {
	termo = "";
	operacao = ' ';
	num1 = 0.0;
	num2 = 0.0;
}
private: System::Void igualEVT(System::Object^ sender, System::EventArgs^ e) {
	if (termo != "" && termo != "0") {
		if (operacao != '2' && operacao != '√' && operacao != '±') {
			num2 = std::stod(termo);
		}

		switch (operacao) {
		case '+':
			resultado = num1 + num2;
			break;
		case '-':
			resultado = num1 - num2;
			break;
		case '*':
			resultado = num1 * num2;
			break;
		case '/':
			resultado = num1 / num2;
			break;
		case '2':
			resultado = num1 * num1;
			break;
		case '√':
			resultado = sqrt(num1);
			break;
		case '±':
			resultado = num1 - (num1 * num1);
			break;
		default:
			break;
		}

		textBox1->Text = System::Convert::ToString(resultado);
		reset();
	}
}
private: System::Void noveEVT(System::Object^ sender, System::EventArgs^ e) {
	termo += "9";
	textBox1->Text += "9";
}
private: System::Void oitoEVT(System::Object^ sender, System::EventArgs^ e) {
	termo += "8";
	textBox1->Text += "8";
}
private: System::Void seteEVT(System::Object^ sender, System::EventArgs^ e) {
	termo += "7";
	textBox1->Text += "7";
}
private: System::Void seisEVT(System::Object^ sender, System::EventArgs^ e) {
	termo += "6";
	textBox1->Text += "6";
}
private: System::Void cincoEVT(System::Object^ sender, System::EventArgs^ e) {
	termo += "5";
	textBox1->Text += "5";
}
private: System::Void quatroEVT(System::Object^ sender, System::EventArgs^ e) {
	termo += "4";
	textBox1->Text += "4";
}
private: System::Void tresEVT(System::Object^ sender, System::EventArgs^ e) {
	termo += "3";
	textBox1->Text += "3";
}
private: System::Void doisEVT(System::Object^ sender, System::EventArgs^ e) {
	termo += "2";
	textBox1->Text += "2";
}
private: System::Void umEVT(System::Object^ sender, System::EventArgs^ e) {
	termo += "1";
	textBox1->Text += "1";
}
private: System::Void zeroEVT(System::Object^ sender, System::EventArgs^ e) {
	termo += "0";
	textBox1->Text += "0";
}
private: System::Void virgulaEVT(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->IndexOf(".") != -1) {}
	else{
		termo += ".";
		textBox1->Text += ".";
	}
}
private: System::Void apagarEVT(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	reset();
}
private: System::Void dividirEVT(System::Object^ sender, System::EventArgs^ e) {
	operacao = '/';
	num1 = std::stod(termo);
	textBox1->Text = "÷";
	termo = "";
}
private: System::Void quadradoEVT(System::Object^ sender, System::EventArgs^ e) {
	operacao = '2';
	num1 = std::stod(termo);
	textBox1->Text = "X²";
	termo = "";
}
private: System::Void menosEVT(System::Object^ sender, System::EventArgs^ e) {
	operacao = '-';
	num1 = std::stod(termo);
	textBox1->Text = "-";
	termo = "";
}
private: System::Void raizEVT(System::Object^ sender, System::EventArgs^ e) {
	operacao = '√';
	num1 = std::stod(termo);
	textBox1->Text = "√";
	termo = "";
}
private: System::Void maisMenosEVT(System::Object^ sender, System::EventArgs^ e) {
	operacao = '±';
	num1 = std::stod(termo);
	textBox1->Text = "±";
	termo = "";
}
private: System::Void vezesEVT(System::Object^ sender, System::EventArgs^ e) {
	operacao = '*';
	num1 = std::stod(termo);
	textBox1->Text = "X";
	termo = "";
}
private: System::Void maisEVT(System::Object^ sender, System::EventArgs^ e) {
	operacao = '+';
	num1 = std::stod(termo);
	textBox1->Text = "+";
	termo = "";
}
};
}