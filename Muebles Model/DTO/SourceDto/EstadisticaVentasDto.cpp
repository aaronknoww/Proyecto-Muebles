#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"
#include "../HeadTo/EstadisticaVentasDto.h"


MueblesModel::EstadisticaVentasDto::EstadisticaVentasDto()
{
	this->_periodo = "";
	this->_mueble = "";
	this->_fechaVenta = "";
	this->_precio = 0;
	this->_gasto = 0;
}

//------------------------------------------------------\\
//********************* SETTERS *************************\\
//--------------------------------------------------------\\

void MueblesModel::EstadisticaVentasDto::setPeriodo(String^ periodo)
{
	this->_periodo = periodo;
}

void MueblesModel::EstadisticaVentasDto::setMueble(String^ mueble)
{
	this->_mueble = mueble;
}

void MueblesModel::EstadisticaVentasDto::setFechaVenta(String^ fechaCompra)
{
	this->_fechaVenta = fechaCompra;
}

void MueblesModel::EstadisticaVentasDto::setPrecio(Double precio)
{
	this->_precio = precio;
}

void MueblesModel::EstadisticaVentasDto::setGasto(Double gasto)
{
	this->_gasto = gasto;
}


//------------------------------------------------------\\
//********************* GETTERS *************************\\
//--------------------------------------------------------\\

String^ MueblesModel::EstadisticaVentasDto::getPeriodo()
{
	return _periodo;
}

String^ MueblesModel::EstadisticaVentasDto::getMueble()
{
	return this->_mueble;
}

String^ MueblesModel::EstadisticaVentasDto::getFechaCompra()
{
	return this->_fechaVenta;
}

Double MueblesModel::EstadisticaVentasDto::getPrecio()
{
	return this->_precio;
}

Double MueblesModel::EstadisticaVentasDto::getGasto()
{
	return this->_gasto;
}

