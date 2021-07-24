#include "../Headers/Pch.h"
#include "../Headers/MenuPrincipal.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Project1 es el nombre del proyecto
	MueblesCApantallas::MenuPrincipal MenuPrincipal;	//Reemplazar [formas1] por el nombre que tenga el proyecto y [Myform] por el nombre de tu ventana. 
	Application::Run(% MenuPrincipal);
}




Void MueblesCApantallas::MenuPrincipal::abrirFormaHija(Form^ hija, Object^ botonSender)
{
	if (formaActiva != nullptr)
	{
		formaActiva->Close();
	}
	//Activate();
	formaActiva = hija;
	
	// Configuracion de la forma hija, para que se adapte al panel del menupricipal. 

	formaActiva->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None; //----> Para quitar los bordes y los botones de control de ventana.
	formaActiva->TopLevel = false;
	formaActiva->Dock = DockStyle::Fill;
	this->panelCentral->Controls->Add(hija); // --------> Se agrega la forma al panel de control.
	this->panelCentral->Tag = hija;
	formaActiva->BringToFront();
	formaActiva->Show();
	
	this->labelMenu->Text = hija->Text;
	formaActiva->BackgroundImage = System::Drawing::Image::FromFile("C:\\Estudios\\Curso MYSQL\\Proyecto muebles\\Muebles CA\\Muebles CA pantallas\\Imagenes de sistema\\panelMedio.jpeg");
	this->panelIzquierdo->BackgroundImage = System::Drawing::Image::FromFile("C:\\Estudios\\Curso MYSQL\\Proyecto muebles\\Muebles CA\\Muebles CA pantallas\\Imagenes de sistema\\maderaPanel.jpeg");
	this->pBLogo->BackgroundImage = System::Drawing::Image::FromFile("C:\\Estudios\\Curso MYSQL\\Proyecto muebles\\Muebles CA\\Muebles CA pantallas\\Imagenes de sistema\\elefante quemadoR.jpg");
	this->pBLogo->BackgroundImageLayout = ImageLayout::Stretch;
	this->panelTitulo->BackgroundImage= System::Drawing::Image::FromFile("C:\\Estudios\\Curso MYSQL\\Proyecto muebles\\Muebles CA\\Muebles CA pantallas\\Imagenes de sistema\\madPanelSup.bmp");
	this->panelTitulo->BackgroundImageLayout = ImageLayout::Stretch;
	return Void();
}
