#include "../Headers/pch.h"
#include "../Headers/MueblesController.h"
#include <iostream>
using namespace std;
//#include "../../Muebles Model/DAO/HeadAo/VistasDao.h"

List<VistaDto^>^ MueblesController::Consulta::pruebaConsulta()
{
	VistasDao prueba;
	
	return prueba.vistaInventario();

}

void MueblesController::Consulta::pruebaProcedimiento()
{
	ProcedimientosDao proce;
	try
	{
		DateTime ac;
		ac = ac.Now;
		//CultureTypes^ us;
		//auto t = ac.GetDateTimeFormats('g');
		auto tipos = ac.GetDateTimeFormats();

		String^ fecha;
		fecha = tipos[80];// Se obtiene un formato que concuerda con un datetime de mysql 
		fecha = "'" + fecha + "'";// Se agregan
		
		//fecha = "'" + ac.Year.ToString() + "-" + ac.Month.ToString() + "-" + ac.Day.ToString() + "'";// Se le da formato a la fecha para que Mysql, lo reconozca
	
	
		proce.procedimientoRetiro(2000.00, fecha);
		//proce.procedimientoRetiro(1236418.53, ac.Now);

	}
	catch (Exception^ ex)
	{
		
		cout << "valio merga";
	}
	
	return;
}
