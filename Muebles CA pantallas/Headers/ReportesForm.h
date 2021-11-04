#pragma once

namespace MueblesCApantallas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de ReportesForm
	/// </summary>
	public ref class ReportesForm : public System::Windows::Forms::Form
	{
	public:
		ReportesForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~ReportesForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTituloDgv;
	protected:
	public: System::Windows::Forms::Label^ lblGetFecha;
	private:
	private: System::Windows::Forms::Label^ labelFecha;
	public:
	private: System::Windows::Forms::Label^ lblGetDinero;
	private: System::Windows::Forms::Label^ labelCapital;
	private: System::Windows::Forms::DataGridView^ dgvVistaAlm;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nombreMue;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ desMueble;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fecha;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ costoCompra;
	private: System::Windows::Forms::CheckBox^ chbInvercion;
	private: System::Windows::Forms::CheckBox^ chbGanancia;
	private: System::Windows::Forms::CheckBox^ chbCompras;
	private: System::Windows::Forms::CheckBox^ chbVentas;
	private: System::Windows::Forms::CheckBox^ chbRetiros;
	private: System::Windows::Forms::GroupBox^ gbOpciones;
	private: System::Windows::Forms::CheckBox^ chbMensual;
	private: System::Windows::Forms::CheckBox^ chbAnual;
	private: System::Windows::Forms::CheckBox^ chbManual;
	private: System::Windows::Forms::GroupBox^ gbPeriodo;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->lblTituloDgv = (gcnew System::Windows::Forms::Label());
			this->lblGetFecha = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->lblGetDinero = (gcnew System::Windows::Forms::Label());
			this->labelCapital = (gcnew System::Windows::Forms::Label());
			this->dgvVistaAlm = (gcnew System::Windows::Forms::DataGridView());
			this->nombreMue = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->desMueble = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fecha = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->costoCompra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chbInvercion = (gcnew System::Windows::Forms::CheckBox());
			this->chbGanancia = (gcnew System::Windows::Forms::CheckBox());
			this->chbCompras = (gcnew System::Windows::Forms::CheckBox());
			this->chbVentas = (gcnew System::Windows::Forms::CheckBox());
			this->chbRetiros = (gcnew System::Windows::Forms::CheckBox());
			this->gbOpciones = (gcnew System::Windows::Forms::GroupBox());
			this->chbMensual = (gcnew System::Windows::Forms::CheckBox());
			this->chbAnual = (gcnew System::Windows::Forms::CheckBox());
			this->chbManual = (gcnew System::Windows::Forms::CheckBox());
			this->gbPeriodo = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->lblTituloDgv->Location = System::Drawing::Point(639, 185);
			this->lblTituloDgv->Name = L"lblTituloDgv";
			this->lblTituloDgv->Size = System::Drawing::Size(341, 33);
			this->lblTituloDgv->TabIndex = 83;
			this->lblTituloDgv->Text = L"Muebles en el Almacen";
			// 
			// lblGetFecha
			// 
			this->lblGetFecha->AutoSize = true;
			this->lblGetFecha->BackColor = System::Drawing::Color::Transparent;
			this->lblGetFecha->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetFecha->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetFecha->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetFecha->Location = System::Drawing::Point(913, 65);
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
			this->labelFecha->Location = System::Drawing::Point(758, 65);
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
			this->lblGetDinero->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetDinero->Location = System::Drawing::Point(557, 66);
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
			this->labelCapital->Location = System::Drawing::Point(390, 66);
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
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle13->BackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::Color::DarkGoldenrod;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvVistaAlm->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->dgvVistaAlm->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvVistaAlm->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->nombreMue,
					this->desMueble, this->fecha, this->costoCompra
			});
			this->dgvVistaAlm->EnableHeadersVisualStyles = false;
			this->dgvVistaAlm->GridColor = System::Drawing::Color::DarkGoldenrod;
			this->dgvVistaAlm->Location = System::Drawing::Point(468, 228);
			this->dgvVistaAlm->Name = L"dgvVistaAlm";
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle15->BackColor = System::Drawing::SystemColors::WindowFrame;
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle15->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dgvVistaAlm->RowHeadersDefaultCellStyle = dataGridViewCellStyle15;
			this->dgvVistaAlm->RowHeadersVisible = false;
			this->dgvVistaAlm->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(180)),
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(137)));
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dgvVistaAlm->RowsDefaultCellStyle = dataGridViewCellStyle16;
			this->dgvVistaAlm->RowTemplate->Height = 24;
			this->dgvVistaAlm->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvVistaAlm->Size = System::Drawing::Size(657, 395);
			this->dgvVistaAlm->TabIndex = 78;
			// 
			// nombreMue
			// 
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			this->nombreMue->DefaultCellStyle = dataGridViewCellStyle14;
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
			// chbInvercion
			// 
			this->chbInvercion->AutoSize = true;
			this->chbInvercion->BackColor = System::Drawing::Color::Transparent;
			this->chbInvercion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chbInvercion->ForeColor = System::Drawing::Color::Peru;
			this->chbInvercion->Location = System::Drawing::Point(14, 40);
			this->chbInvercion->Name = L"chbInvercion";
			this->chbInvercion->Size = System::Drawing::Size(132, 33);
			this->chbInvercion->TabIndex = 84;
			this->chbInvercion->Text = L"Inversion";
			this->chbInvercion->UseVisualStyleBackColor = false;
			// 
			// chbGanancia
			// 
			this->chbGanancia->AutoSize = true;
			this->chbGanancia->BackColor = System::Drawing::Color::Transparent;
			this->chbGanancia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chbGanancia->ForeColor = System::Drawing::Color::Peru;
			this->chbGanancia->Location = System::Drawing::Point(14, 67);
			this->chbGanancia->Name = L"chbGanancia";
			this->chbGanancia->Size = System::Drawing::Size(136, 33);
			this->chbGanancia->TabIndex = 85;
			this->chbGanancia->Text = L"Ganancia";
			this->chbGanancia->UseVisualStyleBackColor = false;
			// 
			// chbCompras
			// 
			this->chbCompras->AutoSize = true;
			this->chbCompras->BackColor = System::Drawing::Color::Transparent;
			this->chbCompras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chbCompras->ForeColor = System::Drawing::Color::Peru;
			this->chbCompras->Location = System::Drawing::Point(14, 94);
			this->chbCompras->Name = L"chbCompras";
			this->chbCompras->Size = System::Drawing::Size(133, 33);
			this->chbCompras->TabIndex = 86;
			this->chbCompras->Text = L"Compras";
			this->chbCompras->UseVisualStyleBackColor = false;
			// 
			// chbVentas
			// 
			this->chbVentas->AutoSize = true;
			this->chbVentas->BackColor = System::Drawing::Color::Transparent;
			this->chbVentas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chbVentas->ForeColor = System::Drawing::Color::Peru;
			this->chbVentas->Location = System::Drawing::Point(14, 121);
			this->chbVentas->Name = L"chbVentas";
			this->chbVentas->Size = System::Drawing::Size(108, 33);
			this->chbVentas->TabIndex = 87;
			this->chbVentas->Text = L"Ventas";
			this->chbVentas->UseVisualStyleBackColor = false;
			// 
			// chbRetiros
			// 
			this->chbRetiros->AutoSize = true;
			this->chbRetiros->BackColor = System::Drawing::Color::Transparent;
			this->chbRetiros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chbRetiros->ForeColor = System::Drawing::Color::Peru;
			this->chbRetiros->Location = System::Drawing::Point(14, 149);
			this->chbRetiros->Name = L"chbRetiros";
			this->chbRetiros->Size = System::Drawing::Size(112, 33);
			this->chbRetiros->TabIndex = 88;
			this->chbRetiros->Text = L"Retiros";
			this->chbRetiros->UseVisualStyleBackColor = false;
			// 
			// gbOpciones
			// 
			this->gbOpciones->Controls->Add(this->chbRetiros);
			this->gbOpciones->Controls->Add(this->chbVentas);
			this->gbOpciones->Controls->Add(this->chbCompras);
			this->gbOpciones->Controls->Add(this->chbGanancia);
			this->gbOpciones->Controls->Add(this->chbInvercion);
			this->gbOpciones->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbOpciones->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->gbOpciones->Location = System::Drawing::Point(23, 210);
			this->gbOpciones->Name = L"gbOpciones";
			this->gbOpciones->Size = System::Drawing::Size(215, 203);
			this->gbOpciones->TabIndex = 89;
			this->gbOpciones->TabStop = false;
			this->gbOpciones->Text = L"Opciones de Reporte";
			// 
			// chbMensual
			// 
			this->chbMensual->AutoSize = true;
			this->chbMensual->BackColor = System::Drawing::Color::Transparent;
			this->chbMensual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chbMensual->ForeColor = System::Drawing::Color::Peru;
			this->chbMensual->Location = System::Drawing::Point(17, 29);
			this->chbMensual->Name = L"chbMensual";
			this->chbMensual->Size = System::Drawing::Size(126, 33);
			this->chbMensual->TabIndex = 89;
			this->chbMensual->Text = L"Mensual";
			this->chbMensual->UseVisualStyleBackColor = false;
			// 
			// chbAnual
			// 
			this->chbAnual->AutoSize = true;
			this->chbAnual->BackColor = System::Drawing::Color::Transparent;
			this->chbAnual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chbAnual->ForeColor = System::Drawing::Color::Peru;
			this->chbAnual->Location = System::Drawing::Point(17, 57);
			this->chbAnual->Name = L"chbAnual";
			this->chbAnual->Size = System::Drawing::Size(95, 33);
			this->chbAnual->TabIndex = 90;
			this->chbAnual->Text = L"Anual";
			this->chbAnual->UseVisualStyleBackColor = false;
			// 
			// chbManual
			// 
			this->chbManual->AutoSize = true;
			this->chbManual->BackColor = System::Drawing::Color::Transparent;
			this->chbManual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->chbManual->ForeColor = System::Drawing::Color::Peru;
			this->chbManual->Location = System::Drawing::Point(17, 85);
			this->chbManual->Name = L"chbManual";
			this->chbManual->Size = System::Drawing::Size(197, 33);
			this->chbManual->TabIndex = 91;
			this->chbManual->Text = L"Definir Periodo";
			this->chbManual->UseVisualStyleBackColor = false;
			// 
			// gbPeriodo
			// 
			this->gbPeriodo->Controls->Add(this->chbManual);
			this->gbPeriodo->Controls->Add(this->chbAnual);
			this->gbPeriodo->Controls->Add(this->chbMensual);
			this->gbPeriodo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbPeriodo->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->gbPeriodo->Location = System::Drawing::Point(23, 433);
			this->gbPeriodo->Name = L"gbPeriodo";
			this->gbPeriodo->Size = System::Drawing::Size(218, 130);
			this->gbPeriodo->TabIndex = 92;
			this->gbPeriodo->TabStop = false;
			this->gbPeriodo->Text = L"Elige un Periodo";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker1->Location = System::Drawing::Point(12, 593);
			this->dateTimePicker1->MaxDate = System::DateTime(2060, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker1->MinDate = System::DateTime(2020, 12, 1, 0, 0, 0, 0);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(154, 30);
			this->dateTimePicker1->TabIndex = 93;
			this->dateTimePicker1->Value = System::DateTime(2021, 12, 25, 23, 59, 59, 0);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePicker2->Location = System::Drawing::Point(206, 593);
			this->dateTimePicker2->MaxDate = System::DateTime(2060, 12, 31, 0, 0, 0, 0);
			this->dateTimePicker2->MinDate = System::DateTime(2020, 12, 1, 0, 0, 0, 0);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(154, 30);
			this->dateTimePicker2->TabIndex = 94;
			this->dateTimePicker2->Value = System::DateTime(2021, 12, 25, 23, 59, 59, 0);
			// 
			// ReportesForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(1157, 688);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
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
	};
}
