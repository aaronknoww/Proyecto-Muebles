#pragma once

using namespace System;
namespace MueblesModel
{
	ref class AlmacenDto
	{
	private:
		property int	_idAlmacen;
		property Double _costoFinal;
		property Double _precioSugerido;

	public:
		AlmacenDto();

		//***** SETTERS *****//

		void setIdAlmacen(int);
		void setCostoFinal(Double);
		void setPrecioSugerido(Double);

		// ***** GETTERS ****//

		int getIdAlmacen();
		Double getCostoFinal();
		Double getPrecioSugerido();

	};
}

