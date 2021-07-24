#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"
#include "..\HeadTo\AlmacenDto.h"

MueblesModel::AlmacenDto::AlmacenDto()
{
    _idAlmacen = 0;
    _costoFinal = 0.00;
    _precioSugerido = 0.00;
}

void MueblesModel::AlmacenDto::setIdAlmacen(int idAlmacen)
{
    this->_idAlmacen = idAlmacen;   
}

void MueblesModel::AlmacenDto::setCostoFinal(Double costoFinal)
{
    this->_costoFinal = costoFinal;
}

void MueblesModel::AlmacenDto::setPrecioSugerido(Double precioSugerido)
{
    this->_precioSugerido = precioSugerido;
}

int MueblesModel::AlmacenDto::getIdAlmacen()
{
    return _idAlmacen;
}

Double MueblesModel::AlmacenDto::getCostoFinal()
{
    return _costoFinal;
}

Double MueblesModel::AlmacenDto::getPrecioSugerido()
{
    return _precioSugerido;
}
