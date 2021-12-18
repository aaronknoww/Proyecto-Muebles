#pragma once

namespace MueblesCApantallas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace MueblesController;
	/// <summary>
	/// Resumen de ReportesForm
	/// </summary>
	public ref class ReportesForm : public System::Windows::Forms::Form
	{
	public:
		ReportesForm(void)
		{
			InitializeComponent();
			
			lista = gcnew List<RepFila^>;
			procedimientos = gcnew ProcedimentosController;
			this->dtpFinal->MaxDate = DateTime::Now; //-----> Para que la fecha maxima de una consulta sea la actual.
			this->lblGetFecha->Text = DateTime::Now.ToShortDateString();
			periodo = 0;
			this->dgvVistaAlm->ColumnCount = 6;// El maximo de columnas a utilizar.
			this->lblGetDinero->Text = procedimientos->getCapitalActual();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~ReportesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		
		int periodo;
		ProcedimentosController^ procedimientos;
		List<RepFila^>^ lista;//--------------------> lista de objetos para poder guardar cualquier resultado de consultas
		System::ComponentModel::Container ^components;

		
	
	
	
	
	
	private: System::Windows::Forms::Label^ lblTituloDgv;
	private: System::Windows::Forms::Label^ lblGetFecha;
	private: System::Windows::Forms::Label^ labelFecha;
	private: System::Windows::Forms::Label^ lblGetDinero;
	private: System::Windows::Forms::Label^ labelCapital;
	private: System::Windows::Forms::DataGridView^ dgvVistaAlm;




	private: System::Windows::Forms::GroupBox^ gbOpciones;
	private: System::Windows::Forms::GroupBox^ gbPeriodo;
	private: System::Windows::Forms::DateTimePicker^ dtpInicial;
	private: System::Windows::Forms::DateTimePicker^ dtpFinal;
	private: System::Windows::Forms::RadioButton^ rbRetiros;
	private: System::Windows::Forms::RadioButton^ rbVentas;
	private: System::Windows::Forms::RadioButton^ rbCompras;
	private: System::Windows::Forms::RadioButton^ rbGanancia;
	private: System::Windows::Forms::RadioButton^ rbInversion;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ rbMensual;
	private: System::Windows::Forms::RadioButton^ rbSemanal;
	private: System::Windows::Forms::Label^ lblFechaIni;
	private: System::Windows::Forms::Label^ lblFechaFinal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Col5;


















	private: System::Windows::Forms::Button^ btnEjecutar;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->lblTituloDgv = (gcnew System::Windows::Forms::Label());
			this->lblGetFecha = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->lblGetDinero = (gcnew System::Windows::Forms::Label());
			this->labelCapital = (gcnew System::Windows::Forms::Label());
			this->dgvVistaAlm = (gcnew System::Windows::Forms::DataGridView());
			this->col0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Col5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gbOpciones = (gcnew System::Windows::Forms::GroupBox());
			this->rbRetiros = (gcnew System::Windows::Forms::RadioButton());
			this->rbVentas = (gcnew System::Windows::Forms::RadioButton());
			this->rbCompras = (gcnew System::Windows::Forms::RadioButton());
			this->rbGanancia = (gcnew System::Windows::Forms::RadioButton());
			this->rbInversion = (gcnew System::Windows::Forms::RadioButton());
			this->gbPeriodo = (gcnew System::Windows::Forms::GroupBox());
			this->rbSemanal = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->rbMensual = (gcnew System::Windows::Forms::RadioButton());
			this->dtpInicial = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpFinal = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblFechaIni = (gcnew System::Windows::Forms::Label());
			this->lblFechaFinal = (gcnew System::Windows::Forms::Label());
			this->btnEjecutar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaAlm))->BeginInit();
			this->gbOpciones->SuspendLayout();
			this->gbPeriodo->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblTituloDgv
			// 
			this->lblTituloDgv->AutoSize = true;
			this->lblTituloDgv->BackColor = System::Drawing::Color::Transparent;
			this->lblTituloDgv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblTituloDgv->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTituloDgv->ForeColor = System::Drawing::Color::Peru;
			this->lblTituloDgv->Location = System::Drawing::Point(583, 150);
			this->lblTituloDgv->Name = L"lblTituloDgv";
			this->lblTituloDgv->Size = System::Drawing::Size(420, 33);
			this->lblTituloDgv->TabIndex = 83;
			this->lblTituloDgv->Text = L"Tabla para mostrar consultas";
			// 
			// lblGetFecha
			// 
			this->lblGetFecha->AutoSize = true;
			this->lblGetFecha->BackColor = System::Drawing::Color::Transparent;
			this->lblGetFecha->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetFecha->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetFecha->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetFecha->Location = System::Drawing::Point(939, 65);
			this->lblGetFecha->Name = L"lblGetFecha";
			this->lblGetFecha->Size = System::Drawing::Size(199, 33);
			this->lblGetFecha->TabIndex = 82;
			this->lblGetFecha->Text = L"dd/mm/aaaa";
			// 
			// labelFecha
			// 
			this->labelFecha->AutoSize = true;
			this->labelFecha->BackColor = System::Drawing::Color::Transparent;
			this->labelFecha->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->labelFecha->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelFecha->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->labelFecha->Location = System::Drawing::Point(784, 65);
			this->labelFecha->Name = L"labelFecha";
			this->labelFecha->Size = System::Drawing::Size(115, 32);
			this->labelFecha->TabIndex = 81;
			this->labelFecha->Text = L"Fecha: ";
			// 
			// lblGetDinero
			// 
			this->lblGetDinero->AutoSize = true;
			this->lblGetDinero->BackColor = System::Drawing::Color::Transparent;
			this->lblGetDinero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetDinero->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetDinero->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->lblGetDinero->Location = System::Drawing::Point(583, 66);
			this->lblGetDinero->Name = L"lblGetDinero";
			this->lblGetDinero->Size = System::Drawing::Size(155, 33);
			this->lblGetDinero->TabIndex = 80;
			this->lblGetDinero->Text = L"$ 1,500.00 ";
			// 
			// labelCapital
			// 
			this->labelCapital->AutoSize = true;
			this->labelCapital->BackColor = System::Drawing::Color::Transparent;
			this->labelCapital->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->labelCapital->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCapital->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->labelCapital->Location = System::Drawing::Point(416, 66);
			this->labelCapital->Name = L"labelCapital";
			this->labelCapital->Size = System::Drawing::Size(134, 32);
			this->labelCapital->TabIndex = 79;
			this->labelCapital->Text = L"Capital: ";
			// 
			// dgvVistaAlm
			// 
			this->dgvVistaAlm->AllowUserToAddRows = false;
			this->dgvVistaAlm->AllowUserToDeleteRows = false;
			this->dgvVistaAlm->AllowUserToResizeRows = false;
			this->dgvVistaAlm->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvVistaAlm->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dgvVistaAlm->BackgroundColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dgvVistaAlm->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::DarkGoldenrod;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvVistaAlm->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvVistaAlm->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvVistaAlm->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->col0, this->col1,
					this->col2, this->col3, this->Col4, this->Col5
			});
			this->dgvVistaAlm->EnableHeadersVisualStyles = false;
			this->dgvVistaAlm->GridColor = System::Drawing::Color::DarkGoldenrod;
			this->dgvVistaAlm->Location = System::Drawing::Point(418, 186);
			this->dgvVistaAlm->Name = L"dgvVistaAlm";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::WindowFrame;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvVistaAlm->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dgvVistaAlm->RowHeadersVisible = false;
			this->dgvVistaAlm->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(137)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvVistaAlm->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dgvVistaAlm->RowTemplate->Height = 24;
			this->dgvVistaAlm->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvVistaAlm->Size = System::Drawing::Size(729, 424);
			this->dgvVistaAlm->TabIndex = 78;
			// 
			// col0
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->col0->DefaultCellStyle = dataGridViewCellStyle2;
			this->col0->HeaderText = L"Col0";
			this->col0->MaxInputLength = 30;
			this->col0->MinimumWidth = 6;
			this->col0->Name = L"col0";
			this->col0->Visible = false;
			// 
			// col1
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->col1->DefaultCellStyle = dataGridViewCellStyle3;
			this->col1->HeaderText = L"Col1";
			this->col1->MaxInputLength = 60;
			this->col1->MinimumWidth = 6;
			this->col1->Name = L"col1";
			this->col1->Visible = false;
			// 
			// col2
			// 
			this->col2->HeaderText = L"Col2";
			this->col2->MaxInputLength = 10;
			this->col2->MinimumWidth = 6;
			this->col2->Name = L"col2";
			this->col2->Visible = false;
			// 
			// col3
			// 
			this->col3->HeaderText = L"Col3";
			this->col3->MaxInputLength = 60;
			this->col3->MinimumWidth = 6;
			this->col3->Name = L"col3";
			this->col3->Visible = false;
			// 
			// Col4
			// 
			this->Col4->HeaderText = L"Col4";
			this->Col4->MinimumWidth = 6;
			this->Col4->Name = L"Col4";
			this->Col4->Visible = false;
			// 
			// Col5
			// 
			this->Col5->HeaderText = L"Col5";
			this->Col5->MinimumWidth = 6;
			this->Col5->Name = L"Col5";
			this->Col5->Visible = false;
			// 
			// gbOpciones
			// 
			this->gbOpciones->BackColor = System::Drawing::Color::Transparent;
			this->gbOpciones->Controls->Add(this->rbRetiros);
			this->gbOpciones->Controls->Add(this->rbVentas);
			this->gbOpciones->Controls->Add(this->rbCompras);
			this->gbOpciones->Controls->Add(this->rbGanancia);
			this->gbOpciones->Controls->Add(this->rbInversion);
			this->gbOpciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbOpciones->ForeColor = System::Drawing::Color::Peru;
			this->gbOpciones->Location = System::Drawing::Point(23, 177);
			this->gbOpciones->Name = L"gbOpciones";
			this->gbOpciones->Size = System::Drawing::Size(382, 203);
			this->gbOpciones->TabIndex = 89;
			this->gbOpciones->TabStop = false;
			this->gbOpciones->Text = L"Opciones de Reporte";
			// 
			// rbRetiros
			// 
			this->rbRetiros->AutoSize = true;
			this->rbRetiros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbRetiros->ForeColor = System::Drawing::Color::BurlyWood;
			this->rbRetiros->Location = System::Drawing::Point(12, 154);
			this->rbRetiros->Name = L"rbRetiros";
			this->rbRetiros->Size = System::Drawing::Size(111, 33);
			this->rbRetiros->TabIndex = 99;
			this->rbRetiros->TabStop = true;
			this->rbRetiros->Text = L"Retiros";
			this->rbRetiros->UseVisualStyleBackColor = true;
			// 
			// rbVentas
			// 
			this->rbVentas->AutoSize = true;
			this->rbVentas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbVentas->ForeColor = System::Drawing::Color::BurlyWood;
			this->rbVentas->Location = System::Drawing::Point(12, 125);
			this->rbVentas->Name = L"rbVentas";
			this->rbVentas->Size = System::Drawing::Size(107, 33);
			this->rbVentas->TabIndex = 98;
			this->rbVentas->TabStop = true;
			this->rbVentas->Text = L"Ventas";
			this->rbVentas->UseVisualStyleBackColor = true;
			// 
			// rbCompras
			// 
			this->rbCompras->AutoSize = true;
			this->rbCompras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbCompras->ForeColor = System::Drawing::Color::BurlyWood;
			this->rbCompras->Location = System::Drawing::Point(12, 96);
			this->rbCompras->Name = L"rbCompras";
			this->rbCompras->Size = System::Drawing::Size(132, 33);
			this->rbCompras->TabIndex = 97;
			this->rbCompras->TabStop = true;
			this->rbCompras->Text = L"Compras";
			this->rbCompras->UseVisualStyleBackColor = true;
			// 
			// rbGanancia
			// 
			this->rbGanancia->AutoSize = true;
			this->rbGanancia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbGanancia->ForeColor = System::Drawing::Color::BurlyWood;
			this->rbGanancia->Location = System::Drawing::Point(12, 66);
			this->rbGanancia->Name = L"rbGanancia";
			this->rbGanancia->Size = System::Drawing::Size(135, 33);
			this->rbGanancia->TabIndex = 96;
			this->rbGanancia->TabStop = true;
			this->rbGanancia->Text = L"Ganancia";
			this->rbGanancia->UseVisualStyleBackColor = true;
			// 
			// rbInversion
			// 
			this->rbInversion->AutoSize = true;
			this->rbInversion->Checked = true;
			this->rbInversion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbInversion->ForeColor = System::Drawing::Color::BurlyWood;
			this->rbInversion->Location = System::Drawing::Point(12, 35);
			this->rbInversion->Name = L"rbInversion";
			this->rbInversion->Size = System::Drawing::Size(131, 33);
			this->rbInversion->TabIndex = 95;
			this->rbInversion->TabStop = true;
			this->rbInversion->Text = L"Inversion";
			this->rbInversion->UseVisualStyleBackColor = true;
			// 
			// gbPeriodo
			// 
			this->gbPeriodo->BackColor = System::Drawing::Color::Transparent;
			this->gbPeriodo->Controls->Add(this->rbSemanal);
			this->gbPeriodo->Controls->Add(this->radioButton1);
			this->gbPeriodo->Controls->Add(this->rbMensual);
			this->gbPeriodo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbPeriodo->ForeColor = System::Drawing::Color::Peru;
			this->gbPeriodo->Location = System::Drawing::Point(23, 400);
			this->gbPeriodo->Name = L"gbPeriodo";
			this->gbPeriodo->Size = System::Drawing::Size(382, 130);
			this->gbPeriodo->TabIndex = 92;
			this->gbPeriodo->TabStop = false;
			this->gbPeriodo->Text = L"Elige un Periodo de Muestreo";
			// 
			// rbSemanal
			// 
			this->rbSemanal->AutoSize = true;
			this->rbSemanal->Checked = true;
			this->rbSemanal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbSemanal->ForeColor = System::Drawing::Color::Tan;
			this->rbSemanal->Location = System::Drawing::Point(12, 30);
			this->rbSemanal->Name = L"rbSemanal";
			this->rbSemanal->Size = System::Drawing::Size(129, 33);
			this->rbSemanal->TabIndex = 102;
			this->rbSemanal->TabStop = true;
			this->rbSemanal->Text = L"Semanal";
			this->rbSemanal->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->ForeColor = System::Drawing::Color::Tan;
			this->radioButton1->Location = System::Drawing::Point(12, 85);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(94, 33);
			this->radioButton1->TabIndex = 101;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Anual";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// rbMensual
			// 
			this->rbMensual->AutoSize = true;
			this->rbMensual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbMensual->ForeColor = System::Drawing::Color::Tan;
			this->rbMensual->Location = System::Drawing::Point(12, 57);
			this->rbMensual->Name = L"rbMensual";
			this->rbMensual->Size = System::Drawing::Size(125, 33);
			this->rbMensual->TabIndex = 100;
			this->rbMensual->TabStop = true;
			this->rbMensual->Text = L"Mensual";
			this->rbMensual->UseVisualStyleBackColor = true;
			// 
			// dtpInicial
			// 
			this->dtpInicial->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpInicial->CustomFormat = L"dd -MMM- yyyy";
			this->dtpInicial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpInicial->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpInicial->Location = System::Drawing::Point(23, 580);
			this->dtpInicial->MaxDate = System::DateTime(2060, 12, 31, 0, 0, 0, 0);
			this->dtpInicial->MinDate = System::DateTime(2020, 12, 1, 0, 0, 0, 0);
			this->dtpInicial->Name = L"dtpInicial";
			this->dtpInicial->Size = System::Drawing::Size(188, 30);
			this->dtpInicial->TabIndex = 93;
			this->dtpInicial->Value = System::DateTime(2021, 1, 1, 0, 0, 0, 0);
			// 
			// dtpFinal
			// 
			this->dtpFinal->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpFinal->CustomFormat = L"dd -MMM- yyyy";
			this->dtpFinal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpFinal->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dtpFinal->Location = System::Drawing::Point(217, 580);
			this->dtpFinal->MaxDate = System::DateTime(2060, 12, 31, 0, 0, 0, 0);
			this->dtpFinal->MinDate = System::DateTime(2020, 12, 1, 0, 0, 0, 0);
			this->dtpFinal->Name = L"dtpFinal";
			this->dtpFinal->Size = System::Drawing::Size(188, 30);
			this->dtpFinal->TabIndex = 94;
			this->dtpFinal->Value = System::DateTime(2021, 12, 25, 23, 59, 59, 0);
			// 
			// lblFechaIni
			// 
			this->lblFechaIni->AutoSize = true;
			this->lblFechaIni->BackColor = System::Drawing::Color::Transparent;
			this->lblFechaIni->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblFechaIni->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFechaIni->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblFechaIni->Location = System::Drawing::Point(22, 544);
			this->lblFechaIni->Name = L"lblFechaIni";
			this->lblFechaIni->Size = System::Drawing::Size(142, 23);
			this->lblFechaIni->TabIndex = 95;
			this->lblFechaIni->Text = L"Fecha Inicial";
			// 
			// lblFechaFinal
			// 
			this->lblFechaFinal->AutoSize = true;
			this->lblFechaFinal->BackColor = System::Drawing::Color::Transparent;
			this->lblFechaFinal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblFechaFinal->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFechaFinal->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblFechaFinal->Location = System::Drawing::Point(212, 544);
			this->lblFechaFinal->Name = L"lblFechaFinal";
			this->lblFechaFinal->Size = System::Drawing::Size(129, 23);
			this->lblFechaFinal->TabIndex = 96;
			this->lblFechaFinal->Text = L"Fecha Final";
			// 
			// btnEjecutar
			// 
			this->btnEjecutar->BackColor = System::Drawing::Color::Transparent;
			this->btnEjecutar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEjecutar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnEjecutar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEjecutar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEjecutar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEjecutar->Location = System::Drawing::Point(23, 627);
			this->btnEjecutar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEjecutar->Name = L"btnEjecutar";
			this->btnEjecutar->Size = System::Drawing::Size(382, 50);
			this->btnEjecutar->TabIndex = 97;
			this->btnEjecutar->Text = L"Ejecutar";
			this->btnEjecutar->UseVisualStyleBackColor = false;
			this->btnEjecutar->Click += gcnew System::EventHandler(this, &ReportesForm::btnEjecutar_Click);
			// 
			// ReportesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1157, 688);
			this->Controls->Add(this->btnEjecutar);
			this->Controls->Add(this->lblFechaFinal);
			this->Controls->Add(this->lblFechaIni);
			this->Controls->Add(this->dtpFinal);
			this->Controls->Add(this->dtpInicial);
			this->Controls->Add(this->gbPeriodo);
			this->Controls->Add(this->gbOpciones);
			this->Controls->Add(this->lblTituloDgv);
			this->Controls->Add(this->lblGetFecha);
			this->Controls->Add(this->labelFecha);
			this->Controls->Add(this->lblGetDinero);
			this->Controls->Add(this->labelCapital);
			this->Controls->Add(this->dgvVistaAlm);
			this->Name = L"ReportesForm";
			this->Text = L"Reportes";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaAlm))->EndInit();
			this->gbOpciones->ResumeLayout(false);
			this->gbOpciones->PerformLayout();
			this->gbPeriodo->ResumeLayout(false);
			this->gbPeriodo->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Boolean ejecutarConsulta();
    private: System::Void	 cargarInversionDgv();
    private: System::Void	 cargarGananciaDgv();
    private: System::Void	 cargarComprasDgv(); // Se carga la consulta EstaditicaCompras
    private: System::Void	 cargarVentasDgv(); // Se carga la consulta EstaditicaVentas
    private: System::Void	 cargarRetirosDgv(); // Se carga la consulta EstaditicaRetiros
    private: System::Void	 limpiarDgv();

	private: System::Void btnEjecutar_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::Windows::Forms::DialogResult respuesta = MessageBox::Show("Son correctos esos datos a modificar?",
			"Opciones", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (respuesta == System::Windows::Forms::DialogResult::Yes)
		{
			ejecutarConsulta();
			MessageBox::Show("La operacion se ejecuto con existo.", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::None);
		}
		else
		{
			MessageBox::Show("Elige las Opciones que deseas", "Elegir", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
};
}
