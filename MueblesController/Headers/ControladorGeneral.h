#pragma once
using namespace System;
using namespace System::Windows;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic; // Para poder usar los contenedores como listas y arrays
using namespace System::Data;
using namespace MySql::Data::MySqlClient;// Despues de agregar la referencia, se debe de incluir este namespace
using namespace System::Globalization;// Para poder usar cultureType

using namespace std;
using namespace MueblesModel;

namespace MueblesController
{
	public ref class ControladorGeneral
	{
	private:
		
	public:
		ControladorGeneral();
		Boolean esNumero(Char); //-----------------> Regresa true si recibe algun número.
		String^ suma(String^, String^);//----------> Suma dos valores string, para eso se utilizan Double.
		String^ resta(String^, String^);//---------> Resta dos valores string, para eso los combierte en Double.
		Boolean vacio(String^);//------------------> Recibe una cadena e indica si esta se encuentra vacia.
		String^ cadenaSql(String^);//--------------> Convierte una cadena normal a una que reconoce MySQL, le agrega ' '
	};

}

