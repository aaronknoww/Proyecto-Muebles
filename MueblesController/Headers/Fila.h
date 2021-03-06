#pragma once

// Clase para poder crear un objeto que equivale a una fila de una tabla. 
// Solo conentendra datos de tipo String.

using namespace System;


namespace MueblesController
{
	
	public ref class Fila
	{
	private:
		property String^ _id;
		property String^ _id2;
		property String^ _nombreMue;
		property String^ _desMue;
		property String^ _fecha;
		property String^ _costo;
		property String^ _desCompra;

	public:
		
	    bool buscarCadena(String^ cadena);

		//***** SETTERS *****//

		void setId(String^ id);
		void setId2(String^ id);
		void setNombreMue(String^ nombreMue);
		void setDesMue(String^ desMue);
		void setFecha(String^ fecha);
		void setCosto(String^ costo);
		void setDesCompra(String^ desCompra);

		// ***** GETTERS ****//

		String^ getId();
		String^ getId2();
		String^ getNombreMue();
		String^ getDesMue();
		String^ getFecha();
		String^ getCosto();
		String^ getDesCompra();
	};

}

