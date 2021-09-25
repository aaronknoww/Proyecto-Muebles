#pragma once
#include "ControladorGeneral.h"
#include "Fila.h"


//Aquí se guardan los datos obtenidos despues de ejecutar las vistas almacenadas en la base de datos.
//Despues esos datos pueden ser enviados al VIEW para ser utilizados.

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

	public ref class VistasController
	{
	private:
		
		VistasDao^ vista;		// Objeto para poder mandar llamar los metodos que ejecutan las vistas.
		List<Fila^>^ listaG; // Objeto que contiene los datos que representan una fila de una tabla.
		
	
	public:
		VistasController();

		List<Fila^>^ comprasRealizadasCtr(); //---> Ejecuta vista comprasRealizadas y los datos los convierte a texto.
		List<Fila^>^ vistaInventarioCtr(); //---> Ejecuta vista comprasRealizadas y los datos los convierte a texto.
		List<Fila^>^ vistaDepositosCtr();
		List<Fila^>^ vistaRetirosCtr(); 
	};

}

