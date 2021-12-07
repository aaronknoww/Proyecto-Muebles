#pragma once

using namespace System;

namespace MueblesModel
{

	ref class EstadisticaRetiros
	{
	private:
		
		property String^ _periodo;
		property String^ _fechaRetiro;
		property Double  _cantidad;

	public:
		
		EstadisticaRetiros();

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

