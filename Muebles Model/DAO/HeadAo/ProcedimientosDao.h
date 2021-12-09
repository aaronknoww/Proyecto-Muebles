#pragma once

#include "MueblesConexion.h"
#include "/Estudios/Curso MYSQL/Proyecto muebles/Muebles CA/Muebles Model/DTO/HeadTo/InversionDto.h"
#include "/Estudios/Curso MYSQL/Proyecto muebles/Muebles CA/Muebles Model/DTO/HeadTo/GananciaDto.h"
#include "/Estudios/Curso MYSQL/Proyecto muebles/Muebles CA/Muebles Model/DTO/HeadTo/EstadisticaComprasDto.h"
#include "/Estudios/Curso MYSQL/Proyecto muebles/Muebles CA/Muebles Model/DTO/HeadTo/EstadisticaVentasDto.h"
#include "/Estudios/Curso MYSQL/Proyecto muebles/Muebles CA/Muebles Model/DTO/HeadTo/EstadisticaRetirosDto.h"


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
		void   procedimientoUpdateMueble(int idmue, String^ nombre, String^ descripcion);
		Double procedimientoCapitalActual();
		List<InversionDto^>^ procInversion(int periodo, String^ fechaInicial, String^ fechaFinal);
		List<GananciaDto^>^  procGanancia(int periodo, String^ fechaInicial, String^ fechaFinal);
		List<EstadisticaComprasDto^>^ procEstaditicaComprasDto(int periodo, String^ fechaInicial, String^ fechaFinal);
		List<EstadisticaVentasDto^>^  procEstaditicaVentasDto(int periodo, String^ fechaInicial, String^ fechaFinal);
		List<EstadisticaRetirosDto^>^ procEstadisticaRetirosDto(int periodo, String^ fechaInicial, String^ fechaFinal);

	};
}

