#pragma once
#include <iostream>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic; // Para poder usar los contenedores como listas y arrays
using namespace System::Data;
using namespace MySql::Data::MySqlClient;// Despues de agregar la referencia, se debe de incluir este namespace
using namespace std;

namespace MueblesModel
{
	public ref class ConexionBd
	{
		
	protected: 
		
		MySqlConnection^ conexionSql;
		MySqlCommand^ comandoSql;
		MySqlDataAdapter^ AdaptaSql;
		MySqlDataReader^ lectorSql;
	
	public:
		ConexionBd();
		MySqlConnection^ abrirConexion();
		MySqlConnection^ cerrarConexion();
		int metodoPrueba() { return 10; }
	};
}
