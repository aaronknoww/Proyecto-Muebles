#pragma once

namespace MueblesCApantallas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de CompraForm
	/// </summary>
	public ref class CompraForm : public System::Windows::Forms::Form
	{
	public:
		CompraForm(void)
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
		~CompraForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblNomMueble;
	protected:
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
	private:
	private: System::Windows::Forms::Label^ labelFecha;
	private: System::Windows::Forms::Label^ lblGetRestante;
	private: System::Windows::Forms::Label^ lblRestante;
	private: System::Windows::Forms::Button^ btnComprar;

	private: System::Windows::Forms::Button^ btnLimpiar;

	private: System::Windows::Forms::Button^ btnMostrar;
	public:


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
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->gbMueble->SuspendLayout();
			this->gbCompra->SuspendLayout();
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
			this->lblNomMueble->Location = System::Drawing::Point(145, 46);
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
			this->txbSetNomMue->Location = System::Drawing::Point(307, 46);
			this->txbSetNomMue->MaxLength = 30;
			this->txbSetNomMue->Name = L"txbSetNomMue";
			this->txbSetNomMue->Size = System::Drawing::Size(320, 32);
			this->txbSetNomMue->TabIndex = 17;
			this->txbSetNomMue->Text = L"01234567890123456789";
			this->txbSetNomMue->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txbSetNomMue->TextChanged += gcnew System::EventHandler(this, &CompraForm::txbSetNomMue_TextChanged);
			// 
			// lblDescMue
			// 
			this->lblDescMue->AutoSize = true;
			this->lblDescMue->BackColor = System::Drawing::Color::Transparent;
			this->lblDescMue->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblDescMue->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDescMue->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblDescMue->Location = System::Drawing::Point(102, 100);
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
			this->txbSetDescMue->Location = System::Drawing::Point(307, 101);
			this->txbSetDescMue->MaxLength = 60;
			this->txbSetDescMue->Multiline = true;
			this->txbSetDescMue->Name = L"txbSetDescMue";
			this->txbSetDescMue->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txbSetDescMue->Size = System::Drawing::Size(320, 76);
			this->txbSetDescMue->TabIndex = 19;
			this->txbSetDescMue->Text = L"0123456789012345678901234567890123456789";
			this->txbSetDescMue->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
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
			this->gbMueble->Location = System::Drawing::Point(11, 56);
			this->gbMueble->Name = L"gbMueble";
			this->gbMueble->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->gbMueble->Size = System::Drawing::Size(638, 200);
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
			this->lblCosto->Location = System::Drawing::Point(174, 39);
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
			this->txbSetCosto->Location = System::Drawing::Point(302, 40);
			this->txbSetCosto->MaxLength = 30;
			this->txbSetCosto->Name = L"txbSetCosto";
			this->txbSetCosto->Size = System::Drawing::Size(320, 32);
			this->txbSetCosto->TabIndex = 21;
			this->txbSetCosto->Text = L"01234567890123456789";
			this->txbSetCosto->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblFechaCompra
			// 
			this->lblFechaCompra->AutoSize = true;
			this->lblFechaCompra->BackColor = System::Drawing::Color::Transparent;
			this->lblFechaCompra->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblFechaCompra->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblFechaCompra->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblFechaCompra->Location = System::Drawing::Point(11, 94);
			this->lblFechaCompra->Name = L"lblFechaCompra";
			this->lblFechaCompra->Size = System::Drawing::Size(275, 32);
			this->lblFechaCompra->TabIndex = 23;
			this->lblFechaCompra->Text = L"*Fecha de compra";
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
			this->lblDesCompra->Location = System::Drawing::Point(97, 154);
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
			this->txbSetDescCompra->Location = System::Drawing::Point(302, 155);
			this->txbSetDescCompra->MaxLength = 60;
			this->txbSetDescCompra->Multiline = true;
			this->txbSetDescCompra->Name = L"txbSetDescCompra";
			this->txbSetDescCompra->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->txbSetDescCompra->Size = System::Drawing::Size(320, 76);
			this->txbSetDescCompra->TabIndex = 21;
			this->txbSetDescCompra->Text = L"0123456789012345678901234567890123456789";
			this->txbSetDescCompra->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
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
			this->gbCompra->ForeColor = System::Drawing::Color::Green;
			this->gbCompra->Location = System::Drawing::Point(13, 294);
			this->gbCompra->Name = L"gbCompra";
			this->gbCompra->Size = System::Drawing::Size(632, 249);
			this->gbCompra->TabIndex = 24;
			this->gbCompra->TabStop = false;
			this->gbCompra->Text = L"Datos de la compra";
			// 
			// dtpSetfecha
			// 
			this->dtpSetfecha->CalendarFont = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dtpSetfecha->CalendarMonthBackground = System::Drawing::SystemColors::MenuHighlight;
			this->dtpSetfecha->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F));
			this->dtpSetfecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpSetfecha->Location = System::Drawing::Point(302, 97);
			this->dtpSetfecha->Name = L"dtpSetfecha";
			this->dtpSetfecha->Size = System::Drawing::Size(320, 39);
			this->dtpSetfecha->TabIndex = 24;
			// 
			// lblGetDinero
			// 
			this->lblGetDinero->AutoSize = true;
			this->lblGetDinero->BackColor = System::Drawing::Color::Transparent;
			this->lblGetDinero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblGetDinero->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblGetDinero->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblGetDinero->Location = System::Drawing::Point(864, 67);
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
			this->labelCapital->Location = System::Drawing::Point(683, 68);
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
			this->lblGetFecha->Location = System::Drawing::Point(864, 131);
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
			this->labelFecha->Location = System::Drawing::Point(683, 131);
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
			this->lblGetRestante->Location = System::Drawing::Point(864, 191);
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
			this->lblRestante->Location = System::Drawing::Point(683, 191);
			this->lblRestante->Name = L"lblRestante";
			this->lblRestante->Size = System::Drawing::Size(161, 32);
			this->lblRestante->TabIndex = 29;
			this->lblRestante->Text = L"Restante: ";
			// 
			// btnComprar
			// 
			this->btnComprar->BackColor = System::Drawing::Color::Transparent;
			this->btnComprar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnComprar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComprar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComprar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnComprar->Location = System::Drawing::Point(13, 573);
			this->btnComprar->Name = L"btnComprar";
			this->btnComprar->Size = System::Drawing::Size(180, 50);
			this->btnComprar->TabIndex = 31;
			this->btnComprar->Text = L"Comprar";
			this->btnComprar->UseVisualStyleBackColor = false;
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->BackColor = System::Drawing::Color::Transparent;
			this->btnLimpiar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumVioletRed;
			this->btnLimpiar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLimpiar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLimpiar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnLimpiar->Location = System::Drawing::Point(219, 573);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(180, 50);
			this->btnLimpiar->TabIndex = 32;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = false;
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::Transparent;
			this->btnMostrar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Goldenrod;
			this->btnMostrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnMostrar->Location = System::Drawing::Point(426, 573);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(219, 50);
			this->btnMostrar->TabIndex = 33;
			this->btnMostrar->Text = L"Mostrar";
			this->btnMostrar->UseVisualStyleBackColor = false;
			// 
			// CompraForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1144, 656);
			this->Controls->Add(this->btnMostrar);
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
			this->Name = L"CompraForm";
			this->Text = L"Compra";
			this->gbMueble->ResumeLayout(false);
			this->gbMueble->PerformLayout();
			this->gbCompra->ResumeLayout(false);
			this->gbCompra->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void txbSetNomMue_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
