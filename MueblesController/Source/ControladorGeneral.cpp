#include "../Headers/pch.h"
#include "../Headers/ControladorGeneral.h"


MueblesController::ControladorGeneral::ControladorGeneral()
{
	return;
}


Boolean MueblesController::ControladorGeneral::esNumero(Char caracter)
{
	if (caracter > 47 && caracter < 58)
		return true;
	else
		return false;
}

String^ MueblesController::ControladorGeneral::suma(String^ numero1, String^ numero2)
{
	Double res;
	

	if ((!String::IsNullOrEmpty(numero1) && !String::IsNullOrWhiteSpace(numero1))&&
			(!String::IsNullOrEmpty(numero2) && !String::IsNullOrWhiteSpace(numero2)) )
	{      
		// Para evitar un error cuando la cadena este vacia.
		try
		{
			res = res.Parse(numero1) + res.Parse(numero2);

		}
		catch (Exception^ ex)
		{
			cout << "error en la conversion";
		}

		return res.ToString("N2");
		
	}
	return "E0000";
	
}
