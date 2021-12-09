#pragma once

using namespace System;

namespace MueblesModel
{

	public ref class EstadisticaRetirosDto
	{
	private:
		
		property String^ _periodo;
		property String^ _fechaRetiro;
		property Double  _cantidad;

	public:
		
		EstadisticaRetirosDto();

		//***** SETTERS *****//

		void setPeriodo(String^ periodo);
		void setFechaRetiro(String^ fechaRetiro);
		void setCantidad(Double cantidad);

		//***** GETTERS *****//

		String^ getPeriodo();
		String^ getFechaRetiro();
		Double  getCantidad();

	};

}

