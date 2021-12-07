#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"
#include "../HeadTo/InversionDto.h"

MueblesModel::InversionDto::InversionDto()
{
	_periodo = "";
	_fecha = "";
	_cantidad = 0;
	
}
//******************************************************\\
//********************* SETTERS *************************\\
//********************************************************\\

void MueblesModel::InversionDto::setPeriodo(String^ periodo)
{
	this->_periodo = periodo;
}

void MueblesModel::InversionDto::setFecha(String^ fecha)
{
	this->_fecha = fecha;
}
void MueblesModel::InversionDto::setCantidad(Double cantidad)
{
	this->_cantidad = cantidad;
}

//******************************************************\\
//********************* GETTERS *************************\\
//********************************************************\\

String^ MueblesModel::InversionDto::getPeriodo()
{
	return this->_periodo;
}
String^ MueblesModel::InversionDto::getFecha()
{
	return this->_fecha;
}
Double MueblesModel::InversionDto::getCantidad()
{
	return this->_cantidad;
}






