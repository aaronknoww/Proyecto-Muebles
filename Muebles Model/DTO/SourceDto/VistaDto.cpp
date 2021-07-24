#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"

#include "..\HeadTo\VistaDto.h"

void MueblesModel::VistaDto::setId(Int32 id)
{
    _id = id;
}

void MueblesModel::VistaDto::setCadena1(String^ nombre)
{
    this->_cadena1 = nombre;
}

void MueblesModel::VistaDto::setCadena2(String^ descripcion)
{
    this->_cadena2 = descripcion;
}

void MueblesModel::VistaDto::setDinero1(Double capital)
{
    this->_dinero1 = capital;
}

void MueblesModel::VistaDto::setDinero2(Double cantidad)
{
    this->_dinero2 = cantidad;
}

void MueblesModel::VistaDto::setFecha(DateTime^ fecha)
{
    this->_fecha = fecha;
}

Int32 MueblesModel::VistaDto::getId()
{
    return _id;
}

String^ MueblesModel::VistaDto::getCadena1()
{
    return _cadena1;
}

String^ MueblesModel::VistaDto::getCadena2()
{
    return _cadena2;
}

Double MueblesModel::VistaDto::getDinero1()
{
    return _dinero1;
}

Double MueblesModel::VistaDto::getDinero2()
{
    return _dinero2;
}

DateTime^ MueblesModel::VistaDto::getFecha()
{
    return _fecha;
}
