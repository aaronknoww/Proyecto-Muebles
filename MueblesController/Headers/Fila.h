#pragma once

// Clase para poder crear un objeto que equivale a una fila de una tabla. 
// Solo conendra datos de tipo String.

using namespace System;


namespace MueblesController
{
	
	public ref class Fila
	{
	private:
		property String^ _id;
		property String^ _nombreMue;
		property String^ _desMue;
		property String^ _fecha;
		property String^ _costo;
		property String^ _desCompra;

	public:


		//***** SETTERS *****//

		void setId(String^ id);
		void setNombreMue(String^ nombreMue);
		void setDesMue(String^ desMue);
		void setFecha(String^ fecha);
		void setCosto(String^ costo);
		void setDesCompra(String^ desCompra);

		// ***** GETTERS ****//

		String^ getId();
		String^ getNombreMue();
		String^ getDesMue();
		String^ getFecha();
		String^ getCosto();
		String^ getDesCompra();
	};

}

