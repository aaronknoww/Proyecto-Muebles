#include "../Headers/pch.h"
#include "..\Headers\RepFila.h"

MueblesController::RepFila::RepFila()
{
	_periodo = "";
	_mueble = "";
	_fecha = "";
	_costo = "";
	_precio = "";
	_cantidad = "";
	_gasto = "";
	_gastoTotal = "";
	_ganacia = "";

}

void MueblesController::RepFila::setPeriodo(String^ periodo)
{
	this->_periodo = periodo;
}

void MueblesController::RepFila::setMueble(String^ mueble)
{
	this->_mueble = mueble;
}

void MueblesController::RepFila::setFecha(String^ fecha)
{
	this->_fecha = fecha;
}

void MueblesController::RepFila::setCosto(String^ costo)
{
	this->_costo = costo;
}

void MueblesController::RepFila::setPrecio(String^ precio)
{
	this->_precio = precio;
}

void MueblesController::RepFila::setCantidad(String^ cantidad)
{
	this->_cantidad = cantidad;
}

void MueblesController::RepFila::setGasto(String^ gasto)
{
	this->_gasto = gasto;
}

void MueblesController::RepFila::setGastoTotal(String^ gastoTotal)
{
	this->_gastoTotal = gastoTotal;
}

void MueblesController::RepFila::setGanacia(String^ ganancia)
{
	this->_ganacia = ganancia;
}

String^ MueblesController::RepFila::getPeriodo()
{
	return this->_periodo;
}

String^ MueblesController::RepFila::getMueble()
{
	return this->_mueble;
}

String^ MueblesController::RepFila::getFecha()
{
	this->_fecha;
}

String^ MueblesController::RepFila::getCosto()
{
	return this->_costo;
}

String^ MueblesController::RepFila::getPrecio()
{
	return this->_precio;
}

String^ MueblesController::RepFila::getCantidad()
{
	return this->_cantidad;
}

String^ MueblesController::RepFila::getGasto()
{
	return this->_gasto;
}

String^ MueblesController::RepFila::getGastoTotal()
{
	return this->_gastoTotal;
}

String^ MueblesController::RepFila::getGanacia()
{
	return this->_ganacia;
}
