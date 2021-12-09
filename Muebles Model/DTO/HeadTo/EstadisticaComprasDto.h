#pragma once

using namespace System;

namespace MueblesModel
{
	public ref class EstadisticaComprasDto
	{
	private:
		
		property String^ _periodo;
		property String^ _mueble;
		property String^ _fechaCompra;
		property Double	 _costo;
		property Double  _gasto;

	public:

		EstadisticaComprasDto();

		//***** SETTERS *****//

		void setPeriodo(String^ periodo);
		void setMueble(String^ mueble);
		void setFechaCompra(String^ fechaCompra);
		void setCosto(Double precio);
		void setGasto(Double gasto);

		//***** GETTERS *****//

		String^ getPeriodo();
		String^ getMueble();
		String^ getFechaCompra();
		Double	getPrecio();
		Double  getGasto();

	};

}

