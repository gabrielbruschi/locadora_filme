#pragma once
#include "Aluguel.h"

namespace ProjetoLocadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for DevolverAluguel
	/// </summary>
	public ref class DevolverAluguel : public System::Windows::Forms::Form
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;";
		MySqlConnection^ con = gcnew MySqlConnection(constring);
		MySqlCommand^ cmd;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ToolStripButton^  tsbNovo;

	private: System::Windows::Forms::ToolStripButton^  tsbCancelar;
	private: System::Windows::Forms::ToolStripButton^  tsbExcluir;





	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::TextBox^  txtIdLoc;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::GroupBox^  Devolução;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox4;












			 MySqlDataReader^ reader;
	public:
		DevolverAluguel(void)
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
		~DevolverAluguel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtIdFilme;
	protected:
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  txtTitulo;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtIdCliente;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtNome;
	private: System::Windows::Forms::Label^  label3;









	private: System::Windows::Forms::Button^  btnDevolver;









	private: System::Windows::Forms::Button^  btnSelecionaCliente;
	private: System::Windows::Forms::MaskedTextBox^  mskCPF;
	private: System::Windows::Forms::Label^  label6;



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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DevolverAluguel::typeid));
			this->txtIdFilme = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtIdCliente = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->btnDevolver = (gcnew System::Windows::Forms::Button());
			this->btnSelecionaCliente = (gcnew System::Windows::Forms::Button());
			this->mskCPF = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tsbNovo = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbCancelar = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbExcluir = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->txtIdLoc = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Devolução = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->Devolução->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtIdFilme
			// 
			this->txtIdFilme->Location = System::Drawing::Point(35, 127);
			this->txtIdFilme->Name = L"txtIdFilme";
			this->txtIdFilme->ReadOnly = true;
			this->txtIdFilme->Size = System::Drawing::Size(74, 26);
			this->txtIdFilme->TabIndex = 60;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(31, 104);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 20);
			this->label9->TabIndex = 63;
			this->label9->Text = L"Número Filme";
			// 
			// txtTitulo
			// 
			this->txtTitulo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtTitulo->Location = System::Drawing::Point(155, 127);
			this->txtTitulo->MaxLength = 50;
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(460, 26);
			this->txtTitulo->TabIndex = 61;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(151, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 20);
			this->label2->TabIndex = 62;
			this->label2->Text = L"Descrição do Título";
			// 
			// txtIdCliente
			// 
			this->txtIdCliente->Location = System::Drawing::Point(35, 55);
			this->txtIdCliente->Name = L"txtIdCliente";
			this->txtIdCliente->ReadOnly = true;
			this->txtIdCliente->Size = System::Drawing::Size(74, 26);
			this->txtIdCliente->TabIndex = 64;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 20);
			this->label1->TabIndex = 67;
			this->label1->Text = L"Número Cliente";
			// 
			// txtNome
			// 
			this->txtNome->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtNome->Location = System::Drawing::Point(155, 55);
			this->txtNome->MaxLength = 50;
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(460, 26);
			this->txtNome->TabIndex = 65;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(151, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 20);
			this->label3->TabIndex = 66;
			this->label3->Text = L"Nome do Cliente";
			// 
			// btnDevolver
			// 
			this->btnDevolver->Location = System::Drawing::Point(75, 37);
			this->btnDevolver->Name = L"btnDevolver";
			this->btnDevolver->Size = System::Drawing::Size(122, 42);
			this->btnDevolver->TabIndex = 71;
			this->btnDevolver->Text = L"Devolução";
			this->btnDevolver->UseVisualStyleBackColor = true;
			this->btnDevolver->Click += gcnew System::EventHandler(this, &DevolverAluguel::btnDevolver_Click);
			// 
			// btnSelecionaCliente
			// 
			this->btnSelecionaCliente->Location = System::Drawing::Point(815, 50);
			this->btnSelecionaCliente->Name = L"btnSelecionaCliente";
			this->btnSelecionaCliente->Size = System::Drawing::Size(90, 36);
			this->btnSelecionaCliente->TabIndex = 75;
			this->btnSelecionaCliente->Text = L"Buscar";
			this->btnSelecionaCliente->UseVisualStyleBackColor = true;
			this->btnSelecionaCliente->Click += gcnew System::EventHandler(this, &DevolverAluguel::btnSelecionaCliente_Click);
			// 
			// mskCPF
			// 
			this->mskCPF->Location = System::Drawing::Point(650, 55);
			this->mskCPF->Mask = L"000.000.000-00";
			this->mskCPF->Name = L"mskCPF";
			this->mskCPF->Size = System::Drawing::Size(131, 26);
			this->mskCPF->TabIndex = 74;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(646, 32);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 20);
			this->label6->TabIndex = 73;
			this->label6->Text = L"CPF";
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->Location = System::Drawing::Point(35, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1118, 230);
			this->dataGridView1->TabIndex = 78;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DevolverAluguel::dataGridView1_CellContentClick);
			// 
			// tsbNovo
			// 
			this->tsbNovo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbNovo.Image")));
			this->tsbNovo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbNovo->Name = L"tsbNovo";
			this->tsbNovo->Size = System::Drawing::Size(84, 29);
			this->tsbNovo->Text = L"Novo";
			this->tsbNovo->Click += gcnew System::EventHandler(this, &DevolverAluguel::tsbNovo_Click);
			// 
			// tsbCancelar
			// 
			this->tsbCancelar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbCancelar.Image")));
			this->tsbCancelar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbCancelar->Name = L"tsbCancelar";
			this->tsbCancelar->Size = System::Drawing::Size(106, 29);
			this->tsbCancelar->Text = L"Cancelar";
			this->tsbCancelar->Click += gcnew System::EventHandler(this, &DevolverAluguel::tsbCancelar_Click);
			// 
			// tsbExcluir
			// 
			this->tsbExcluir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbExcluir.Image")));
			this->tsbExcluir->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbExcluir->Name = L"tsbExcluir";
			this->tsbExcluir->Size = System::Drawing::Size(110, 29);
			this->tsbExcluir->Text = L"Remover";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->tsbNovo, this->tsbCancelar,
					this->tsbExcluir
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1328, 32);
			this->toolStrip1->TabIndex = 69;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &DevolverAluguel::toolStrip1_ItemClicked);
			// 
			// txtIdLoc
			// 
			this->txtIdLoc->Location = System::Drawing::Point(650, 127);
			this->txtIdLoc->Name = L"txtIdLoc";
			this->txtIdLoc->ReadOnly = true;
			this->txtIdLoc->Size = System::Drawing::Size(74, 26);
			this->txtIdLoc->TabIndex = 79;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(646, 104);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(152, 20);
			this->label7->TabIndex = 80;
			this->label7->Text = L"Número da Locação";
			// 
			// Devolução
			// 
			this->Devolução->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Devolução->Controls->Add(this->groupBox2);
			this->Devolução->Controls->Add(this->txtIdCliente);
			this->Devolução->Controls->Add(this->label1);
			this->Devolução->Controls->Add(this->label6);
			this->Devolução->Controls->Add(this->txtNome);
			this->Devolução->Controls->Add(this->mskCPF);
			this->Devolução->Controls->Add(this->label2);
			this->Devolução->Controls->Add(this->label3);
			this->Devolução->Controls->Add(this->txtIdLoc);
			this->Devolução->Controls->Add(this->btnSelecionaCliente);
			this->Devolução->Controls->Add(this->txtTitulo);
			this->Devolução->Controls->Add(this->label7);
			this->Devolução->Controls->Add(this->label9);
			this->Devolução->Controls->Add(this->txtIdFilme);
			this->Devolução->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Devolução->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Devolução->Location = System::Drawing::Point(17, 25);
			this->Devolução->Name = L"Devolução";
			this->Devolução->Size = System::Drawing::Size(1197, 168);
			this->Devolução->TabIndex = 82;
			this->Devolução->TabStop = false;
			this->Devolução->Text = L"Identificação do Aluguel";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->btnDevolver);
			this->groupBox2->Location = System::Drawing::Point(958, 74);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(212, 88);
			this->groupBox2->TabIndex = 81;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Confirmar Devolução";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Location = System::Drawing::Point(17, 225);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1197, 288);
			this->groupBox1->TabIndex = 82;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Títulos em Poder do Cliente";
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox4->Controls->Add(this->groupBox1);
			this->groupBox4->Controls->Add(this->Devolução);
			this->groupBox4->Location = System::Drawing::Point(46, 48);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1235, 556);
			this->groupBox4->TabIndex = 83;
			this->groupBox4->TabStop = false;
			// 
			// DevolverAluguel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1328, 631);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->toolStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"DevolverAluguel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VIDEO LOCADORA - DEVOLUÇÃO";
			this->Load += gcnew System::EventHandler(this, &DevolverAluguel::DevolverAluguel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->Devolução->ResumeLayout(false);
			this->Devolução->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DevolverAluguel_Load(System::Object^  sender, System::EventArgs^  e) {
		tsbNovo->Enabled = true;
		tsbCancelar->Enabled = false;
		tsbExcluir->Enabled = false;
		tsbExcluir->Enabled = true;
		txtIdLoc->Enabled = false;
		txtIdCliente->Enabled = false;
		txtNome->Enabled = false;
		mskCPF->Enabled = true;
		txtIdFilme->Enabled = false;
		txtTitulo->Enabled = false;
		btnDevolver->Enabled = false;

		ListarDtGridView();
	}

private: System::Void tsbNovo_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	Aluguel^ _Aluguel = gcnew Aluguel();
	_Aluguel->ShowDialog();
}

private: System::Void tsbCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	LimparCampos();
	ListarDtGridView();
	btnSelecionaCliente->Enabled;
}

private: System::Void btnSelecionaCliente_Click(System::Object^  sender, System::EventArgs^  e) {
	cmd = gcnew MySqlCommand("SELECT LOCADORADB.CLIENTE.CLI_ID, LOCADORADB.CLIENTE.NOME, LOCADORADB.CLIENTE.CPF, LOCADORADB.LOCACAO.LOC_ID, LOCADORADB.FILME.FIL_ID, LOCADORADB.FILME.TITULO, LOCADORADB.LOCACAO.DATA_INICIO  FROM LOCADORADB.LOCACAO INNER JOIN LOCADORADB.CLIENTE INNER JOIN LOCADORADB.FILME  ON LOCADORADB.LOCACAO.CLI_ID = LOCADORADB.CLIENTE.CLI_ID AND LOCADORADB.LOCACAO.FIL_ID = LOCADORADB.FILME.FIL_ID AND LOCADORADB.CLIENTE.CPF= '" + this->mskCPF->Text + "'", con);

	try
	{
		con->Open();

		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmd;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dataGridView1->DataSource = bSource;
		sda->Update(dbdataset);

		
		reader = cmd->ExecuteReader();
		while (reader->Read()) {
			txtIdCliente->Text = reader[0]->ToString();
			txtNome->Text = reader[1]->ToString();
			mskCPF->Text = reader[2]->ToString();
			txtIdLoc->Text = reader[3]->ToString();
		}
			
		tsbNovo->Enabled = false;
		tsbCancelar->Enabled = true;
		tsbExcluir->Enabled = true;
		txtIdLoc->Enabled = false;
		txtIdCliente->Enabled = false;
		txtNome->Enabled = false;
		mskCPF->Enabled = false;
		btnDevolver->Enabled = false;
		txtIdFilme->Enabled = false;
		txtTitulo->Enabled = false;
		mskCPF->Focus();

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


private: System::Void lstDevolucao_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	try {
		cmd = gcnew MySqlCommand("SELECT LOCADORADB.LOCACAO.LOC_ID  FROM LOCADORADB.LOCACAO WHERE CLI_ID = '" + this->txtIdCliente->Text + "' AND FIL_ID = '" + this->txtIdFilme->Text + "' ", con);

		try
		{
			con->Open();

			reader = cmd->ExecuteReader();
			while (reader->Read()) {
				txtIdLoc->Text = reader[0]->ToString();
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

		if (e->RowIndex >= 0)
		{
			DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];

			txtIdCliente->Text = row->Cells[0]->Value->ToString();
			txtNome->Text = row->Cells[1]->Value->ToString();
			mskCPF->Text = row->Cells[2]->Value->ToString();
			txtIdFilme->Text = row->Cells[4]->Value->ToString();
			txtTitulo->Text = row->Cells[5]->Value->ToString();

			tsbCancelar->Enabled = true;
			mskCPF->Enabled = false;
			btnSelecionaCliente->Enabled = true;
			btnDevolver->Enabled = true;
		}
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: void ListarDtGridView() {
	cmd = gcnew MySqlCommand("SELECT DISTINCT LOCADORADB.CLIENTE.CLI_ID, LOCADORADB.CLIENTE.NOME, LOCADORADB.CLIENTE.CPF, LOCADORADB.LOCACAO.LOC_ID, LOCADORADB.FILME.FIL_ID, LOCADORADB.FILME.TITULO, LOCADORADB.LOCACAO.DATA_INICIO  FROM LOCADORADB.LOCACAO INNER JOIN LOCADORADB.CLIENTE INNER JOIN LOCADORADB.FILME INNER JOIN LOCADORADB.DEVOLUCAO  ON LOCADORADB.LOCACAO.CLI_ID = LOCADORADB.CLIENTE.CLI_ID AND LOCADORADB.LOCACAO.FIL_ID = LOCADORADB.FILME.FIL_ID AND LOCADORADB.DEVOLUCAO.LOC_ID = LOCADORADB.LOCACAO.LOC_ID ", con);

	try
	{
		con->Open();

		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmd;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dataGridView1->DataSource = bSource;
		sda->Update(dbdataset);


		reader = cmd->ExecuteReader();
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
private: System::Void btnDevolver_Click(System::Object^  sender, System::EventArgs^  e) {

	cmd = gcnew MySqlCommand("INSERT INTO LOCADORADB.DEVOLUCAO (LOC_ID, CLI_ID, FIL_ID) VALUES('" + this->txtIdLoc->Text + "', '" + this->txtIdCliente->Text + "', '" + this->txtIdFilme->Text + "');", con);

	try
	{
		con->Open();
		cmd->ExecuteNonQuery();

	}
	catch (Exception^ex)
	{
		MessageBox::Show("Erro: " + ex->Message);
	}
	finally
	{
		con->Close();
	}

	UpdateStatus();
	LimparCampos();
	ListarDtGridView();
	
}

		 //Atualiza o Status DEVOLVIDO do filme para "SIM"
private: void UpdateStatus() {
	cmd = gcnew MySqlCommand(" UPDATE LOCADORADB.STATUS SET DISPONIVEL = 'SIM' WHERE FIL_ID = '" + this->txtIdFilme->Text + "' ;", con);
	con->Open();
	try
	{
		int i = cmd->ExecuteNonQuery();
		if (i > 0)
			MessageBox::Show("Filme: " + this->txtTitulo + " devolvido com sucesso!");
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


private: void LimparCampos() {
	tsbNovo->Enabled = true;
	tsbCancelar->Enabled = false;
	tsbExcluir->Enabled = false;
	mskCPF->Enabled = true;
	btnDevolver->Enabled = false;
	txtIdLoc->Text = "";
	txtIdCliente->Text = "";
	txtNome->Text = "";
	mskCPF->Text = "";
	txtIdFilme->Text = "";
	txtTitulo->Text = "";
}
};
}
