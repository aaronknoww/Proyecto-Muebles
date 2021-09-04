#include "../Headers/pch.h"
#include "..\Headers\Fila.h"


//*************************************************************************************\\
//---------------------------------- SETTERS -------------------------------------------\\
//***************************************************************************************\\


void MueblesController::Fila::setId(String^ id)
{
	this->_id = id;
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
