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
	public ref class ProcedimentosController
	{
	private:

	public:
		ProcedimentosController();
		String^ getCapitalActual();
		Boolean depositar(String^, DateTime^);//---> Manda llamar al stored procedure deposito. Utilizando Model DAO
		Boolean retiro(String^, DateTime^);//------> Manda llamar al stored procedure retirar. Utilizando Model DAO
		
	};

}