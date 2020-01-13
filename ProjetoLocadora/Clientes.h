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
	/// Summary for Clientes
	/// </summary>
	public ref class Clientes : public System::Windows::Forms::Form
	{
	
		String^ constring = L"datasource=localhost;port=3306;username=root;";
		MySqlConnection^ con = gcnew MySqlConnection(constring);
		MySqlCommand^ cmd;
		MySqlDataReader^ myReader;

		bool novo;

	public:
		Clientes(void)
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
		~Clientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	private: System::Windows::Forms::ToolStripButton^  tsbNovo;
	private: System::Windows::Forms::ToolStripButton^  tsbSalvar;
	private: System::Windows::Forms::ToolStripButton^  tsbCancelar;
	private: System::Windows::Forms::ToolStripButton^  tsbExcluir;
	protected:




	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripLabel^  tsbBuscaPorId;

	private: System::Windows::Forms::ToolStripTextBox^  tstId;
	private: System::Windows::Forms::ToolStripButton^  tsbBuscar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtId;
	private: System::Windows::Forms::TextBox^  txtNome;
	private: System::Windows::Forms::TextBox^  txtEndereco;
	private: System::Windows::Forms::TextBox^  txtEmail;






	private: System::Windows::Forms::TextBox^  txtCidade;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::MaskedTextBox^  mskCEP;
	private: System::Windows::Forms::MaskedTextBox^  mskTelefone;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Clientes::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbNovo = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbSalvar = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbCancelar = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbExcluir = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsbBuscaPorId = (gcnew System::Windows::Forms::ToolStripLabel());
			this->tstId = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->tsbBuscar = (gcnew System::Windows::Forms::ToolStripButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtNome = (gcnew System::Windows::Forms::TextBox());
			this->txtEndereco = (gcnew System::Windows::Forms::TextBox());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->txtCidade = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->mskCEP = (gcnew System::Windows::Forms::MaskedTextBox());
			this->mskTelefone = (gcnew System::Windows::Forms::MaskedTextBox());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->toolStrip1->Size = System::Drawing::Size(838, 31);
			this->toolStrip1->TabIndex = 0;
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
			this->tsbNovo->Click += gcnew System::EventHandler(this, &Clientes::tsbNovo_Click);
			// 
			// tsbSalvar
			// 
			this->tsbSalvar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbSalvar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbSalvar.Image")));
			this->tsbSalvar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbSalvar->Name = L"tsbSalvar";
			this->tsbSalvar->Size = System::Drawing::Size(28, 28);
			this->tsbSalvar->Text = L"Salvar";
			this->tsbSalvar->Click += gcnew System::EventHandler(this, &Clientes::tsbSalvar_Click);
			// 
			// tsbCancelar
			// 
			this->tsbCancelar->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbCancelar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbCancelar.Image")));
			this->tsbCancelar->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbCancelar->Name = L"tsbCancelar";
			this->tsbCancelar->Size = System::Drawing::Size(28, 28);
			this->tsbCancelar->Text = L"Cancelar";
			this->tsbCancelar->Click += gcnew System::EventHandler(this, &Clientes::tsbCancelar_Click);
			// 
			// tsbExcluir
			// 
			this->tsbExcluir->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->tsbExcluir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbExcluir.Image")));
			this->tsbExcluir->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbExcluir->Name = L"tsbExcluir";
			this->tsbExcluir->Size = System::Drawing::Size(28, 28);
			this->tsbExcluir->Text = L"Remover";
			this->tsbExcluir->Click += gcnew System::EventHandler(this, &Clientes::tsbExcluir_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 31);
			// 
			// tsbBuscaPorId
			// 
			this->tsbBuscaPorId->Name = L"tsbBuscaPorId";
			this->tsbBuscaPorId->Size = System::Drawing::Size(121, 28);
			this->tsbBuscaPorId->Text = L"Buscar por Id:";
			// 
			// tstId
			// 
			this->tstId->Name = L"tstId";
			this->tstId->Size = System::Drawing::Size(140, 31);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Id";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(125, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nome";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(78, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Endereço";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"CEP";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(627, 203);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 20);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Telefone";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 272);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Email";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(17, 91);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(74, 26);
			this->txtId->TabIndex = 7;
			// 
			// txtNome
			// 
			this->txtNome->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtNome->Location = System::Drawing::Point(129, 91);
			this->txtNome->MaxLength = 50;
			this->txtNome->Name = L"txtNome";
			this->txtNome->Size = System::Drawing::Size(680, 26);
			this->txtNome->TabIndex = 8;
			// 
			// txtEndereco
			// 
			this->txtEndereco->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtEndereco->Location = System::Drawing::Point(17, 159);
			this->txtEndereco->MaxLength = 50;
			this->txtEndereco->Name = L"txtEndereco";
			this->txtEndereco->Size = System::Drawing::Size(792, 26);
			this->txtEndereco->TabIndex = 9;
			// 
			// txtEmail
			// 
			this->txtEmail->Location = System::Drawing::Point(17, 295);
			this->txtEmail->MaxLength = 50;
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(482, 26);
			this->txtEmail->TabIndex = 12;
			// 
			// txtCidade
			// 
			this->txtCidade->Location = System::Drawing::Point(129, 226);
			this->txtCidade->MaxLength = 50;
			this->txtCidade->Name = L"txtCidade";
			this->txtCidade->Size = System::Drawing::Size(451, 26);
			this->txtCidade->TabIndex = 13;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(125, 203);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 20);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Cidade";
			// 
			// mskCEP
			// 
			this->mskCEP->Location = System::Drawing::Point(17, 227);
			this->mskCEP->Mask = L"00000-999";
			this->mskCEP->Name = L"mskCEP";
			this->mskCEP->Size = System::Drawing::Size(87, 26);
			this->mskCEP->TabIndex = 15;
			// 
			// mskTelefone
			// 
			this->mskTelefone->Location = System::Drawing::Point(631, 226);
			this->mskTelefone->Mask = L"(99) 0000-0000";
			this->mskTelefone->Name = L"mskTelefone";
			this->mskTelefone->Size = System::Drawing::Size(100, 26);
			this->mskTelefone->TabIndex = 16;
			// 
			// Clientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(838, 357);
			this->Controls->Add(this->mskTelefone);
			this->Controls->Add(this->mskCEP);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtCidade);
			this->Controls->Add(this->txtEmail);
			this->Controls->Add(this->txtEndereco);
			this->Controls->Add(this->txtNome);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"Clientes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Clientes";
			this->Load += gcnew System::EventHandler(this, &Clientes::Clientes_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void Clientes_Load(System::Object^  sender, System::EventArgs^  e) {
		tsbNovo->Enabled = true;
		tsbSalvar->Enabled = false;
		tsbCancelar->Enabled = false;
		tsbExcluir->Enabled = false;
		tstId->Enabled = true;
		tsbBuscar->Enabled = true;
		txtNome->Enabled = false;
		txtEndereco->Enabled = false;
		mskCEP->Enabled = false;
		txtCidade->Enabled = false;
		mskTelefone->Enabled = false;
	}
private: System::Void tsbNovo_Click(System::Object^  sender, System::EventArgs^  e) {
	tsbNovo->Enabled = false;
	tsbSalvar->Enabled = true;
	tsbCancelar->Enabled = true;
	tsbExcluir->Enabled = false;
	tstId->Enabled = false;
	tsbBuscar->Enabled = false;
	txtNome->Enabled = true;
	txtEndereco->Enabled = true;
	mskCEP->Enabled = true;
	txtCidade->Enabled = true;
	mskTelefone->Enabled = true;
	txtNome->Focus();
	novo = true;
}
private: System::Void tsbSalvar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (novo) //testa para ver se já existe o registro
	{
		cmd = gcnew MySqlCommand("INSERT INTO CLIENTE (NOME, ENDERECO, CEP, CIDADE, TELEFONE, EMAIL) VALUES('" + this->txtNome->Text + "', '" + this->txtEndereco->Text + "', '" + this->mskCEP->Text + "', '" + this->txtCidade->Text + "', '" + this->mskTelefone->Text + "', '" + this->txtEmail->Text + "')	", con);
		con->Open();
		try
		{
			int i = cmd->ExecuteNonQuery();
			if (i > 0) //se sim, registro concluido com sucesso
				MessageBox::Show("Cadastro realizado com sucesso!");
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
	else //registro existente é atualizado apenas
	{
		cmd = gcnew MySqlCommand(" UPDATE CLIENTE SET NOME = '" + this->txtNome->Text + "', ENDERECO = '" + this->txtEndereco->Text + "', CEP = '" + this->mskCEP->Text + "', CIDADE = '" + this->txtCidade->Text + "', TELEFONE = '" + this->mskTelefone->Text + "', EMAIL = '" + this->txtEmail->Text + "' WHERE ID = '" + this->txtId->Text + "' ;", con);
		con->Open();
		try
		{
			int i = cmd->ExecuteNonQuery();
			if (i > 0) //se sim, registro concluido com sucesso
				MessageBox::Show("Cadastro atualizado com sucesso!");
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
	txtNome->Enabled = false;
	txtEndereco->Enabled = false;
	mskCEP->Enabled = false;
	txtCidade->Enabled = false;
	mskTelefone->Enabled = false;
	txtId->Text = "";
	txtNome->Text = "";
	txtEndereco->Text = "";
	mskCEP->Text = "";
	txtCidade->Text = "";
	mskTelefone->Text = "";
}
private: System::Void tsbCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
	tsbNovo->Enabled = true;
	tsbSalvar->Enabled = false;
	tsbCancelar->Enabled = false;
	tsbExcluir->Enabled = false;
	tstId->Enabled = true;
	tsbBuscar->Enabled = true;
	txtNome->Enabled = false;
	txtEndereco->Enabled = false;
	mskCEP->Enabled = false;
	txtCidade->Enabled = false;
	mskTelefone->Enabled = false;
	txtId->Text = "";
	txtNome->Text = "";
	txtEndereco->Text = "";
	mskCEP->Text = "";
	txtCidade->Text = "";
	mskTelefone->Text = "";
}
private: System::Void tsbExcluir_Click(System::Object^  sender, System::EventArgs^  e) {

}
};
}
