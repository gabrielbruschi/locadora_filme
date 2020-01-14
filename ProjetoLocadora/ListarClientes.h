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
	/// Summary for ListarClientes
	/// </summary>
	public ref class ListarClientes : public System::Windows::Forms::Form
	{
		String^ constring = L"datasource=localhost;port=3306;username=root;";
		MySqlConnection^ con = gcnew MySqlConnection(constring);
		MySqlCommand^ cmd;
		MySqlDataReader^ reader;
	private: System::Windows::Forms::ColumnHeader^  clmId;
	private: System::Windows::Forms::ColumnHeader^  clmNome;
	private: System::Windows::Forms::ColumnHeader^  clmCpf;
	private: System::Windows::Forms::ColumnHeader^  clmeEmail;
	private: System::Windows::Forms::ColumnHeader^  clmCep;
	private: System::Windows::Forms::ColumnHeader^  clmCidade;
	private: System::Windows::Forms::ColumnHeader^  clmTelefone;
	private: System::Windows::Forms::ColumnHeader^  clmEndereco;

		bool novo;

	public:
		ListarClientes(void)
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
		~ListarClientes()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  lstCliente;
	protected:

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
			this->lstCliente = (gcnew System::Windows::Forms::ListView());
			this->clmId = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmNome = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmCpf = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmeEmail = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmCep = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmCidade = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmTelefone = (gcnew System::Windows::Forms::ColumnHeader());
			this->clmEndereco = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// lstCliente
			// 
			this->lstCliente->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(8) {
				this->clmId, this->clmNome,
					this->clmCpf, this->clmeEmail, this->clmCep, this->clmCidade, this->clmTelefone, this->clmEndereco
			});
			this->lstCliente->HideSelection = false;
			this->lstCliente->Location = System::Drawing::Point(24, 12);
			this->lstCliente->Name = L"lstCliente";
			this->lstCliente->Size = System::Drawing::Size(1175, 377);
			this->lstCliente->TabIndex = 0;
			this->lstCliente->UseCompatibleStateImageBehavior = false;
			this->lstCliente->View = System::Windows::Forms::View::Details;
			// 
			// clmId
			// 
			this->clmId->Text = L"ID";
			this->clmId->Width = 40;
			// 
			// clmNome
			// 
			this->clmNome->Text = L"Nome";
			this->clmNome->Width = 195;
			// 
			// clmCpf
			// 
			this->clmCpf->Text = L"CPF";
			this->clmCpf->Width = 118;
			// 
			// clmeEmail
			// 
			this->clmeEmail->Text = L"Email";
			this->clmeEmail->Width = 149;
			// 
			// clmCep
			// 
			this->clmCep->Text = L"CEP";
			this->clmCep->Width = 109;
			// 
			// clmCidade
			// 
			this->clmCidade->Text = L"Cidade";
			this->clmCidade->Width = 132;
			// 
			// clmTelefone
			// 
			this->clmTelefone->Text = L"Telefone";
			this->clmTelefone->Width = 124;
			// 
			// clmEndereco
			// 
			this->clmEndereco->Text = L"Endereço";
			this->clmEndereco->Width = 171;
			// 
			// ListarClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1225, 465);
			this->Controls->Add(this->lstCliente);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"ListarClientes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Clientes Cadastrados";
			this->Load += gcnew System::EventHandler(this, &ListarClientes::ListarClientes_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ListarClientes_Load(System::Object^  sender, System::EventArgs^  e) {
		cmd = gcnew MySqlCommand("SELECT * FROM LOCADORADB.CLIENTE ;", con);

		try
		{
			con->Open();
			reader = cmd->ExecuteReader(); //armazena conteúdo do obj cmd
				
				while (reader->Read()) {

					ListViewItem^ item = gcnew ListViewItem(reader["ID"]->ToString());
					item->SubItems->Add(reader["NOME"]->ToString());
					item->SubItems->Add(reader["CPF"]->ToString());
					item->SubItems->Add(reader["EMAIL"]->ToString());
					item->SubItems->Add(reader["CEP"]->ToString());
					item->SubItems->Add(reader["CIDADE"]->ToString());
					item->SubItems->Add(reader["TELEFONE"]->ToString());
					item->SubItems->Add(reader["ENDERECO"]->ToString());
					lstCliente->Items->Add(item);
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
	};
}
