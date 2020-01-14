#pragma once
#include "ListarClientes.h"

namespace ProjetoLocadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for Aluguel
	/// </summary>
	public ref class Aluguel : public System::Windows::Forms::Form
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;";
		MySqlConnection^ con = gcnew MySqlConnection(constring);
		MySqlCommand^ cmd;
		MySqlDataReader^ reader;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  txtIdFilme;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  btnProcurarFilme;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txtDisponivel;
	private: System::Windows::Forms::TextBox^  txtGenero;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  txtDiretor;

	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  txtAno;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::DateTimePicker^  dtpInicio;
	private: System::Windows::Forms::DateTimePicker^  dtpFinal;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  btnLocar;

		bool novo;
	private: System::Windows::Forms::ToolStripSplitButton^  toolStripSplitButton1;
	private: System::Windows::Forms::ToolStripMenuItem^  exibirLocaçõesToolStripMenuItem;
			 bool locacao;
	public:
		Aluguel(void)
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
		~Aluguel()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^  txtNome;


	private: System::Windows::Forms::TextBox^  txtTitulo;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtIdCliente;

	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  tsbNovo;
	private: System::Windows::Forms::ToolStripButton^  tsbSalvar;
	private: System::Windows::Forms::ToolStripButton^  tsbCancelar;
	private: System::Windows::Forms::ToolStripButton^  tsbExcluir;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;


	private: System::Windows::Forms::ToolStripButton^  tsbBuscar;

	private: System::Windows::Forms::MaskedTextBox^  mskCPF;
	private: System::Windows::Forms::Button^  btnSelecionaCliente;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Aluguel::typeid));
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtIdCliente = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbNovo = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbSalvar = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbCancelar = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbExcluir = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbBuscar = (gcnew System::Windows::Forms::ToolStripButton());
			this->mskCPF = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnSelecionaCliente = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtIdFilme = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnProcurarFilme = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtDisponivel = (gcnew System::Windows::Forms::TextBox());
			this->txtGenero = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->txtDiretor = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->txtAno = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->dtpInicio = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpFinal = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->btnLocar = (gcnew System::Windows::Forms::Button());
			this->toolStripSplitButton1 = (gcnew System::Windows::Forms::ToolStripSplitButton());
			this->exibirLocaçõesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtNome
			// 
			this->txtNome->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtNome->Location = System::Drawing::Point(31, 158);
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(505, 26);
			this->txtNome->TabIndex = 50;
			// 
			// txtTitulo
			// 
			this->txtTitulo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtTitulo->Location = System::Drawing::Point(144, 279);
			this->txtTitulo->MaxLength = 50;
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(392, 26);
			this->txtTitulo->TabIndex = 21;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(27, 321);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 20);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Ano de lançamento";
			// 
			// txtIdCliente
			// 
			this->txtIdCliente->Location = System::Drawing::Point(31, 95);
			this->txtIdCliente->Name = L"txtIdCliente";
			this->txtIdCliente->ReadOnly = true;
			this->txtIdCliente->Size = System::Drawing::Size(74, 26);
			this->txtIdCliente->TabIndex = 46;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(140, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 20);
			this->label6->TabIndex = 45;
			this->label6->Text = L"CPF";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 20);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Nome do Cliente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(140, 256);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 20);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Informe o título";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(76, 20);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Id Cliente";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->tsbNovo, this->tsbSalvar,
					this->tsbCancelar, this->tsbExcluir, this->toolStripSeparator1, this->tsbBuscar, this->toolStripSplitButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1330, 31);
			this->toolStrip1->TabIndex = 40;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// tsbNovo
			// 
			this->tsbNovo->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbNovo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbNovo.Image")));
			this->tsbNovo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbNovo->Name = L"tsbNovo";
			this->tsbNovo->Size = System::Drawing::Size(28, 28);
			this->tsbNovo->Text = L"Novo";
			// 
			// tsbSalvar
			// 
			this->tsbSalvar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbSalvar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbSalvar.Image")));
			this->tsbSalvar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbSalvar->Name = L"tsbSalvar";
			this->tsbSalvar->Size = System::Drawing::Size(28, 28);
			this->tsbSalvar->Text = L"Salvar";
			// 
			// tsbCancelar
			// 
			this->tsbCancelar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbCancelar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbCancelar.Image")));
			this->tsbCancelar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbCancelar->Name = L"tsbCancelar";
			this->tsbCancelar->Size = System::Drawing::Size(28, 28);
			this->tsbCancelar->Text = L"Cancelar";
			// 
			// tsbExcluir
			// 
			this->tsbExcluir->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbExcluir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbExcluir.Image")));
			this->tsbExcluir->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbExcluir->Name = L"tsbExcluir";
			this->tsbExcluir->Size = System::Drawing::Size(28, 28);
			this->tsbExcluir->Text = L"Remover";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 31);
			// 
			// tsbBuscar
			// 
			this->tsbBuscar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbBuscar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbBuscar.Image")));
			this->tsbBuscar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbBuscar->Name = L"tsbBuscar";
			this->tsbBuscar->Size = System::Drawing::Size(28, 28);
			this->tsbBuscar->Text = L"Buscar";
			// 
			// mskCPF
			// 
			this->mskCPF->Location = System::Drawing::Point(144, 95);
			this->mskCPF->Mask = L"000.000.000-00";
			this->mskCPF->Name = L"mskCPF";
			this->mskCPF->Size = System::Drawing::Size(131, 26);
			this->mskCPF->TabIndex = 54;
			// 
			// btnSelecionaCliente
			// 
			this->btnSelecionaCliente->Location = System::Drawing::Point(304, 90);
			this->btnSelecionaCliente->Name = L"btnSelecionaCliente";
			this->btnSelecionaCliente->Size = System::Drawing::Size(90, 36);
			this->btnSelecionaCliente->TabIndex = 56;
			this->btnSelecionaCliente->Text = L"Buscar";
			this->btnSelecionaCliente->UseVisualStyleBackColor = true;
			this->btnSelecionaCliente->Click += gcnew System::EventHandler(this, &Aluguel::btnSelecionaCliente_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(222, 29);
			this->label3->TabIndex = 57;
			this->label3->Text = L"Dados do Locatário";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 215);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(216, 29);
			this->label8->TabIndex = 58;
			this->label8->Text = L"Filme Selecionado";
			// 
			// txtIdFilme
			// 
			this->txtIdFilme->Location = System::Drawing::Point(31, 279);
			this->txtIdFilme->Name = L"txtIdFilme";
			this->txtIdFilme->ReadOnly = true;
			this->txtIdFilme->Size = System::Drawing::Size(74, 26);
			this->txtIdFilme->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(27, 256);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 20);
			this->label9->TabIndex = 59;
			this->label9->Text = L"Número #";
			// 
			// btnProcurarFilme
			// 
			this->btnProcurarFilme->Location = System::Drawing::Point(570, 274);
			this->btnProcurarFilme->Name = L"btnProcurarFilme";
			this->btnProcurarFilme->Size = System::Drawing::Size(90, 36);
			this->btnProcurarFilme->TabIndex = 61;
			this->btnProcurarFilme->Text = L"Procurar";
			this->btnProcurarFilme->UseVisualStyleBackColor = true;
			this->btnProcurarFilme->Click += gcnew System::EventHandler(this, &Aluguel::btnProcurarFilme_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(233, 390);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(174, 20);
			this->label5->TabIndex = 62;
			this->label5->Text = L"Diponível para Locação";
			// 
			// txtDisponivel
			// 
			this->txtDisponivel->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtDisponivel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDisponivel->ForeColor = System::Drawing::Color::Red;
			this->txtDisponivel->Location = System::Drawing::Point(224, 422);
			this->txtDisponivel->Name = L"txtDisponivel";
			this->txtDisponivel->ReadOnly = true;
			this->txtDisponivel->Size = System::Drawing::Size(193, 30);
			this->txtDisponivel->TabIndex = 25;
			// 
			// txtGenero
			// 
			this->txtGenero->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtGenero->Location = System::Drawing::Point(199, 344);
			this->txtGenero->MaxLength = 50;
			this->txtGenero->Name = L"txtGenero";
			this->txtGenero->ReadOnly = true;
			this->txtGenero->Size = System::Drawing::Size(169, 26);
			this->txtGenero->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(195, 321);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 20);
			this->label10->TabIndex = 65;
			this->label10->Text = L"Gênero";
			// 
			// txtDiretor
			// 
			this->txtDiretor->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtDiretor->Location = System::Drawing::Point(403, 344);
			this->txtDiretor->MaxLength = 50;
			this->txtDiretor->Name = L"txtDiretor";
			this->txtDiretor->ReadOnly = true;
			this->txtDiretor->Size = System::Drawing::Size(169, 26);
			this->txtDiretor->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(399, 321);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 20);
			this->label11->TabIndex = 67;
			this->label11->Text = L"Diretor";
			// 
			// txtAno
			// 
			this->txtAno->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtAno->Location = System::Drawing::Point(31, 344);
			this->txtAno->MaxLength = 50;
			this->txtAno->Name = L"txtAno";
			this->txtAno->ReadOnly = true;
			this->txtAno->Size = System::Drawing::Size(102, 26);
			this->txtAno->TabIndex = 68;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(701, 35);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(180, 29);
			this->label12->TabIndex = 69;
			this->label12->Text = L"Dados Locação";
			// 
			// dtpInicio
			// 
			this->dtpInicio->CustomFormat = L"yyyy/MM/dd";
			this->dtpInicio->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpInicio->Location = System::Drawing::Point(730, 100);
			this->dtpInicio->MaxDate = System::DateTime(2025, 1, 1, 0, 0, 0, 0);
			this->dtpInicio->MinDate = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			this->dtpInicio->Name = L"dtpInicio";
			this->dtpInicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dtpInicio->Size = System::Drawing::Size(268, 26);
			this->dtpInicio->TabIndex = 70;
			// 
			// dtpFinal
			// 
			this->dtpFinal->CustomFormat = L"yyyy/MM/dd";
			this->dtpFinal->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpFinal->Location = System::Drawing::Point(730, 158);
			this->dtpFinal->Name = L"dtpFinal";
			this->dtpFinal->Size = System::Drawing::Size(268, 26);
			this->dtpFinal->TabIndex = 71;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(730, 222);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 72;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(726, 72);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(85, 20);
			this->label13->TabIndex = 73;
			this->label13->Text = L"Data Início";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(726, 135);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 20);
			this->label14->TabIndex = 74;
			this->label14->Text = L"Data Final";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(726, 199);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 20);
			this->label15->TabIndex = 75;
			this->label15->Text = L"Dias";
			// 
			// btnLocar
			// 
			this->btnLocar->Location = System::Drawing::Point(844, 274);
			this->btnLocar->Name = L"btnLocar";
			this->btnLocar->Size = System::Drawing::Size(90, 36);
			this->btnLocar->TabIndex = 76;
			this->btnLocar->Text = L"Locar";
			this->btnLocar->UseVisualStyleBackColor = true;
			this->btnLocar->Click += gcnew System::EventHandler(this, &Aluguel::btnLocar_Click);
			// 
			// toolStripSplitButton1
			// 
			this->toolStripSplitButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripSplitButton1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exibirLocaçõesToolStripMenuItem });
			this->toolStripSplitButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripSplitButton1.Image")));
			this->toolStripSplitButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripSplitButton1->Name = L"toolStripSplitButton1";
			this->toolStripSplitButton1->Size = System::Drawing::Size(45, 28);
			this->toolStripSplitButton1->Text = L"toolStripSplitButton1";
			// 
			// exibirLocaçõesToolStripMenuItem
			// 
			this->exibirLocaçõesToolStripMenuItem->Name = L"exibirLocaçõesToolStripMenuItem";
			this->exibirLocaçõesToolStripMenuItem->Size = System::Drawing::Size(252, 30);
			this->exibirLocaçõesToolStripMenuItem->Text = L"Exibir Locações";
			// 
			// Aluguel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1330, 475);
			this->Controls->Add(this->btnLocar);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dtpFinal);
			this->Controls->Add(this->dtpInicio);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->txtAno);
			this->Controls->Add(this->txtDiretor);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->txtGenero);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->txtDisponivel);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnProcurarFilme);
			this->Controls->Add(this->txtIdFilme);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btnSelecionaCliente);
			this->Controls->Add(this->mskCPF);
			this->Controls->Add(this->txtNome);
			this->Controls->Add(this->txtTitulo);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtIdCliente);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"Aluguel";
			this->Text = L"Aluguel";
			this->Load += gcnew System::EventHandler(this, &Aluguel::Aluguel_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Aluguel_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void btnSelecionaCliente_Click(System::Object^  sender, System::EventArgs^  e) {

	cmd = gcnew MySqlCommand("SELECT * FROM LOCADORADB.CLIENTE WHERE CPF= '" + this->mskCPF->Text + "';", con);

	try
	{
		con->Open();
		reader = cmd->ExecuteReader(); 
		if (reader->Read()) 
		{
			tsbNovo->Enabled = false;
			tsbSalvar->Enabled = true;
			tsbCancelar->Enabled = true;
			tsbExcluir->Enabled = true;
			tsbBuscar->Enabled = false;
			txtNome->Enabled = true;
			mskCPF->Enabled = true;
			mskCPF->Focus();
			txtIdCliente->Text = reader[0]->ToString();
			txtNome->Text = reader[1]->ToString();
			mskCPF->Text = reader[2]->ToString();

			novo = false;
		}
		else
			MessageBox::Show("Nenhum cliente encontrado com o CPF informado!");

	}
	catch (Exception^ex)
	{
		MessageBox::Show("Erro: " + ex->Message);
	}
	finally
	{
		con->Close();
	}

}
private: System::Void btnProcurarFilme_Click(System::Object^  sender, System::EventArgs^  e) {
	cmd = gcnew MySqlCommand("SELECT * FROM LOCADORADB.FILME INNER JOIN LOCADORADB.STATUS ON LOCADORADB.FILME.FIL_ID = LOCADORADB.STATUS.FIL_ID AND LOCADORADB.FILME.TITULO= '" + this->txtTitulo->Text + "'", con);
	
	try
	{
		con->Open();
		reader = cmd->ExecuteReader(); 
		if (reader->Read()) 
		{
				tsbNovo->Enabled = false;
				tsbSalvar->Enabled = true;
				tsbCancelar->Enabled = true;
				tsbExcluir->Enabled = true;
				tsbBuscar->Enabled = false;
				txtTitulo->Enabled = true;
				txtAno->Enabled = true;
				txtGenero->Enabled = true;
				txtDiretor->Enabled = true;
				txtDisponivel->Enabled = true;
				txtTitulo->Focus();
				txtIdFilme->Text = reader[0]->ToString();
				txtTitulo->Text = reader[1]->ToString();
				txtGenero->Text = reader[2]->ToString();
				txtDiretor->Text = reader[3]->ToString();
				txtAno->Text = reader[4]->ToString();
				txtDisponivel->Text = reader[8]->ToString();

				//novo = false;
		}
		else
			MessageBox::Show("Nenhum filme encontrado com o nome informado!");

	}
	catch (Exception^ex)
	{
		MessageBox::Show("Erro: " + ex->Message);
	}
	finally
	{
		con->Close();
	}
}
private: System::Void btnLocar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtTitulo->Text == "") {
		MessageBox::Show("Por favor, informe o nome do título.");
		txtTitulo->Focus();
		return;
	}


	//if (novo)
	//{
		cmd = gcnew MySqlCommand("INSERT INTO LOCADORADB.LOCACAO (CLI_ID, FIL_ID, DATA_INICIO, DATA_FINAL ) VALUES('" + this->txtIdCliente->Text + "', '" + this->txtIdFilme->Text + "', '" + this->dtpInicio->Text + "', '" + this->dtpFinal->Text + "') ", con);
		try
		{
			con->Open();
			int i = cmd->ExecuteNonQuery();
			if (i > 0)
				MessageBox::Show("Locação realizada com sucesso!");
		}
		catch (Exception^ex)
		{
			MessageBox::Show("Erro: " + ex->Message);
		}
		finally
		{
			con->Close();
		}
	
		//Torna o filme indisponível
		AtualizarStatus();
	//}
	//else
	//{
		/*
		cmd = gcnew MySqlCommand("UPDATE LOCADORADB.LOCACAO SET TITULO = '" + this->txtTitulo->Text + "', GENERO = '" + this->cbGenero->Text + "', DIRETOR = '" + this->txtDiretor->Text + "', ANO = '" + this->mskAno->Text + "', DATA_AQUISICAO = '" + this->mskAquisicao->Text + "' WHERE ID = '" + this->txtIdCliente->Text + "' ;", con);
		con->Open();
		try
		{
			int i = cmd->ExecuteNonQuery();
			if (i > 0) //se sim, registro concluido com sucesso
				MessageBox::Show("Filme: " + txtTitulo->Text + " atualizado com sucesso!");
		}
		catch (Exception^ex)
		{
			MessageBox::Show("Erro: " + ex->Message);
		}
		finally
		{
			con->Close();
		}
		*/
	//}

	tsbNovo->Enabled = true;
	tsbSalvar->Enabled = false;
	tsbCancelar->Enabled = false;
	tsbExcluir->Enabled = false;
	tsbBuscar->Enabled = true;
	txtTitulo->Enabled = false;
	txtDiretor->Enabled = false;

	txtIdCliente->Text = "";
	txtTitulo->Text = "";

	txtDiretor->Text = "";
}

private: void AtualizarStatus() {
	cmd = gcnew MySqlCommand("UPDATE LOCADORADB.STATUS SET DISPONIVEL = 'INDISPONIVEL' WHERE FIL_ID = '" + this->txtIdFilme->Text + "' ;", con);

	try
	{
		con->Open();
		int i = cmd->ExecuteNonQuery();
	}
	catch (Exception^ex)
	{
		MessageBox::Show("Erro: " + ex->Message);
	}
	finally
	{
		con->Close();
	}

}
};
}
