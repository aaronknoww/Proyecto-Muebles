#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"
#include "../HeadTo/Movimientos_FinancierosDto.h"

MueblesModel::Movimientos_FinancierosDto::Movimientos_FinancierosDto()
{
	_id =0;
	_codigoTipo=0;
	_fechaMov = gcnew DateTime(2010, 9, 14);	// Puede ser String^ _fechaMov;
	_cantidad=0.00;
	_capital=0.00;
}

void MueblesModel::Movimientos_FinancierosDto::setId(int id)
{
	this->_id = id;	
}

void MueblesModel::Movimientos_FinancierosDto::setCodigoTipo(int codigoTipo)
{
	this->_codigoTipo = codigoTipo;
}

void MueblesModel::Movimientos_FinancierosDto::setFechaMov(DateTime fechaMov)
{
	this->_fechaMov = fechaMov;
}

void MueblesModel::Movimientos_FinancierosDto::setCantidad(Double cantidad)
{
	this->_cantidad = cantidad;
}

void MueblesModel::Movimientos_FinancierosDto::setCapital(Double capital)
{
	this->_capital = capital;
}

int MueblesModel::Movimientos_FinancierosDto::getId()
{
	return _id;
}

int MueblesModel::Movimientos_FinancierosDto::getCodigoTipo()
{
	return _codigoTipo;
}

DateTime^ MueblesModel::Movimientos_FinancierosDto::getFechaMov()
{
	return _fechaMov;
}

Double MueblesModel::Movimientos_FinancierosDto::getCantidad()
{
	return _cantidad;
}

Double MueblesModel::Movimientos_FinancierosDto::getCapital()
{
	return _capital;
}
