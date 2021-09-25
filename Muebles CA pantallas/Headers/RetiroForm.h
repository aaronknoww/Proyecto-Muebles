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
	/// Resumen de RetiroForm
	/// </summary>
	public ref class RetiroForm : public System::Windows::Forms::Form
	{
	public:
		RetiroForm(void)
		{
			procedimiento = gcnew ProcedimentosController();
			controlador = gcnew ControladorGeneral();
			vistas = gcnew VistasController();
			consulta = gcnew List<Fila^>;
			consulta = vistas->vistaRetirosCtr();//---> Carga la consulta al inicio del programa.

			InitializeComponent();
			
			this->lblGetDinero->Text = procedimiento->getCapitalActual();
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
		~RetiroForm()
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

	//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\\
		
	
	private: System::Windows::Forms::Label^ lblGetActual;
	private: System::Windows::Forms::Label^ lblCapActual;
	private: System::Windows::Forms::Label^ labelFecha;
	private: System::Windows::Forms::Label^ lblGetDinero;
	private: System::Windows::Forms::Label^ labelCapital;
	private: System::Windows::Forms::Label^ lblTituloRet;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lblFechaRet;
	public: System::Windows::Forms::Label^ lblGetFecha;
	private: System::Windows::Forms::GroupBox^ gbRetiros;
	private: System::Windows::Forms::Button^ btnBorrar;
	private: System::Windows::Forms::Button^ btnRetiro;
	private: System::Windows::Forms::DateTimePicker^ dtpSetfecha;
	private: System::Windows::Forms::TextBox^ textBoxRetiro;
	
	private: System::Windows::Forms::DataGridView^ dgvVistaRet;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ tipo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ cantidad;

     System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle31 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle33 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle34 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle35 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle32 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->lblGetActual = (gcnew System::Windows::Forms::Label());
			this->lblCapActual = (gcnew System::Windows::Forms::Label());
			this->btnBorrar = (gcnew System::Windows::Forms::Button());
			this->btnRetiro = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxRetiro = (gcnew System::Windows::Forms::TextBox());
			this->lblGetFecha = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->lblGetDinero = (gcnew System::Windows::Forms::Label());
			this->labelCapital = (gcnew System::Windows::Forms::Label());
			this->lblTituloRet = (gcnew System::Windows::Forms::Label());
			this->dgvVistaRet = (gcnew System::Windows::Forms::DataGridView());
			this->tipo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->cantidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gbRetiros = (gcnew System::Windows::Forms::GroupBox());
			this->lblFechaRet = (gcnew System::Windows::Forms::Label());
			this->dtpSetfecha = (gcnew System::Windows::Forms::DateTimePicker());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaRet))->BeginInit();
			this->gbRetiros->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblGetActual
			// 
			this->lblGetActual->AutoSize = true;
			this->lblGetActual->BackColor = System::Drawing::Color::Transparent;
			this->lblGetActual->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetActual->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetActual->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->lblGetActual->Location = System::Drawing::Point(255, 118);
			this->lblGetActual->Name = L"lblGetActual";
			this->lblGetActual->Size = System::Drawing::Size(155, 33);
			this->lblGetActual->TabIndex = 21;
			this->lblGetActual->Text = L"$ 1,500.00 ";
			// 
			// lblCapActual
			// 
			this->lblCapActual->AutoSize = true;
			this->lblCapActual->BackColor = System::Drawing::Color::Transparent;
			this->lblCapActual->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblCapActual->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCapActual->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblCapActual->Location = System::Drawing::Point(5, 118);
			this->lblCapActual->Name = L"lblCapActual";
			this->lblCapActual->Size = System::Drawing::Size(235, 32);
			this->lblCapActual->TabIndex = 20;
			this->lblCapActual->Text = L"Capital Actual: ";
			// 
			// btnBorrar
			// 
			this->btnBorrar->AutoSize = true;
			this->btnBorrar->BackColor = System::Drawing::Color::Transparent;
			this->btnBorrar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumVioletRed;
			this->btnBorrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBorrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBorrar->Location = System::Drawing::Point(249, 495);
			this->btnBorrar->Name = L"btnBorrar";
			this->btnBorrar->Size = System::Drawing::Size(205, 50);
			this->btnBorrar->TabIndex = 18;
			this->btnBorrar->Text = L"Borrar";
			this->btnBorrar->UseVisualStyleBackColor = false;
			this->btnBorrar->Click += gcnew System::EventHandler(this, &RetiroForm::btnBorrar_Click);
			// 
			// btnRetiro
			// 
			this->btnRetiro->AutoSize = true;
			this->btnRetiro->BackColor = System::Drawing::Color::Transparent;
			this->btnRetiro->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnRetiro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRetiro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRetiro->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnRetiro->Location = System::Drawing::Point(27, 495);
			this->btnRetiro->Name = L"btnRetiro";
			this->btnRetiro->Size = System::Drawing::Size(205, 50);
			this->btnRetiro->TabIndex = 17;
			this->btnRetiro->Text = L"Retirar";
			this->btnRetiro->UseVisualStyleBackColor = false;
			this->btnRetiro->Click += gcnew System::EventHandler(this, &RetiroForm::btnRetiro_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->label1->Location = System::Drawing::Point(19, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 32);
			this->label1->TabIndex = 16;
			this->label1->Text = L"*Cantidad";
			// 
			// textBoxRetiro
			// 
			this->textBoxRetiro->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBoxRetiro->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxRetiro->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxRetiro->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxRetiro->Location = System::Drawing::Point(193, 60);
			this->textBoxRetiro->MaxLength = 10;
			this->textBoxRetiro->Name = L"textBoxRetiro";
			this->textBoxRetiro->Size = System::Drawing::Size(225, 32);
			this->textBoxRetiro->TabIndex = 15;
			this->textBoxRetiro->Text = L"0 ";
			this->textBoxRetiro->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxRetiro->TextChanged += gcnew System::EventHandler(this, &RetiroForm::textBoxRetiro_TextChanged);
			// 
			// lblGetFecha
			// 
			this->lblGetFecha->AutoSize = true;
			this->lblGetFecha->BackColor = System::Drawing::Color::Transparent;
			this->lblGetFecha->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetFecha->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetFecha->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetFecha->Location = System::Drawing::Point(779, 86);
			this->lblGetFecha->Name = L"lblGetFecha";
			this->lblGetFecha->Size = System::Drawing::Size(0, 33);
			this->lblGetFecha->TabIndex = 14;
			// 
			// labelFecha
			// 
			this->labelFecha->AutoSize = true;
			this->labelFecha->BackColor = System::Drawing::Color::Transparent;
			this->labelFecha->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->labelFecha->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->labelFecha->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->labelFecha->Location = System::Drawing::Point(634, 54);
			this->labelFecha->Name = L"labelFecha";
			this->labelFecha->Size = System::Drawing::Size(115, 32);
			this->labelFecha->TabIndex = 13;
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
			this->lblGetDinero->Location = System::Drawing::Point(255, 54);
			this->lblGetDinero->Name = L"lblGetDinero";
			this->lblGetDinero->Size = System::Drawing::Size(155, 33);
			this->lblGetDinero->TabIndex = 12;
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
			this->labelCapital->Location = System::Drawing::Point(106, 55);
			this->labelCapital->Name = L"labelCapital";
			this->labelCapital->Size = System::Drawing::Size(134, 32);
			this->labelCapital->TabIndex = 11;
			this->labelCapital->Text = L"Capital: ";
			// 
			// lblTituloRet
			// 
			this->lblTituloRet->AutoSize = true;
			this->lblTituloRet->BackColor = System::Drawing::Color::Transparent;
			this->lblTituloRet->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblTituloRet->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTituloRet->ForeColor = System::Drawing::Color::Peru;
			this->lblTituloRet->Location = System::Drawing::Point(663, 208);
			this->lblTituloRet->Name = L"lblTituloRet";
			this->lblTituloRet->Size = System::Drawing::Size(272, 33);
			this->lblTituloRet->TabIndex = 47;
			this->lblTituloRet->Text = L"Retiros Realizados";
			// 
			// dgvVistaRet
			// 
			this->dgvVistaRet->AllowUserToAddRows = false;
			this->dgvVistaRet->AllowUserToDeleteRows = false;
			this->dgvVistaRet->AllowUserToResizeRows = false;
			this->dgvVistaRet->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvVistaRet->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->dgvVistaRet->BackgroundColor = System::Drawing::SystemColors::Desktop;
			this->dgvVistaRet->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle31->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle31->BackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle31->ForeColor = System::Drawing::Color::DarkGoldenrod;
			dataGridViewCellStyle31->SelectionBackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle31->SelectionForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle31->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvVistaRet->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle31;
			this->dgvVistaRet->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvVistaRet->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->tipo, this->fecha,
					this->cantidad
			});
			dataGridViewCellStyle33->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle33->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle33->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle33->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle33->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle33->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvVistaRet->DefaultCellStyle = dataGridViewCellStyle33;
			this->dgvVistaRet->EnableHeadersVisualStyles = false;
			this->dgvVistaRet->GridColor = System::Drawing::Color::DarkGoldenrod;
			this->dgvVistaRet->Location = System::Drawing::Point(484, 244);
			this->dgvVistaRet->Name = L"dgvVistaRet";
			dataGridViewCellStyle34->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle34->BackColor = System::Drawing::SystemColors::WindowFrame;
			dataGridViewCellStyle34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle34->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			dataGridViewCellStyle34->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle34->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle34->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvVistaRet->RowHeadersDefaultCellStyle = dataGridViewCellStyle34;
			this->dgvVistaRet->RowHeadersVisible = false;
			this->dgvVistaRet->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle35->ForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle35->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(137)));
			dataGridViewCellStyle35->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvVistaRet->RowsDefaultCellStyle = dataGridViewCellStyle35;
			this->dgvVistaRet->RowTemplate->Height = 24;
			this->dgvVistaRet->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvVistaRet->Size = System::Drawing::Size(648, 387);
			this->dgvVistaRet->TabIndex = 46;
			// 
			// tipo
			// 
			dataGridViewCellStyle32->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->tipo->DefaultCellStyle = dataGridViewCellStyle32;
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
			// gbRetiros
			// 
			this->gbRetiros->BackColor = System::Drawing::Color::Transparent;
			this->gbRetiros->Controls->Add(this->dtpSetfecha);
			this->gbRetiros->Controls->Add(this->lblFechaRet);
			this->gbRetiros->Controls->Add(this->label1);
			this->gbRetiros->Controls->Add(this->textBoxRetiro);
			this->gbRetiros->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->gbRetiros->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbRetiros->ForeColor = System::Drawing::Color::Peru;
			this->gbRetiros->Location = System::Drawing::Point(27, 260);
			this->gbRetiros->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbRetiros->Name = L"gbRetiros";
			this->gbRetiros->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->gbRetiros->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gbRetiros->Size = System::Drawing::Size(427, 199);
			this->gbRetiros->TabIndex = 48;
			this->gbRetiros->TabStop = false;
			this->gbRetiros->Text = L"Datos del Retiros";
			// 
			// lblFechaRet
			// 
			this->lblFechaRet->AutoSize = true;
			this->lblFechaRet->BackColor = System::Drawing::Color::Transparent;
			this->lblFechaRet->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblFechaRet->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFechaRet->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblFechaRet->Location = System::Drawing::Point(59, 116);
			this->lblFechaRet->Name = L"lblFechaRet";
			this->lblFechaRet->Size = System::Drawing::Size(121, 32);
			this->lblFechaRet->TabIndex = 25;
			this->lblFechaRet->Text = L"*Fecha ";
			this->lblFechaRet->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
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
			this->dtpSetfecha->Size = System::Drawing::Size(219, 39);
			this->dtpSetfecha->TabIndex = 24;
			// 
			// RetiroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1144, 656);
			this->Controls->Add(this->gbRetiros);
			this->Controls->Add(this->lblTituloRet);
			this->Controls->Add(this->dgvVistaRet);
			this->Controls->Add(this->lblGetActual);
			this->Controls->Add(this->lblCapActual);
			this->Controls->Add(this->btnBorrar);
			this->Controls->Add(this->btnRetiro);
			this->Controls->Add(this->lblGetFecha);
			this->Controls->Add(this->labelFecha);
			this->Controls->Add(this->lblGetDinero);
			this->Controls->Add(this->labelCapital);
			this->KeyPreview = true;
			this->Name = L"RetiroForm";
			this->Text = L"Retiro";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvVistaRet))->EndInit();
			this->gbRetiros->ResumeLayout(false);
			this->gbRetiros->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void cargarDgv(List<Fila^>^);
	private: System::Void limpiarDgv();// Elimina todos las filas del dgv.
	private: System::Void limpiar();// Elimina todos las filas del dgv.

	private: System::Void btnRetiro_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Double resultado = 0.00;
		resultado = resultado.Parse(this->textBoxRetiro->Text);

		if (resultado > 0)
		{

			System::Windows::Forms::DialogResult respuesta = MessageBox::Show("Quieres retirar esa cantidad", "Opciones", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (respuesta == System::Windows::Forms::DialogResult::Yes)
			{
				if (procedimiento->retiro(this->textBoxRetiro->Text, fechaActual))
				{
					MessageBox::Show("Se retiró correctamente", "Correcto", MessageBoxButtons::OK, MessageBoxIcon::None);

					this->lblGetDinero->Text = procedimiento->getCapitalActual();
					this->lblGetActual->Text = this->lblGetDinero->Text;
					contador = 0;
					punto = 0;
					this->textBoxRetiro->Text = "0";
					this->textBoxRetiro->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;

					limpiar();
					limpiarDgv();
					consulta->Clear();
					consulta=vistas->vistaRetirosCtr();
					cargarDgv(consulta);
				}

				else
					MessageBox::Show("Ha ocurrdio un error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		else
			MessageBox::Show("La cantidad debe ser mayor a 0", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
	private: System::Void btnBorrar_Click(System::Object^ sender, System::EventArgs^ e)
{
	contador = 0;
	punto = 0;
	this->textBoxRetiro->Text = "0";
	this->textBoxRetiro->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
	


}
	private: System::Void textBoxRetiro_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
	
	String^ cadena = controlador->resta(this->lblGetDinero->Text, this->textBoxRetiro->Text);
	this->textBoxRetiro->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
	if (String::Compare(cadena, "E0001") != 0)
	{
		// Si el metodo resta no contiene errores envia la resta de los numeros.
		Double numero;

		numero = numero.Parse(cadena); // Se convierte la cadena a double, para poder hacer comparacion.
		if (numero > 0)
		{
			this->lblGetActual->ForeColor = System::Drawing::Color::MediumSeaGreen;
			this->lblGetActual->Text = cadena;

		}
		else
		{
			this->lblGetActual->ForeColor = System::Drawing::Color::Red;
			this->lblGetActual->Text = cadena;
		}


	}
	else
		this->lblGetActual->Text = this->lblGetDinero->Text; //--> Entra cuando uno de los numeros a sumar ingresa vacio.

}
};
}
