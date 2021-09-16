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

Boolean MueblesController::ProcedimentosController::comprar(String^ nombre, String^ desMue, DateTime^ fecha, String^ costo, String^ desCom)
{
	ProcedimientosDao proCompra;
	
	Double resultado;
	//System::Collections::Generic::array<System::String^>^ tipos fecha->GetDateTimeFormats();
	
	auto tipos = fecha->GetDateTimeFormats();
	String^ formato = tipos[80];// Se obtiene un formato que concuerda con un datetime de mysql 
	
	

	resultado = resultado.Parse(costo);

	

	try
	{
		proCompra.procedimientoCompra(f.cadenaSql(nombre), f.cadenaSql(desMue), f.cadenaSql(formato), resultado, f.cadenaSql(desCom));
		
	}
	catch (Exception^ exp)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;
	
	
	
}

Boolean MueblesController::ProcedimentosController::updateCompra(String^ id, String^ nombreMue, String^ DesMue, String^ fecha, String^ costo, String^desCompra)
{
	ProcedimientosDao proUpdate;
	
	DateTime^ fech= gcnew DateTime;
	fech=fech->Parse(fecha);

	auto tipo = fech->GetDateTimeFormats();
	fecha = tipo[80];

	try
	{
		proUpdate.procedimietnoUpdateCompra(Int32::Parse(id), f.cadenaSql(nombreMue), f.cadenaSql(DesMue),
			f.cadenaSql(fecha), Double::Parse(costo), f.cadenaSql(desCompra));

	}
	catch (Exception^ exp)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;
}

Boolean MueblesController::ProcedimentosController::venta(String^ idMueble, String^ precio, DateTime^ fecha, String^ desVenta)
{
	ProcedimientosDao proVenta;

	
	auto tipo = fecha->GetDateTimeFormats();
	String^ fech = tipo[80];

	try
	{
		proVenta.procedimientoVenta(Int32::Parse(idMueble), Double::Parse(precio),
			f.cadenaSql(fech), f.cadenaSql(desVenta));

	}
	catch (Exception^ exp)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;
	
}
