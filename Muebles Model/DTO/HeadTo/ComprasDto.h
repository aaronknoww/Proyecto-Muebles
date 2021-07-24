#pragma once

using namespace System;

namespace MueblesModel
{
	ref class ComprasDto
	{
	private:
		property int	 _id;
		property int	 _idMuebles2;
		property String^ _descripcion;

	public:
		ComprasDto();

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

