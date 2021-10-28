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
	/// Resumen de InventarioForm
	/// </summary>
	public ref class InventarioForm : public System::Windows::Forms::Form
	{
	public:
		InventarioForm(void)
		{
			procedimiento = gcnew ProcedimentosController();
			controlador = gcnew ControladorGeneral();
			vistaInventario = gcnew VistasController();
			datos = gcnew List<String^>;
			inventario = gcnew List<Fila^>;
			resultado = gcnew List<Fila^>;
			inventario = vistaInventario->vistaInventarioCtr();//---> Carga la consulta inventario.

			InitializeComponent();
			
			
			fechaActual = fechaActual.Now;
			this->lblGetDinero->Text = procedimiento->getCapitalActual();
			this->lblGetFecha->Text = fechaActual.ToShortDateString();// Para mostrar la fecha actual al usuario
			cargarDgv(inventario);

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~InventarioForm()
		{
			if (components)
			{
				delete components;
			}
		}

	
	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		
		ProcedimentosController^ procedimiento;
		ControladorGeneral^ controlador;
		VistasController^ vistaInventario; // Punetero para llamar la consulta invetarioView 
		DateTime fechaActual;
		List<String^>^ datos;
		List<Fila^>^ inventario;//----->Guarda lo que arroja la vista almacenada inventarioView.
		List<Fila^>^ resultado;//------>Guarda las filas que cumplan con cierto criterio.

		
		//Boolean actualizar; //---------> Se pone en verdadero cuando se muestran las ventas registradas.
		//Int16 contador;
		//VistasController^ vistaReparar; // Punetero para poder llamar a la vista ventasView.
		//List<Fila^>^ gastosReg;//------>Guarda lo que arroja la vista gastosRegistrados.

		
		System::ComponentModel::Container ^components;
	

	private: System::Windows::Forms::Label^ lblTituloDgv;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::GroupBox^ gbMueble;
	private: System::Windows::Forms::Label^ lblDescMue;
	private: System::Windows::Forms::TextBox^ txbSetDescMue;
	private: System::Windows::Forms::Label^ lblNomMueble;
	private: System::Windows::Forms::TextBox^ txbSetNomMue;
	public: System::Windows::Forms::Label^ lblGetFecha;
	private: System::Windows::Forms::Label^ labelFecha;
	private: System::Windows::Forms::Label^ lblGetDinero;
	private: System::Windows::Forms::Label^ labelCapital;
	private: System::Windows::Forms::TextBox^ txbFiltrar;
	private: System::Windows::Forms::Label^ lblFiltrar;
	private: System::Windows::Forms::DataGridView^ dgvVistaAlm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombreMue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ desMueble;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fecha;
	private: System::Windows::Forms::Button^ btnEditar;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ costoCompra;


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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->lblTituloDgv = (gcnew System::Windows::Forms::Label());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->gbMueble = (gcnew System::Windows::Forms::GroupBox());
			this->lblDescMue = (gcnew System::Windows::Forms::Label());
			this->txbSetDescMue = (gcnew System::Windows::Forms::TextBox());
			this->lblNomMueble = (gcnew System::Windows::Forms::Label());
			this->txbSetNomMue = (gcnew System::Windows::Forms::TextBox());
			this->lblGetFecha = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->lblGetDinero = (gcnew System::Windows::Forms::Label());
			this->labelCapital = (gcnew System::Windows::Forms::Label());
			this->txbFiltrar = (gcnew System::Windows::Forms::TextBox());
			this->lblFiltrar = (gcnew System::Windows::Forms::Label());
			this->dgvVistaAlm = (gcnew System::Windows::Forms::DataGridView());
			this->nombreMue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->desMueble = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->costoCompra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->gbMueble->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaAlm))->BeginInit();
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
			this->lblTituloDgv->Location = System::Drawing::Point(663, 157);
			this->lblTituloDgv->Name = L"lblTituloDgv";
			this->lblTituloDgv->Size = System::Drawing::Size(341, 33);
			this->lblTituloDgv->TabIndex = 77;
			this->lblTituloDgv->Text = L"Muebles en el Almacen";
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
			this->btnLimpiar->Location = System::Drawing::Point(257, 436);
			this->btnLimpiar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(225, 50);
			this->btnLimpiar->TabIndex = 76;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = false;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &InventarioForm::btnLimpiar_Click);
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
			this->gbMueble->Location = System::Drawing::Point(8, 189);
			this->gbMueble->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbMueble->Name = L"gbMueble";
			this->gbMueble->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbMueble->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gbMueble->Size = System::Drawing::Size(474, 199);
			this->gbMueble->TabIndex = 73;
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
			this->txbSetNomMue->Size = System::Drawing::Size(271, 32);
			this->txbSetNomMue->TabIndex = 1;
			// 
			// lblGetFecha
			// 
			this->lblGetFecha->AutoSize = true;
			this->lblGetFecha->BackColor = System::Drawing::Color::Transparent;
			this->lblGetFecha->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetFecha->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetFecha->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetFecha->Location = System::Drawing::Point(937, 37);
			this->lblGetFecha->Name = L"lblGetFecha";
			this->lblGetFecha->Size = System::Drawing::Size(199, 33);
			this->lblGetFecha->TabIndex = 72;
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
			this->labelFecha->Location = System::Drawing::Point(782, 37);
			this->labelFecha->Name = L"labelFecha";
			this->labelFecha->Size = System::Drawing::Size(115, 32);
			this->labelFecha->TabIndex = 71;
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
			this->lblGetDinero->Location = System::Drawing::Point(581, 38);
			this->lblGetDinero->Name = L"lblGetDinero";
			this->lblGetDinero->Size = System::Drawing::Size(155, 33);
			this->lblGetDinero->TabIndex = 70;
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
			this->labelCapital->Location = System::Drawing::Point(414, 38);
			this->labelCapital->Name = L"labelCapital";
			this->labelCapital->Size = System::Drawing::Size(134, 32);
			this->labelCapital->TabIndex = 69;
			this->labelCapital->Text = L"Capital: ";
			// 
			// txbFiltrar
			// 
			this->txbFiltrar->BackColor = System::Drawing::Color::Tan;
			this->txbFiltrar->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbFiltrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbFiltrar->Location = System::Drawing::Point(706, 603);
			this->txbFiltrar->MaxLength = 30;
			this->txbFiltrar->Name = L"txbFiltrar";
			this->txbFiltrar->Size = System::Drawing::Size(443, 29);
			this->txbFiltrar->TabIndex = 68;
			this->txbFiltrar->TextChanged += gcnew System::EventHandler(this, &InventarioForm::txbFiltrar_TextChanged);
			// 
			// lblFiltrar
			// 
			this->lblFiltrar->AutoSize = true;
			this->lblFiltrar->BackColor = System::Drawing::Color::Transparent;
			this->lblFiltrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFiltrar->ForeColor = System::Drawing::Color::Peru;
			this->lblFiltrar->Location = System::Drawing::Point(497, 598);
			this->lblFiltrar->Name = L"lblFiltrar";
			this->lblFiltrar->Size = System::Drawing::Size(203, 29);
			this->lblFiltrar->TabIndex = 67;
			this->lblFiltrar->Text = L"Filtrar Inventario";
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
			this->dgvVistaAlm->Location = System::Drawing::Point(492, 200);
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
			this->dgvVistaAlm->Size = System::Drawing::Size(657, 395);
			this->dgvVistaAlm->TabIndex = 66;
			this->dgvVistaAlm->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &InventarioForm::dgvVistaAlm_CellClick);
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
			// btnEditar
			// 
			this->btnEditar->BackColor = System::Drawing::Color::Transparent;
			this->btnEditar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEditar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::SteelBlue;
			this->btnEditar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEditar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnEditar->Location = System::Drawing::Point(12, 436);
			this->btnEditar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(225, 50);
			this->btnEditar->TabIndex = 78;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = false;
			this->btnEditar->Click += gcnew System::EventHandler(this, &InventarioForm::btnEditar_Click);
			// 
			// InventarioForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(1157, 688);
			this->Controls->Add(this->btnEditar);
			this->Controls->Add(this->lblTituloDgv);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->gbMueble);
			this->Controls->Add(this->lblGetFecha);
			this->Controls->Add(this->labelFecha);
			this->Controls->Add(this->lblGetDinero);
			this->Controls->Add(this->labelCapital);
			this->Controls->Add(this->txbFiltrar);
			this->Controls->Add(this->lblFiltrar);
			this->Controls->Add(this->dgvVistaAlm);
			this->Name = L"InventarioForm";
			this->Text = L"Inventario";
			this->gbMueble->ResumeLayout(false);
			this->gbMueble->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaAlm))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void cargarDgv(List<Fila^>^);
	private: System::Void filtrarDgv(List<Fila^>^); // Filtra datos de una lista y el resultado se carga en data dgv.
	private: System::Void limpiarDgv();// Elimina todos las filas del dgv.
	private: System::Void limpiar();// Elimina todos las filas del dgv.
	private: System::Boolean ejecutarEditar();

	private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		limpiar();
		return;
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
			limpiarDgv();
			inventario=vistaInventario->vistaInventarioCtr();
			cargarDgv(inventario);
			

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
	private: System::Void dgvVistaAlm_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		datos->Clear();
	
			// Se cargan los datos del INVENTARIO o ALMACEN a los text box.

			datos->Add(this->dgvVistaAlm->CurrentRow->Cells[4]->Value->ToString());// Se obtiene el id mueble

			this->txbSetNomMue->Text = this->dgvVistaAlm->CurrentRow->Cells[0]->Value->ToString();
			this->txbSetDescMue->Text = this->dgvVistaAlm->CurrentRow->Cells[1]->Value->ToString();	
	
	}
	private: System::Void txbFiltrar_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		filtrarDgv(inventario);// Recibe la consulta que se recibió de la base de datos.
	}
};
}
