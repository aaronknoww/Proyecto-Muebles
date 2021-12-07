#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"
#include "..\HeadTo\EstadisticaComprasDto.h"

MueblesModel::EstadisticaComprasDto::EstadisticaComprasDto()
{
	this->_periodo = "";
	this->_mueble = "";
	this->_fechaCompra = "";
	this->_costo = 0;
	this->_gasto = 0;
}



//------------------------------------------------------\\
//********************* SETTERS *************************\\
//--------------------------------------------------------\\

void MueblesModel::EstadisticaComprasDto::setPeriodo(String^ periodo)
{
    this->_periodo = periodo;
}

void MueblesModel::EstadisticaComprasDto::setMueble(String^ mueble)
{
	this->_mueble = mueble;
}

void MueblesModel::EstadisticaComprasDto::setFechaCompra(String^ fechaCompra)
{
	this->_fechaCompra = fechaCompra;
}

void MueblesModel::EstadisticaComprasDto::setCosto(Double precio)
{
	this->_costo = precio;
}

void MueblesModel::EstadisticaComprasDto::setGasto(Double gasto)
{
	this->_gasto = gasto;
}



//------------------------------------------------------\\
//********************* GETTERS *************************\\
//--------------------------------------------------------\\

String^ MueblesModel::EstadisticaComprasDto::getPeriodo()
{
	return _periodo;
}

String^ MueblesModel::EstadisticaComprasDto::getMueble()
{
	return this->_mueble;
}

String^ MueblesModel::EstadisticaComprasDto::getFechaCompra()
{
	return this->_fechaCompra;
}

Double MueblesModel::EstadisticaComprasDto::getPrecio()
{
	return this->_costo;
}

Double MueblesModel::EstadisticaComprasDto::getGasto()
{
	return this->_gasto;
}
