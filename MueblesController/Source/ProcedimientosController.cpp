# include "../Headers/pch.h"
# include "../Headers/ProcedimientosController.h" 

MueblesController::ProcedimentosController::ProcedimentosController()
{
	procedimiento = gcnew ProcedimientosDao();
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
	catch (Exception^)
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
	catch (Exception^)
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

	auto tipos = fecha->GetDateTimeFormats();
	String^ formato = tipos[80];// Se obtiene un formato que concuerda con un datetime de mysql 

	resultado = resultado.Parse(costo);

	try
	{
		proCompra.procedimientoCompra(f.cadenaSql(nombre), f.cadenaSql(desMue), f.cadenaSql(formato), resultado, f.cadenaSql(desCom));
		
	}
	catch (Exception^)
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
		proUpdate.procedimientoUpdateCompra(Int32::Parse(id), f.cadenaSql(nombreMue), f.cadenaSql(DesMue),
			f.cadenaSql(fecha), Double::Parse(costo), f.cadenaSql(desCompra));

	}
	catch (Exception^)
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
	catch (Exception^)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;
	
}

Boolean MueblesController::ProcedimentosController::updateDeposito(String^ id, DateTime^ fecha, String^ cantidad )
{
	ProcedimientosDao procedimiento;
	auto tipo = fecha->GetDateTimeFormats();
	String^ fech = tipo[80];

	try
	{
		procedimiento.procedimientoUpdateDeposito(Int32::Parse(id), f.cadenaSql(fech), Double::Parse(cantidad));

	}
	catch (Exception^)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;

}

Boolean MueblesController::ProcedimentosController::updateRetiro(String^ id, DateTime^ fecha, String^cantidad)
{
	ProcedimientosDao procedimiento;
	auto tipo = fecha->GetDateTimeFormats();
	String^ fech = tipo[80];

	try
	{
		procedimiento.procedimientoUpdateRetiro(Int32::Parse(id), f.cadenaSql(fech), Double::Parse(cantidad));

	}
	catch (Exception^)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;
}

Boolean MueblesController::ProcedimentosController::updateVenta(String^ id, DateTime^ fecha, String^ cantidad, String^ descripcion)
{
	ProcedimientosDao procedimiento;
	auto tipo = fecha->GetDateTimeFormats();
	String^ fech = tipo[80];

	try
	{
		procedimiento.procedimientoUpdateVenta(Int32::Parse(id), f.cadenaSql(fech), Double::Parse(cantidad), f.cadenaSql(descripcion));

	}
	catch (Exception^)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;
}

Boolean MueblesController::ProcedimentosController::otrosGastos(String^ idmue, String^ cantidad, DateTime^ fecha, String^ descripcion)
{
	ProcedimientosDao procedimiento;
	auto tipo = fecha->GetDateTimeFormats();
	String^ fech = tipo[80];

	try
	{
		procedimiento.procedimientoOtroGasto(Int32::Parse(idmue), Double::Parse(cantidad), f.cadenaSql(fech), f.cadenaSql(descripcion));

	}
	catch (Exception^)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;
}

Boolean MueblesController::ProcedimentosController::updateGasto(String^ id, String^ cantidad, DateTime^ fecha, String^ descripcion)
{
	ProcedimientosDao procedimiento;
	auto tipo = fecha->GetDateTimeFormats();
	String^ fech = tipo[80];

	try
	{
		procedimiento.procedimientoUpdateGasto(Int32::Parse(id), Double::Parse(cantidad), f.cadenaSql(fech), f.cadenaSql(descripcion));

	}
	catch (Exception^)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;
	
}

Boolean MueblesController::ProcedimentosController::updateMueble(String^ idmue, String^ nombre, String^ descripcion)
{
	ProcedimientosDao procedimiento;
	
	try
	{
		procedimiento.procedimientoUpdateMueble(Int32::Parse(idmue), f.cadenaSql(nombre), f.cadenaSql(descripcion));

	}
	catch (Exception^)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		return false;
	}

	return true;
}

List<MueblesController::RepFila^>^ MueblesController::ProcedimentosController::procInversionCtr(int periodo, DateTime^ fechaInicial, DateTime^ fechaFinal)
{
	//ProcedimientosDao^ procedimiento= gcnew ProcedimientosDao;
	//ProcedimientosDao procedimiento;
	List<RepFila^>^ listaG = gcnew List<RepFila^>;

	auto tipo1 = fechaInicial->GetDateTimeFormats();//--> Se cargan todos los formatos de fechas.
	auto tipo2 = fechaFinal->GetDateTimeFormats();
	String^ fechaIni = tipo1[80];//---------------------> Se asigna el formato que se ajusta al de la base de datos.
	String^ fechaFin = tipo2[80];

	
	try
	{

		int i = 0;
	
		
		for each (InversionDto^ renglon in procedimiento->procInversionDto(periodo, f.cadenaSql(fechaIni), f.cadenaSql(fechaFin)))
		{
			//El procedimiento que se esta ejecutando regresa una lista de datos
			//Con el foreach se recorre cada objeto de la lista que regreso el procedimiento.

			listaG->Add(gcnew RepFila); // Se crea un objeto fila para poder guardar los datos que llegan de la consulta.
			
			listaG[i]->setPeriodo(renglon->getPeriodo());
			listaG[i]->setFecha(renglon->getFecha());
			listaG[i]->setCantidad(renglon->getCantidad().ToString("N2"));

			i++;
		}
		return listaG;


	}
	catch (Exception^)
	{
		// Si hay algun error con la insercion en la base de datos, entra a esta instruccion.
		listaG->Clear();
		return listaG;
	}

	
}

List<MueblesController::RepFila^>^ MueblesController::ProcedimentosController::procGananciasCtr(int periodo, DateTime^ fechaInicial, DateTime^ fechaFinal)
{
	ProcedimientosDao^ procedimientop;
	List<RepFila^>^ listaG = gcnew List<RepFila^>;

	auto tipo1 = fechaInicial->GetDateTimeFormats();//--> Se cargan todos los formatos de fechas.
	auto tipo2 = fechaFinal->GetDateTimeFormats();
	String^ fechaIni = tipo1[80];//---------------------> Se asigna el formato que se ajusta al de la base de datos.
	String^ fechaFin = tipo2[80];


	try
	{

		int i = 0;
	
	
		for each (GananciaDto ^ renglon in procedimientop->procGananciaDto(periodo, f.cadenaSql(fechaIni), f.cadenaSql(fechaFin)))
		{
			//El procedimiento que se esta ejecutando regresa una lista de datos
			//Con el foreach se recorre cada objeto de la lista que regreso el procedimiento.

			listaG->Add(gcnew RepFila); // Se crea un objeto fila para poder guardar los datos que llegan de la consulta.

			listaG[i]->setPeriodo(renglon->getPeriodo());
			listaG[i]->setCosto(renglon->getCostoCompra().ToString("N2"));
			listaG[i]->setGasto(renglon->getGastoExtra().ToString("N2"));
			listaG[i]->setGastoTotal(renglon->getGastoTotal().ToString("N2"));
			listaG[i]->setPrecio(renglon->getPrecioVenta().ToString("N2"));
			listaG[i]->setGanacia(renglon->getGanancia().ToString("N2"));
	
			i++;
		}
		return listaG;


	}
	catch (Exception^)
	{
	
		listaG->Clear();
		return listaG;
	}

}
