#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"
#include "..\HeadTo\ComprasRealizadas.h"




//*************************************************************************************\\
//---------------------------------- SETTERS -------------------------------------------\\
//***************************************************************************************\\

MueblesModel::ComprasRealizadas::ComprasRealizadas()
{
    _fecha = gcnew DateTime;
}

void MueblesModel::ComprasRealizadas::setId(Int32 id)
{
    this-> _id = id;
}

void MueblesModel::ComprasRealizadas::setNombre(String^ nombre)
{
    this->_nombre = nombre;
}

void MueblesModel::ComprasRealizadas::setDesMueble(String^ desMueble)
{
    this->_desMueble = desMueble;
}

void MueblesModel::ComprasRealizadas::setFecha(DateTime^ fecha)
{
    this->_fecha = fecha;
}

void MueblesModel::ComprasRealizadas::setCosto(Double costo)
{
    this->_costo = costo;
}

void MueblesModel::ComprasRealizadas::setDesCompra(String^ desCompra)
{
    this->_desCompra = desCompra;
}

//*************************************************************************************\\
//---------------------------------- GETTERS -------------------------------------------\\
//***************************************************************************************\\


Int32 MueblesModel::ComprasRealizadas::getId()
{
    return _id;
}

String^ MueblesModel::ComprasRealizadas::getNombre()
{
    return _nombre;
}

String^ MueblesModel::ComprasRealizadas::getDesMueble()
{
    return _desMueble;
}

DateTime^ MueblesModel::ComprasRealizadas::getFecha()
{
    return _fecha;
}

Double MueblesModel::ComprasRealizadas::getCosto()
{
    return _costo;
}

String^ MueblesModel::ComprasRealizadas::getDesCompra()
{
    return _desCompra;
}
