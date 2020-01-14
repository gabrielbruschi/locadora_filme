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

		bool novo;
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
	private: System::Windows::Forms::MaskedTextBox^  mskAquisicao;
	protected:
	private: System::Windows::Forms::MaskedTextBox^  mskAno;
	private: System::Windows::Forms::TextBox^  txtDiretor;
	private: System::Windows::Forms::ComboBox^  cbGenero;
	private: System::Windows::Forms::TextBox^  txtTitulo;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtId;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  tsbNovo;
	private: System::Windows::Forms::ToolStripButton^  tsbSalvar;
	private: System::Windows::Forms::ToolStripButton^  tsbCancelar;
	private: System::Windows::Forms::ToolStripButton^  tsbExcluir;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripLabel^  tsbBuscaPorId;
	private: System::Windows::Forms::ToolStripTextBox^  tstId;
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
			this->mskAquisicao = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mskAno = (gcnew System::Windows::Forms::MaskedTextBox());
			this->txtDiretor = (gcnew System::Windows::Forms::TextBox());
			this->cbGenero = (gcnew System::Windows::Forms::ComboBox());
			this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbNovo = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbSalvar = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbCancelar = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbExcluir = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbBuscaPorId = (gcnew System::Windows::Forms::ToolStripLabel());
			this->tstId = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsbBuscar = (gcnew System::Windows::Forms::ToolStripButton());
			this->mskCPF = (gcnew System::Windows::Forms::MaskedTextBox());
			this->btnSelecionaCliente = (gcnew System::Windows::Forms::Button());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// mskAquisicao
			// 
			this->mskAquisicao->Location = System::Drawing::Point(254, 250);
			this->mskAquisicao->Mask = L"00/00/0000";
			this->mskAquisicao->Name = L"mskAquisicao";
			this->mskAquisicao->Size = System::Drawing::Size(116, 26);
			this->mskAquisicao->TabIndex = 52;
			this->mskAquisicao->ValidatingType = System::DateTime::typeid;
			// 
			// mskAno
			// 
			this->mskAno->Location = System::Drawing::Point(12, 250);
			this->mskAno->Mask = L"0000";
			this->mskAno->Name = L"mskAno";
			this->mskAno->Size = System::Drawing::Size(63, 26);
			this->mskAno->TabIndex = 51;
			// 
			// txtDiretor
			// 
			this->txtDiretor->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtDiretor->Location = System::Drawing::Point(103, 77);
			this->txtDiretor->Name = L"txtDiretor";
			this->txtDiretor->Size = System::Drawing::Size(505, 26);
			this->txtDiretor->TabIndex = 50;
			// 
			// cbGenero
			// 
			this->cbGenero->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbGenero->FormattingEnabled = true;
			this->cbGenero->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"AÇÃO", L"AVENTURA", L"ROMANCE", L"COMÉDIA", L"DRAMA",
					L"TERROR", L"SUSPENSE", L"DOCUMENTÁRIO", L"DESENHO"
			});
			this->cbGenero->Location = System::Drawing::Point(46, 337);
			this->cbGenero->Name = L"cbGenero";
			this->cbGenero->Size = System::Drawing::Size(179, 28);
			this->cbGenero->TabIndex = 49;
			// 
			// txtTitulo
			// 
			this->txtTitulo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtTitulo->Location = System::Drawing::Point(310, 337);
			this->txtTitulo->MaxLength = 50;
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(309, 26);
			this->txtTitulo->TabIndex = 47;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(8, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 20);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Ano de lançamento";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(12, 77);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(74, 26);
			this->txtId->TabIndex = 46;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(627, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 20);
			this->label6->TabIndex = 45;
			this->label6->Text = L"Cliente CPF";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(250, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 20);
			this->label5->TabIndex = 44;
			this->label5->Text = L"Data de aquisição";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(99, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(126, 20);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Nome do Cliente";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(701, 292);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 20);
			this->label2->TabIndex = 42;
			this->label2->Text = L"Informe o título";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 20);
			this->label1->TabIndex = 41;
			this->label1->Text = L"Id";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->tsbNovo, this->tsbSalvar,
					this->tsbCancelar, this->tsbExcluir, this->toolStripSeparator1, this->tsbBuscaPorId, this->tstId, this->tsbBuscar
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(909, 31);
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
			// tsbBuscaPorId
			// 
			this->tsbBuscaPorId->Name = L"tsbBuscaPorId";
			this->tsbBuscaPorId->Size = System::Drawing::Size(149, 28);
			this->tsbBuscaPorId->Text = L"Buscar por Título:";
			// 
			// tstId
			// 
			this->tstId->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tstId->MaxLength = 40;
			this->tstId->Name = L"tstId";
			this->tstId->Size = System::Drawing::Size(200, 31);
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
			this->mskCPF->Location = System::Drawing::Point(631, 77);
			this->mskCPF->Mask = L"000.000.000-00";
			this->mskCPF->Name = L"mskCPF";
			this->mskCPF->Size = System::Drawing::Size(131, 26);
			this->mskCPF->TabIndex = 54;
			// 
			// btnSelecionaCliente
			// 
			this->btnSelecionaCliente->Location = System::Drawing::Point(797, 72);
			this->btnSelecionaCliente->Name = L"btnSelecionaCliente";
			this->btnSelecionaCliente->Size = System::Drawing::Size(90, 36);
			this->btnSelecionaCliente->TabIndex = 56;
			this->btnSelecionaCliente->Text = L"Procurar";
			this->btnSelecionaCliente->UseVisualStyleBackColor = true;
			this->btnSelecionaCliente->Click += gcnew System::EventHandler(this, &Aluguel::btnSelecionaCliente_Click);
			// 
			// Aluguel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(909, 463);
			this->Controls->Add(this->btnSelecionaCliente);
			this->Controls->Add(this->mskCPF);
			this->Controls->Add(this->mskAquisicao);
			this->Controls->Add(this->mskAno);
			this->Controls->Add(this->txtDiretor);
			this->Controls->Add(this->cbGenero);
			this->Controls->Add(this->txtTitulo);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
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
	ListarClientes^ frmListarClientes = gcnew ListarClientes();
	frmListarClientes->ShowDialog();
}
};
}
