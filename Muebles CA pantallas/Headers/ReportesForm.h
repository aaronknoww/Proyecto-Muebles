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





	private: System::Windows::Forms::GroupBox^ gbOpciones;



	private: System::Windows::Forms::GroupBox^ gbPeriodo;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::RadioButton^ rbRetiros;
	private: System::Windows::Forms::RadioButton^ rbVentas;
	private: System::Windows::Forms::RadioButton^ rbCompras;
	private: System::Windows::Forms::RadioButton^ rbGanancia;
	private: System::Windows::Forms::RadioButton^ rbInversion;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ rbMensual;
	private: System::Windows::Forms::RadioButton^ tbSemanal;

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
			this->gbOpciones = (gcnew System::Windows::Forms::GroupBox());
			this->gbPeriodo = (gcnew System::Windows::Forms::GroupBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->rbInversion = (gcnew System::Windows::Forms::RadioButton());
			this->rbGanancia = (gcnew System::Windows::Forms::RadioButton());
			this->rbCompras = (gcnew System::Windows::Forms::RadioButton());
			this->rbVentas = (gcnew System::Windows::Forms::RadioButton());
			this->rbRetiros = (gcnew System::Windows::Forms::RadioButton());
			this->rbMensual = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->tbSemanal = (gcnew System::Windows::Forms::RadioButton());
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
			this->gbOpciones->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->gbOpciones->Location = System::Drawing::Point(23, 210);
			this->gbOpciones->Name = L"gbOpciones";
			this->gbOpciones->Size = System::Drawing::Size(260, 203);
			this->gbOpciones->TabIndex = 89;
			this->gbOpciones->TabStop = false;
			this->gbOpciones->Text = L"Opciones de Reporte";
			// 
			// gbPeriodo
			// 
			this->gbPeriodo->BackColor = System::Drawing::Color::Transparent;
			this->gbPeriodo->Controls->Add(this->tbSemanal);
			this->gbPeriodo->Controls->Add(this->radioButton1);
			this->gbPeriodo->Controls->Add(this->rbMensual);
			this->gbPeriodo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->gbPeriodo->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->gbPeriodo->Location = System::Drawing::Point(23, 433);
			this->gbPeriodo->Name = L"gbPeriodo";
			this->gbPeriodo->Size = System::Drawing::Size(260, 130);
			this->gbPeriodo->TabIndex = 92;
			this->gbPeriodo->TabStop = false;
			this->gbPeriodo->Text = L"Elige un Periodo";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dateTimePicker1->CustomFormat = L"";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
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
			// rbInversion
			// 
			this->rbInversion->AutoSize = true;
			this->rbInversion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbInversion->Location = System::Drawing::Point(12, 35);
			this->rbInversion->Name = L"rbInversion";
			this->rbInversion->Size = System::Drawing::Size(131, 33);
			this->rbInversion->TabIndex = 95;
			this->rbInversion->TabStop = true;
			this->rbInversion->Text = L"Inversion";
			this->rbInversion->UseVisualStyleBackColor = true;
			// 
			// rbGanancia
			// 
			this->rbGanancia->AutoSize = true;
			this->rbGanancia->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbGanancia->Location = System::Drawing::Point(12, 66);
			this->rbGanancia->Name = L"rbGanancia";
			this->rbGanancia->Size = System::Drawing::Size(135, 33);
			this->rbGanancia->TabIndex = 96;
			this->rbGanancia->TabStop = true;
			this->rbGanancia->Text = L"Ganancia";
			this->rbGanancia->UseVisualStyleBackColor = true;
			// 
			// rbCompras
			// 
			this->rbCompras->AutoSize = true;
			this->rbCompras->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbCompras->Location = System::Drawing::Point(12, 96);
			this->rbCompras->Name = L"rbCompras";
			this->rbCompras->Size = System::Drawing::Size(132, 33);
			this->rbCompras->TabIndex = 97;
			this->rbCompras->TabStop = true;
			this->rbCompras->Text = L"Compras";
			this->rbCompras->UseVisualStyleBackColor = true;
			// 
			// rbVentas
			// 
			this->rbVentas->AutoSize = true;
			this->rbVentas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbVentas->Location = System::Drawing::Point(12, 125);
			this->rbVentas->Name = L"rbVentas";
			this->rbVentas->Size = System::Drawing::Size(107, 33);
			this->rbVentas->TabIndex = 98;
			this->rbVentas->TabStop = true;
			this->rbVentas->Text = L"Ventas";
			this->rbVentas->UseVisualStyleBackColor = true;
			// 
			// rbRetiros
			// 
			this->rbRetiros->AutoSize = true;
			this->rbRetiros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbRetiros->Location = System::Drawing::Point(12, 154);
			this->rbRetiros->Name = L"rbRetiros";
			this->rbRetiros->Size = System::Drawing::Size(111, 33);
			this->rbRetiros->TabIndex = 99;
			this->rbRetiros->TabStop = true;
			this->rbRetiros->Text = L"Retiros";
			this->rbRetiros->UseVisualStyleBackColor = true;
			// 
			// rbMensual
			// 
			this->rbMensual->AutoSize = true;
			this->rbMensual->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbMensual->Location = System::Drawing::Point(12, 57);
			this->rbMensual->Name = L"rbMensual";
			this->rbMensual->Size = System::Drawing::Size(125, 33);
			this->rbMensual->TabIndex = 100;
			this->rbMensual->TabStop = true;
			this->rbMensual->Text = L"Mensual";
			this->rbMensual->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->radioButton1->Location = System::Drawing::Point(12, 85);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(94, 33);
			this->radioButton1->TabIndex = 101;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Anual";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// tbSemanal
			// 
			this->tbSemanal->AutoSize = true;
			this->tbSemanal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSemanal->Location = System::Drawing::Point(12, 30);
			this->tbSemanal->Name = L"tbSemanal";
			this->tbSemanal->Size = System::Drawing::Size(129, 33);
			this->tbSemanal->TabIndex = 102;
			this->tbSemanal->TabStop = true;
			this->tbSemanal->Text = L"Semanal";
			this->tbSemanal->UseVisualStyleBackColor = true;
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
