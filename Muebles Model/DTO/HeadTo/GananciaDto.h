#pragma once

using namespace System;

namespace MueblesModel
{
	public ref class GananciaDto
	{
	private:

		property String^ _periodo;
		property Double  _costoCompra;
		property Double	_gastoExtra;
		property Double	_gastoTotal;
		property Double	_precioVenta;
		property Double	_ganancia;

	public:

		GananciaDto();

		//***** SETTERS *****//

		void setPeriodo(String^ periodo);
		void setCostoCompra(Double costoCompra);
		void setGastoExtra(Double gastoExtra);
		void setGastoTotal(Double gastoTotal);
		void setPrecioVenta(Double precioVenta);
		void setGanancia(Double ganancia);

		// ***** GETTERS ****//

		String^ getPeriodo();
		Double  getCostoCompra();
		Double	getGastoExtra();
		Double	getGastoTotal();
		Double	getPrecioVenta();
		Double	getGanancia();
	};


}

