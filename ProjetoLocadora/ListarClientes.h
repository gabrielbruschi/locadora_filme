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








	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btnFechar;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ListarClientes::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnFechar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->dataGridView1);
			this->groupBox1->Controls->Add(this->btnFechar);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1189, 493);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Lista de Clientes";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &ListarClientes::groupBox1_Enter);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(20, 25);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1146, 393);
			this->dataGridView1->TabIndex = 80;
			// 
			// btnFechar
			// 
			this->btnFechar->Location = System::Drawing::Point(1064, 445);
			this->btnFechar->Name = L"btnFechar";
			this->btnFechar->Size = System::Drawing::Size(102, 42);
			this->btnFechar->TabIndex = 1;
			this->btnFechar->Text = L"Fechar";
			this->btnFechar->UseVisualStyleBackColor = true;
			this->btnFechar->Click += gcnew System::EventHandler(this, &ListarClientes::btnFechar_Click);
			// 
			// ListarClientes
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1225, 526);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ListarClientes";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"VIDEO LOCADORA - CLIENTES CADASTRADOS";
			this->Load += gcnew System::EventHandler(this, &ListarClientes::ListarClientes_Load);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ListarClientes_Load(System::Object^  sender, System::EventArgs^  e) {
		ListarDtGridView();
		/*
		cmd = gcnew MySqlCommand("SELECT * FROM LOCADORADB.CLIENTE ;", con);

		try
		{
			con->Open();
			reader = cmd->ExecuteReader(); //armazena conteúdo do obj cmd
				
				while (reader->Read()) {

					ListViewItem^ item = gcnew ListViewItem(reader["CLI_ID"]->ToString());
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

		*/
	}

	private: void ListarDtGridView() {
		cmd = gcnew MySqlCommand("SELECT * FROM LOCADORADB.CLIENTE ;", con);

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

	private: System::Void btnFechar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
};
}
