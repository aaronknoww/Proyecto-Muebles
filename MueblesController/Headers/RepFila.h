#pragma once

//Clase creada debido a que hay un error en la arquitectura de la apliacion.
//Por economia se crea una clase con todos los atributos necesarios para poder recibir y enviar
//datos entre el Model y el View

using namespace System;

namespace MueblesController
{

	public ref class RepFila
	{
	private:
		
		String^ _periodo;
		String^ _mueble;
		String^ _fecha;
		String^ _costo;
		String^ _precio;
		String^ _cantidad;
		String^ _gasto;
		String^ _gastoTotal;
		String^ _ganacia;

	public:

		RepFila();
		
		//******** SETTERS ********//

		void setPeriodo(String^ periodo);
		void setMueble(String^ mueble);
		void setFecha(String^ fecha);
		void setCosto(String^ costo);
		void setPrecio(String^ precio);
		void setCantidad(String^ cantidad);
		void setGasto(String^ gasto);
		void setGastoTotal(String^ gastoTotal);
		void setGanacia(String^ ganancia);
			
		//******** GETTERS ********//

		String^ getPeriodo();
		String^ getMueble();
		String^ getFecha();
		String^ getCosto();
		String^ getPrecio();
		String^ getCantidad();
		String^ getGasto();
		String^ getGastoTotal();
		String^ getGanacia();
	};

}

