#pragma once
#include "../HeadAo/MueblesConexion.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic; // Para poder usar los contenedores como listas y arrays
using namespace System::Data;
using namespace MySql::Data::MySqlClient;// Despues de agregar la referencia, se debe de incluir este namespace
using namespace std;


namespace MueblesModel
{
	public ref class MueblesDao

	{
	private:
		
		
		MySqlConnection^ conexSql = gcnew MySqlConnection();//-------> Se crea objeto para la conexion con mysql.
		MySqlCommand^ comandoSql = gcnew MySqlCommand();//-----------> Se crea objeto para ejecutar los comandos.
		DataTable^ tablaSql = gcnew DataTable(); //------------------> Para poder almacenar la consulta que se obtenga
		MySqlDataAdapter^ AdaptaSql = gcnew MySqlDataAdapter();
		MySqlDataReader^ lectorSql;


		// Aqui se van a insertar todos los metodos del CRUD.


	//	int	idMuebles;
	//	String^ NombreMueble;
	//	String^ Descripcion;
	//	String^ foto1;
	//	String^ foto2;
	//		foto1 				longblob DEFAULT NULL,
	//		foto2				longblob DEFAULT NULL,

	

	};
}

