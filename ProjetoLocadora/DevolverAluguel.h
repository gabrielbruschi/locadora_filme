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
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^  tsbCancelar;
	private: System::Windows::Forms::ToolStripButton^  tsbExcluir;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripLabel^  toolStripLabel1;
	private: System::Windows::Forms::ToolStripTextBox^  tstTitulo;

	private: System::Windows::Forms::ToolStripButton^  tsbBuscar;
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::TextBox^  txtIdLoc;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DateTimePicker^  dtpToday;












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
	private: System::Windows::Forms::Label^  label4;








	private: System::Windows::Forms::Button^  btnDevolver;








	private: System::Windows::Forms::Label^  label5;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DevolverAluguel::typeid));
			this->txtIdFilme = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtIdCliente = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnDevolver = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnSelecionaCliente = (gcnew System::Windows::Forms::Button());
			this->mskCPF = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tsbNovo = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbCancelar = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbExcluir = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripLabel1 = (gcnew System::Windows::Forms::ToolStripLabel());
			this->tstTitulo = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsbBuscar = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->txtIdLoc = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dtpToday = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtIdFilme
			// 
			this->txtIdFilme->Location = System::Drawing::Point(48, 396);
			this->txtIdFilme->Name = L"txtIdFilme";
			this->txtIdFilme->ReadOnly = true;
			this->txtIdFilme->Size = System::Drawing::Size(74, 26);
			this->txtIdFilme->TabIndex = 60;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(44, 373);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 20);
			this->label9->TabIndex = 63;
			this->label9->Text = L"Número Filme";
			// 
			// txtTitulo
			// 
			this->txtTitulo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtTitulo->Location = System::Drawing::Point(180, 396);
			this->txtTitulo->MaxLength = 50;
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(392, 26);
			this->txtTitulo->TabIndex = 61;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(176, 373);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 20);
			this->label2->TabIndex = 62;
			this->label2->Text = L"Descrição do Título";
			// 
			// txtIdCliente
			// 
			this->txtIdCliente->Location = System::Drawing::Point(48, 118);
			this->txtIdCliente->Name = L"txtIdCliente";
			this->txtIdCliente->ReadOnly = true;
			this->txtIdCliente->Size = System::Drawing::Size(74, 26);
			this->txtIdCliente->TabIndex = 64;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 95);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 20);
			this->label1->TabIndex = 67;
			this->label1->Text = L"Número Cliente";
			// 
			// txtNome
			// 
			this->txtNome->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtNome->Location = System::Drawing::Point(168, 118);
			this->txtNome->MaxLength = 50;
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(460, 26);
			this->txtNome->TabIndex = 65;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(164, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 20);
			this->label3->TabIndex = 66;
			this->label3->Text = L"Nome do Cliente";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(23, 48);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(127, 29);
			this->label4->TabIndex = 68;
			this->label4->Text = L"Devolução";
			// 
			// btnDevolver
			// 
			this->btnDevolver->Location = System::Drawing::Point(790, 422);
			this->btnDevolver->Name = L"btnDevolver";
			this->btnDevolver->Size = System::Drawing::Size(103, 47);
			this->btnDevolver->TabIndex = 71;
			this->btnDevolver->Text = L"Devolução";
			this->btnDevolver->UseVisualStyleBackColor = true;
			this->btnDevolver->Click += gcnew System::EventHandler(this, &DevolverAluguel::btnDevolver_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(576, 431);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(195, 25);
			this->label5->TabIndex = 72;
			this->label5->Text = L"Confirmar Devolução";
			// 
			// btnSelecionaCliente
			// 
			this->btnSelecionaCliente->Location = System::Drawing::Point(868, 113);
			this->btnSelecionaCliente->Name = L"btnSelecionaCliente";
			this->btnSelecionaCliente->Size = System::Drawing::Size(90, 36);
			this->btnSelecionaCliente->TabIndex = 75;
			this->btnSelecionaCliente->Text = L"Buscar";
			this->btnSelecionaCliente->UseVisualStyleBackColor = true;
			this->btnSelecionaCliente->Click += gcnew System::EventHandler(this, &DevolverAluguel::btnSelecionaCliente_Click);
			// 
			// mskCPF
			// 
			this->mskCPF->Location = System::Drawing::Point(663, 118);
			this->mskCPF->Mask = L"000.000.000-00";
			this->mskCPF->Name = L"mskCPF";
			this->mskCPF->Size = System::Drawing::Size(131, 26);
			this->mskCPF->TabIndex = 74;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(659, 95);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(40, 20);
			this->label6->TabIndex = 73;
			this->label6->Text = L"CPF";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(48, 169);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1033, 189);
			this->dataGridView1->TabIndex = 78;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DevolverAluguel::dataGridView1_CellContentClick);
			// 
			// tsbNovo
			// 
			this->tsbNovo->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbNovo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbNovo.Image")));
			this->tsbNovo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbNovo->Name = L"tsbNovo";
			this->tsbNovo->Size = System::Drawing::Size(28, 28);
			this->tsbNovo->Text = L"Novo";
			this->tsbNovo->Click += gcnew System::EventHandler(this, &DevolverAluguel::tsbNovo_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 31);
			// 
			// tsbCancelar
			// 
			this->tsbCancelar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbCancelar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbCancelar.Image")));
			this->tsbCancelar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbCancelar->Name = L"tsbCancelar";
			this->tsbCancelar->Size = System::Drawing::Size(28, 28);
			this->tsbCancelar->Text = L"Cancelar";
			this->tsbCancelar->Click += gcnew System::EventHandler(this, &DevolverAluguel::tsbCancelar_Click);
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
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 31);
			// 
			// toolStripLabel1
			// 
			this->toolStripLabel1->Name = L"toolStripLabel1";
			this->toolStripLabel1->Size = System::Drawing::Size(149, 28);
			this->toolStripLabel1->Text = L"Buscar por Título:";
			// 
			// tstTitulo
			// 
			this->tstTitulo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tstTitulo->MaxLength = 40;
			this->tstTitulo->Name = L"tstTitulo";
			this->tstTitulo->Size = System::Drawing::Size(200, 31);
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
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->tsbNovo, this->toolStripSeparator3,
					this->tsbCancelar, this->tsbExcluir, this->toolStripSeparator2, this->toolStripLabel1, this->tstTitulo, this->tsbBuscar
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1114, 31);
			this->toolStrip1->TabIndex = 69;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &DevolverAluguel::toolStrip1_ItemClicked);
			// 
			// txtIdLoc
			// 
			this->txtIdLoc->Location = System::Drawing::Point(272, 55);
			this->txtIdLoc->Name = L"txtIdLoc";
			this->txtIdLoc->ReadOnly = true;
			this->txtIdLoc->Size = System::Drawing::Size(74, 26);
			this->txtIdLoc->TabIndex = 79;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(176, 58);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 20);
			this->label7->TabIndex = 80;
			this->label7->Text = L"Número #";
			// 
			// dtpToday
			// 
			this->dtpToday->CustomFormat = L"yyyy/MM/dd";
			this->dtpToday->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpToday->Location = System::Drawing::Point(112, 443);
			this->dtpToday->MaxDate = System::DateTime(2025, 1, 1, 0, 0, 0, 0);
			this->dtpToday->MinDate = System::DateTime(2020, 1, 1, 0, 0, 0, 0);
			this->dtpToday->Name = L"dtpToday";
			this->dtpToday->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dtpToday->Size = System::Drawing::Size(107, 26);
			this->dtpToday->TabIndex = 81;
			this->dtpToday->Visible = false;
			// 
			// DevolverAluguel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1114, 490);
			this->Controls->Add(this->dtpToday);
			this->Controls->Add(this->txtIdLoc);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->btnSelecionaCliente);
			this->Controls->Add(this->mskCPF);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnDevolver);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtIdCliente);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtNome);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtIdFilme);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->txtTitulo);
			this->Controls->Add(this->label2);
			this->Name = L"DevolverAluguel";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"DevolverAluguel";
			this->Load += gcnew System::EventHandler(this, &DevolverAluguel::DevolverAluguel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void DevolverAluguel_Load(System::Object^  sender, System::EventArgs^  e) {
		tsbNovo->Enabled = true;
		tsbCancelar->Enabled = false;
		tsbExcluir->Enabled = false;
		tsbExcluir->Enabled = true;
		tsbBuscar->Enabled = true;
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
		tstTitulo->Enabled = false;
		tsbBuscar->Enabled = false;
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
			btnSelecionaCliente->Enabled = false;
			btnDevolver->Enabled = true;
		}
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: void ListarDtGridView() {
	cmd = gcnew MySqlCommand("SELECT LOCADORADB.CLIENTE.CLI_ID, LOCADORADB.CLIENTE.NOME, LOCADORADB.CLIENTE.CPF, LOCADORADB.LOCACAO.LOC_ID, LOCADORADB.FILME.FIL_ID, LOCADORADB.FILME.TITULO, LOCADORADB.LOCACAO.DATA_INICIO  FROM LOCADORADB.LOCACAO INNER JOIN LOCADORADB.CLIENTE INNER JOIN LOCADORADB.FILME  ON LOCADORADB.LOCACAO.CLI_ID = LOCADORADB.CLIENTE.CLI_ID AND LOCADORADB.LOCACAO.FIL_ID = LOCADORADB.FILME.FIL_ID AND LOCADORADB.LOCACAO.DEVOLVIDO = '0' ", con);

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

	cmd = gcnew MySqlCommand("INSERT INTO LOCADORADB.DEVOLUCAO (LOC_ID, CLI_ID, FIL_ID, DATA_DEVOLUCAO) VALUES('" + this->txtIdLoc->Text + "', '" + this->txtIdCliente->Text + "', '" + this->txtIdFilme->Text + "', '14/01/2020');", con);

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

	UpdateStatus(); //Atualiza o Status do filme devolvido para "Disponível"
	LimparCampos();
	
}


private: void UpdateStatus() {
	cmd = gcnew MySqlCommand(" UPDATE LOCADORADB.STATUS SET DISPONIVEL = 'DISPONIVEL' WHERE FIL_ID = '" + this->txtIdFilme->Text + "' ;", con);
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
	tstTitulo->Enabled = true;
	tsbBuscar->Enabled = true;
	mskCPF->Enabled = true;
	btnDevolver->Enabled = false;
	tstTitulo->Text = "";
	txtIdLoc->Text = "";
	txtIdCliente->Text = "";
	txtNome->Text = "";
	mskCPF->Text = "";
	txtIdFilme->Text = "";
	txtTitulo->Text = "";
}
};
}
