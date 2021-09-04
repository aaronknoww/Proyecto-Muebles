#pragma once
// Clase creada para poder guardar cada fila de lo que arroje la vista comprasRealizadas

//******** TABLAS INVOLUCADRAS EN LA VISTA*********//
// 
//1. movimientos_financieros.
//2. muebles.
//3. compras.

//#include "..\HeadTo\Movimientos_FinancierosDto.h"
//#include "..\HeadTo\MueblesDto.h"
//#include "..\HeadTo\ComprasDto.h"


using namespace System;

namespace MueblesModel
{
	public ref class ComprasRealizadas
	{
	private:
		property Int32	   _id;
		property String^   _nombre;
		property String^   _desMueble;
		property DateTime^ _fecha; // Se puede cambiar a string.
		property Double    _costo;
		property String^   _desCompra;

	public:

		ComprasRealizadas();

		//***** SETTERS *****//

		void setId(Int32 id);
		void setNombre(String^ nombre);
		void setDesMueble(String^ desMueble);
		void setFecha(DateTime^ fecha);
		void setCosto(Double  costo);
		void setDesCompra(String^ desCompra);
		

		// ***** GETTERS ****//

		Int32     getId();
		String^   getNombre();
		String^   getDesMueble();
		DateTime^ getFecha();
		Double    getCosto();
		String^   getDesCompra();



	};

}

