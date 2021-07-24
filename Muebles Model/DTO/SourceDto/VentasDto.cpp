#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"

#include "../HeadTo/VentasDto.h"

MueblesModel::VentasDto::VentasDto()
{
    _id = 0;
    _idMuebles2 = 0;
    _descripcion = nullptr;
}

void MueblesModel::VentasDto::setId(int id)
{
    this->_id = id;
}

void MueblesModel::VentasDto::setIdMuebles2(int idMuebles2)
{
    this->_idMuebles2;
}

void MueblesModel::VentasDto::setDescripcion(String^ descripcion)
{
    this->_descripcion = descripcion;
}

int MueblesModel::VentasDto::getId()
{
    return _id;
}

int MueblesModel::VentasDto::getIdMuebles2()
{
    return _idMuebles2;
}

String^ MueblesModel::VentasDto::getDescripcion()
{
    return _descripcion;
}