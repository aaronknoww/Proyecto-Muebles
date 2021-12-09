#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"
#include "..\HeadAo\MueblesConexion.h"

MueblesModel::ConexionBd::ConexionBd()
{
	conexionSql = gcnew MySqlConnection(" datasource = localhost; port = 3306; username = root; password = A@ron1984; database = bdnegociomuebles;");//-------> Se crea objeto para la conexion con mysql.
	comandoSql = gcnew MySqlCommand();//-----> Se crea objeto para ejecutar los comandos.
	AdaptaSql = gcnew MySqlDataAdapter();
	return;
}

MySqlConnection^ MueblesModel::ConexionBd::abrirConexion()
{
	String^ var = conexionSql->State.ToString();
	

	if ( var == "Closed")
	
	try
	{
		conexionSql->Open();

	}
	catch (Exception^ )
	{
		std::cout << "no se pudo abrir conexion";
	}
	return conexionSql;
}

MySqlConnection^ MueblesModel::ConexionBd::cerrarConexion()
{
	String^ var = conexionSql->State.ToString();
	if (var == "Open")
		conexionSql->Close();
	return conexionSql;
	
}
