#pragma once

namespace MueblesCApantallas {

	using namespace System;
	using namespace System::Collections::Generic; // Para poder usar los contenedores como listas y arrays
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MueblesController;
	

	/// <summary>
	/// Resumen de CompraForm
	/// </summary>
	public ref class CompraForm : public System::Windows::Forms::Form
	{
	public:
		CompraForm(void)
		{
			
			procedimiento = gcnew ProcedimentosController();
			controlador = gcnew ControladorGeneral();
			vistas = gcnew VistasController();
			datos = gcnew List<String^>;

			InitializeComponent();
			
			inicializarDgv();
			fechaActual = fechaActual.Now;
			
			this->lblGetDinero->Text = procedimiento->getCapitalActual();
			this->lblGetRestante->Text = this->lblGetDinero->Text;
			this->lblGetFecha->Text = fechaActual.ToShortDateString();// Para mostrar la fehca actual al usuario
			

			punto = false;
			contador = 0;
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~CompraForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblNomMueble;
	private: System::Windows::Forms::TextBox^ txbSetNomMue;
	private: System::Windows::Forms::Label^ lblDescMue;
	private: System::Windows::Forms::TextBox^ txbSetDescMue;
	private: System::Windows::Forms::GroupBox^ gbMueble;
	private: System::Windows::Forms::Label^ lblCosto;
	private: System::Windows::Forms::TextBox^ txbSetCosto;
	private: System::Windows::Forms::Label^ lblFechaCompra;
	private: System::Windows::Forms::Label^ lblDesCompra;
	private: System::Windows::Forms::TextBox^ txbSetDescCompra;
	private: System::Windows::Forms::GroupBox^ gbCompra;
	private: System::Windows::Forms::DateTimePicker^ dtpSetfecha;

	private: System::Windows::Forms::Label^ lblGetDinero;
	private: System::Windows::Forms::Label^ labelCapital;
	public: System::Windows::Forms::Label^ lblGetFecha;
	private: System::Windows::Forms::Label^ labelFecha;
	private: System::Windows::Forms::Label^ lblGetRestante;
	private: System::Windows::Forms::Label^ lblRestante;
	
	private: System::Windows::Forms::Button^ btnComprar;
	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnEditar;

	private: System::Windows::Forms::DataGridView^ dgvVistaCom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombreMue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ desMueble;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ costoCompra;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ desCompra;


		//System::ComponentModel::Container^ components;
		/// <summary>
		/// Variable del diseñador necesaria.
	private:

		ProcedimentosController^ procedimiento;
		ControladorGeneral^ controlador;
		VistasController^ vistas;
		Boolean punto;
		DateTime fechaActual;
		Int16 contador;
		List<String^>^ datos;

		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->lblNomMueble = (gcnew System::Windows::Forms::Label());
			this->txbSetNomMue = (gcnew System::Windows::Forms::TextBox());
			this->lblDescMue = (gcnew System::Windows::Forms::Label());
			this->txbSetDescMue = (gcnew System::Windows::Forms::TextBox());
			this->gbMueble = (gcnew System::Windows::Forms::GroupBox());
			this->lblCosto = (gcnew System::Windows::Forms::Label());
			this->txbSetCosto = (gcnew System::Windows::Forms::TextBox());
			this->lblFechaCompra = (gcnew System::Windows::Forms::Label());
			this->lblDesCompra = (gcnew System::Windows::Forms::Label());
			this->txbSetDescCompra = (gcnew System::Windows::Forms::TextBox());
			this->gbCompra = (gcnew System::Windows::Forms::GroupBox());
			this->dtpSetfecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblGetDinero = (gcnew System::Windows::Forms::Label());
			this->labelCapital = (gcnew System::Windows::Forms::Label());
			this->lblGetFecha = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->lblGetRestante = (gcnew System::Windows::Forms::Label());
			this->lblRestante = (gcnew System::Windows::Forms::Label());
			this->btnComprar = (gcnew System::Windows::Forms::Button());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->dgvVistaCom = (gcnew System::Windows::Forms::DataGridView());
			this->nombreMue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->desMueble = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->costoCompra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->desCompra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->gbMueble->SuspendLayout();
			this->gbCompra->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaCom))->BeginInit();
			this->SuspendLayout();
			// 
			// lblNomMueble
			// 
			this->lblNomMueble->AutoSize = true;
			this->lblNomMueble->BackColor = System::Drawing::Color::Transparent;
			this->lblNomMueble->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblNomMueble->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblNomMueble->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblNomMueble->Location = System::Drawing::Point(39, 47);
			this->lblNomMueble->Name = L"lblNomMueble";
			this->lblNomMueble->Size = System::Drawing::Size(146, 32);
			this->lblNomMueble->TabIndex = 18;
			this->lblNomMueble->Text = L"*Nombre";
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
			this->txbSetNomMue->Size = System::Drawing::Size(286, 32);
			this->txbSetNomMue->TabIndex = 1;
			this->txbSetNomMue->Text = L"visual";
			this->txbSetNomMue->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
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
			this->txbSetDescMue->Size = System::Drawing::Size(286, 76);
			this->txbSetDescMue->TabIndex = 2;
			this->txbSetDescMue->Text = L"mueble tipo studio";
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
			this->gbMueble->Location = System::Drawing::Point(11, 57);
			this->gbMueble->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbMueble->Name = L"gbMueble";
			this->gbMueble->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbMueble->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gbMueble->Size = System::Drawing::Size(489, 199);
			this->gbMueble->TabIndex = 21;
			this->gbMueble->TabStop = false;
			this->gbMueble->Text = L"Datos del mueble";
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
			this->lblCosto->Size = System::Drawing::Size(112, 32);
			this->lblCosto->TabIndex = 22;
			this->lblCosto->Text = L"*Costo";
			this->lblCosto->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbSetCosto
			// 
			this->txbSetCosto->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txbSetCosto->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbSetCosto->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txbSetCosto->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbSetCosto->Location = System::Drawing::Point(201, 39);
			this->txbSetCosto->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txbSetCosto->MaxLength = 8;
			this->txbSetCosto->Name = L"txbSetCosto";
			this->txbSetCosto->Size = System::Drawing::Size(280, 32);
			this->txbSetCosto->TabIndex = 3;
			this->txbSetCosto->Text = L"1000";
			this->txbSetCosto->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txbSetCosto->TextChanged += gcnew System::EventHandler(this, &CompraForm::txbSetCosto_TextChanged);
			this->txbSetCosto->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &CompraForm::txbSetCosto_KeyPress);
			// 
			// lblFechaCompra
			// 
			this->lblFechaCompra->AutoSize = true;
			this->lblFechaCompra->BackColor = System::Drawing::Color::Transparent;
			this->lblFechaCompra->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblFechaCompra->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFechaCompra->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblFechaCompra->Location = System::Drawing::Point(67, 97);
			this->lblFechaCompra->Name = L"lblFechaCompra";
			this->lblFechaCompra->Size = System::Drawing::Size(121, 32);
			this->lblFechaCompra->TabIndex = 23;
			this->lblFechaCompra->Text = L"*Fecha ";
			this->lblFechaCompra->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lblDesCompra
			// 
			this->lblDesCompra->AutoSize = true;
			this->lblDesCompra->BackColor = System::Drawing::Color::Transparent;
			this->lblDesCompra->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblDesCompra->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDesCompra->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblDesCompra->Location = System::Drawing::Point(-1, 155);
			this->lblDesCompra->Name = L"lblDesCompra";
			this->lblDesCompra->Size = System::Drawing::Size(189, 32);
			this->lblDesCompra->TabIndex = 22;
			this->lblDesCompra->Text = L"Descripcion";
			this->lblDesCompra->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txbSetDescCompra
			// 
			this->txbSetDescCompra->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->txbSetDescCompra->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txbSetDescCompra->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txbSetDescCompra->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txbSetDescCompra->Location = System::Drawing::Point(201, 156);
			this->txbSetDescCompra->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->txbSetDescCompra->MaxLength = 60;
			this->txbSetDescCompra->Multiline = true;
			this->txbSetDescCompra->Name = L"txbSetDescCompra";
			this->txbSetDescCompra->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txbSetDescCompra->Size = System::Drawing::Size(280, 76);
			this->txbSetDescCompra->TabIndex = 5;
			this->txbSetDescCompra->Text = L"prueba del visual";
			// 
			// gbCompra
			// 
			this->gbCompra->BackColor = System::Drawing::Color::Transparent;
			this->gbCompra->Controls->Add(this->dtpSetfecha);
			this->gbCompra->Controls->Add(this->lblDesCompra);
			this->gbCompra->Controls->Add(this->lblFechaCompra);
			this->gbCompra->Controls->Add(this->txbSetDescCompra);
			this->gbCompra->Controls->Add(this->lblCosto);
			this->gbCompra->Controls->Add(this->txbSetCosto);
			this->gbCompra->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbCompra->ForeColor = System::Drawing::Color::Peru;
			this->gbCompra->Location = System::Drawing::Point(13, 294);
			this->gbCompra->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbCompra->Name = L"gbCompra";
			this->gbCompra->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbCompra->Size = System::Drawing::Size(487, 246);
			this->gbCompra->TabIndex = 24;
			this->gbCompra->TabStop = false;
			this->gbCompra->Text = L"Datos de la compra";
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
			this->dtpSetfecha->Size = System::Drawing::Size(280, 39);
			this->dtpSetfecha->TabIndex = 4;
			// 
			// lblGetDinero
			// 
			this->lblGetDinero->AutoSize = true;
			this->lblGetDinero->BackColor = System::Drawing::Color::Transparent;
			this->lblGetDinero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetDinero->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetDinero->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetDinero->Location = System::Drawing::Point(797, 66);
			this->lblGetDinero->Name = L"lblGetDinero";
			this->lblGetDinero->Size = System::Drawing::Size(155, 33);
			this->lblGetDinero->TabIndex = 26;
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
			this->labelCapital->Location = System::Drawing::Point(616, 68);
			this->labelCapital->Name = L"labelCapital";
			this->labelCapital->Size = System::Drawing::Size(134, 32);
			this->labelCapital->TabIndex = 25;
			this->labelCapital->Text = L"Capital: ";
			// 
			// lblGetFecha
			// 
			this->lblGetFecha->AutoSize = true;
			this->lblGetFecha->BackColor = System::Drawing::Color::Transparent;
			this->lblGetFecha->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetFecha->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetFecha->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetFecha->Location = System::Drawing::Point(797, 130);
			this->lblGetFecha->Name = L"lblGetFecha";
			this->lblGetFecha->Size = System::Drawing::Size(199, 33);
			this->lblGetFecha->TabIndex = 28;
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
			this->labelFecha->Location = System::Drawing::Point(616, 130);
			this->labelFecha->Name = L"labelFecha";
			this->labelFecha->Size = System::Drawing::Size(115, 32);
			this->labelFecha->TabIndex = 27;
			this->labelFecha->Text = L"Fecha: ";
			// 
			// lblGetRestante
			// 
			this->lblGetRestante->AutoSize = true;
			this->lblGetRestante->BackColor = System::Drawing::Color::Transparent;
			this->lblGetRestante->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetRestante->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetRestante->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->lblGetRestante->Location = System::Drawing::Point(797, 191);
			this->lblGetRestante->Name = L"lblGetRestante";
			this->lblGetRestante->Size = System::Drawing::Size(155, 33);
			this->lblGetRestante->TabIndex = 30;
			this->lblGetRestante->Text = L"$ 1,500.00 ";
			// 
			// lblRestante
			// 
			this->lblRestante->AutoSize = true;
			this->lblRestante->BackColor = System::Drawing::Color::Transparent;
			this->lblRestante->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblRestante->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRestante->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblRestante->Location = System::Drawing::Point(616, 191);
			this->lblRestante->Name = L"lblRestante";
			this->lblRestante->Size = System::Drawing::Size(161, 32);
			this->lblRestante->TabIndex = 29;
			this->lblRestante->Text = L"Restante: ";
			// 
			// btnComprar
			// 
			this->btnComprar->BackColor = System::Drawing::Color::Transparent;
			this->btnComprar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnComprar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnComprar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComprar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComprar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnComprar->Location = System::Drawing::Point(11, 574);
			this->btnComprar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnComprar->Name = L"btnComprar";
			this->btnComprar->Size = System::Drawing::Size(150, 50);
			this->btnComprar->TabIndex = 31;
			this->btnComprar->Text = L"Comprar";
			this->btnComprar->UseVisualStyleBackColor = false;
			this->btnComprar->Click += gcnew System::EventHandler(this, &CompraForm::btnComprar_Click);
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
			this->btnLimpiar->Location = System::Drawing::Point(179, 574);
			this->btnLimpiar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(150, 50);
			this->btnLimpiar->TabIndex = 32;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = false;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &CompraForm::btnLimpiar_Click);
			// 
			// dgvVistaCom
			// 
			this->dgvVistaCom->AllowUserToAddRows = false;
			this->dgvVistaCom->AllowUserToDeleteRows = false;
			this->dgvVistaCom->AllowUserToResizeRows = false;
			this->dgvVistaCom->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dgvVistaCom->BackgroundColor = System::Drawing::SystemColors::WindowFrame;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::DarkGoldenrod;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvVistaCom->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvVistaCom->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvVistaCom->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->nombreMue,
					this->desMueble, this->fecha, this->costoCompra, this->desCompra
			});
			this->dgvVistaCom->EnableHeadersVisualStyles = false;
			this->dgvVistaCom->GridColor = System::Drawing::Color::Goldenrod;
			this->dgvVistaCom->Location = System::Drawing::Point(526, 295);
			this->dgvVistaCom->Name = L"dgvVistaCom";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::WindowFrame;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvVistaCom->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->dgvVistaCom->RowHeadersVisible = false;
			this->dgvVistaCom->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::Color::DarkGoldenrod;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvVistaCom->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->dgvVistaCom->RowTemplate->Height = 24;
			this->dgvVistaCom->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvVistaCom->Size = System::Drawing::Size(615, 329);
			this->dgvVistaCom->TabIndex = 35;
			this->dgvVistaCom->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CompraForm::dgvVistaCom_CellClick);
			// 
			// nombreMue
			// 
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->nombreMue->DefaultCellStyle = dataGridViewCellStyle2;
			this->nombreMue->HeaderText = L"Nombre";
			this->nombreMue->MinimumWidth = 6;
			this->nombreMue->Name = L"nombreMue";
			this->nombreMue->Width = 6;
			// 
			// desMueble
			// 
			this->desMueble->HeaderText = L"Descripcion";
			this->desMueble->MinimumWidth = 6;
			this->desMueble->Name = L"desMueble";
			this->desMueble->Width = 6;
			// 
			// fecha
			// 
			this->fecha->HeaderText = L"Fecha";
			this->fecha->MinimumWidth = 6;
			this->fecha->Name = L"fecha";
			this->fecha->Width = 6;
			// 
			// costoCompra
			// 
			this->costoCompra->HeaderText = L"Costo";
			this->costoCompra->MinimumWidth = 6;
			this->costoCompra->Name = L"costoCompra";
			this->costoCompra->Width = 6;
			// 
			// desCompra
			// 
			this->desCompra->HeaderText = L"Descripcion";
			this->desCompra->MinimumWidth = 6;
			this->desCompra->Name = L"desCompra";
			this->desCompra->Width = 6;
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
			this->btnEditar->Location = System::Drawing::Point(350, 574);
			this->btnEditar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(150, 50);
			this->btnEditar->TabIndex = 36;
			this->btnEditar->Text = L"Editar";
			this->btnEditar->UseVisualStyleBackColor = false;
			this->btnEditar->Click += gcnew System::EventHandler(this, &CompraForm::btnEditar_Click);
			// 
			// CompraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1159, 685);
			this->Controls->Add(this->btnEditar);
			this->Controls->Add(this->dgvVistaCom);
			this->Controls->Add(this->btnLimpiar);
			this->Controls->Add(this->btnComprar);
			this->Controls->Add(this->lblGetRestante);
			this->Controls->Add(this->lblRestante);
			this->Controls->Add(this->lblGetFecha);
			this->Controls->Add(this->labelFecha);
			this->Controls->Add(this->lblGetDinero);
			this->Controls->Add(this->labelCapital);
			this->Controls->Add(this->gbCompra);
			this->Controls->Add(this->gbMueble);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"CompraForm";
			this->Text = L"Compra";
			this->gbMueble->ResumeLayout(false);
			this->gbMueble->PerformLayout();
			this->gbCompra->ResumeLayout(false);
			this->gbCompra->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaCom))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e)
{
	btnComprar->Enabled = true; // activa el boton de comprar.
	limpiar();	
	
}
private: System::Void btnComprar_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	if ((controlador->vacio(this->txbSetNomMue->Text)) || (controlador->vacio(this->txbSetCosto->Text)))
	{
		// Entra porque falta al menos un dato de llenar.

		if ((controlador->vacio(this->txbSetNomMue->Text)) && (controlador->vacio(this->txbSetCosto->Text)))
			MessageBox::Show("Es necesario llenar el campo nombre y costo", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else if(controlador->vacio(this->txbSetNomMue->Text))
			MessageBox::Show("Ha necesario llenar el campo nombre", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
			MessageBox::Show("Ha necesario llenar el campo costo", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	else
	{
		System::Windows::Forms::DialogResult respuesta = MessageBox::Show("Son correctos esos datos", "Opciones", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (respuesta == System::Windows::Forms::DialogResult::Yes)
		{
			// Entra porque el usuario confirma que los datos son correctos.

			if (procedimiento->comprar(this->txbSetNomMue->Text, this->txbSetDescMue->Text,
				this->dtpSetfecha->Value, this->txbSetCosto->Text, this->txbSetDescCompra->Text))
			{
				// Entra aqui porque no ocurrio ningun error.
				MessageBox::Show("Se registro tu compra correctamente", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				
				inicializarDgv();
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

private: System::Void txbSetCosto_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	// En este evento se verifica que la tecla presionada sea un numero.
	
	
			for each (wchar_t caracter in this->txbSetCosto->Text)// Recorre toda al cadena en busca de un punto.
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
	

	
	
	if (punto==true)
	{
		
		if (controlador->esNumero(e->KeyChar)||Char::IsControl(e->KeyChar))
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
		if (controlador->esNumero(e->KeyChar) || Char::IsControl(e->KeyChar)|| Char::IsPunctuation(e->KeyChar))
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
private: System::Void txbSetCosto_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	// En este evento a medida que va cambiando el texto de costo, se va reflejando en el capital restante

	String^ cadena = controlador->resta(this->lblGetDinero->Text, this->txbSetCosto->Text); //---> resta num1-num2
	this->txbSetCosto->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
	
	if (String::Compare(cadena, "E0001") != 0)
	{
		// Si el metodo resta no contiene errores envia la resta de los numeros.
		Double numero;

		numero = numero.Parse(cadena); // Se convierte la cadena a double, para poder hacer comparacion.
		if (numero > 0)
		{
			this->lblGetRestante->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->lblGetRestante->Text = cadena; 

		}
		else
		{
			this->lblGetRestante->ForeColor = System::Drawing::Color::Red;
			this->lblGetRestante->Text = cadena;
		}
	
		
	}
	else
		this->lblGetRestante->Text = this->lblGetDinero->Text; //--> Entra cuando uno de los numeros a sumar ingresa vacio.


}
private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e)
{

	
}


private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	

	if (datos->Count>5)
	{// Entra porque ya se eligio alguna fila del data grid view.

	
		System::Windows::Forms::DialogResult respuesta = MessageBox::Show("Son correctos esos datos a modificar?",
			"Opciones", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (respuesta == System::Windows::Forms::DialogResult::Yes)
		{
									
			//Procedimiento almacenado para hacer un alter table.
			ejecutarEditar();
			MessageBox::Show("La operacion se ejecuto con existo.", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::Hand);
			limpiar();
			this->btnComprar->Enabled = true;
		

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
private: System::Void dgvVistaCom_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	datos->Clear();// Elimina todo lo que haya en la lista de datos.
	this->btnComprar->Enabled = false;// No permite registrar copia mientras se esta editando. 

	// Se copian los datos de la fila seleccionada a los textboxs de la pantalla.

	this->txbSetNomMue->Text = this->dgvVistaCom->CurrentRow->Cells[0]->Value->ToString();
	this->txbSetDescMue->Text = this->dgvVistaCom->CurrentRow->Cells[1]->Value->ToString();
	this->dtpSetfecha->Text = this->dgvVistaCom->CurrentRow->Cells[2]->Value->ToString();
	this->txbSetCosto->Text = this->dgvVistaCom->CurrentRow->Cells[3]->Value->ToString();
	this->txbSetDescCompra->Text = this->dgvVistaCom->CurrentRow->Cells[4]->Value->ToString();

	// Se guardan los datos en un contenedor.

	datos->Add(this->dgvVistaCom->CurrentRow->Cells[0]->Value->ToString());
	datos->Add(this->dgvVistaCom->CurrentRow->Cells[1]->Value->ToString());
	datos->Add(this->dgvVistaCom->CurrentRow->Cells[2]->Value->ToString());
	datos->Add(this->dgvVistaCom->CurrentRow->Cells[3]->Value->ToString());
	datos->Add(this->dgvVistaCom->CurrentRow->Cells[4]->Value->ToString());
	datos->Add(this->dgvVistaCom->CurrentRow->Cells[5]->Value->ToString());// Se copia el id que no es visible en el dgv
}

private: Void inicializarDgv();//-----> Para cargar el dgv con los datos que llegan de la base datos.
private: Void limpiar();//-----------> Limpia las cajas de texto y restablece variables.
private: Boolean ejecutarEditar();//-> Devuelve true si ejecuta el procedimiento almacenado o false si no se ejecuto.
};
}
