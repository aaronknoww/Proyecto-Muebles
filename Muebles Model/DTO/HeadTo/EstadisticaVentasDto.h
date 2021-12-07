#pragma once

using namespace System;
namespace MueblesModel
{

	ref class EstadisticaVentasDto
	{
	private:

		property String^ _periodo;
		property String^ _mueble;
		property String^ _fechaVenta;
		property Double	 _precio;
		property Double  _gasto;

	public:

		EstadisticaVentasDto();

		//***** SETTERS *****//

		void setPeriodo(String^ periodo);
		void setMueble(String^ mueble);
		void setFechaVenta(String^ fechaVenta);
		void setPrecio(Double precio);
		void setGasto(Double gasto);

		//***** GETTERS *****//

		String^ getPeriodo();
		String^ getMueble();
		String^ getFechaCompra();
		Double	getPrecio();
		Double  getGasto();

	};

}

