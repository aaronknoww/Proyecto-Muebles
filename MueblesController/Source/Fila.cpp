#include "../Headers/pch.h"
#include "..\Headers\Fila.h"





bool MueblesController::Fila::buscarCadena(String^ cadena)
{
	String^ aux = _nombreMue->ToLower();// Convierte todo a minusculas para realizar la busqueda.
	if (String::IsNullOrEmpty(cadena) || String::IsNullOrWhiteSpace(cadena))
		return false;
	else if (aux->StartsWith(cadena))
		return true;
	else
		return false;
}


//*************************************************************************************\\
//---------------------------------- SETTERS -------------------------------------------\\
//***************************************************************************************\\




void MueblesController::Fila::setId(String^ id)
{
	this->_id = id;
}

void MueblesController::Fila::setId2(String^ id)
{
	this->_id2 = id;
}

void MueblesController::Fila::setNombreMue(String^ nombreMue)
{
	this->_nombreMue = nombreMue;
}

void MueblesController::Fila::setDesMue(String^ desMue)
{
	this->_desMue = desMue;
}

void MueblesController::Fila::setFecha(String^ fecha)
{
	this->_fecha = fecha;
}

void MueblesController::Fila::setCosto(String^ costo)
{
	
	this->_costo = costo;
}

void MueblesController::Fila::setDesCompra(String^ desCompra)
{
	this->_desCompra = desCompra;
}



//*************************************************************************************\\
//---------------------------------- GETTERS -------------------------------------------\\
//***************************************************************************************\\



String^ MueblesController::Fila::getId()
{
	return _id;
}

String^ MueblesController::Fila::getId2()
{
	return _id2;
}

String^ MueblesController::Fila::getNombreMue()
{
	return _nombreMue;
}

String^ MueblesController::Fila::getDesMue()
{
	return _desMue;
}

String^ MueblesController::Fila::getFecha()
{
	return _fecha;
}

String^ MueblesController::Fila::getCosto()
{
	return _costo;
}

String^ MueblesController::Fila::getDesCompra()
{
	return _desCompra;
}
