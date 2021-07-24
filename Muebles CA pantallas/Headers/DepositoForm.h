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
	/// Resumen de DepositoForm
	/// </summary>
	public ref class DepositoForm : public System::Windows::Forms::Form
	{
	public:
		DepositoForm(void)
		{
			InitializeComponent();
			
			procedimiento = gcnew ProcedimentosController();
			controlador = gcnew ControladorGeneral();
			this->lblGetDinero->Text=procedimiento->getCapitalActual();
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
		~DepositoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelCapital;
	private: System::Windows::Forms::Label^ lblGetDinero;
	private: System::Windows::Forms::Label^ labelFecha;
	public: System::Windows::Forms::Label^ lblGetFecha;
	private: System::Windows::Forms::TextBox^ textBoxDeposito;
	public:

	public:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnDepositar;
	private: System::Windows::Forms::Button^ btnBorrar;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ lblCapActual;
	private: System::Windows::Forms::Label^ lblGetActual;


	private:
		
		ProcedimentosController^ procedimiento;
		ControladorGeneral^ controlador;
		Boolean punto;
		DateTime fechaActual;
		Int16 contador;

	private: System::ComponentModel::IContainer^ components;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->labelCapital = (gcnew System::Windows::Forms::Label());
			this->lblGetDinero = (gcnew System::Windows::Forms::Label());
			this->labelFecha = (gcnew System::Windows::Forms::Label());
			this->lblGetFecha = (gcnew System::Windows::Forms::Label());
			this->textBoxDeposito = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnDepositar = (gcnew System::Windows::Forms::Button());
			this->btnBorrar = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->lblCapActual = (gcnew System::Windows::Forms::Label());
			this->lblGetActual = (gcnew System::Windows::Forms::Label());
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
			this->labelCapital->Location = System::Drawing::Point(90, 80);
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
			this->lblGetDinero->Location = System::Drawing::Point(270, 80);
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
			this->labelFecha->Location = System::Drawing::Point(620, 81);
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
			this->lblGetFecha->Location = System::Drawing::Point(773, 80);
			this->lblGetFecha->Name = L"lblGetFecha";
			this->lblGetFecha->Size = System::Drawing::Size(0, 33);
			this->lblGetFecha->TabIndex = 3;
			// 
			// textBoxDeposito
			// 
			this->textBoxDeposito->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->textBoxDeposito->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxDeposito->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->textBoxDeposito->Font = (gcnew System::Drawing::Font(L"Rockwell", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDeposito->Location = System::Drawing::Point(276, 329);
			this->textBoxDeposito->MaxLength = 10;
			this->textBoxDeposito->Name = L"textBoxDeposito";
			this->textBoxDeposito->Size = System::Drawing::Size(225, 32);
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
			this->label1->Location = System::Drawing::Point(90, 330);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 32);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Cantidad";
			// 
			// btnDepositar
			// 
			this->btnDepositar->BackColor = System::Drawing::Color::Transparent;
			this->btnDepositar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumSeaGreen;
			this->btnDepositar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDepositar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDepositar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnDepositar->Location = System::Drawing::Point(96, 417);
			this->btnDepositar->Name = L"btnDepositar";
			this->btnDepositar->Size = System::Drawing::Size(180, 50);
			this->btnDepositar->TabIndex = 6;
			this->btnDepositar->Text = L"Depositar";
			this->btnDepositar->UseVisualStyleBackColor = false;
			this->btnDepositar->Click += gcnew System::EventHandler(this, &DepositoForm::btnDepositar_Click);
			// 
			// btnBorrar
			// 
			this->btnBorrar->BackColor = System::Drawing::Color::Transparent;
			this->btnBorrar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::MediumVioletRed;
			this->btnBorrar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnBorrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBorrar->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnBorrar->Location = System::Drawing::Point(320, 417);
			this->btnBorrar->Name = L"btnBorrar";
			this->btnBorrar->Size = System::Drawing::Size(180, 50);
			this->btnBorrar->TabIndex = 7;
			this->btnBorrar->Text = L"Borrar";
			this->btnBorrar->UseVisualStyleBackColor = false;
			this->btnBorrar->Click += gcnew System::EventHandler(this, &DepositoForm::btnBorrar_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Goldenrod;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(96, 500);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(405, 50);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Regresar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DepositoForm::button3_Click);
			// 
			// lblCapActual
			// 
			this->lblCapActual->AutoSize = true;
			this->lblCapActual->BackColor = System::Drawing::Color::Transparent;
			this->lblCapActual->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->lblCapActual->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 16.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCapActual->ForeColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->lblCapActual->Location = System::Drawing::Point(620, 330);
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
			this->lblGetActual->Location = System::Drawing::Point(887, 329);
			this->lblGetActual->Name = L"lblGetActual";
			this->lblGetActual->Size = System::Drawing::Size(155, 33);
			this->lblGetActual->TabIndex = 10;
			this->lblGetActual->Text = L"$ 1,500.00 ";
			// 
			// DepositoForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1144, 656);
			this->Controls->Add(this->lblGetActual);
			this->Controls->Add(this->lblCapActual);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->btnBorrar);
			this->Controls->Add(this->btnDepositar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxDeposito);
			this->Controls->Add(this->lblGetFecha);
			this->Controls->Add(this->labelFecha);
			this->Controls->Add(this->lblGetDinero);
			this->Controls->Add(this->labelCapital);
			this->KeyPreview = true;
			this->Name = L"DepositoForm";
			this->Text = L"Deposito";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void textBoxDeposito_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
	//1.- Validar mediante un procedimiento que es un numero lo que ingreso
	//2.- Validar cuando entre un punto y solo puede ingresar uno
	//3.- Despues de ingresar el punto solo pueden ingresar 2 numeros mas.
	
	
	if (contador<2)
	{		
		
		if (controlador->esNumero(e->KeyChar))
		{
			if (punto)
				contador++;
			// entra cuando ingresa un numero.
			return;
		}
		else if (e->KeyChar == 46 && punto == false)
		{
			//entra la primera vez que detecta un punto.
			punto = true;
			return;

		}
	}
	e->Handled = true;
	return;
}
private: System::Void textBoxDeposito_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{
	String^ cadena= controlador->suma(this->textBoxDeposito->Text, this->lblGetDinero->Text);
	

	this->textBoxDeposito->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
	if (String::Compare(cadena, "E0000") != 0)
			this->lblGetActual->Text = cadena; //---> Si el metodo suma no contiene errores envia la suma de los numeros.
	else
		this->lblGetActual->Text = this->lblGetDinero->Text; //-----> Entra cuando uno de los numeros a sumar ingresa vacio.

	
}
private: System::Void btnBorrar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	contador = 0;
	punto = 0;
	this->textBoxDeposito->Text = "0";
	this->textBoxDeposito->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
	
	
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
				contador = 0;
				punto = 0;
				this->textBoxDeposito->Text = "0";
				this->textBoxDeposito->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;

			}

			else
				MessageBox::Show("Ha ocurrdio un error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	
	}
	else
		MessageBox::Show("La cantidad debe ser mayor a 1", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	
}
};
}
