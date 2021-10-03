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
	/// Resumen de DepositoForm
	/// </summary>
	public ref class DepositoForm : public System::Windows::Forms::Form
	{
	public:
		DepositoForm(void)
		{
			procedimiento = gcnew ProcedimentosController();
			controlador = gcnew ControladorGeneral();
			vistas = gcnew VistasController();
			consulta = gcnew List<Fila^>;
			datos = gcnew List<String^>;
			consulta = vistas->vistaDepositosCtr();//---> Carga la consulta al inicio del programa.
			
			InitializeComponent();
			
			this->lblGetDinero->Text=procedimiento->getCapitalActual();
			fechaActual = fechaActual.Now;
			this->lblGetFecha->Text = fechaActual.ToShortDateString();// Para mostrar la fehca actual al usuario
			this->lblGetActual->Text = this->lblGetDinero->Text;
			punto = false;
			contador = 0;
			
			cargarDgv(consulta);//--> Se carga la consulta en el DGV
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DepositoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\\
	// ----------Variables declaradas por el programador------------\\

	private:
		VistasController^ vistas;
		ProcedimentosController^ procedimiento;
		ControladorGeneral^ controlador;
		Boolean punto;
		DateTime fechaActual;
		Int16 contador;
		List<Fila^>^ consulta;
		List<String^>^ datos;

		//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\\
	
	private: System::Windows::Forms::Label^ labelCapital;
	private: System::Windows::Forms::Label^ lblGetDinero;
	private: System::Windows::Forms::Label^ labelFecha;
	public: System::Windows::Forms::Label^ lblGetFecha;
	private: System::Windows::Forms::Button^ btnDepositar;
	private: System::Windows::Forms::Button^ btnBorrar;
	private: System::Windows::Forms::Label^ lblCapActual;
	private: System::Windows::Forms::Label^ lblGetActual;
	private: System::Windows::Forms::DataGridView^ dgvVistaDepo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cantidad;
	private: System::Windows::Forms::TextBox^ textBoxDeposito;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblFechaDepo;
	private: System::Windows::Forms::DateTimePicker^ dtpSetfecha;
	private: System::Windows::Forms::GroupBox^ gbDeposito;
	private: System::Windows::Forms::Label^ lblTitulDep;
	private: System::Windows::Forms::Button^ btnEditar;
	private: System::ComponentModel::IContainer^ components;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->labelCapital = (gcnew System::Windows::Forms::Label());
			this->lblGetDinero = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->lblGetFecha = (gcnew System::Windows::Forms::Label());
			this->btnDepositar = (gcnew System::Windows::Forms::Button());
			this->btnBorrar = (gcnew System::Windows::Forms::Button());
			this->lblCapActual = (gcnew System::Windows::Forms::Label());
			this->lblGetActual = (gcnew System::Windows::Forms::Label());
			this->dgvVistaDepo = (gcnew System::Windows::Forms::DataGridView());
			this->tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBoxDeposito = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblFechaDepo = (gcnew System::Windows::Forms::Label());
			this->dtpSetfecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->gbDeposito = (gcnew System::Windows::Forms::GroupBox());
			this->lblTitulDep = (gcnew System::Windows::Forms::Label());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaDepo))->BeginInit();
			this->gbDeposito->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelCapital
			// 
			this->labelCapital->AutoSize = true;
			this->labelCapital->BackColor = System::Drawing::Color::Transparent;
			this->labelCapital->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->labelCapital->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelCapital->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->labelCapital->Location = System::Drawing::Point(93, 50);
			this->labelCapital->Name = L"labelCapital";
			this->labelCapital->Size = System::Drawing::Size(134, 32);
			this->labelCapital->TabIndex = 0;
			this->labelCapital->Text = L"Capital: ";
			// 
			// lblGetDinero
			// 
			this->lblGetDinero->AutoSize = true;
			this->lblGetDinero->BackColor = System::Drawing::Color::Transparent;
			this->lblGetDinero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetDinero->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetDinero->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetDinero->Location = System::Drawing::Point(257, 50);
			this->lblGetDinero->Name = L"lblGetDinero";
			this->lblGetDinero->Size = System::Drawing::Size(155, 33);
			this->lblGetDinero->TabIndex = 1;
			this->lblGetDinero->Text = L"$ 1,500.00 ";
			// 
			// labelFecha
			// 
			this->labelFecha->AutoSize = true;
			this->labelFecha->BackColor = System::Drawing::Color::Transparent;
			this->labelFecha->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->labelFecha->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelFecha->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->labelFecha->Location = System::Drawing::Point(647, 51);
			this->labelFecha->Name = L"labelFecha";
			this->labelFecha->Size = System::Drawing::Size(115, 32);
			this->labelFecha->TabIndex = 2;
			this->labelFecha->Text = L"Fecha: ";
			// 
			// lblGetFecha
			// 
			this->lblGetFecha->AutoSize = true;
			this->lblGetFecha->BackColor = System::Drawing::Color::Transparent;
			this->lblGetFecha->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetFecha->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetFecha->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetFecha->Location = System::Drawing::Point(800, 50);
			this->lblGetFecha->Name = L"lblGetFecha";
			this->lblGetFecha->Size = System::Drawing::Size(0, 33);
			this->lblGetFecha->TabIndex = 3;
			// 
			// btnDepositar
			// 
			this->btnDepositar->BackColor = System::Drawing::Color::Transparent;
			this->btnDepositar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDepositar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnDepositar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDepositar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDepositar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDepositar->Location = System::Drawing::Point(18, 490);
			this->btnDepositar->Name = L"btnDepositar";
			this->btnDepositar->Size = System::Drawing::Size(150, 50);
			this->btnDepositar->TabIndex = 6;
			this->btnDepositar->Text = L"Depositar";
			this->btnDepositar->UseVisualStyleBackColor = false;
			this->btnDepositar->Click += gcnew System::EventHandler(this, &DepositoForm::btnDepositar_Click);
			// 
			// btnBorrar
			// 
			this->btnBorrar->BackColor = System::Drawing::Color::Transparent;
			this->btnBorrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnBorrar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumVioletRed;
			this->btnBorrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBorrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBorrar->Location = System::Drawing::Point(174, 490);
			this->btnBorrar->Name = L"btnBorrar";
			this->btnBorrar->Size = System::Drawing::Size(150, 50);
			this->btnBorrar->TabIndex = 7;
			this->btnBorrar->Text = L"Limpiar";
			this->btnBorrar->UseVisualStyleBackColor = false;
			this->btnBorrar->Click += gcnew System::EventHandler(this, &DepositoForm::btnBorrar_Click);
			// 
			// lblCapActual
			// 
			this->lblCapActual->AutoSize = true;
			this->lblCapActual->BackColor = System::Drawing::Color::Transparent;
			this->lblCapActual->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblCapActual->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCapActual->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblCapActual->Location = System::Drawing::Point(12, 113);
			this->lblCapActual->Name = L"lblCapActual";
			this->lblCapActual->Size = System::Drawing::Size(235, 32);
			this->lblCapActual->TabIndex = 9;
			this->lblCapActual->Text = L"Capital Actual: ";
			// 
			// lblGetActual
			// 
			this->lblGetActual->AutoSize = true;
			this->lblGetActual->BackColor = System::Drawing::Color::Transparent;
			this->lblGetActual->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetActual->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetActual->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->lblGetActual->Location = System::Drawing::Point(257, 112);
			this->lblGetActual->Name = L"lblGetActual";
			this->lblGetActual->Size = System::Drawing::Size(155, 33);
			this->lblGetActual->TabIndex = 10;
			this->lblGetActual->Text = L"$ 1,500.00 ";
			// 
			// dgvVistaDepo
			// 
			this->dgvVistaDepo->AllowUserToAddRows = false;
			this->dgvVistaDepo->AllowUserToDeleteRows = false;
			this->dgvVistaDepo->AllowUserToResizeRows = false;
			this->dgvVistaDepo->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvVistaDepo->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dgvVistaDepo->BackgroundColor = System::Drawing::SystemColors::Desktop;
			this->dgvVistaDepo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::DarkGoldenrod;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvVistaDepo->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvVistaDepo->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvVistaDepo->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->tipo, this->fecha,
					this->cantidad
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvVistaDepo->DefaultCellStyle = dataGridViewCellStyle3;
			this->dgvVistaDepo->EnableHeadersVisualStyles = false;
			this->dgvVistaDepo->GridColor = System::Drawing::Color::DarkGoldenrod;
			this->dgvVistaDepo->Location = System::Drawing::Point(484, 236);
			this->dgvVistaDepo->Name = L"dgvVistaDepo";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::WindowFrame;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvVistaDepo->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dgvVistaDepo->RowHeadersVisible = false;
			this->dgvVistaDepo->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(137)));
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvVistaDepo->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dgvVistaDepo->RowTemplate->Height = 24;
			this->dgvVistaDepo->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvVistaDepo->Size = System::Drawing::Size(648, 387);
			this->dgvVistaDepo->TabIndex = 37;
			this->dgvVistaDepo->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DepositoForm::dgvVistaDepo_CellClick);
			// 
			// tipo
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->tipo->DefaultCellStyle = dataGridViewCellStyle2;
			this->tipo->HeaderText = L"Tipo";
			this->tipo->MaxInputLength = 10;
			this->tipo->MinimumWidth = 6;
			this->tipo->Name = L"tipo";
			// 
			// fecha
			// 
			this->fecha->HeaderText = L"Fecha";
			this->fecha->MaxInputLength = 30;
			this->fecha->MinimumWidth = 6;
			this->fecha->Name = L"fecha";
			// 
			// cantidad
			// 
			this->cantidad->HeaderText = L"Cantidad";
			this->cantidad->MaxInputLength = 10;
			this->cantidad->MinimumWidth = 6;
			this->cantidad->Name = L"cantidad";
			// 
			// textBoxDeposito
			// 
			this->textBoxDeposito->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBoxDeposito->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxDeposito->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxDeposito->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDeposito->Location = System::Drawing::Point(199, 56);
			this->textBoxDeposito->MaxLength = 10;
			this->textBoxDeposito->Name = L"textBoxDeposito";
			this->textBoxDeposito->Size = System::Drawing::Size(243, 32);
			this->textBoxDeposito->TabIndex = 4;
			this->textBoxDeposito->Text = L"0 ";
			this->textBoxDeposito->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxDeposito->TextChanged += gcnew System::EventHandler(this, &DepositoForm::textBoxDeposito_TextChanged);
			this->textBoxDeposito->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &DepositoForm::textBoxDeposito_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->Location = System::Drawing::Point(20, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 32);
			this->label1->TabIndex = 5;
			this->label1->Text = L"*Cantidad";
			// 
			// lblFechaDepo
			// 
			this->lblFechaDepo->AutoSize = true;
			this->lblFechaDepo->BackColor = System::Drawing::Color::Transparent;
			this->lblFechaDepo->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblFechaDepo->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFechaDepo->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblFechaDepo->Location = System::Drawing::Point(59, 116);
			this->lblFechaDepo->Name = L"lblFechaDepo";
			this->lblFechaDepo->Size = System::Drawing::Size(121, 32);
			this->lblFechaDepo->TabIndex = 25;
			this->lblFechaDepo->Text = L"*Fecha ";
			this->lblFechaDepo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dtpSetfecha
			// 
			this->dtpSetfecha->CalendarFont = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpSetfecha->CalendarMonthBackground = System::Drawing::SystemColors::MenuHighlight;
			this->dtpSetfecha->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dtpSetfecha->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
			this->dtpSetfecha->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F));
			this->dtpSetfecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpSetfecha->Location = System::Drawing::Point(199, 109);
			this->dtpSetfecha->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpSetfecha->Name = L"dtpSetfecha";
			this->dtpSetfecha->Size = System::Drawing::Size(243, 39);
			this->dtpSetfecha->TabIndex = 24;
			// 
			// gbDeposito
			// 
			this->gbDeposito->BackColor = System::Drawing::Color::Transparent;
			this->gbDeposito->Controls->Add(this->label1);
			this->gbDeposito->Controls->Add(this->textBoxDeposito);
			this->gbDeposito->Controls->Add(this->dtpSetfecha);
			this->gbDeposito->Controls->Add(this->lblFechaDepo);
			this->gbDeposito->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->gbDeposito->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbDeposito->ForeColor = System::Drawing::Color::Peru;
			this->gbDeposito->Location = System::Drawing::Point(18, 260);
			this->gbDeposito->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbDeposito->Name = L"gbDeposito";
			this->gbDeposito->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbDeposito->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gbDeposito->Size = System::Drawing::Size(460, 199);
			this->gbDeposito->TabIndex = 44;
			this->gbDeposito->TabStop = false;
			this->gbDeposito->Text = L"Datos del Deposito";
			// 
			// lblTitulDep
			// 
			this->lblTitulDep->AutoSize = true;
			this->lblTitulDep->BackColor = System::Drawing::Color::Transparent;
			this->lblTitulDep->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblTitulDep->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulDep->ForeColor = System::Drawing::Color::Peru;
			this->lblTitulDep->Location = System::Drawing::Point(663, 187);
			this->lblTitulDep->Name = L"lblTitulDep";
			this->lblTitulDep->Size = System::Drawing::Size(309, 33);
			this->lblTitulDep->TabIndex = 45;
			this->lblTitulDep->Text = L"Depositos Realizados";
			// 
			// btnEditar
			// 
			this->btnEditar->BackColor = System::Drawing::Color::Transparent;
			this->btnEditar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::SteelBlue;
			this->btnEditar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEditar->Location = System::Drawing::Point(328, 490);
			this->btnEditar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(150, 50);
			this->btnEditar->TabIndex = 46;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = false;
			this->btnEditar->Click += gcnew System::EventHandler(this, &DepositoForm::btnEditar_Click);
			// 
			// DepositoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1144, 656);
			this->Controls->Add(this->btnEditar);
			this->Controls->Add(this->lblTitulDep);
			this->Controls->Add(this->gbDeposito);
			this->Controls->Add(this->dgvVistaDepo);
			this->Controls->Add(this->lblGetActual);
			this->Controls->Add(this->lblCapActual);
			this->Controls->Add(this->btnBorrar);
			this->Controls->Add(this->btnDepositar);
			this->Controls->Add(this->lblGetFecha);
			this->Controls->Add(this->labelFecha);
			this->Controls->Add(this->lblGetDinero);
			this->Controls->Add(this->labelCapital);
			this->KeyPreview = true;
			this->Name = L"DepositoForm";
			this->Text = L"Deposito";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaDepo))->EndInit();
			this->gbDeposito->ResumeLayout(false);
			this->gbDeposito->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void cargarDgv(List<Fila^>^);
	private: System::Void limpiarDgv();// Elimina todos las filas del dgv.
	private: System::Void limpiar();// Elimina todos las filas del dgv.
	private: System::Boolean ejecutarEditar();//--> Devuelve true si ejecuta el procedimiento almacenado o false si no se ejecuto.


private: System::Void textBoxDeposito_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	//1.- Validar mediante un procedimiento que es un numero lo que ingreso
	//2.- Validar cuando entre un punto y solo puede ingresar uno
	//3.- Despues de ingresar el punto solo pueden ingresar 2 numeros mas.
	

	for each (wchar_t caracter in this->textBoxDeposito->Text)// Recorre toda al cadena en busca de un punto.
	{
		if (Char::IsPunctuation(caracter))
		{
			// Si encuentra un punto en la cadana de texto entra y ejecuta las instrucciones.
			punto = true;
			break;
		}
		else
			punto = false;
	}


	if (punto == true)
	{

		if (controlador->esNumero(e->KeyChar) || Char::IsControl(e->KeyChar))
		{
			e->Handled = false;// Perminte ingresar el caracter.
			return;
		}
		else
		{
			e->Handled = true; // no permite ingresar el caracter
			return;
		}
	}
	else
	{
		if (controlador->esNumero(e->KeyChar) || Char::IsControl(e->KeyChar) || Char::IsPunctuation(e->KeyChar))
		{	// numero								Back Space						Punto .
			e->Handled = false;// Perminte ingresar el caracter.
			return;
		}
		else
		{
			e->Handled = true; // no permite ingresar el caracter
			return;
		}

	}
	return;
}
private: System::Void textBoxDeposito_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	String^ cadena= controlador->suma(this->textBoxDeposito->Text, this->lblGetDinero->Text);
	

	this->textBoxDeposito->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
	if (String::Compare(cadena, "E0000") != 0)
			this->lblGetActual->Text = cadena; //----------------> Si el metodo suma no contiene errores envia la suma de los numeros.
	else
		this->lblGetActual->Text = this->lblGetDinero->Text; //--> Entra cuando uno de los numeros a sumar ingresa vacio.

	
}
private: System::Void btnBorrar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	limpiar();
	//contador = 0;
	//punto = 0;
	//this->textBoxDeposito->Text = "0";
	//this->textBoxDeposito->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
	//
}
private: System::Void btnDepositar_Click(System::Object^ sender, System::EventArgs^ e)
{

	
	Double r=r.Parse(this->textBoxDeposito->Text);
	
	if (r>1)
	{
		
		System::Windows::Forms::DialogResult res = MessageBox::Show("Quieres depositar esa cantidad","Opciones", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		
		if (res== System::Windows::Forms::DialogResult::Yes)
		{
			if (procedimiento->depositar(this->textBoxDeposito->Text, fechaActual))
			{
				MessageBox::Show("Se inserto correctamente","Correcto",MessageBoxButtons::OK, MessageBoxIcon::None);
				
				this->lblGetDinero->Text = procedimiento->getCapitalActual();
				this->lblGetActual->Text = this->lblGetDinero->Text;
				limpiar();
				limpiarDgv();
				consulta->Clear();
				consulta=vistas->vistaDepositosCtr();
				cargarDgv(consulta);
			
			}

			else
				MessageBox::Show("Ha ocurrdio un error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	
	}
	else
		MessageBox::Show("La cantidad debe ser mayor a 1", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	
}
private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	if (datos->Count > 1)
	{// Entra porque ya se eligio alguna fila del data grid view.

		if (controlador->vacio(textBoxDeposito->Text))
			textBoxDeposito->Text = "0";// Si el texto box esta vacio se le asigna 0.

		if (Double::Parse(textBoxDeposito->Text)>0)
		{
			//Ejecuta porque la cantidad que se quiere cambiar es mayor que 0

			System::Windows::Forms::DialogResult respuesta = MessageBox::Show("Son correctos esos datos a modificar?",
				"Opciones", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (respuesta == System::Windows::Forms::DialogResult::Yes)
			{


				ejecutarEditar();
				MessageBox::Show("La operacion se ejecuto con existo.", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::None);
				limpiar();
				limpiarDgv();
				consulta->Clear();
				consulta = vistas->vistaDepositosCtr();
				cargarDgv(consulta);
				this->lblGetDinero->Text = procedimiento->getCapitalActual();
				this->btnDepositar->Enabled = true;
			}
			else
			{
				MessageBox::Show("Elige la fila que deseas", "Elegir", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
		else
			MessageBox::Show("La cantidad debe de ser mayor que 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	else
	{
		// El usuario no ha elegido ninguna fila del dgv.

		MessageBox::Show("No has eligido ninguna fila", "Elegir", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void dgvVistaDepo_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	//Copia lo que está en el dgv y los inserta en los text box
	//Copia los datos del dgv a una lista.

	datos->Clear();// Elimina todo lo que haya en la lista de datos.
	this->btnDepositar->Enabled = false;// No permite registrar depositos mientras se esta editando. 
	this->gbDeposito->Text = "Datos a Modificar";
	this->gbDeposito->ForeColor = System::Drawing::Color::SteelBlue;
	


	// Se copian los datos de la fila seleccionada a los textboxs de la pantalla.

	this->dtpSetfecha->Text = this->dgvVistaDepo->CurrentRow->Cells[1]->Value->ToString();
	this->textBoxDeposito->Text = this->dgvVistaDepo->CurrentRow->Cells[2]->Value->ToString();
	
	
	// Se guardan los datos en un contenedor.

	datos->Add(this->dgvVistaDepo->CurrentRow->Cells[0]->Value->ToString());
	datos->Add(this->dgvVistaDepo->CurrentRow->Cells[1]->Value->ToString());
	datos->Add(this->dgvVistaDepo->CurrentRow->Cells[2]->Value->ToString());
	datos->Add(this->dgvVistaDepo->CurrentRow->Cells[3]->Value->ToString());// Se copia el id
	
}
};
}
