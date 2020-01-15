#pragma once

namespace ProjetoLocadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Filmes
	/// </summary>
	public ref class Filmes : public System::Windows::Forms::Form
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;";
		MySqlConnection^ con = gcnew MySqlConnection(constring);
		MySqlCommand^ cmd;
		MySqlDataReader^ reader;
	private: System::Windows::Forms::MaskedTextBox^  mskAno;
	private: System::Windows::Forms::GroupBox^  groupBox1;










		bool novo;

	public:
		Filmes(void)
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
		~Filmes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  txtTitulo;
	protected:

	protected:

	protected:







	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  txtId;
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
	private: System::Windows::Forms::ToolStripLabel^  tsbBuscaPorId;
	private: System::Windows::Forms::ToolStripTextBox^  tstId;
	private: System::Windows::Forms::ToolStripButton^  tsbBuscar;
	private: System::Windows::Forms::ComboBox^  cbGenero;
	private: System::Windows::Forms::TextBox^  txtDiretor;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Filmes::typeid));
			this->txtTitulo = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
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
			this->tsbBuscaPorId = (gcnew System::Windows::Forms::ToolStripLabel());
			this->tstId = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsbBuscar = (gcnew System::Windows::Forms::ToolStripButton());
			this->cbGenero = (gcnew System::Windows::Forms::ComboBox());
			this->txtDiretor = (gcnew System::Windows::Forms::TextBox());
			this->mskAno = (gcnew System::Windows::Forms::MaskedTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->toolStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// txtTitulo
			// 
			this->txtTitulo->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtTitulo->Location = System::Drawing::Point(191, 89);
			this->txtTitulo->MaxLength = 50;
			this->txtTitulo->Name = L"txtTitulo";
			this->txtTitulo->Size = System::Drawing::Size(646, 26);
			this->txtTitulo->TabIndex = 25;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(70, 234);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(147, 20);
			this->label7->TabIndex = 32;
			this->label7->Text = L"Ano de lançamento";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(74, 89);
			this->txtId->Name = L"txtId";
			this->txtId->ReadOnly = true;
			this->txtId->Size = System::Drawing::Size(74, 26);
			this->txtId->TabIndex = 24;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(74, 150);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(63, 20);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Gênero";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(312, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 20);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Diretor";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(187, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(140, 20);
			this->label2->TabIndex = 19;
			this->label2->Text = L"Descrição do título";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(74, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 20);
			this->label1->TabIndex = 18;
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
			this->toolStrip1->Size = System::Drawing::Size(1078, 32);
			this->toolStrip1->TabIndex = 17;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// tsbNovo
			// 
			this->tsbNovo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbNovo.Image")));
			this->tsbNovo->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbNovo->Name = L"tsbNovo";
			this->tsbNovo->Size = System::Drawing::Size(84, 29);
			this->tsbNovo->Text = L"Novo";
			this->tsbNovo->Click += gcnew System::EventHandler(this, &Filmes::tsbNovo_Click);
			// 
			// tsbSalvar
			// 
			this->tsbSalvar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbSalvar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbSalvar.Image")));
			this->tsbSalvar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbSalvar->Name = L"tsbSalvar";
			this->tsbSalvar->Size = System::Drawing::Size(28, 29);
			this->tsbSalvar->Text = L"Salvar";
			this->tsbSalvar->Click += gcnew System::EventHandler(this, &Filmes::tsbSalvar_Click);
			// 
			// tsbCancelar
			// 
			this->tsbCancelar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbCancelar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbCancelar.Image")));
			this->tsbCancelar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbCancelar->Name = L"tsbCancelar";
			this->tsbCancelar->Size = System::Drawing::Size(28, 29);
			this->tsbCancelar->Text = L"Cancelar";
			this->tsbCancelar->Click += gcnew System::EventHandler(this, &Filmes::tsbCancelar_Click);
			// 
			// tsbExcluir
			// 
			this->tsbExcluir->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbExcluir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbExcluir.Image")));
			this->tsbExcluir->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbExcluir->Name = L"tsbExcluir";
			this->tsbExcluir->Size = System::Drawing::Size(28, 29);
			this->tsbExcluir->Text = L"Remover";
			this->tsbExcluir->Click += gcnew System::EventHandler(this, &Filmes::tsbExcluir_Click);
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
			this->tsbBuscar->Click += gcnew System::EventHandler(this, &Filmes::tsbBuscar_Click);
			// 
			// cbGenero
			// 
			this->cbGenero->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbGenero->FormattingEnabled = true;
			this->cbGenero->Items->AddRange(gcnew cli::array< System::Object^  >(9) {
				L"AÇÃO", L"AVENTURA", L"ROMANCE", L"COMÉDIA", L"DRAMA",
					L"TERROR", L"SUSPENSE", L"DOCUMENTÁRIO", L"DESENHO"
			});
			this->cbGenero->Location = System::Drawing::Point(74, 173);
			this->cbGenero->Name = L"cbGenero";
			this->cbGenero->Size = System::Drawing::Size(179, 28);
			this->cbGenero->TabIndex = 26;
			// 
			// txtDiretor
			// 
			this->txtDiretor->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtDiretor->Location = System::Drawing::Point(316, 175);
			this->txtDiretor->Name = L"txtDiretor";
			this->txtDiretor->Size = System::Drawing::Size(521, 26);
			this->txtDiretor->TabIndex = 27;
			// 
			// mskAno
			// 
			this->mskAno->Location = System::Drawing::Point(74, 260);
			this->mskAno->Mask = L"0000";
			this->mskAno->Name = L"mskAno";
			this->mskAno->Size = System::Drawing::Size(63, 26);
			this->mskAno->TabIndex = 28;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->txtId);
			this->groupBox1->Controls->Add(this->mskAno);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtDiretor);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->cbGenero);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->txtTitulo);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(48, 64);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(945, 385);
			this->groupBox1->TabIndex = 33;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Filme";
			// 
			// Filmes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1078, 483);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->toolStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Filmes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VIDEO LOCADORA - CADASTRO & EDIÇÃO - FILMES";
			this->Load += gcnew System::EventHandler(this, &Filmes::Filmes_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Filmes_Load(System::Object^  sender, System::EventArgs^  e) {
		tsbNovo->Enabled = true;
		tsbSalvar->Enabled = false;
		tsbCancelar->Enabled = false;
		tsbExcluir->Enabled = false;
		tstId->Enabled = true;
		tsbBuscar->Enabled = true;
		txtId->Enabled = false;
		txtTitulo->Enabled = false;
		cbGenero->Enabled = false;
		txtDiretor->Enabled = false;
		mskAno->Enabled = false;
		tstId->Focus();
	}
private: System::Void tsbNovo_Click(System::Object^  sender, System::EventArgs^  e) {
	tsbNovo->Enabled = false;
	tsbSalvar->Enabled = true;
	tsbCancelar->Enabled = true;
	tsbExcluir->Enabled = false;
	tstId->Enabled = false;
	tsbBuscar->Enabled = false;
	txtId->Enabled = false;
	txtTitulo->Enabled = true;
	cbGenero->Enabled = true;
	txtDiretor->Enabled = true;
	mskAno->Enabled = true;
	txtTitulo->Focus();
	novo = true;
}
private: System::Void tsbSalvar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (txtTitulo->Text == "") {
		MessageBox::Show("Por favor, informe o nome do título.");
		txtTitulo->Focus();
		return;
	}
	if (cbGenero->Text == "") {
		MessageBox::Show("Por favor, insira um gênero.");
		cbGenero->Focus();
		return;
	}
	if (txtDiretor->Text == "") {
		MessageBox::Show("Por favor, informe o diretor do filme.");
		txtDiretor->Focus();
		return;
	}
	

	if (novo)
	{
		cmd = gcnew MySqlCommand("INSERT INTO LOCADORADB.FILME (TITULO, GENERO, DIRETOR, ANO) VALUES('" + this->txtTitulo->Text + "', '" + this->cbGenero->Text + "', '" + this->txtDiretor->Text + "', '" + this->mskAno->Text + "') ", con);

		try
		{
			con->Open();
			int i = cmd->ExecuteNonQuery();
			if (i > 0)
				MessageBox::Show("Filme " + txtTitulo->Text + " Cadastrado com sucesso!");
		}
		catch (Exception^ex)
		{
			MessageBox::Show("Erro: " + ex->Message);
		}
		finally
		{
			con->Close();
		}

		//SELECT FIL_ID
		String^ temp_fil_id = "";

		cmd = gcnew MySqlCommand("SELECT FIL_ID FROM LOCADORADB.FILME WHERE TITULO= '" + this->txtTitulo->Text + "';", con);

		try
		{
			con->Open();
			reader = cmd->ExecuteReader();
			if (reader->Read())
			{
				temp_fil_id = reader[0]->ToString();
			}
			else
				MessageBox::Show("Nenhum registro encontrado com o Id informado!");

		}
		catch (Exception^ex)
		{
			MessageBox::Show("Erro: " + ex->Message);
		}
		finally
		{
			con->Close();
		}

		//Adiciona o filme na table STATUS informando que esta disponivel
		String^ _disponivel = "SIM";
		cmd = gcnew MySqlCommand("INSERT INTO LOCADORADB.STATUS (FIL_ID, DISPONIVEL)  VALUES('" + temp_fil_id + "', '" + _disponivel + "') ", con);
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
	else
	{
		cmd = gcnew MySqlCommand("UPDATE LOCADORADB.FILME SET TITULO = '" + this->txtTitulo->Text + "', GENERO = '" + this->cbGenero->Text + "', DIRETOR = '" + this->txtDiretor->Text + "', ANO = '" + this->mskAno->Text + "' WHERE FIL_ID = '" + this->txtId->Text + "' ;", con);
		con->Open();
		try
		{
			int i = cmd->ExecuteNonQuery();
			if (i > 0)
				MessageBox::Show("Filme " + txtTitulo->Text + " atualizado com sucesso!");
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

	tsbNovo->Enabled = true;
	tsbSalvar->Enabled = false;
	tsbCancelar->Enabled = false;
	tsbExcluir->Enabled = false;
	tstId->Enabled = true;
	tsbBuscar->Enabled = true;
	txtTitulo->Enabled = false;
	cbGenero->Enabled = false;
	txtDiretor->Enabled = false;
	mskAno->Enabled = false;
	txtId->Text = "";
	txtTitulo->Text = "";
	cbGenero->Text = "";
	txtDiretor->Text = "";
	mskAno->Text = "";
}
private: System::Void tsbCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	tsbNovo->Enabled = true;
	tsbSalvar->Enabled = false;
	tsbCancelar->Enabled = false;
	tsbExcluir->Enabled = false;
	tstId->Enabled = true;
	tsbBuscar->Enabled = true;
	txtTitulo->Enabled = false;
	cbGenero->Enabled = false;
	txtDiretor->Enabled = false;
	mskAno->Enabled = false;
	txtId->Text = "";
	txtTitulo->Text = "";
	cbGenero->Text = "";
	txtDiretor->Text = "";
	mskAno->Text = "";
}
private: System::Void tsbExcluir_Click(System::Object^  sender, System::EventArgs^  e) {
	cmd = gcnew MySqlCommand("DELETE FROM LOCADORADB.FILME, LOCADORADB.STATUS USING LOCADORADB.FILME INNER JOIN LOCADORADB.STATUS WHERE LOCADORADB.FILME.FIL_ID = LOCADORADB.STATUS.FIL_ID AND LOCADORADB.FILME.FIL_ID = '" + this->txtId->Text + "' AND LOCADORADB.STATUS.FIL_ID = '" + this->txtId->Text + "' ;", con);
	con->Open();

	try
	{
		int i = cmd->ExecuteNonQuery();
		if (i > 0)
			MessageBox::Show("Registro excluído com sucesso!");
	}
	catch (Exception^ex)
	{
		MessageBox::Show("Erro: " + ex->Message);
	}
	finally
	{
		con->Close();
	}

	tsbNovo->Enabled = true;
	tsbSalvar->Enabled = false;
	tsbCancelar->Enabled = false;
	tsbExcluir->Enabled = false;
	tstId->Enabled = true;
	tsbBuscar->Enabled = true;
	txtTitulo->Enabled = false;
	cbGenero->Enabled = false;
	txtDiretor->Enabled = false;
	mskAno->Enabled = false;
	txtId->Text = "";
	txtTitulo->Text = "";
	cbGenero->Text = "";
	txtDiretor->Text = "";
	mskAno->Text = "";
}
private: System::Void tsbBuscar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (tstId->Text == "") {
		tstId->Focus();
		return;
	}

	cmd = gcnew MySqlCommand("SELECT * FROM LOCADORADB.FILME WHERE TITULO= '" + this->tstId->Text + "';", con);
	con->Open();

	try
	{
		reader = cmd->ExecuteReader(); //armazena conteúdo do obj cmd
		if (reader->Read()) //testa se há registros
		{
			tsbNovo->Enabled = false;
			tsbSalvar->Enabled = true;
			tsbCancelar->Enabled = true;
			tsbExcluir->Enabled = true;
			tstId->Enabled = false;
			tsbBuscar->Enabled = false;
			txtTitulo->Enabled = true;
			cbGenero->Enabled = true;
			txtDiretor->Enabled = true;
			mskAno->Enabled = true;
			txtTitulo->Focus();
			txtId->Text = reader[0]->ToString();
			txtTitulo->Text = reader[1]->ToString();
			cbGenero->Text = reader[2]->ToString();
			txtDiretor->Text = reader[3]->ToString();
			mskAno->Text = reader[4]->ToString();

			novo = false;
		}
		else
			MessageBox::Show("Nenhum filme encontrado com o título informado!");

	}
	catch (Exception^ex)
	{
		MessageBox::Show("Erro: " + ex->Message);
	}
	finally
	{
		con->Close();
	}

	tstId->Text = "";
}
};
}
