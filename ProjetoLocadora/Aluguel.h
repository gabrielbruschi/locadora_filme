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

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;

	private: System::Windows::Forms::Button^  btnLocar;

		bool novo;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;




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



	private: System::Windows::Forms::ToolStripButton^  tsbCancelar;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;




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
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbCancelar = (gcnew System::Windows::Forms::ToolStripButton());
			this->mskCPF = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnSelecionaCliente = (gcnew System::Windows::Forms::Button());
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
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->btnLocar = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->toolStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtNome
			// 
			this->txtNome->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtNome->Location = System::Drawing::Point(24, 126);
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(505, 26);
			this->txtNome->TabIndex = 50;
			// 
			// txtTitulo
			// 
			this->txtTitulo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtTitulo->Location = System::Drawing::Point(137, 53);
			this->txtTitulo->MaxLength = 50;
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(392, 26);
			this->txtTitulo->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 20);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Ano de lançamento";
			// 
			// txtIdCliente
			// 
			this->txtIdCliente->Location = System::Drawing::Point(24, 63);
			this->txtIdCliente->Name = L"txtIdCliente";
			this->txtIdCliente->ReadOnly = true;
			this->txtIdCliente->Size = System::Drawing::Size(74, 26);
			this->txtIdCliente->TabIndex = 46;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(158, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 20);
			this->label6->TabIndex = 45;
			this->label6->Text = L"CPF";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(24, 103);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 20);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Nome do Cliente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(133, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 20);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Informe o título";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 20);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Número Cliente";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripSeparator1,
					this->tsbCancelar
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1328, 32);
			this->toolStrip1->TabIndex = 40;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 32);
			// 
			// tsbCancelar
			// 
			this->tsbCancelar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbCancelar.Image")));
			this->tsbCancelar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbCancelar->Name = L"tsbCancelar";
			this->tsbCancelar->Size = System::Drawing::Size(106, 29);
			this->tsbCancelar->Text = L"Cancelar";
			this->tsbCancelar->Click += gcnew System::EventHandler(this, &Aluguel::tsbCancelar_Click);
			// 
			// mskCPF
			// 
			this->mskCPF->Location = System::Drawing::Point(162, 63);
			this->mskCPF->Mask = L"000.000.000-00";
			this->mskCPF->Name = L"mskCPF";
			this->mskCPF->Size = System::Drawing::Size(131, 26);
			this->mskCPF->TabIndex = 1;
			// 
			// btnSelecionaCliente
			// 
			this->btnSelecionaCliente->Location = System::Drawing::Point(345, 60);
			this->btnSelecionaCliente->Name = L"btnSelecionaCliente";
			this->btnSelecionaCliente->Size = System::Drawing::Size(90, 36);
			this->btnSelecionaCliente->TabIndex = 2;
			this->btnSelecionaCliente->Text = L"Buscar";
			this->btnSelecionaCliente->UseVisualStyleBackColor = true;
			this->btnSelecionaCliente->Click += gcnew System::EventHandler(this, &Aluguel::btnSelecionaCliente_Click);
			// 
			// txtIdFilme
			// 
			this->txtIdFilme->Location = System::Drawing::Point(24, 53);
			this->txtIdFilme->Name = L"txtIdFilme";
			this->txtIdFilme->ReadOnly = true;
			this->txtIdFilme->Size = System::Drawing::Size(74, 26);
			this->txtIdFilme->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(20, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(78, 20);
			this->label9->TabIndex = 59;
			this->label9->Text = L"Número #";
			// 
			// btnProcurarFilme
			// 
			this->btnProcurarFilme->Location = System::Drawing::Point(565, 48);
			this->btnProcurarFilme->Name = L"btnProcurarFilme";
			this->btnProcurarFilme->Size = System::Drawing::Size(90, 36);
			this->btnProcurarFilme->TabIndex = 4;
			this->btnProcurarFilme->Text = L"Procurar";
			this->btnProcurarFilme->UseVisualStyleBackColor = true;
			this->btnProcurarFilme->Click += gcnew System::EventHandler(this, &Aluguel::btnProcurarFilme_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(122, 217);
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
			this->txtDisponivel->Location = System::Drawing::Point(113, 249);
			this->txtDisponivel->Name = L"txtDisponivel";
			this->txtDisponivel->ReadOnly = true;
			this->txtDisponivel->Size = System::Drawing::Size(193, 30);
			this->txtDisponivel->TabIndex = 25;
			// 
			// txtGenero
			// 
			this->txtGenero->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtGenero->Location = System::Drawing::Point(192, 118);
			this->txtGenero->MaxLength = 50;
			this->txtGenero->Name = L"txtGenero";
			this->txtGenero->ReadOnly = true;
			this->txtGenero->Size = System::Drawing::Size(169, 26);
			this->txtGenero->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(188, 95);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(63, 20);
			this->label10->TabIndex = 65;
			this->label10->Text = L"Gênero";
			// 
			// txtDiretor
			// 
			this->txtDiretor->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtDiretor->Location = System::Drawing::Point(396, 118);
			this->txtDiretor->MaxLength = 50;
			this->txtDiretor->Name = L"txtDiretor";
			this->txtDiretor->ReadOnly = true;
			this->txtDiretor->Size = System::Drawing::Size(169, 26);
			this->txtDiretor->TabIndex = 24;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(392, 95);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(57, 20);
			this->label11->TabIndex = 67;
			this->label11->Text = L"Diretor";
			// 
			// txtAno
			// 
			this->txtAno->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtAno->Location = System::Drawing::Point(24, 118);
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
			this->label12->Location = System::Drawing::Point(50, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(180, 29);
			this->label12->TabIndex = 69;
			this->label12->Text = L"Dados Locação";
			// 
			// dtpInicio
			// 
			this->dtpInicio->CustomFormat = L"yyyy/MM/dd";
			this->dtpInicio->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpInicio->Location = System::Drawing::Point(83, 100);
			this->dtpInicio->MaxDate = System::DateTime(2025, 1, 1, 0, 0, 0, 0);
			this->dtpInicio->MinDate = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			this->dtpInicio->Name = L"dtpInicio";
			this->dtpInicio->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dtpInicio->Size = System::Drawing::Size(268, 26);
			this->dtpInicio->TabIndex = 5;
			// 
			// dtpFinal
			// 
			this->dtpFinal->CustomFormat = L"yyyy/MM/dd";
			this->dtpFinal->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpFinal->Location = System::Drawing::Point(83, 163);
			this->dtpFinal->Name = L"dtpFinal";
			this->dtpFinal->Size = System::Drawing::Size(268, 26);
			this->dtpFinal->TabIndex = 6;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(79, 77);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(85, 20);
			this->label13->TabIndex = 73;
			this->label13->Text = L"Data Início";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(79, 140);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 20);
			this->label14->TabIndex = 74;
			this->label14->Text = L"Data Final";
			// 
			// btnLocar
			// 
			this->btnLocar->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLocar.BackgroundImage")));
			this->btnLocar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnLocar->Location = System::Drawing::Point(154, 294);
			this->btnLocar->Name = L"btnLocar";
			this->btnLocar->Size = System::Drawing::Size(91, 73);
			this->btnLocar->TabIndex = 7;
			this->btnLocar->Text = L"Locar";
			this->btnLocar->UseVisualStyleBackColor = true;
			this->btnLocar->Click += gcnew System::EventHandler(this, &Aluguel::btnLocar_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->txtIdCliente);
			this->groupBox1->Controls->Add(this->txtNome);
			this->groupBox1->Controls->Add(this->mskCPF);
			this->groupBox1->Controls->Add(this->btnSelecionaCliente);
			this->groupBox1->Location = System::Drawing::Point(33, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(691, 218);
			this->groupBox1->TabIndex = 75;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dados do Locatário";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->txtTitulo);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->txtIdFilme);
			this->groupBox2->Controls->Add(this->btnProcurarFilme);
			this->groupBox2->Controls->Add(this->txtAno);
			this->groupBox2->Controls->Add(this->txtDiretor);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->txtGenero);
			this->groupBox2->Location = System::Drawing::Point(33, 224);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(691, 253);
			this->groupBox2->TabIndex = 76;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Selecionar Filme";
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->dtpInicio);
			this->groupBox3->Controls->Add(this->dtpFinal);
			this->groupBox3->Controls->Add(this->btnLocar);
			this->groupBox3->Controls->Add(this->label13);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->txtDisponivel);
			this->groupBox3->Location = System::Drawing::Point(775, 37);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(420, 440);
			this->groupBox3->TabIndex = 77;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Dados da Locação";
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox4->Controls->Add(this->groupBox3);
			this->groupBox4->Controls->Add(this->groupBox2);
			this->groupBox4->Controls->Add(this->groupBox1);
			this->groupBox4->Location = System::Drawing::Point(46, 50);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1223, 525);
			this->groupBox4->TabIndex = 78;
			this->groupBox4->TabStop = false;
			// 
			// Aluguel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1328, 631);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->toolStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Aluguel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Aluguel um Filme";
			this->Load += gcnew System::EventHandler(this, &Aluguel::Aluguel_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Aluguel_Load(System::Object^  sender, System::EventArgs^  e) {
		txtIdCliente->ReadOnly = true;
		txtNome->ReadOnly = true;
		txtIdFilme->ReadOnly = true;
		txtAno->ReadOnly = true;
		txtGenero->ReadOnly = true;
		txtDiretor->ReadOnly = true;
		txtDisponivel->ReadOnly = true;
		txtNome->ReadOnly = true;
		txtNome->ReadOnly = true;
		txtNome->ReadOnly = true;
		mskCPF->Focus();

	}
private: System::Void btnSelecionaCliente_Click(System::Object^  sender, System::EventArgs^  e) {

	cmd = gcnew MySqlCommand("SELECT * FROM LOCADORADB.CLIENTE WHERE CPF= '" + this->mskCPF->Text + "';", con);

	try
	{
		con->Open();
		reader = cmd->ExecuteReader(); 
		if (reader->Read()) 
		{
			tsbCancelar->Enabled = true;
			txtNome->Enabled = true;
			mskCPF->Enabled = true;
			mskCPF->Focus();
			txtIdCliente->Text = reader[0]->ToString();
			txtNome->Text = reader[1]->ToString();
			mskCPF->Text = reader[2]->ToString();

			txtTitulo->Focus();
		}
		else {
			MessageBox::Show("Nenhum cliente encontrado com o CPF informado!");
			mskCPF->Text = "";
		}
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
				tsbCancelar->Enabled = true;
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

				dtpInicio->Focus();
		}
		else {
			MessageBox::Show("Nenhum filme encontrado com o nome informado!");
			txtTitulo->Text = "";
		}
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
	String^ _mskCPF = mskCPF->Text;
	int x_mskCPF = _mskCPF->Length;
	if (x_mskCPF < 14) {
		MessageBox::Show("Por favor, insira um CPF válido.");
		mskCPF->Focus();
		return;
	}
	if (txtTitulo->Text == "") {
		MessageBox::Show("Por favor, informe o nome do título.");
		txtTitulo->Focus();
		return;
	}
	if (txtDisponivel->Text == "SIM") {
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

		tsbCancelar->Enabled = true;
		txtTitulo->Enabled = false;
		txtDiretor->Enabled = false;

		Cancelar();
	}
	else
	{
		MessageBox::Show("Filme Indisponível para locação.");
	}
}

private: void AtualizarStatus() {
	cmd = gcnew MySqlCommand("UPDATE LOCADORADB.STATUS SET DISPONIVEL = 'NAO' WHERE FIL_ID = '" + this->txtIdFilme->Text + "' ;", con);

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
private: System::Void tsbBuscar_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tsbExcluir_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tsbCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	Cancelar();
}
private: System::Void tsbSalvar_Click(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void toolStripLabel1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void toolStripLabel2_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void tsbListar_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: void Cancelar() {
	tsbCancelar->Enabled = true;
	mskCPF->Enabled = true;
	btnSelecionaCliente->Enabled = true;
	txtTitulo->Enabled = true;
	btnProcurarFilme->Enabled = true;

	txtIdCliente->Text = "";
	mskCPF->Text = "";
	txtNome->Text = "";
	txtIdFilme->Text = "";
	txtTitulo->Text = "";
	txtAno->Text = "";
	txtGenero->Text = "";
	txtDiretor->Text = "";
	txtDisponivel->Text = "";
	dtpInicio->Text = "";
	dtpFinal->Text = "";
}
};
}
