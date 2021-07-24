# include "../Headers/pch.h"
# include "../Headers/ProcedimientosController.h" 

MueblesController::ProcedimentosController::ProcedimentosController()
{
	return;
}

String^ MueblesController::ProcedimentosController::getCapitalActual()
{
	ProcedimientosDao cap;
	return cap.procedimientoCapitalActual().ToString("N2");
}

Boolean MueblesController::ProcedimentosController::depositar(String^ deposito, DateTime^ fecha)
{
	ProcedimientosDao procDeposito;
	Double res=0.0;
	auto tipos = fecha->GetDateTimeFormats();

	String^ formato;
	formato = tipos[80];// Se obtiene un formato que concuerda con un datetime de mysql 
	formato = "'" + formato + "'";// Se agregan
	res = res.Parse(deposito);

	try
	{
		procDeposito.procedimientoDeposito(res, formato);
	}
	catch (Exception^ exp)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;
}

Boolean MueblesController::ProcedimentosController::retiro(String^ retiro, DateTime^ fecha)
{
	ProcedimientosDao procedimientoDao;
	Double res;
	auto tipos = fecha->GetDateTimeFormats();

	String^ formato;
	formato = tipos[80];// Se obtiene un formato que concuerda con un datetime de mysql 
	formato = "'" + formato + "'";// Se agregan
	res = res.Parse(retiro);

	try
	{
		procedimientoDao.procedimientoRetiro(res, formato);
	}
	catch (Exception^ exp)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;

	
}
