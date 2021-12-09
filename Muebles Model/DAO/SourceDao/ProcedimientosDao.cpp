#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"

#include "..\HeadAo\ProcedimientosDao.h"


void MueblesModel::ProcedimientosDao::procedimientoDeposito(Double monto, String^ fecha)
{

	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL deposito(" + monto + "," + fecha + ");";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
	return;
}
void MueblesModel::ProcedimientosDao::procedimientoRetiro(Double monto, String^ fecha)
{
	
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL retiro("+monto+","+fecha+");";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
	return;
}

void MueblesModel::ProcedimientosDao::procedimientoCompra(String^ nombre, String^ descripcion, String^ fecha, Double costo, String^ descompra)
{

	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL compra(" + nombre + "," + descripcion + "," + fecha + "," + costo + "," + descompra + ");";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
}

void MueblesModel::ProcedimientosDao::procedimientoVenta(int idMueble, Double precio, String^ fecha, String^ ventades)
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL venta(" + idMueble + "," + precio + "," + fecha + "," + ventades + "); ";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
}

void MueblesModel::ProcedimientosDao::procedimientoOtroGasto(String^ nombreMue, Double cantGasto, String^ fechaOtro, String^ descOtro)
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL OtroGasto(" + nombreMue + "," + cantGasto + "," + fechaOtro + "," + descOtro + "); ";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
}

void MueblesModel::ProcedimientosDao::procedimientoUpdateCompra(int id, String^ nombre, String^ descripcion, String^ fecha, Double costo, String^ descompra)
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL updateCompra("+ id +"," + nombre + "," + descripcion + "," + fecha + "," + costo + "," + descompra + ");";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
}

void MueblesModel::ProcedimientosDao::procedimientoUpdateDeposito(int id, String^ fecha, Double cantidad)
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL updateDeposito(" + id + "," + fecha + "," + cantidad + ");";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
}

void MueblesModel::ProcedimientosDao::procedimientoUpdateRetiro(int id, String^ fecha, Double cantidad)
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL updateRetiro(" + id + "," + fecha + "," + cantidad + ");";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
}

void MueblesModel::ProcedimientosDao::procedimientoUpdateVenta(int id, String^ fecha, Double cantidad, String^ descripcion)
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL updateVenta(" + id + "," + fecha + "," + cantidad + "," + descripcion + ");";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
}

void MueblesModel::ProcedimientosDao::procedimientoOtroGasto(int idmue, Double cantidad, String^ fecha, String^ descripcion)
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL otroGasto(" + idmue + "," + cantidad + "," + fecha + "," + descripcion + ");";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
}

void MueblesModel::ProcedimientosDao::procedimientoUpdateGasto(int idmov, Double cantidad, String^ fecha, String^ descripcion)
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL updateGasto(" + idmov + "," + cantidad + "," + fecha + "," + descripcion + ");";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
}

void MueblesModel::ProcedimientosDao::procedimientoUpdateMueble(int idmue, String^ nombre, String^ descripcion)
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL updateMueble(" + idmue + "," + nombre + "," + descripcion + ");";
	comandoSql->ExecuteNonQuery();
	cerrarConexion();
}

Double MueblesModel::ProcedimientosDao::procedimientoCapitalActual()
{	
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL capitalActual(); ";
	lectorSql = comandoSql->ExecuteReader();
	lectorSql->Read();
	return lectorSql->GetDouble(0);
		
}

List<MueblesModel::InversionDto^>^ MueblesModel::ProcedimientosDao::procInversion(int periodo, String^ fechaInicial, String^ fechaFinal)
{
	// periodo------> Ingresa un entero que representa: 1.- semana, 2.-mes y 3.- anio. Esto es el periodo en que se va a mostrar la consulta.
	// fechaInicial-> Fecha de incio para ejecutar la consulta.
	// fechaFinal---> Fecha hasta donde se va ejecutar la consulta.

	List<MueblesModel::InversionDto^>^ lista = gcnew List<InversionDto^>;
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL inversion(" + periodo + "," + fechaInicial + "," + fechaFinal + ");";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.

	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{


		lista->Add(gcnew InversionDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		lista[i]->setPeriodo(lectorSql->GetString(0));//---> Ingresa el numero de semana, nombre de mes o anio.
		lista[i]->setFecha(lectorSql->GetString(1));//-----> Fecha del deposito.
		lista[i]->setCantidad(lectorSql->GetDouble(2));//----> Se guarda la cantidad.
		

		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();


	return lista;
}

List<MueblesModel::GananciaDto^>^ MueblesModel::ProcedimientosDao::procGanancia(int periodo, String^ fechaInicial, String^ fechaFinal)
{
	// periodo------> Ingresa un entero que representa: 1.- semana, 2.-mes y 3.- anio. Esto es el periodo en que se va a mostrar la consulta.
	// fechaInicial-> Fecha de incio para ejecutar la consulta.
	// fechaFinal---> Fecha hasta donde se va ejecutar la consulta.

	List<MueblesModel::GananciaDto^>^ lista = gcnew List<GananciaDto^>;
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL ganancia(" + periodo + "," + fechaInicial + "," + fechaFinal + ");";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.

	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{


		lista->Add(gcnew GananciaDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		lista[i]->setPeriodo(lectorSql->GetString(0));//---> Ingresa el numero de semana, nombre de mes o anio.
		lista[i]->setCostoCompra(lectorSql->GetDouble(1));
		lista[i]->setGastoExtra(lectorSql->GetDouble(2));
		lista[i]->setGastoTotal(lectorSql->GetDouble(3));
		lista[i]->setPrecioVenta(lectorSql->GetDouble(4));
		lista[i]->setGanancia(lectorSql->GetDouble(5));

		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();


	return lista;
}

List<MueblesModel::EstadisticaComprasDto^>^ MueblesModel::ProcedimientosDao::procEstaditicaComprasDto(int periodo, String^ fechaInicial, String^ fechaFinal)
{
	// periodo------> Ingresa un entero que representa: 1.- semana, 2.-mes y 3.- anio. Esto es el periodo en que se va a mostrar la consulta.
	// fechaInicial-> Fecha de incio para ejecutar la consulta.
	// fechaFinal---> Fecha hasta donde se va ejecutar la consulta.

	List<MueblesModel::EstadisticaComprasDto^>^ lista = gcnew List<EstadisticaComprasDto^>;
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL estadisticaCompras(" + periodo + "," + fechaInicial + "," + fechaFinal + ");";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.

	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{


		lista->Add(gcnew EstadisticaComprasDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		lista[i]->setPeriodo(lectorSql->GetString(0));//---> Ingresa el numero de semana, nombre de mes o anio.
		lista[i]->setMueble(lectorSql->GetString(1));
		lista[i]->setFechaCompra(lectorSql->GetString(2));
		lista[i]->setCosto(lectorSql->GetDouble(3));
		lista[i]->setGasto(lectorSql->GetDouble(4));
		
		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();


	return lista;
}

List<MueblesModel::EstadisticaVentasDto^>^ MueblesModel::ProcedimientosDao::procEstaditicaVentasDto(int periodo, String^ fechaInicial, String^ fechaFinal)
{
	// periodo------> Ingresa un entero que representa: 1.- semana, 2.-mes y 3.- anio. Esto es el periodo en que se va a mostrar la consulta.
	// fechaInicial-> Fecha de incio para ejecutar la consulta.
	// fechaFinal---> Fecha hasta donde se va ejecutar la consulta.

	List<MueblesModel::EstadisticaVentasDto^>^ lista = gcnew List<EstadisticaVentasDto^>;
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL estadisticaVentas(" + periodo + "," + fechaInicial + "," + fechaFinal + ");";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.

	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{


		lista->Add(gcnew EstadisticaVentasDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		lista[i]->setPeriodo(lectorSql->GetString(0));//---> Ingresa el numero de semana, nombre de mes o anio.
		lista[i]->setMueble(lectorSql->GetString(1));
		lista[i]->setFechaVenta(lectorSql->GetString(2));
		lista[i]->setPrecio(lectorSql->GetDouble(3));
		lista[i]->setGasto(lectorSql->GetDouble(4));

		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();


	return lista;
}

List<MueblesModel::EstadisticaRetirosDto^>^ MueblesModel::ProcedimientosDao::procEstadisticaRetirosDto(int periodo, String^ fechaInicial, String^ fechaFinal)
{
	// periodo------> Ingresa un entero que representa: 1.- semana, 2.-mes y 3.- anio. Esto es el periodo en que se va a mostrar la consulta.
	// fechaInicial-> Fecha de incio para ejecutar la consulta.
	// fechaFinal---> Fecha hasta donde se va ejecutar la consulta.

	List<MueblesModel::EstadisticaRetirosDto^>^ lista = gcnew List<EstadisticaRetirosDto^>;
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL estadisticaRetiros(" + periodo + "," + fechaInicial + "," + fechaFinal + ");";
	lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.

	int i = 0; // Se inicializa el iterador;

	while (lectorSql->Read())
	{


		lista->Add(gcnew EstadisticaRetirosDto); //Se crea un objeto DTO, que equivale a solo una fila de la consulta.
		// Se llenan los datos del objeto creado con los datos que provienen de la consulta.

		
		lista[i]->setPeriodo(lectorSql->GetString(0));//---> Ingresa el numero de semana, nombre de mes o anio.
		lista[i]->setFechaRetiro(lectorSql->GetString(1));
		lista[i]->setCantidad(lectorSql->GetDouble(2));

		i++;
	}
	lectorSql->Close();//--------------------------> Se cierra el lector de de la consulta.
	cerrarConexion();


	return lista;
}
