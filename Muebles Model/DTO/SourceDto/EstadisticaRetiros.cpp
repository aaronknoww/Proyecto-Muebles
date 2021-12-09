#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"
#include "..\HeadTo\EstadisticaRetirosDto.h"

MueblesModel::EstadisticaRetirosDto::EstadisticaRetirosDto()
{
	_periodo = "";
	_fechaRetiro = "";
	_cantidad = 0;
}

void MueblesModel::EstadisticaRetirosDto::setPeriodo(String^ periodo)
{
	this->_periodo = periodo;
}

void MueblesModel::EstadisticaRetirosDto::setFechaRetiro(String^ fechaRetiro)
{
	this->_fechaRetiro = fechaRetiro;
}

void MueblesModel::EstadisticaRetirosDto::setCantidad(Double cantidad)
{
	this->_cantidad = cantidad;
}

String^ MueblesModel::EstadisticaRetirosDto::getPeriodo()
{
	return this->_periodo;
}

String^ MueblesModel::EstadisticaRetirosDto::getFechaRetiro()
{
	return this->_fechaRetiro;
}

Double MueblesModel::EstadisticaRetirosDto::getCantidad()
{
	return this->_cantidad;
}
