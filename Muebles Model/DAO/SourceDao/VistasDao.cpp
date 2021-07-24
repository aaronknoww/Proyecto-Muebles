#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"

#include "../HeadAo/VistasDao.h"


MueblesModel::VistasDao::VistasDao()
{
	_listaGenerica = gcnew List<VistaDto^>;
}

List<MueblesModel::VistaDto^>^ MueblesModel::VistasDao::vistaInventario()
{
	
	
	
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "SELECT * FROM bdnegociomuebles.inventarioview;";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.
	
	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{
	
		
		_listaGenerica->Add(gcnew VistaDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		_listaGenerica[i]->setId(lectorSql->GetInt32(0));
		_listaGenerica[i]->setCadena1(lectorSql->GetString(1));
		_listaGenerica[i]->setDinero1(lectorSql->GetDouble(2)); //---> Se guarda el Costo Final de la tabla. 
		_listaGenerica[i]->setDinero2(lectorSql->GetDouble(3)); //--> Se guarda el Precio sugerido de la tabla. 
		_listaGenerica[i]->setFecha(lectorSql->GetDateTime(4));
		_listaGenerica[i]->setCadena2(lectorSql->GetString(5));
		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();

		
	
	return _listaGenerica;
}

List<MueblesModel::VistaDto^>^ MueblesModel::VistasDao::vistaMovimientosFinancieros()
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "SELECT * FROM bdnegociomuebles.movimientosregistrados;";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.

	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{


		_listaGenerica->Add(gcnew VistaDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		_listaGenerica[i]->setId(lectorSql->GetInt32(0));
		_listaGenerica[i]->setCadena1(lectorSql->GetString(1));//----> Se guarda el Tipo de movimiento.
		_listaGenerica[i]->setFecha(lectorSql->GetDateTime(2));//----> Se guarda la fecha del movimiento.
		_listaGenerica[i]->setDinero1(lectorSql->GetDouble(3));//----> Se guarda la Cantidad o Monto.
		_listaGenerica[i]->setDinero2(lectorSql->GetDouble(4));//----> Se guarda el Capital restante. 
		
		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();



	return _listaGenerica;
}

List<MueblesModel::VistaDto^>^ MueblesModel::VistasDao::vistaRegistroMuebles()
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "SELECT * FROM bdnegociomuebles.registromuebles;";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.

	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{


		_listaGenerica->Add(gcnew VistaDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		_listaGenerica[i]->setId(lectorSql->GetInt32(0));
		_listaGenerica[i]->setCadena1(lectorSql->GetString(1));//----> Se guarda el nombre del mueble.
		_listaGenerica[i]->setDinero1(lectorSql->GetDouble(2));//----> Se guarda el costo.
		_listaGenerica[i]->setFecha(lectorSql->GetDateTime(3));//----> Se guarda la fecha de compra.
		_listaGenerica[i]->setCadena2(lectorSql->GetString(4));//----> Se guarda la descripcion. 

		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();

	
	return _listaGenerica;
	
}
