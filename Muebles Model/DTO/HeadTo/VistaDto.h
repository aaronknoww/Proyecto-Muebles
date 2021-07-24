#pragma once

using namespace System;


namespace MueblesModel
{

	public ref class VistaDto
	{
	public:
		property Int32	 _id;
		property String^ _cadena1;
		property String^ _cadena2;
		property Double  _dinero1;
		property Double  _dinero2;
		property DateTime^ _fecha; // Se puede cambiar a string.
		
	public:

		//***** SETTERS *****//

		void setId(Int32 id);
		void setCadena1(String^ cadena1);
		void setCadena2(String^ cadena2);
		void setDinero1(Double dinero1);
		void setDinero2(Double dinero2);
		void setFecha(DateTime^ fecha);

		// ***** GETTERS ****//

		Int32   getId();
		String^ getCadena1();
		String^ getCadena2();
		Double  getDinero1();
		Double  getDinero2();
		DateTime^ getFecha();

		
	};

}


