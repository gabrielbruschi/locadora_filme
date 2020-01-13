#pragma once
#include "Clientes.h"

namespace ProjetoLocadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for CreateForm
	/// </summary>
	public ref class CreateForm : public System::Windows::Forms::Form
	{
	public:

		String^ constring = L"datasource=localhost;port=3306;username=root;";
		MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase;	
		MySqlDataReader^ myReader;
		MySqlDataAdapter adapt;

	private: System::Windows::Forms::DataGridView^  dataGridView1;

	public:

		CreateForm(void)
		{
			InitializeComponent();
			MostrarDataGrid();

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CreateForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label4;
	protected:
	private: System::Windows::Forms::TextBox^  diretorTxt;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  nomeFilmeTxt;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  anoLancamentoTxt;
	private: System::Windows::Forms::Button^  cadastrarBtn;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  generoComboBox;

	private: System::Windows::Forms::Button^  atualizarBtn;
	private: System::Windows::Forms::Button^  excluirBtn;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  idTxt;






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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->diretorTxt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nomeFilmeTxt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->anoLancamentoTxt = (gcnew System::Windows::Forms::TextBox());
			this->cadastrarBtn = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->generoComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->atualizarBtn = (gcnew System::Windows::Forms::Button());
			this->excluirBtn = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->idTxt = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(39, 275);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 20);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Diretor";
			// 
			// diretorTxt
			// 
			this->diretorTxt->Location = System::Drawing::Point(255, 275);
			this->diretorTxt->Multiline = true;
			this->diretorTxt->Name = L"diretorTxt";
			this->diretorTxt->Size = System::Drawing::Size(164, 26);
			this->diretorTxt->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(39, 222);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 20);
			this->label3->TabIndex = 16;
			this->label3->Text = L"Gênero";
			// 
			// nomeFilmeTxt
			// 
			this->nomeFilmeTxt->Location = System::Drawing::Point(255, 97);
			this->nomeFilmeTxt->Name = L"nomeFilmeTxt";
			this->nomeFilmeTxt->Size = System::Drawing::Size(164, 26);
			this->nomeFilmeTxt->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(39, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 20);
			this->label2->TabIndex = 15;
			this->label2->Text = L"Ano de Lançamento";
			// 
			// anoLancamentoTxt
			// 
			this->anoLancamentoTxt->Location = System::Drawing::Point(255, 167);
			this->anoLancamentoTxt->Name = L"anoLancamentoTxt";
			this->anoLancamentoTxt->Size = System::Drawing::Size(164, 26);
			this->anoLancamentoTxt->TabIndex = 2;
			// 
			// cadastrarBtn
			// 
			this->cadastrarBtn->Location = System::Drawing::Point(43, 354);
			this->cadastrarBtn->Name = L"cadastrarBtn";
			this->cadastrarBtn->Size = System::Drawing::Size(111, 59);
			this->cadastrarBtn->TabIndex = 5;
			this->cadastrarBtn->Text = L"Cadastrar";
			this->cadastrarBtn->UseVisualStyleBackColor = true;
			this->cadastrarBtn->Click += gcnew System::EventHandler(this, &CreateForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(39, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 20);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Título";
			// 
			// generoComboBox
			// 
			this->generoComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->generoComboBox->FormattingEnabled = true;
			this->generoComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Suspense", L"Drama", L"Terror", L"Ação",
					L"Comédia", L"Desenho", L"Animação"
			});
			this->generoComboBox->Location = System::Drawing::Point(255, 214);
			this->generoComboBox->Name = L"generoComboBox";
			this->generoComboBox->Size = System::Drawing::Size(164, 28);
			this->generoComboBox->TabIndex = 3;
			// 
			// atualizarBtn
			// 
			this->atualizarBtn->Location = System::Drawing::Point(209, 354);
			this->atualizarBtn->Name = L"atualizarBtn";
			this->atualizarBtn->Size = System::Drawing::Size(111, 59);
			this->atualizarBtn->TabIndex = 6;
			this->atualizarBtn->Text = L"Atualizar";
			this->atualizarBtn->UseVisualStyleBackColor = true;
			this->atualizarBtn->Click += gcnew System::EventHandler(this, &CreateForm::atualizarBtn_Click);
			// 
			// excluirBtn
			// 
			this->excluirBtn->Location = System::Drawing::Point(370, 354);
			this->excluirBtn->Name = L"excluirBtn";
			this->excluirBtn->Size = System::Drawing::Size(111, 59);
			this->excluirBtn->TabIndex = 7;
			this->excluirBtn->Text = L"Excluir";
			this->excluirBtn->UseVisualStyleBackColor = true;
			this->excluirBtn->Click += gcnew System::EventHandler(this, &CreateForm::excluirBtn_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(39, 48);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 20);
			this->label5->TabIndex = 22;
			this->label5->Text = L"ID";
			// 
			// idTxt
			// 
			this->idTxt->Enabled = false;
			this->idTxt->Location = System::Drawing::Point(255, 48);
			this->idTxt->Name = L"idTxt";
			this->idTxt->Size = System::Drawing::Size(164, 26);
			this->idTxt->TabIndex = 23;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(500, 32);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(826, 495);
			this->dataGridView1->TabIndex = 24;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CreateForm::dataGridView1_CellContentClick);
			// 
			// CreateForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1372, 582);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->idTxt);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->excluirBtn);
			this->Controls->Add(this->atualizarBtn);
			this->Controls->Add(this->generoComboBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->diretorTxt);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->nomeFilmeTxt);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->anoLancamentoTxt);
			this->Controls->Add(this->cadastrarBtn);
			this->Controls->Add(this->label1);
			this->Name = L"CreateForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CreateForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //Cadastrar novo filme

		if (nomeFilmeTxt->Text == "") {
			MessageBox::Show("Por favor, informe o título do filme.");
			nomeFilmeTxt->Focus();
			return;
		}
		if (anoLancamentoTxt->TextLength == 0) {
			MessageBox::Show("Por favor, informe um ano válida para o filme.");
			anoLancamentoTxt->Focus();
			return;
		}
		if (generoComboBox->Text == "") {
			MessageBox::Show("Por favor, informe o gênero do filme.");
			generoComboBox->Focus();
			return;
		}
		if (diretorTxt->Text == "") {
			MessageBox::Show("Por favor, informe o diretor do filme.");
			diretorTxt->Focus();
			return;
		}

			cmdDataBase = gcnew MySqlCommand("INSERT INTO locadoradb.filme (id, nome_filme, ano_lancamento, genero, diretor) VALUES('" + this->idTxt->Text + "', '" + this->nomeFilmeTxt->Text + "', '" + this->anoLancamentoTxt->Text + "', '" + this->generoComboBox->Text + "', '" + this->diretorTxt->Text + "')	", conDatabase);

			try {
				conDatabase->Open();
				myReader = cmdDataBase->ExecuteReader();
				conDatabase->Close();
				MessageBox::Show("Salvo!");
				MostrarDataGrid();
				LimparDados();
			}
			catch (Exception^ex) {
				MessageBox::Show(ex->Message);
			}
		
	}


private: void MostrarDataGrid() { //Display Data in DataGridView  
	
	cmdDataBase = gcnew MySqlCommand(" SELECT * FROM locadoradb.filme	;", conDatabase);

	try {
		/*conDatabase->Open();
		DataTable^ dt = gcnew DataTable();
		adapt.SelectCommand = cmdDataBase;
		adapt.Fill(dt);
		dataGridView1->DataSource = dt; */

		conDatabase->Open();
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter();
		sda->SelectCommand = cmdDataBase;
		DataTable^ dbdataset = gcnew DataTable();
		sda->Fill(dbdataset);
		BindingSource^ bSource = gcnew BindingSource();

		bSource->DataSource = dbdataset;
		dataGridView1->DataSource = bSource;
		sda->Update(dbdataset);

		conDatabase->Close();
	}
	catch (Exception^ex) {
		//conDatabase->Close();
		MessageBox::Show(ex->Message);
	}
}

private: void LimparDados() {
	idTxt->Text = "";
	nomeFilmeTxt->Text = "";
	anoLancamentoTxt->Text = "";
	generoComboBox->Text = "";
	diretorTxt->Text = "";
}



private: System::Void atualizarBtn_Click(System::Object^  sender, System::EventArgs^  e) {

	cmdDataBase = gcnew MySqlCommand(" UPDATE locadoradb.filme SET id = '" + this->idTxt->Text + "', nome_filme = '" + this->nomeFilmeTxt->Text + "', ano_lancamento = '" + this->anoLancamentoTxt->Text + "', genero = '" + this->generoComboBox->Text + "', diretor = '" + this->diretorTxt->Text + "' WHERE id = '" + this->idTxt->Text + "' ;", conDatabase);

	try {
		conDatabase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Atualizado!");
		while (myReader->Read()) {

		}
		conDatabase->Close();
		MostrarDataGrid();
		LimparDados();
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
private: System::Void excluirBtn_Click(System::Object^  sender, System::EventArgs^  e) {

	cmdDataBase = gcnew MySqlCommand(" DELETE FROM locadoradb.filme WHERE id = '" + this->idTxt->Text + "' ;", conDatabase);

	try {
		conDatabase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Excluido!");
		while (myReader->Read()) {

		}
		conDatabase->Close();
		MostrarDataGrid();
		LimparDados();
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}

private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	
	try {
		if (e->RowIndex >= 0)
		{
			cadastrarBtn->Enabled = false;
			DataGridViewRow^ row = this->dataGridView1->Rows[e->RowIndex];

			idTxt->Text = row->Cells[0]->Value->ToString();
			nomeFilmeTxt->Text = row->Cells[1]->Value->ToString();
			anoLancamentoTxt->Text = row->Cells[2]->Value->ToString();
			generoComboBox->Text = row->Cells[3]->Value->ToString();
			diretorTxt->Text = row->Cells[4]->Value->ToString();

		}
	}
	catch (Exception^ex) {
		MessageBox::Show(ex->Message);
	}
}
};
}
