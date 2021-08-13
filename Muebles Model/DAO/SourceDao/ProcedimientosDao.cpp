#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"

#include "..\HeadAo\ProcedimientosDao.h"


void MueblesModel::ProcedimientosDao::procedimientoDeposito(Double monto, String^ fecha)
{
	String^ muestra;
	comandoSql->Connection = abrirConexion();
	muestra = "CALL deposito(" + monto + "," + fecha + ");";
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

void MueblesModel::ProcedimientosDao::procedimientoVenta(String^ nombreMueble, Double precio, String^ fecha, String^ ventades)
{
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL venta(" + nombreMueble + "," + precio + "," + fecha + "," + ventades + "); ";
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

Double MueblesModel::ProcedimientosDao::procedimientoCapitalActual()
{	
	//enum class MySqlDbType tp;
	
	comandoSql->Connection = abrirConexion();
	comandoSql->CommandText = "CALL capitalActual(); ";
	lectorSql = comandoSql->ExecuteReader();
	//lectorSql = comandoSql->ExecuteReader();//-----> Se lee el comando o consulta.
	//comandoSql->Parameters->Add("cap", tipo);
	lectorSql->Read();
	return lectorSql->GetDouble(0);
	
	
}
