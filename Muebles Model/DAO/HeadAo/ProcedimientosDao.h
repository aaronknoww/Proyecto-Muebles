#pragma once
#include "MueblesConexion.h"

// CLASE PARA EJECUTAR TODOS LOS PROCEDIMIENTOS ALMEACENADOS.
// SE MANDAN LLAMAR DIRECTO DE LA BASE DE DATOS.

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
		void   procedimientoVenta(int idMueble, Double precio, String^ fecha, String^ ventades);
		void   procedimientoOtroGasto(String^ nombreMue, Double cantGasto, String^ fechaOtro, String^ descOtro);
		void   procedimientoUpdateCompra(int id, String^ nombre, String^ descripcion, String^ fecha, Double costo, String^ descompra);
		void   procedimientoUpdateDeposito(int id, String^ fecha, Double cantidad);
		void   procedimientoUpdateRetiro(int id, String^ fecha, Double cantidad);
		void   procedimientoUpdateVenta(int id, String^ fecha, Double cantidad, String^ descripcion);
		void   procedimientoOtroGasto(int idmue, Double cantidad, String^ fecha, String^ descripcion);
		void   procedimientoUpdateGasto(int idmov, Double cantidad, String^ fecha, String^ descripcion);
		Double procedimientoCapitalActual();
		
	};
}

