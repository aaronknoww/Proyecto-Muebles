#pragma once

using namespace System;

namespace MueblesModel
{
	ref class Otros_GastosDto
	{
	private:
		property int	 _id;
		property int	 _idMuebles2;
		property String^ _descripcion;

	public:
		Otros_GastosDto();

		//***** SETTERS *****//

		void setId(int);
		void setIdMuebles2(int);
		void setDescripcion(String^);

		// ***** GETTERS ****//

		int		getId();
		int		getIdMuebles2();
		String^ getDescripcion();


	};
}
