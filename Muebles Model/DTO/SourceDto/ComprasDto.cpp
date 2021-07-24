#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"
#include "../HeadTo/ComprasDto.h"

MueblesModel::ComprasDto::ComprasDto()
{
    _id = 0;
    _idMuebles2 = 0;
    _descripcion = nullptr;
}

void MueblesModel::ComprasDto::setId(int id)
{
    this->_id = id;
}

void MueblesModel::ComprasDto::setIdMuebles2(int idMuebles2)
{
    this->_idMuebles2;  
}

void MueblesModel::ComprasDto::setDescripcion(String^ descripcion)
{
    this->_descripcion = descripcion;
}

int MueblesModel::ComprasDto::getId()
{
    return _id;
}

int MueblesModel::ComprasDto::getIdMuebles2()
{
    return _idMuebles2;
}

String^ MueblesModel::ComprasDto::getDescripcion()
{
    return _descripcion;
}
