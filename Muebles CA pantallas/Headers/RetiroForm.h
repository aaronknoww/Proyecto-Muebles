#pragma once

namespace MueblesCApantallas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
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
			InitializeComponent();
			procedimiento = gcnew ProcedimentosController();
			controlador = gcnew ControladorGeneral();
			this->lblGetDinero->Text = procedimiento->getCapitalActual();
			fechaActual = fechaActual.Now;
			this->lblGetFecha->Text = fechaActual.ToShortDateString();// Para mostrar la fehca actual al usuario
			this->lblGetActual->Text = this->lblGetDinero->Text;
			punto = false;
			contador = 0;
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
	private: System::Windows::Forms::Label^ lblGetActual;
	protected:
	private: System::Windows::Forms::Label^ lblCapActual;
	private: System::Windows::Forms::Button^ btnRegresar;

	private: System::Windows::Forms::Button^ btnBorrar;
	private: System::Windows::Forms::Button^ btnRetiro;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxRetiro;

	public: System::Windows::Forms::Label^ lblGetFecha;
	private:
	private: System::Windows::Forms::Label^ labelFecha;
	public:
	private: System::Windows::Forms::Label^ lblGetDinero;
	private: System::Windows::Forms::Label^ labelCapital;

	private:
		
		ProcedimentosController^ procedimiento;
		ControladorGeneral^ controlador;
		Boolean punto;
		DateTime fechaActual;
		Int16 contador;
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblGetActual = (gcnew System::Windows::Forms::Label());
			this->lblCapActual = (gcnew System::Windows::Forms::Label());
			this->btnRegresar = (gcnew System::Windows::Forms::Button());
			this->btnBorrar = (gcnew System::Windows::Forms::Button());
			this->btnRetiro = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxRetiro = (gcnew System::Windows::Forms::TextBox());
			this->lblGetFecha = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->lblGetDinero = (gcnew System::Windows::Forms::Label());
			this->labelCapital = (gcnew System::Windows::Forms::Label());
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
			this->lblGetActual->Location = System::Drawing::Point(893, 335);
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
			this->lblCapActual->Location = System::Drawing::Point(626, 336);
			this->lblCapActual->Name = L"lblCapActual";
			this->lblCapActual->Size = System::Drawing::Size(235, 32);
			this->lblCapActual->TabIndex = 20;
			this->lblCapActual->Text = L"Capital Actual: ";
			// 
			// btnRegresar
			// 
			this->btnRegresar->AutoSize = true;
			this->btnRegresar->BackColor = System::Drawing::Color::Transparent;
			this->btnRegresar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Goldenrod;
			this->btnRegresar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRegresar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegresar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnRegresar->Location = System::Drawing::Point(102, 506);
			this->btnRegresar->Name = L"btnRegresar";
			this->btnRegresar->Size = System::Drawing::Size(405, 50);
			this->btnRegresar->TabIndex = 19;
			this->btnRegresar->Text = L"Regresar";
			this->btnRegresar->UseVisualStyleBackColor = false;
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
			this->btnBorrar->Location = System::Drawing::Point(326, 423);
			this->btnBorrar->Name = L"btnBorrar";
			this->btnBorrar->Size = System::Drawing::Size(180, 50);
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
			this->btnRetiro->Location = System::Drawing::Point(102, 423);
			this->btnRetiro->Name = L"btnRetiro";
			this->btnRetiro->Size = System::Drawing::Size(180, 50);
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
			this->label1->Location = System::Drawing::Point(96, 336);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 32);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Cantidad";
			// 
			// textBoxRetiro
			// 
			this->textBoxRetiro->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBoxRetiro->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxRetiro->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxRetiro->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxRetiro->Location = System::Drawing::Point(282, 335);
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
			this->labelFecha->Location = System::Drawing::Point(626, 87);
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
			this->lblGetDinero->Location = System::Drawing::Point(276, 86);
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
			this->labelCapital->Location = System::Drawing::Point(96, 86);
			this->labelCapital->Name = L"labelCapital";
			this->labelCapital->Size = System::Drawing::Size(134, 32);
			this->labelCapital->TabIndex = 11;
			this->labelCapital->Text = L"Capital: ";
			// 
			// RetiroForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1144, 656);
			this->Controls->Add(this->lblGetActual);
			this->Controls->Add(this->lblCapActual);
			this->Controls->Add(this->btnRegresar);
			this->Controls->Add(this->btnBorrar);
			this->Controls->Add(this->btnRetiro);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxRetiro);
			this->Controls->Add(this->lblGetFecha);
			this->Controls->Add(this->labelFecha);
			this->Controls->Add(this->lblGetDinero);
			this->Controls->Add(this->labelCapital);
			this->KeyPreview = true;
			this->Name = L"RetiroForm";
			this->Text = L"Retiro";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
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
	
	String^ cadena = controlador->suma(this->textBoxRetiro->Text, this->lblGetDinero->Text);
	this->textBoxRetiro->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
	if (String::Compare(cadena, "E0000") != 0)
		this->lblGetActual->Text = cadena; //---> Si el metodo suma no contiene errores envia la suma de los numeros.
	else
		this->lblGetActual->Text = this->lblGetDinero->Text; //-----> Entra cuando uno de los numeros a sumar ingresa vacio.

}
};
}
