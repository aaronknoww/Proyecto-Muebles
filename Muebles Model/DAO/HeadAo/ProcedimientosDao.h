#pragma once
#include "MueblesConexion.h"
using namespace System;
using namespace System::IO;
using namespace MySql;

namespace MueblesModel
{
	public ref class ProcedimientosDao:ConexionBd
	{
		
	public:
		void   procedimientoDeposito(Double monto, String^ fecha);
		void   procedimientoRetiro(Double monto, String^ fecha );
		void   procedimientoCompra(String^ nombre, String^ descripcion, String^ fecha,Double costo, String^ descompra);
		void   procedimientoVenta(String^ nombreMueble, Double precio, String^ fecha, String^ ventades);
		void   procedimientoOtroGasto(String^ nombreMue, Double cantGasto, String^ fechaOtro, String^ descOtro);
		Double procedimientoCapitalActual();
		
	};
}

