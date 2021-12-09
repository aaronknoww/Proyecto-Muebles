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
	/// Resumen de VentaForm
	/// </summary>
	public ref class VentaForm : public System::Windows::Forms::Form
	{
	public:
		VentaForm(void)
		{
			procedimiento = gcnew ProcedimentosController();
			controlador = gcnew ControladorGeneral();
			vistaInventario = gcnew VistasController();
			vistaVentas = gcnew VistasController();
			datos = gcnew List<String^>;
			inventario = gcnew List<Fila^>;
			resultado = gcnew List<Fila^>;
			ventasReg = gcnew List<Fila^>;
			
			actualizar = false;
			inventario = vistaInventario->vistaInventarioCtr();//---> Carga la consulta inventario.
			ventasReg = vistaVentas->vistaVentasCtr(); //--> Se carga la consulta ventasView

			InitializeComponent();
			
			this->txbSetPrecio->Enabled = false;
			this->txbSetDescVenta->Enabled = false;
			this->dtpSetfecha->Enabled = false;
			fechaActual = fechaActual.Now;
			this->lblGetDinero->Text = procedimiento->getCapitalActual();
			this->lblGetFecha->Text = fechaActual.ToShortDateString();// Para mostrar la fehca actual al usuario
								
			cargarDgv(inventario);
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~VentaForm()
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
		
		ProcedimentosController^ procedimiento;
		ControladorGeneral^ controlador;
		VistasController^ vistaInventario; // Punetero para llamar la consulta invetarioView 
		VistasController^ vistaVentas; // Punetero para poder llamar a la vista ventasView.
		Boolean punto;
		Boolean actualizar; //---------> Se pone en verdadero cuando se muestran las ventas registradas.
		DateTime fechaActual;
		Int16 contador;
		List<String^>^ datos;
		List<Fila^>^ inventario;//----->Guarda lo que arroja la vista almacenada inventarioView.
		List<Fila^>^ ventasReg;//------>Guarda lo que arroja la vista ventas.
		List<Fila^>^ resultado;//------>Guarda las filas que cumplan con cierto criterio.
		


	private: System::Windows::Forms::DataGridView^ dgvVistaAlm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombreMue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ desMueble;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ costoCompra;
	private: System::Windows::Forms::Label^ lblFiltrar;
	private: System::Windows::Forms::TextBox^ txbFiltrar;
	public: System::Windows::Forms::Label^ lblGetFecha;
	private:
	private: System::Windows::Forms::Label^ labelFecha;
	public:
	private: System::Windows::Forms::Label^ lblGetDinero;
	private: System::Windows::Forms::Label^ labelCapital;
	private: System::Windows::Forms::GroupBox^ gbMueble;
	private: System::Windows::Forms::Label^ lblDescMue;
	private: System::Windows::Forms::TextBox^ txbSetDescMue;
	private: System::Windows::Forms::Label^ lblNomMueble;
	private: System::Windows::Forms::TextBox^ txbSetNomMue;
	private: System::Windows::Forms::GroupBox^ gbVenta;

	private: System::Windows::Forms::DateTimePicker^ dtpSetfecha;
	private: System::Windows::Forms::Label^ lblDesVenta;
	private: System::Windows::Forms::Label^ lblFechaVenta;
	private: System::Windows::Forms::TextBox^ txbSetDescVenta;
	private: System::Windows::Forms::Label^ lblCosto;
	private: System::Windows::Forms::TextBox^ txbSetPrecio;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnVender;
	private: System::Windows::Forms::Label^ lblTituloDgv;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::Button^ btnEditar;
	private: System::Windows::Forms::Button^ btnCancelar;

		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dgvVistaAlm = (gcnew System::Windows::Forms::DataGridView());
			this->nombreMue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->desMueble = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->costoCompra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblFiltrar = (gcnew System::Windows::Forms::Label());
			this->txbFiltrar = (gcnew System::Windows::Forms::TextBox());
			this->lblGetFecha = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->lblGetDinero = (gcnew System::Windows::Forms::Label());
			this->labelCapital = (gcnew System::Windows::Forms::Label());
			this->gbMueble = (gcnew System::Windows::Forms::GroupBox());
			this->lblDescMue = (gcnew System::Windows::Forms::Label());
			this->txbSetDescMue = (gcnew System::Windows::Forms::TextBox());
			this->lblNomMueble = (gcnew System::Windows::Forms::Label());
			this->txbSetNomMue = (gcnew System::Windows::Forms::TextBox());
			this->gbVenta = (gcnew System::Windows::Forms::GroupBox());
			this->dtpSetfecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblDesVenta = (gcnew System::Windows::Forms::Label());
			this->lblFechaVenta = (gcnew System::Windows::Forms::Label());
			this->txbSetDescVenta = (gcnew System::Windows::Forms::TextBox());
			this->lblCosto = (gcnew System::Windows::Forms::Label());
			this->txbSetPrecio = (gcnew System::Windows::Forms::TextBox());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnVender = (gcnew System::Windows::Forms::Button());
			this->lblTituloDgv = (gcnew System::Windows::Forms::Label());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaAlm))->BeginInit();
			this->gbMueble->SuspendLayout();
			this->gbVenta->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgvVistaAlm
			// 
			this->dgvVistaAlm->AllowUserToAddRows = false;
			this->dgvVistaAlm->AllowUserToDeleteRows = false;
			this->dgvVistaAlm->AllowUserToResizeRows = false;
			this->dgvVistaAlm->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvVistaAlm->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dgvVistaAlm->BackgroundColor = System::Drawing::SystemColors::Desktop;
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
			this->dgvVistaAlm->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->nombreMue,
					this->desMueble, this->fecha, this->costoCompra
			});
			this->dgvVistaAlm->EnableHeadersVisualStyles = false;
			this->dgvVistaAlm->GridColor = System::Drawing::Color::DarkGoldenrod;
			this->dgvVistaAlm->Location = System::Drawing::Point(493, 149);
			this->dgvVistaAlm->Name = L"dgvVistaAlm";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::WindowFrame;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvVistaAlm->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvVistaAlm->RowHeadersVisible = false;
			this->dgvVistaAlm->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(137)));
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvVistaAlm->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dgvVistaAlm->RowTemplate->Height = 24;
			this->dgvVistaAlm->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvVistaAlm->Size = System::Drawing::Size(657, 367);
			this->dgvVistaAlm->TabIndex = 36;
			this->dgvVistaAlm->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VentaForm::dgvVistaAlm_CellClick);
			// 
			// nombreMue
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->nombreMue->DefaultCellStyle = dataGridViewCellStyle2;
			this->nombreMue->HeaderText = L"Nombre";
			this->nombreMue->MaxInputLength = 30;
			this->nombreMue->MinimumWidth = 6;
			this->nombreMue->Name = L"nombreMue";
			// 
			// desMueble
			// 
			this->desMueble->HeaderText = L"Descripcion";
			this->desMueble->MaxInputLength = 60;
			this->desMueble->MinimumWidth = 6;
			this->desMueble->Name = L"desMueble";
			// 
			// fecha
			// 
			this->fecha->HeaderText = L"Costo Final";
			this->fecha->MaxInputLength = 10;
			this->fecha->MinimumWidth = 6;
			this->fecha->Name = L"fecha";
			// 
			// costoCompra
			// 
			this->costoCompra->HeaderText = L"Fecha";
			this->costoCompra->MaxInputLength = 60;
			this->costoCompra->MinimumWidth = 6;
			this->costoCompra->Name = L"costoCompra";
			// 
			// lblFiltrar
			// 
			this->lblFiltrar->AutoSize = true;
			this->lblFiltrar->BackColor = System::Drawing::Color::Transparent;
			this->lblFiltrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFiltrar->ForeColor = System::Drawing::Color::Peru;
			this->lblFiltrar->Location = System::Drawing::Point(498, 532);
			this->lblFiltrar->Name = L"lblFiltrar";
			this->lblFiltrar->Size = System::Drawing::Size(203, 29);
			this->lblFiltrar->TabIndex = 37;
			this->lblFiltrar->Text = L"Filtrar Inventario";
			// 
			// txbFiltrar
			// 
			this->txbFiltrar->BackColor = System::Drawing::Color::Tan;
			this->txbFiltrar->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbFiltrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbFiltrar->Location = System::Drawing::Point(707, 537);
			this->txbFiltrar->MaxLength = 30;
			this->txbFiltrar->Name = L"txbFiltrar";
			this->txbFiltrar->Size = System::Drawing::Size(443, 29);
			this->txbFiltrar->TabIndex = 38;
			this->txbFiltrar->TextChanged += gcnew System::EventHandler(this, &VentaForm::txbFiltrar_TextChanged);
			// 
			// lblGetFecha
			// 
			this->lblGetFecha->AutoSize = true;
			this->lblGetFecha->BackColor = System::Drawing::Color::Transparent;
			this->lblGetFecha->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetFecha->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetFecha->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetFecha->Location = System::Drawing::Point(938, 27);
			this->lblGetFecha->Name = L"lblGetFecha";
			this->lblGetFecha->Size = System::Drawing::Size(199, 33);
			this->lblGetFecha->TabIndex = 42;
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
			this->labelFecha->Location = System::Drawing::Point(783, 27);
			this->labelFecha->Name = L"labelFecha";
			this->labelFecha->Size = System::Drawing::Size(115, 32);
			this->labelFecha->TabIndex = 41;
			this->labelFecha->Text = L"Fecha: ";
			// 
			// lblGetDinero
			// 
			this->lblGetDinero->AutoSize = true;
			this->lblGetDinero->BackColor = System::Drawing::Color::Transparent;
			this->lblGetDinero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetDinero->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetDinero->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetDinero->Location = System::Drawing::Point(582, 28);
			this->lblGetDinero->Name = L"lblGetDinero";
			this->lblGetDinero->Size = System::Drawing::Size(155, 33);
			this->lblGetDinero->TabIndex = 40;
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
			this->labelCapital->Location = System::Drawing::Point(415, 28);
			this->labelCapital->Name = L"labelCapital";
			this->labelCapital->Size = System::Drawing::Size(134, 32);
			this->labelCapital->TabIndex = 39;
			this->labelCapital->Text = L"Capital: ";
			// 
			// gbMueble
			// 
			this->gbMueble->BackColor = System::Drawing::Color::Transparent;
			this->gbMueble->Controls->Add(this->lblDescMue);
			this->gbMueble->Controls->Add(this->txbSetDescMue);
			this->gbMueble->Controls->Add(this->lblNomMueble);
			this->gbMueble->Controls->Add(this->txbSetNomMue);
			this->gbMueble->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->gbMueble->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbMueble->ForeColor = System::Drawing::Color::Peru;
			this->gbMueble->Location = System::Drawing::Point(9, 106);
			this->gbMueble->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbMueble->Name = L"gbMueble";
			this->gbMueble->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbMueble->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gbMueble->Size = System::Drawing::Size(474, 199);
			this->gbMueble->TabIndex = 43;
			this->gbMueble->TabStop = false;
			this->gbMueble->Text = L"Datos del mueble seleccionado";
			// 
			// lblDescMue
			// 
			this->lblDescMue->AutoSize = true;
			this->lblDescMue->BackColor = System::Drawing::Color::Transparent;
			this->lblDescMue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblDescMue->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDescMue->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblDescMue->Location = System::Drawing::Point(-4, 101);
			this->lblDescMue->Name = L"lblDescMue";
			this->lblDescMue->Size = System::Drawing::Size(189, 32);
			this->lblDescMue->TabIndex = 20;
			this->lblDescMue->Text = L"Descripcion";
			this->lblDescMue->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbSetDescMue
			// 
			this->txbSetDescMue->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txbSetDescMue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbSetDescMue->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txbSetDescMue->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbSetDescMue->Location = System::Drawing::Point(197, 102);
			this->txbSetDescMue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txbSetDescMue->MaxLength = 60;
			this->txbSetDescMue->Multiline = true;
			this->txbSetDescMue->Name = L"txbSetDescMue";
			this->txbSetDescMue->ReadOnly = true;
			this->txbSetDescMue->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txbSetDescMue->Size = System::Drawing::Size(271, 76);
			this->txbSetDescMue->TabIndex = 2;
			// 
			// lblNomMueble
			// 
			this->lblNomMueble->AutoSize = true;
			this->lblNomMueble->BackColor = System::Drawing::Color::Transparent;
			this->lblNomMueble->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblNomMueble->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomMueble->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblNomMueble->Location = System::Drawing::Point(52, 47);
			this->lblNomMueble->Name = L"lblNomMueble";
			this->lblNomMueble->Size = System::Drawing::Size(133, 32);
			this->lblNomMueble->TabIndex = 18;
			this->lblNomMueble->Text = L"Nombre";
			this->lblNomMueble->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbSetNomMue
			// 
			this->txbSetNomMue->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txbSetNomMue->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbSetNomMue->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txbSetNomMue->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbSetNomMue->Location = System::Drawing::Point(197, 48);
			this->txbSetNomMue->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txbSetNomMue->MaxLength = 30;
			this->txbSetNomMue->Name = L"txbSetNomMue";
			this->txbSetNomMue->ReadOnly = true;
			this->txbSetNomMue->Size = System::Drawing::Size(271, 32);
			this->txbSetNomMue->TabIndex = 1;
			// 
			// gbVenta
			// 
			this->gbVenta->BackColor = System::Drawing::Color::Transparent;
			this->gbVenta->Controls->Add(this->dtpSetfecha);
			this->gbVenta->Controls->Add(this->lblDesVenta);
			this->gbVenta->Controls->Add(this->lblFechaVenta);
			this->gbVenta->Controls->Add(this->txbSetDescVenta);
			this->gbVenta->Controls->Add(this->lblCosto);
			this->gbVenta->Controls->Add(this->txbSetPrecio);
			this->gbVenta->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbVenta->ForeColor = System::Drawing::Color::Peru;
			this->gbVenta->Location = System::Drawing::Point(9, 318);
			this->gbVenta->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbVenta->Name = L"gbVenta";
			this->gbVenta->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbVenta->Size = System::Drawing::Size(474, 246);
			this->gbVenta->TabIndex = 44;
			this->gbVenta->TabStop = false;
			this->gbVenta->Text = L"Datos de la Venta";
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
			this->dtpSetfecha->Location = System::Drawing::Point(201, 92);
			this->dtpSetfecha->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dtpSetfecha->Name = L"dtpSetfecha";
			this->dtpSetfecha->Size = System::Drawing::Size(267, 39);
			this->dtpSetfecha->TabIndex = 4;
			// 
			// lblDesVenta
			// 
			this->lblDesVenta->AutoSize = true;
			this->lblDesVenta->BackColor = System::Drawing::Color::Transparent;
			this->lblDesVenta->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblDesVenta->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDesVenta->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblDesVenta->Location = System::Drawing::Point(-1, 155);
			this->lblDesVenta->Name = L"lblDesVenta";
			this->lblDesVenta->Size = System::Drawing::Size(189, 32);
			this->lblDesVenta->TabIndex = 22;
			this->lblDesVenta->Text = L"Descripcion";
			this->lblDesVenta->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblFechaVenta
			// 
			this->lblFechaVenta->AutoSize = true;
			this->lblFechaVenta->BackColor = System::Drawing::Color::Transparent;
			this->lblFechaVenta->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblFechaVenta->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFechaVenta->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblFechaVenta->Location = System::Drawing::Point(67, 97);
			this->lblFechaVenta->Name = L"lblFechaVenta";
			this->lblFechaVenta->Size = System::Drawing::Size(121, 32);
			this->lblFechaVenta->TabIndex = 23;
			this->lblFechaVenta->Text = L"*Fecha ";
			this->lblFechaVenta->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbSetDescVenta
			// 
			this->txbSetDescVenta->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txbSetDescVenta->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbSetDescVenta->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txbSetDescVenta->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbSetDescVenta->Location = System::Drawing::Point(201, 156);
			this->txbSetDescVenta->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txbSetDescVenta->MaxLength = 60;
			this->txbSetDescVenta->Multiline = true;
			this->txbSetDescVenta->Name = L"txbSetDescVenta";
			this->txbSetDescVenta->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txbSetDescVenta->Size = System::Drawing::Size(267, 76);
			this->txbSetDescVenta->TabIndex = 5;
			// 
			// lblCosto
			// 
			this->lblCosto->AutoSize = true;
			this->lblCosto->BackColor = System::Drawing::Color::Transparent;
			this->lblCosto->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblCosto->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCosto->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblCosto->Location = System::Drawing::Point(76, 38);
			this->lblCosto->Name = L"lblCosto";
			this->lblCosto->Size = System::Drawing::Size(119, 32);
			this->lblCosto->TabIndex = 22;
			this->lblCosto->Text = L"*Precio";
			this->lblCosto->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbSetPrecio
			// 
			this->txbSetPrecio->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txbSetPrecio->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbSetPrecio->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txbSetPrecio->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbSetPrecio->Location = System::Drawing::Point(201, 39);
			this->txbSetPrecio->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txbSetPrecio->MaxLength = 8;
			this->txbSetPrecio->Name = L"txbSetPrecio";
			this->txbSetPrecio->Size = System::Drawing::Size(267, 32);
			this->txbSetPrecio->TabIndex = 3;
			this->txbSetPrecio->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txbSetPrecio->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &VentaForm::txbSetPrecio_KeyPress);
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->BackColor = System::Drawing::Color::Transparent;
			this->btnLimpiar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLimpiar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumVioletRed;
			this->btnLimpiar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnLimpiar->Location = System::Drawing::Point(268, 591);
			this->btnLimpiar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(215, 50);
			this->btnLimpiar->TabIndex = 46;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = false;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &VentaForm::btnLimpiar_Click);
			// 
			// btnVender
			// 
			this->btnVender->BackColor = System::Drawing::Color::Transparent;
			this->btnVender->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnVender->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnVender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnVender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnVender->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnVender->Location = System::Drawing::Point(9, 591);
			this->btnVender->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnVender->Name = L"btnVender";
			this->btnVender->Size = System::Drawing::Size(215, 50);
			this->btnVender->TabIndex = 45;
			this->btnVender->Text = L"Vender";
			this->btnVender->UseVisualStyleBackColor = false;
			this->btnVender->Click += gcnew System::EventHandler(this, &VentaForm::btnVender_Click);
			// 
			// lblTituloDgv
			// 
			this->lblTituloDgv->AutoSize = true;
			this->lblTituloDgv->BackColor = System::Drawing::Color::Transparent;
			this->lblTituloDgv->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblTituloDgv->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTituloDgv->ForeColor = System::Drawing::Color::Peru;
			this->lblTituloDgv->Location = System::Drawing::Point(664, 106);
			this->lblTituloDgv->Name = L"lblTituloDgv";
			this->lblTituloDgv->Size = System::Drawing::Size(279, 33);
			this->lblTituloDgv->TabIndex = 47;
			this->lblTituloDgv->Text = L"Muebles a la Venta";
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::Transparent;
			this->btnMostrar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMostrar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->btnMostrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMostrar->Location = System::Drawing::Point(489, 591);
			this->btnMostrar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(215, 50);
			this->btnMostrar->TabIndex = 48;
			this->btnMostrar->Text = L"Mostrar Ventas";
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &VentaForm::btnMostrar_Click);
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
			this->btnEditar->Location = System::Drawing::Point(714, 591);
			this->btnEditar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(215, 50);
			this->btnEditar->TabIndex = 49;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = false;
			this->btnEditar->Visible = false;
			this->btnEditar->Click += gcnew System::EventHandler(this, &VentaForm::btnEditar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->BackColor = System::Drawing::Color::Transparent;
			this->btnCancelar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancelar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Crimson;
			this->btnCancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnCancelar->Location = System::Drawing::Point(935, 591);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(215, 50);
			this->btnCancelar->TabIndex = 50;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = false;
			this->btnCancelar->Visible = false;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &VentaForm::btnCancelar_Click);
			// 
			// VentaForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1159, 685);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnEditar);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->lblTituloDgv);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnVender);
			this->Controls->Add(this->gbVenta);
			this->Controls->Add(this->gbMueble);
			this->Controls->Add(this->lblGetFecha);
			this->Controls->Add(this->labelFecha);
			this->Controls->Add(this->lblGetDinero);
			this->Controls->Add(this->labelCapital);
			this->Controls->Add(this->txbFiltrar);
			this->Controls->Add(this->lblFiltrar);
			this->Controls->Add(this->dgvVistaAlm);
			this->Name = L"VentaForm";
			this->Text = L"Venta";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaAlm))->EndInit();
			this->gbMueble->ResumeLayout(false);
			this->gbMueble->PerformLayout();
			this->gbVenta->ResumeLayout(false);
			this->gbVenta->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void cargarDgv(List<Fila^>^);
	private: System::Void filtrarDgv(List<Fila^>^); // Filtra datos de una lista y el resultado se carga en data dgv.
	private: System::Void limpiarDgv();// Elimina todos las filas del dgv.
	private: System::Void limpiar();// Elimina todos las filas del dgv.
	private: System::Boolean ejecutarEditar();

	
	private: System::Void txbFiltrar_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		
		filtrarDgv(inventario);// Recibe la consulta que se recibi� de la base de datos.
		
	}
	private: System::Void dgvVistaAlm_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
	{
		

		datos->Clear();
		if (actualizar==false)
		{
			// Se cargan los datos del INVENTARIO o ALMACEN a los text box.

			datos->Add(this->dgvVistaAlm->CurrentRow->Cells[4]->Value->ToString());// Se obtiene el id

			this->txbSetNomMue->Text = this->dgvVistaAlm->CurrentRow->Cells[0]->Value->ToString();
			this->txbSetDescMue->Text = this->dgvVistaAlm->CurrentRow->Cells[1]->Value->ToString();
			this->txbSetPrecio->Enabled = true;
			this->txbSetDescVenta->Enabled = true;
			this->dtpSetfecha->Enabled = true;

		}
		else
		{
			// Se cargan datos de las VENTAS registradas a los textbox para poder modificarlos.

			datos->Add(this->dgvVistaAlm->CurrentRow->Cells[4]->Value->ToString());// Se obtiene el id
			datos->Add(this->dgvVistaAlm->CurrentRow->Cells[2]->Value->ToString());// Precio.
			datos->Add(this->dgvVistaAlm->CurrentRow->Cells[3]->Value->ToString());// Fecha.
			datos->Add(this->dgvVistaAlm->CurrentRow->Cells[1]->Value->ToString());// Descripcion Venta.

			this->txbSetNomMue->Text = this->dgvVistaAlm->CurrentRow->Cells[0]->Value->ToString();
			this->txbSetDescVenta->Text = this->dgvVistaAlm->CurrentRow->Cells[1]->Value->ToString();
			this->txbSetPrecio->Text = this->dgvVistaAlm->CurrentRow->Cells[2]->Value->ToString();
			this->dtpSetfecha->Text = this->dgvVistaAlm->CurrentRow->Cells[3]->Value->ToString();
			
			this->txbSetPrecio->Enabled = true;
			this->txbSetDescVenta->Enabled = true;
			this->dtpSetfecha->Enabled = true;
		}
	}
	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e)
{
	limpiar();
}
	private: System::Void txbSetPrecio_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{

	for each (wchar_t caracter in this->txbSetPrecio->Text)// Recorre toda al cadena en busca de un punto.
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
	private: System::Void btnVender_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (controlador->vacio(this->txbSetPrecio->Text))
	{
		// Entra porque falta el precio de venta.

		MessageBox::Show("Es necesario asignar precio de venta", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		
	}
	else
	{
		System::Windows::Forms::DialogResult respuesta = MessageBox::Show("Son correctos esos datos", "Opciones", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (respuesta == System::Windows::Forms::DialogResult::Yes)
		{
			// Entra porque el usuario confirma que los datos son correctos.
			
			if (procedimiento->venta(datos[0], this->txbSetPrecio->Text,
				this->dtpSetfecha->Value, this->txbSetDescVenta->Text))
			{
				// Entra aqui porque no ocurrio ningun error.
				MessageBox::Show("Se registro tu compra correctamente", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

				limpiarDgv();// Borra todas las filas del dgv
				inventario->Clear();
				inventario=vistaInventario->vistaInventarioCtr();// Se ejecuta nuevamente la consulta para actulizar la tabla despues de realizar la venta.
				this->lblGetDinero->Text = procedimiento->getCapitalActual();
				cargarDgv(inventario);
				limpiar();
				return;
			}
			else
			{
				// ############## Se necesita un metodo para obtener el error y mostrarlo
				MessageBox::Show("Ocurrio un error al insertar en la base de datos", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		else
			return;

	}
}
	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	actualizar = true;
	limpiarDgv(); 
	Color pigmento = System::Drawing::Color::MediumSeaGreen;
	this->lblTituloDgv->Text = "Ventas Registradas";
	this->lblTituloDgv->ForeColor = pigmento;
	this->lblFiltrar->Visible = false;
	this->txbFiltrar->Visible = false;
	this->txbSetDescMue->Visible = false;
	this->lblDescMue->Visible = false;
	this->btnVender->Enabled = false;
	this->dgvVistaAlm->ColumnHeadersDefaultCellStyle->ForeColor = pigmento;
	this->dgvVistaAlm->GridColor = pigmento;
	this->gbVenta->Text = "Datos de la Venta a Modificar ";
	this->gbVenta->ForeColor = pigmento;
	this->gbMueble->Text = "Datos de Mueble Vendido ";
	this->gbMueble->ForeColor = pigmento;
	this->btnCancelar->Visible = true;
	this->btnEditar->Visible = true;
	limpiar();//----> Ver en caso de error.
	cargarDgv(ventasReg);
	

}
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e)
{
	// Mandar llamar una funcion para restablecer la pantalla a el estado inicial.
	
	this->lblTituloDgv->Text = L"Muebles a la Venta";
	this->lblTituloDgv->ForeColor = System::Drawing::Color::Peru;
	this->lblFiltrar->Visible = true;
	this->txbFiltrar->Visible = true;
	this->txbSetDescMue->Visible = true;
	this->lblDescMue->Visible = true;
	this->btnVender->Enabled = true;
	this->dgvVistaAlm->ColumnHeadersDefaultCellStyle->ForeColor = System::Drawing::Color::DarkGoldenrod;
	this->dgvVistaAlm->GridColor = System::Drawing::Color::DarkGoldenrod;
	this->gbVenta->Text = "Datos de la Venta ";
	this->gbVenta->ForeColor = System::Drawing::Color::Peru;
	this->gbMueble->Text = "Datos del mueble seleccionado ";
	this->gbMueble->ForeColor = System::Drawing::Color::Peru;
	this->btnCancelar->Visible = false;
	this->btnEditar->Visible = false;
	limpiarDgv();
	limpiar();
	cargarDgv(inventario);
	actualizar = false; // Para saber cual consulta se va a cargar al dgv.
}
	private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	if (datos->Count >= 1)
	{// Entra porque ya se eligio alguna fila del data grid view.

		System::Windows::Forms::DialogResult respuesta = MessageBox::Show("Son correctos esos datos a modificar?",
			"Opciones", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (respuesta == System::Windows::Forms::DialogResult::Yes)
		{
					
			ejecutarEditar();
			MessageBox::Show("La operacion se ejecuto con existo.", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::None);
			limpiar();
			ventasReg->Clear();
			ventasReg = vistaVentas->vistaVentasCtr();
			limpiarDgv();
			cargarDgv(ventasReg);
			this->lblGetDinero->Text = procedimiento->getCapitalActual();
						
		}
		else
		{
			MessageBox::Show("Elige la fila que deseas", "Elegir", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	else
	{
		// El usuario no ha elegido ninguna fila del dgv.

		MessageBox::Show("No has eligido ninguna fila", "Elegir", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}

}
};
}
