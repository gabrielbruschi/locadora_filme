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
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
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
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  diretorTxt;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  generoTxt;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  nomeFilmeTxt;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  anoLancamentoTxt;

	private: System::Windows::Forms::Button^  button1;

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->diretorTxt = (gcnew System::Windows::Forms::TextBox());
			this->generoTxt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nomeFilmeTxt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->anoLancamentoTxt = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->diretorTxt, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->generoTxt, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->nomeFilmeTxt, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->anoLancamentoTxt, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button1, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label1, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(915, 414);
			this->tableLayoutPanel1->TabIndex = 1;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 246);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 20);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Diretor";
			// 
			// diretorTxt
			// 
			this->diretorTxt->Location = System::Drawing::Point(460, 249);
			this->diretorTxt->Multiline = true;
			this->diretorTxt->Name = L"diretorTxt";
			this->diretorTxt->Size = System::Drawing::Size(164, 26);
			this->diretorTxt->TabIndex = 3;
			// 
			// generoTxt
			// 
			this->generoTxt->Location = System::Drawing::Point(460, 167);
			this->generoTxt->Name = L"generoTxt";
			this->generoTxt->Size = System::Drawing::Size(164, 26);
			this->generoTxt->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(63, 20);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Gênero";
			// 
			// nomeFilmeTxt
			// 
			this->nomeFilmeTxt->Location = System::Drawing::Point(460, 3);
			this->nomeFilmeTxt->Name = L"nomeFilmeTxt";
			this->nomeFilmeTxt->Size = System::Drawing::Size(164, 26);
			this->nomeFilmeTxt->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Ano Lançamento";
			// 
			// anoLancamentoTxt
			// 
			this->anoLancamentoTxt->Location = System::Drawing::Point(460, 85);
			this->anoLancamentoTxt->Name = L"anoLancamentoTxt";
			this->anoLancamentoTxt->Size = System::Drawing::Size(164, 26);
			this->anoLancamentoTxt->TabIndex = 1;
			this->anoLancamentoTxt->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(460, 331);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 59);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Cadastrar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Título";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(915, 414);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=localhost;port=3306;username=root;";
	MySqlConnection^ conDatabase = gcnew MySqlConnection(constring);
	
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into	locadoradb.filme (nome_filme, ano_lancamento, genero, diretor) values('"+this->nomeFilmeTxt->Text+"', '" + this->anoLancamentoTxt->Text + "', '" + this->generoTxt->Text + "', '" + this->diretorTxt->Text + "')	", conDatabase);
	
	MySqlDataReader^ myReader;

	try{
		conDatabase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Salvo!");	
		nomeFilmeTxt->Clear();
		anoLancamentoTxt->Clear();
		generoTxt->Clear();
		diretorTxt->Clear();	
	}
	catch(Exception^ex){
		MessageBox::Show(ex->Message);
	}

}
};
}
