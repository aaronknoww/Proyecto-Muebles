#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"

#include "../HeadAo/VistasDao.h"


MueblesModel::VistasDao::VistasDao()
{
	_listaGenerica = gcnew List<VistaDto^>;
	_listaComprasRealizadas = gcnew List<ComprasRealizadas^>;
}

List<MueblesModel::VistaDto^>^ MueblesModel::VistasDao::vistaInventario()
{
	
	_listaGenerica->Clear();
	
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "SELECT * FROM bdnegociomuebles.inventarioview;";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.
	
	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{
	
		
		_listaGenerica->Add(gcnew VistaDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		_listaGenerica[i]->setId(lectorSql->GetInt32(0));//---------> id	
		_listaGenerica[i]->setCadena1(lectorSql->GetString(1));//---> Nombre Mueble.
		_listaGenerica[i]->setCadena2(lectorSql->GetString(2));//---> Descripcion Mueble.
		_listaGenerica[i]->setDinero1(lectorSql->GetDouble(3));//---> Costo Final.
		_listaGenerica[i]->setFecha(lectorSql->GetDateTime(4));//---> Fecha.
		
		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();

		
	
	return _listaGenerica;
}

List<MueblesModel::VistaDto^>^ MueblesModel::VistasDao::vistaMovimientosFinancieros()
{
	_listaGenerica->Clear();
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
	_listaGenerica->Clear();
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

List<MueblesModel::ComprasRealizadas^>^ MueblesModel::VistasDao::vistaCompraRealizada()
{

	_listaComprasRealizadas->Clear();

	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "SELECT * FROM bdnegociomuebles.comprasRealizadas;";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.

	int i = 0; // Se inicializa el iterador;
	
	while (lectorSql->Read())
	{


		_listaComprasRealizadas->Add(gcnew ComprasRealizadas); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		_listaComprasRealizadas[i]->setId(lectorSql->GetInt32(0));
		_listaComprasRealizadas[i]->setNombre(lectorSql->GetString(1));
		_listaComprasRealizadas[i]->setDesMueble(lectorSql->GetString(2)); 
		_listaComprasRealizadas[i]->setFecha(Convert::ToDateTime(lectorSql->GetString(3))); //DateTime^ fecha = Convert::ToDateTime(prueba);
		_listaComprasRealizadas[i]->setCosto(lectorSql->GetDouble(4)); 
		_listaComprasRealizadas[i]->setDesCompra(lectorSql->GetString(5));
		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();



	return _listaComprasRealizadas;
}

List<MueblesModel::VistaDto^>^ MueblesModel::VistasDao::vistaDepositos()
{
	_listaGenerica->Clear();
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "SELECT * FROM bdnegociomuebles.depositosView;";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.
	
	int i = 0; // Se inicializa el iterador;
	
	while (lectorSql->Read())
	{


		_listaGenerica->Add(gcnew VistaDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		_listaGenerica[i]->setId(lectorSql->GetInt32(0));
		_listaGenerica[i]->setCadena1(lectorSql->GetString(1));//----> Se guarda el tipo de movimiento.
		_listaGenerica[i]->setFecha(Convert::ToDateTime(lectorSql->GetString(2)));//----> Se guarda la fecha de compra.
		_listaGenerica[i]->setDinero1(lectorSql->GetDouble(3));//----> Se guarda el costo.
		
		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();


	return _listaGenerica;

}

List<MueblesModel::VistaDto^>^ MueblesModel::VistasDao::vistaRetiros()
{
	_listaGenerica->Clear();
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "SELECT * FROM bdnegociomuebles.retirosView;";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.

	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{


		_listaGenerica->Add(gcnew VistaDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		_listaGenerica[i]->setId(lectorSql->GetInt32(0));
		_listaGenerica[i]->setCadena1(lectorSql->GetString(1));//----> Se guarda el tipo de movimiento.
		_listaGenerica[i]->setFecha(Convert::ToDateTime(lectorSql->GetString(2)));//----> Se guarda la fecha de compra.
		_listaGenerica[i]->setDinero1(lectorSql->GetDouble(3));//----> Se guarda el costo.

		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();


	return _listaGenerica;
}

List<MueblesModel::VistaDto^>^ MueblesModel::VistasDao::vistaVentas()
{
	_listaGenerica->Clear();
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "SELECT * FROM bdnegociomuebles.ventasView;";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.

	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{
		_listaGenerica->Add(gcnew VistaDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
	
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.
		_listaGenerica[i]->setId(lectorSql->GetInt32(0));//---------------------------> Se guarda el id del movimiento financiero.
		_listaGenerica[i]->setCadena1(lectorSql->GetString(1));//---------------------> Se guarda el nombre del mueble.
		_listaGenerica[i]->setFecha(Convert::ToDateTime(lectorSql->GetString(2)));//--> Se guarda la fecha de venta.
		_listaGenerica[i]->setDinero1(lectorSql->GetDouble(3));//---------------------> Se guarda el precio.
		_listaGenerica[i]->setCadena2(lectorSql->GetString(4));//---------------------> Guarda la descripcion de la venta.
		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();

	return _listaGenerica;
}

List<MueblesModel::VistaDto^>^ MueblesModel::VistasDao::vistaOtrosGastos()
{
	_listaGenerica->Clear();
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "SELECT * FROM bdnegociomuebles.otrosGastosView;";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.

	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{
		_listaGenerica->Add(gcnew VistaDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.

		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.
		_listaGenerica[i]->setId(lectorSql->GetInt32(0));//---------------------------> Se guarda el id del movimiento financiero.
		_listaGenerica[i]->setId2(lectorSql->GetInt32(1));//--------------------------> Se guarda el id del Mueble.
		_listaGenerica[i]->setCadena1(lectorSql->GetString(2));//---------------------> Se guarda el nombre del mueble.
		_listaGenerica[i]->setFecha(Convert::ToDateTime(lectorSql->GetString(3)));//--> Se guarda la fecha de venta.
		_listaGenerica[i]->setDinero1(lectorSql->GetDouble(4));//---------------------> Se guarda el precio.
		_listaGenerica[i]->setCadena2(lectorSql->GetString(5));//---------------------> Guarda la descripcion del gasto.
		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();

	return _listaGenerica;
}
