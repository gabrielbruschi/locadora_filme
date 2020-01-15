#pragma once
#include "Aluguel.h"
#include "Filmes.h"
#include "Clientes.h"
#include "DevolverAluguel.h"
#include "ListarClientes.h"

namespace ProjetoLocadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;";
		MySqlConnection^ con = gcnew MySqlConnection(constring);
		MySqlCommand^ cmd;
	private: System::Windows::Forms::Button^  btnPesquisar;
	private: System::Windows::Forms::TextBox^  txtDiretor;


	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::RadioButton^  rbIndisponivel;
	private: System::Windows::Forms::RadioButton^  rbListar;
	private: System::Windows::Forms::RadioButton^  rbDisponivel;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::GroupBox^  groupBox3;


			 MySqlDataReader^ reader;

	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  tsbFilme;
	protected:




	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripLabel^  tsbBuscaPorId;
	private: System::Windows::Forms::ToolStripTextBox^  tstId;
	private: System::Windows::Forms::ToolStripButton^  tsbBuscar;
	private: System::Windows::Forms::ToolStripButton^  tsbAluguel;

	private: System::Windows::Forms::ToolStripButton^  tsbDevolucao;
	private: System::Windows::Forms::ToolStripButton^  tsbCliente;

	private: System::Windows::Forms::ToolStripButton^  tsbListarCliente;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbAluguel = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbDevolucao = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbFilme = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbCliente = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbBuscaPorId = (gcnew System::Windows::Forms::ToolStripLabel());
			this->tstId = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsbBuscar = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbListarCliente = (gcnew System::Windows::Forms::ToolStripButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbDisponivel = (gcnew System::Windows::Forms::RadioButton());
			this->rbListar = (gcnew System::Windows::Forms::RadioButton());
			this->rbIndisponivel = (gcnew System::Windows::Forms::RadioButton());
			this->btnPesquisar = (gcnew System::Windows::Forms::Button());
			this->txtDiretor = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->toolStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(9) {
				this->tsbAluguel, this->tsbDevolucao,
					this->tsbFilme, this->tsbCliente, this->toolStripSeparator1, this->tsbBuscaPorId, this->tstId, this->tsbBuscar, this->tsbListarCliente
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1284, 32);
			this->toolStrip1->TabIndex = 18;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// tsbAluguel
			// 
			this->tsbAluguel->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbAluguel.Image")));
			this->tsbAluguel->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbAluguel->Name = L"tsbAluguel";
			this->tsbAluguel->Size = System::Drawing::Size(100, 29);
			this->tsbAluguel->Text = L"Aluguel";
			this->tsbAluguel->Click += gcnew System::EventHandler(this, &MainForm::tsbAluguel_Click);
			// 
			// tsbDevolucao
			// 
			this->tsbDevolucao->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbDevolucao.Image")));
			this->tsbDevolucao->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbDevolucao->Name = L"tsbDevolucao";
			this->tsbDevolucao->Size = System::Drawing::Size(124, 29);
			this->tsbDevolucao->Text = L"Devolução";
			this->tsbDevolucao->Click += gcnew System::EventHandler(this, &MainForm::tsbDevolucao_Click);
			// 
			// tsbFilme
			// 
			this->tsbFilme->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbFilme.Image")));
			this->tsbFilme->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbFilme->Name = L"tsbFilme";
			this->tsbFilme->Size = System::Drawing::Size(90, 29);
			this->tsbFilme->Text = L"Filmes";
			this->tsbFilme->Click += gcnew System::EventHandler(this, &MainForm::tsbFilme_Click);
			// 
			// tsbCliente
			// 
			this->tsbCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbCliente.Image")));
			this->tsbCliente->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbCliente->Name = L"tsbCliente";
			this->tsbCliente->Size = System::Drawing::Size(101, 29);
			this->tsbCliente->Text = L"Clientes";
			this->tsbCliente->Click += gcnew System::EventHandler(this, &MainForm::tsbCliente_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 32);
			// 
			// tsbBuscaPorId
			// 
			this->tsbBuscaPorId->Name = L"tsbBuscaPorId";
			this->tsbBuscaPorId->Size = System::Drawing::Size(149, 29);
			this->tsbBuscaPorId->Text = L"Buscar por Título:";
			// 
			// tstId
			// 
			this->tstId->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->tstId->MaxLength = 40;
			this->tstId->Name = L"tstId";
			this->tstId->Size = System::Drawing::Size(200, 32);
			// 
			// tsbBuscar
			// 
			this->tsbBuscar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbBuscar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbBuscar.Image")));
			this->tsbBuscar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbBuscar->Name = L"tsbBuscar";
			this->tsbBuscar->Size = System::Drawing::Size(28, 29);
			this->tsbBuscar->Text = L"Buscar";
			this->tsbBuscar->Click += gcnew System::EventHandler(this, &MainForm::tsbBuscar_Click);
			// 
			// tsbListarCliente
			// 
			this->tsbListarCliente->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->tsbListarCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbListarCliente.Image")));
			this->tsbListarCliente->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbListarCliente->Name = L"tsbListarCliente";
			this->tsbListarCliente->Size = System::Drawing::Size(147, 29);
			this->tsbListarCliente->Text = L"Listar Clientes";
			this->tsbListarCliente->Click += gcnew System::EventHandler(this, &MainForm::tsbListarCliente_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->btnPesquisar);
			this->groupBox1->Controls->Add(this->txtDiretor);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(26, 60);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1229, 538);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Listar Filmes";
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Location = System::Drawing::Point(22, 147);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1184, 364);
			this->groupBox3->TabIndex = 89;
			this->groupBox3->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(18, 34);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1146, 308);
			this->dataGridView1->TabIndex = 79;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridView1_CellContentClick);
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->rbDisponivel);
			this->groupBox2->Controls->Add(this->rbListar);
			this->groupBox2->Controls->Add(this->rbIndisponivel);
			this->groupBox2->Location = System::Drawing::Point(564, 25);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(343, 92);
			this->groupBox2->TabIndex = 88;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Exibir";
			// 
			// rbDisponivel
			// 
			this->rbDisponivel->AutoSize = true;
			this->rbDisponivel->Location = System::Drawing::Point(6, 30);
			this->rbDisponivel->Name = L"rbDisponivel";
			this->rbDisponivel->Size = System::Drawing::Size(164, 24);
			this->rbDisponivel->TabIndex = 85;
			this->rbDisponivel->Text = L"Filmes Disponíveis";
			this->rbDisponivel->UseVisualStyleBackColor = true;
			this->rbDisponivel->CheckedChanged += gcnew System::EventHandler(this, &MainForm::rbDisponivel_CheckedChanged);
			// 
			// rbListar
			// 
			this->rbListar->AutoSize = true;
			this->rbListar->Checked = true;
			this->rbListar->Location = System::Drawing::Point(6, 60);
			this->rbListar->Name = L"rbListar";
			this->rbListar->Size = System::Drawing::Size(149, 24);
			this->rbListar->TabIndex = 86;
			this->rbListar->TabStop = true;
			this->rbListar->Text = L"Todos os Filmes";
			this->rbListar->UseVisualStyleBackColor = true;
			this->rbListar->CheckedChanged += gcnew System::EventHandler(this, &MainForm::rbListar_CheckedChanged);
			// 
			// rbIndisponivel
			// 
			this->rbIndisponivel->AutoSize = true;
			this->rbIndisponivel->Location = System::Drawing::Point(186, 30);
			this->rbIndisponivel->Name = L"rbIndisponivel";
			this->rbIndisponivel->Size = System::Drawing::Size(151, 24);
			this->rbIndisponivel->TabIndex = 87;
			this->rbIndisponivel->Text = L"Filmes Alugados";
			this->rbIndisponivel->UseVisualStyleBackColor = true;
			this->rbIndisponivel->CheckedChanged += gcnew System::EventHandler(this, &MainForm::rbIndisponivel_CheckedChanged);
			// 
			// btnPesquisar
			// 
			this->btnPesquisar->Location = System::Drawing::Point(317, 55);
			this->btnPesquisar->Name = L"btnPesquisar";
			this->btnPesquisar->Size = System::Drawing::Size(80, 31);
			this->btnPesquisar->TabIndex = 82;
			this->btnPesquisar->Text = L"Ir";
			this->btnPesquisar->UseVisualStyleBackColor = true;
			this->btnPesquisar->Click += gcnew System::EventHandler(this, &MainForm::btnPesquisar_Click);
			// 
			// txtDiretor
			// 
			this->txtDiretor->Location = System::Drawing::Point(53, 55);
			this->txtDiretor->Name = L"txtDiretor";
			this->txtDiretor->Size = System::Drawing::Size(237, 26);
			this->txtDiretor->TabIndex = 81;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 20);
			this->label1->TabIndex = 80;
			this->label1->Text = L"Pesquisar por Diretor";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1284, 610);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->toolStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->Text = L"VIDEO LOCADORA - Sistema de Informação para Vídeo Locadoras - Gabriel Software";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStrip2_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	}

	private: System::Void tsbListarCliente_Click(System::Object^  sender, System::EventArgs^  e) {

		ListarClientes^ _ListarClientes = gcnew ListarClientes();
		_ListarClientes->ShowDialog();

	}
private: System::Void tsbAluguel_Click(System::Object^  sender, System::EventArgs^  e) {
	Aluguel^ _Aluguel = gcnew Aluguel();
	_Aluguel->ShowDialog();
}
private: System::Void tsbDevolucao_Click(System::Object^  sender, System::EventArgs^  e) {
	DevolverAluguel^ _DevolverAluguel = gcnew DevolverAluguel();
	_DevolverAluguel->ShowDialog();
}
private: System::Void tsbFilme_Click(System::Object^  sender, System::EventArgs^  e) {
	Filmes^ _Filmes = gcnew Filmes();
	_Filmes->ShowDialog();
}
private: System::Void tsbCliente_Click(System::Object^  sender, System::EventArgs^  e) {
	Clientes^ _Clientes = gcnew Clientes();
	_Clientes->ShowDialog();
}

private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
	ListarDtGridView();
}

private: void ListarDtGridView() {
	cmd = gcnew MySqlCommand("SELECT * FROM LOCADORADB.FILME ;", con);

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

private: System::Void btnPesquisar_Click(System::Object^  sender, System::EventArgs^  e) {
	ListarDtGridViewDiretor();
	LimparRb();
	txtDiretor->Text = "";
}

private: void ListarDtGridViewDiretor() {
	cmd = gcnew MySqlCommand("SELECT * FROM LOCADORADB.FILME WHERE DIRETOR = '" + this->txtDiretor->Text + "' ;", con);

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

private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: void ListarDtGridViewDisponivel() {
	cmd = gcnew MySqlCommand("SELECT LOCADORADB.FILME.FIL_ID, LOCADORADB.FILME.TITULO, LOCADORADB.FILME.DIRETOR, LOCADORADB.FILME.GENERO, LOCADORADB.FILME.ANO, LOCADORADB.STATUS.DISPONIVEL FROM LOCADORADB.FILME INNER JOIN LOCADORADB.STATUS ON LOCADORADB.FILME.FIL_ID = LOCADORADB.STATUS.FIL_ID AND LOCADORADB.STATUS.DISPONIVEL = 'SIM' ;", con);

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
private: void ListarDtGridViewTitulo() {
	cmd = gcnew MySqlCommand("SELECT LOCADORADB.FILME.FIL_ID, LOCADORADB.FILME.TITULO, LOCADORADB.FILME.DIRETOR, LOCADORADB.FILME.GENERO, LOCADORADB.FILME.ANO, LOCADORADB.STATUS.DISPONIVEL FROM LOCADORADB.FILME INNER JOIN LOCADORADB.STATUS ON LOCADORADB.FILME.FIL_ID = LOCADORADB.STATUS.FIL_ID AND LOCADORADB.FILME.TITULO = '" + this->tstId->Text + "' ;", con);

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
private: System::Void tsbBuscar_Click(System::Object^  sender, System::EventArgs^  e) {
	ListarDtGridViewTitulo();
	tstId->Text = "";
	LimparRb();
}
private: System::Void rbListar_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (rbListar->Checked) {
		ListarDtGridView();
	}
}
private: System::Void rbDisponivel_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (rbDisponivel->Checked) {
		ListarDtGridViewDisponivel();
	}
}
		 
private: System::Void rbIndisponivel_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (rbIndisponivel->Checked) {
		ListarDtGridViewIndisponivel();
	}
}

private: void LimparRb() {
	rbDisponivel->Checked = false;
	rbIndisponivel->Checked = false;
	rbListar->Checked = false;
}

private: void ListarDtGridViewIndisponivel() {
	cmd = gcnew MySqlCommand("SELECT DISTINCT LOCADORADB.LOCACAO.LOC_ID, LOCADORADB.CLIENTE.NOME, LOCADORADB.CLIENTE.CPF, LOCADORADB.FILME.FIL_ID, LOCADORADB.FILME.TITULO, LOCADORADB.STATUS.DISPONIVEL FROM LOCADORADB.LOCACAO INNER JOIN LOCADORADB.CLIENTE INNER JOIN LOCADORADB.FILME INNER JOIN LOCADORADB.DEVOLUCAO  INNER JOIN LOCADORADB.STATUS ON LOCADORADB.LOCACAO.FIL_ID = LOCADORADB.STATUS.FIL_ID AND LOCADORADB.STATUS.DISPONIVEL = 'NAO' AND LOCADORADB.FILME.FIL_ID = LOCADORADB.STATUS.FIL_ID AND LOCADORADB.LOCACAO.CLI_ID = LOCADORADB.CLIENTE.CLI_ID ", con);

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
};
}
