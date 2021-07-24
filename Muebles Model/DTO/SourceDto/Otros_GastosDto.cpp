#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"


#include "../HeadTo/Otros_GastosDto.h"

MueblesModel::Otros_GastosDto::Otros_GastosDto()
{
    _id = 0;
    _idMuebles2 = 0;
    _descripcion = nullptr;
}

void MueblesModel::Otros_GastosDto::setId(int id)
{
    this->_id = id;
}

void MueblesModel::Otros_GastosDto::setIdMuebles2(int idMuebles2)
{
    this->_idMuebles2;
}

void MueblesModel::Otros_GastosDto::setDescripcion(String^ descripcion)
{
    this->_descripcion = descripcion;
}

int MueblesModel::Otros_GastosDto::getId()
{
    return _id;
}

int MueblesModel::Otros_GastosDto::getIdMuebles2()
{
    return _idMuebles2;
}

String^ MueblesModel::Otros_GastosDto::getDescripcion()
{
    return _descripcion;
}