#pragma once

using namespace System;

namespace MueblesModel
{
	ref class Movimientos_FinancierosDto
	{
	private:

		property int	   _id;
		property int	   _codigoTipo;
		property DateTime^ _fechaMov;	// Puede ser String^ _fechaMov;
		property Double	   _cantidad;	
		property Double	   _capital;
		
	public:

		Movimientos_FinancierosDto();

		// ***** SETTERS ******//
		
		void setId(int);
		void setCodigoTipo(int);
		void setFechaMov(DateTime); // void setFechaMov(String^);
		void setCantidad(Double);
		void setCapital(Double);

		// **** GETTERS ******//

		int		  getId();
		int		  getCodigoTipo();
		DateTime^ getFechaMov(); // String^ getFechaMov(); 
		Double	  getCantidad();
		Double	  getCapital();


	

	};

}

