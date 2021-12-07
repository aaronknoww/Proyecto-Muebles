#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"
#include "..\HeadTo\EstadisticaRetiros.h"

MueblesModel::EstadisticaRetiros::EstadisticaRetiros()
{
	_periodo = "";
	_fechaRetiro = "";
	_cantidad = 0;
}

void MueblesModel::EstadisticaRetiros::setPeriodo(String^ periodo)
{
	this->_periodo = periodo;
}

void MueblesModel::EstadisticaRetiros::setFechaRetiro(String^ fechaRetiro)
{
	this->_fechaRetiro = fechaRetiro;
}

void MueblesModel::EstadisticaRetiros::setCantidad(Double cantidad)
{
	this->_cantidad = cantidad;
}

String^ MueblesModel::EstadisticaRetiros::getPeriodo()
{
	return this->_periodo;
}

String^ MueblesModel::EstadisticaRetiros::getFechaRetiro()
{
	return this->_fechaRetiro;
}

Double MueblesModel::EstadisticaRetiros::getCantidad()
{
	return this->_cantidad;
}
