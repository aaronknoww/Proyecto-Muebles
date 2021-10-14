#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"

#include "..\HeadAo\ProcedimientosDao.h"


void MueblesModel::ProcedimientosDao::procedimientoDeposito(Double monto, String^ fecha)
{
	//String^ muestra;
	comandoSql->Connection = abrirConexion();
	//muestra = "CALL deposito(" + monto + "," + fecha + ");";
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

Double MueblesModel::ProcedimientosDao::procedimientoCapitalActual()
{	

	
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL capitalActual(); ";
	lectorSql = comandoSql->ExecuteReader();
	lectorSql->Read();
	return lectorSql->GetDouble(0);
	
	
}
