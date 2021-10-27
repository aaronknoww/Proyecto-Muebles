#include "../Headers/Pch.h"
#include "DepositoForm.h"
#include "RetiroForm.h"
#include "CompraForm.h"
#include "VentaForm.h"
#include "RepararForm.h"
#include "InventarioForm.h"

#pragma once

namespace MueblesCApantallas {

	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic; // Para poder usar los contenedores como listas y arrays
	using namespace System::Data;
	using namespace MySql::Data::MySqlClient;// Despues de agregar la referencia, se debe de incluir este namespace
	using namespace std;
	
	

	/// <summary>
	/// Resumen de MenuPrincipal
	/// </summary>
	public ref class MenuPrincipal : public System::Windows::Forms::Form
	{


		
	public:
		MenuPrincipal(void)
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
		~MenuPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	

		/// </summary>
		/// <summary>
		/// Variable del diseñador necesaria.
	
	private:
	private: Form^ formaActiva; //------> Creada para saber cual es la forma hija que se encuentra activa.
		System::ComponentModel::Container ^components;
	
	



	public: System::Windows::Forms::Panel^ panelIzquierdo;
	public: System::Windows::Forms::Panel^ panelCentral;
	public: System::Windows::Forms::Button^ botonDeposito;
	public: System::Windows::Forms::PictureBox^ pBLogo;
	public: System::Windows::Forms::Button^ botonReparar;
	public: System::Windows::Forms::Button^ botonVenta;
	public: System::Windows::Forms::Button^ botonCompra;
	public: System::Windows::Forms::Button^ botonRetiro;
	public: System::Windows::Forms::Button^ botonModificar;
	public: System::Windows::Forms::Button^ botonReportes;
	public: System::Windows::Forms::Panel^ panelTitulo;
	public: System::Windows::Forms::Label^ labelMenu;


		
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panelIzquierdo = (gcnew System::Windows::Forms::Panel());
			this->botonReportes = (gcnew System::Windows::Forms::Button());
			this->botonModificar = (gcnew System::Windows::Forms::Button());
			this->botonReparar = (gcnew System::Windows::Forms::Button());
			this->botonVenta = (gcnew System::Windows::Forms::Button());
			this->botonCompra = (gcnew System::Windows::Forms::Button());
			this->botonRetiro = (gcnew System::Windows::Forms::Button());
			this->botonDeposito = (gcnew System::Windows::Forms::Button());
			this->pBLogo = (gcnew System::Windows::Forms::PictureBox());
			this->panelCentral = (gcnew System::Windows::Forms::Panel());
			this->panelTitulo = (gcnew System::Windows::Forms::Panel());
			this->labelMenu = (gcnew System::Windows::Forms::Label());
			this->panelIzquierdo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBLogo))->BeginInit();
			this->panelTitulo->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelIzquierdo
			// 
			this->panelIzquierdo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(60)), static_cast<System::Int32>(static_cast<System::Byte>(60)),
				static_cast<System::Int32>(static_cast<System::Byte>(60)));
			this->panelIzquierdo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelIzquierdo->Controls->Add(this->botonReportes);
			this->panelIzquierdo->Controls->Add(this->botonModificar);
			this->panelIzquierdo->Controls->Add(this->botonReparar);
			this->panelIzquierdo->Controls->Add(this->botonVenta);
			this->panelIzquierdo->Controls->Add(this->botonCompra);
			this->panelIzquierdo->Controls->Add(this->botonRetiro);
			this->panelIzquierdo->Controls->Add(this->botonDeposito);
			this->panelIzquierdo->Controls->Add(this->pBLogo);
			this->panelIzquierdo->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelIzquierdo->Location = System::Drawing::Point(0, 0);
			this->panelIzquierdo->Name = L"panelIzquierdo";
			this->panelIzquierdo->Size = System::Drawing::Size(250, 803);
			this->panelIzquierdo->TabIndex = 2;
			// 
			// botonReportes
			// 
			this->botonReportes->BackColor = System::Drawing::Color::Transparent;
			this->botonReportes->Dock = System::Windows::Forms::DockStyle::Top;
			this->botonReportes->FlatAppearance->BorderSize = 0;
			this->botonReportes->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->botonReportes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonReportes->Font = (gcnew System::Drawing::Font(L"Elephant", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonReportes->ForeColor = System::Drawing::Color::Transparent;
			this->botonReportes->Location = System::Drawing::Point(0, 509);
			this->botonReportes->Name = L"botonReportes";
			this->botonReportes->Size = System::Drawing::Size(250, 60);
			this->botonReportes->TabIndex = 7;
			this->botonReportes->Text = L"Reportes";
			this->botonReportes->UseVisualStyleBackColor = false;
			// 
			// botonModificar
			// 
			this->botonModificar->BackColor = System::Drawing::Color::Transparent;
			this->botonModificar->Dock = System::Windows::Forms::DockStyle::Top;
			this->botonModificar->FlatAppearance->BorderSize = 0;
			this->botonModificar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->botonModificar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonModificar->Font = (gcnew System::Drawing::Font(L"Elephant", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonModificar->ForeColor = System::Drawing::Color::Transparent;
			this->botonModificar->Location = System::Drawing::Point(0, 449);
			this->botonModificar->Name = L"botonModificar";
			this->botonModificar->Size = System::Drawing::Size(250, 60);
			this->botonModificar->TabIndex = 6;
			this->botonModificar->Text = L"Inventario";
			this->botonModificar->UseVisualStyleBackColor = false;
			this->botonModificar->Click += gcnew System::EventHandler(this, &MenuPrincipal::botonModificar_Click);
			// 
			// botonReparar
			// 
			this->botonReparar->BackColor = System::Drawing::Color::Transparent;
			this->botonReparar->Dock = System::Windows::Forms::DockStyle::Top;
			this->botonReparar->FlatAppearance->BorderSize = 0;
			this->botonReparar->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->botonReparar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonReparar->Font = (gcnew System::Drawing::Font(L"Elephant", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonReparar->ForeColor = System::Drawing::Color::Transparent;
			this->botonReparar->Location = System::Drawing::Point(0, 389);
			this->botonReparar->Name = L"botonReparar";
			this->botonReparar->Size = System::Drawing::Size(250, 60);
			this->botonReparar->TabIndex = 5;
			this->botonReparar->Text = L"Reparar Mueble";
			this->botonReparar->UseVisualStyleBackColor = false;
			this->botonReparar->Click += gcnew System::EventHandler(this, &MenuPrincipal::botonReparar_Click);
			// 
			// botonVenta
			// 
			this->botonVenta->BackColor = System::Drawing::Color::Transparent;
			this->botonVenta->Dock = System::Windows::Forms::DockStyle::Top;
			this->botonVenta->FlatAppearance->BorderSize = 0;
			this->botonVenta->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->botonVenta->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonVenta->Font = (gcnew System::Drawing::Font(L"Elephant", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonVenta->ForeColor = System::Drawing::Color::Transparent;
			this->botonVenta->Location = System::Drawing::Point(0, 329);
			this->botonVenta->Name = L"botonVenta";
			this->botonVenta->Size = System::Drawing::Size(250, 60);
			this->botonVenta->TabIndex = 4;
			this->botonVenta->Text = L"Venta";
			this->botonVenta->UseVisualStyleBackColor = false;
			this->botonVenta->Click += gcnew System::EventHandler(this, &MenuPrincipal::botonVenta_Click);
			// 
			// botonCompra
			// 
			this->botonCompra->BackColor = System::Drawing::Color::Transparent;
			this->botonCompra->Dock = System::Windows::Forms::DockStyle::Top;
			this->botonCompra->FlatAppearance->BorderSize = 0;
			this->botonCompra->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->botonCompra->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonCompra->Font = (gcnew System::Drawing::Font(L"Elephant", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonCompra->ForeColor = System::Drawing::Color::Transparent;
			this->botonCompra->Location = System::Drawing::Point(0, 269);
			this->botonCompra->Name = L"botonCompra";
			this->botonCompra->Size = System::Drawing::Size(250, 60);
			this->botonCompra->TabIndex = 3;
			this->botonCompra->Text = L"Compra";
			this->botonCompra->UseVisualStyleBackColor = false;
			this->botonCompra->Click += gcnew System::EventHandler(this, &MenuPrincipal::botonCompra_Click);
			// 
			// botonRetiro
			// 
			this->botonRetiro->BackColor = System::Drawing::Color::Transparent;
			this->botonRetiro->Dock = System::Windows::Forms::DockStyle::Top;
			this->botonRetiro->FlatAppearance->BorderSize = 0;
			this->botonRetiro->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->botonRetiro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonRetiro->Font = (gcnew System::Drawing::Font(L"Elephant", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonRetiro->ForeColor = System::Drawing::Color::Transparent;
			this->botonRetiro->Location = System::Drawing::Point(0, 209);
			this->botonRetiro->Name = L"botonRetiro";
			this->botonRetiro->Size = System::Drawing::Size(250, 60);
			this->botonRetiro->TabIndex = 2;
			this->botonRetiro->Text = L"Retiro";
			this->botonRetiro->UseVisualStyleBackColor = false;
			this->botonRetiro->Click += gcnew System::EventHandler(this, &MenuPrincipal::botonRetiro_Click);
			// 
			// botonDeposito
			// 
			this->botonDeposito->BackColor = System::Drawing::Color::Transparent;
			this->botonDeposito->Dock = System::Windows::Forms::DockStyle::Top;
			this->botonDeposito->FlatAppearance->BorderSize = 0;
			this->botonDeposito->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Teal;
			this->botonDeposito->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->botonDeposito->Font = (gcnew System::Drawing::Font(L"Elephant", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->botonDeposito->ForeColor = System::Drawing::Color::Transparent;
			this->botonDeposito->Location = System::Drawing::Point(0, 149);
			this->botonDeposito->Name = L"botonDeposito";
			this->botonDeposito->Size = System::Drawing::Size(250, 60);
			this->botonDeposito->TabIndex = 1;
			this->botonDeposito->Text = L"Deposito";
			this->botonDeposito->UseVisualStyleBackColor = false;
			this->botonDeposito->Click += gcnew System::EventHandler(this, &MenuPrincipal::botonDeposito_Click);
			// 
			// pBLogo
			// 
			this->pBLogo->BackColor = System::Drawing::Color::Transparent;
			this->pBLogo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pBLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->pBLogo->Location = System::Drawing::Point(0, 0);
			this->pBLogo->Name = L"pBLogo";
			this->pBLogo->Size = System::Drawing::Size(250, 149);
			this->pBLogo->TabIndex = 0;
			this->pBLogo->TabStop = false;
			// 
			// panelCentral
			// 
			this->panelCentral->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(15)),
				static_cast<System::Int32>(static_cast<System::Byte>(15)));
			this->panelCentral->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panelCentral->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelCentral->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelCentral->Location = System::Drawing::Point(250, 100);
			this->panelCentral->Name = L"panelCentral";
			this->panelCentral->Size = System::Drawing::Size(1162, 703);
			this->panelCentral->TabIndex = 3;
			// 
			// panelTitulo
			// 
			this->panelTitulo->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panelTitulo->Controls->Add(this->labelMenu);
			this->panelTitulo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelTitulo->Location = System::Drawing::Point(250, 0);
			this->panelTitulo->Name = L"panelTitulo";
			this->panelTitulo->Size = System::Drawing::Size(1162, 100);
			this->panelTitulo->TabIndex = 4;
			// 
			// labelMenu
			// 
			this->labelMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelMenu->AutoSize = true;
			this->labelMenu->BackColor = System::Drawing::Color::Transparent;
			this->labelMenu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelMenu->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelMenu->Location = System::Drawing::Point(488, 31);
			this->labelMenu->Name = L"labelMenu";
			this->labelMenu->Size = System::Drawing::Size(120, 46);
			this->labelMenu->TabIndex = 0;
			this->labelMenu->Text = L"Inicio";
			this->labelMenu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MenuPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1412, 803);
			this->Controls->Add(this->panelCentral);
			this->Controls->Add(this->panelTitulo);
			this->Controls->Add(this->panelIzquierdo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"MenuPrincipal";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Muebles C & A";
			this->Load += gcnew System::EventHandler(this, &MenuPrincipal::MenuPrincipal_Load);
			this->panelIzquierdo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pBLogo))->EndInit();
			this->panelTitulo->ResumeLayout(false);
			this->panelTitulo->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: Void abrirFormaHija(Form^ hija, Object^ botonSender);
	private: System::Void MenuPrincipal_Load(System::Object^ sender, System::EventArgs^ e)
	{
		
	}


public: System::Void botonDeposito_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	abrirFormaHija(gcnew DepositoForm(), sender);//----> Se manda una nueva instancia de la forma que se manda llamar.
	
	//formaActiva->lblGetFecha->Text = L"15/07/2021";

}
private: System::Void botonRetiro_Click(System::Object^ sender, System::EventArgs^ e) 
{
	

	abrirFormaHija(gcnew RetiroForm(), sender);//----> Se manda una nueva instancia de la forma que se manda llamar.

}
private: System::Void botonCompra_Click(System::Object^ sender, System::EventArgs^ e) 
{
	abrirFormaHija(gcnew CompraForm(), sender);//----> Se manda una nueva instancia de la forma que se manda llamar.
}
private: System::Void botonVenta_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	abrirFormaHija(gcnew VentaForm(), sender);//----> Se manda una nueva instancia de la forma que se manda llamar.
}
private: System::Void botonReparar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	abrirFormaHija(gcnew RepararForm(), sender);//----> Se manda una nueva instancia de la forma que se manda llamar.
}
private: System::Void botonModificar_Click(System::Object^ sender, System::EventArgs^ e) 
{
	abrirFormaHija(gcnew InventarioForm(), sender);//----> Se manda una nueva instancia de la forma que se manda llamar.
}
};
}
