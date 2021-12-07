#pragma once
using namespace System;

namespace MueblesModel
{
	ref class InversionDto
	{
	private:

		String^ _periodo;
		String^ _fecha;
		Double _cantidad;

	public:

		InversionDto();

		//***** SETTERS *****//

		void setPeriodo(String^ periodo);
		void setFecha(String^ fecha);
		void setCantidad(Double cantidad);

		// ***** GETTERS ****//

		String^ getPeriodo();
		String^ getFecha();
		Double  getCantidad();
	};

}

