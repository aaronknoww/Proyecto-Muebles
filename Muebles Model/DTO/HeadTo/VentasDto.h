#pragma once

using namespace System;

namespace MueblesModel
{
	public ref class VentasDto
	{
	private:
		property int	 _id;
		property int	 _idMuebles2;
		property String^ _descripcion;

	public:
		VentasDto();

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

