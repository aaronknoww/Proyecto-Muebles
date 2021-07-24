#pragma once

using namespace System;

namespace MueblesModel
{
	public ref class MueblesDto
	{
	private:

		property int	 _idMuebles;
		property String^ _NombreMueble;
		property String^ _Descripcion;
		//	String^ foto1;
		//	String^ foto2;
			//		foto1 				longblob DEFAULT NULL,
			//		foto2				longblob DEFAULT NULL,
	public:

		MueblesDto();
		//SETTERS
		void setIdmueble(int);
		void setNombreMueble(String^);
		void setDescripcion(String^);
		//	void setFoto1(String^);
		//	void setFoto2(String^);

			// GETTERS

		int		getIdmueble();
		String^ getNombreMueble();
		String^ getDescripcion();

		//	String^ getFoto1();
		//	String^ getFoto2();
	};


}