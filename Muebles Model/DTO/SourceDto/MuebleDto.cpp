#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"

#include "../HeadTo/MueblesDto.h"

// ******************* SETTERS *************************//

MueblesModel::MueblesDto::MueblesDto()
{
    _idMuebles = 0;
    _NombreMueble = nullptr;
    _Descripcion = nullptr;
}

void MueblesModel::MueblesDto::setIdmueble(int idMueble)
{
    this->_idMuebles = idMueble;
}

void MueblesModel::MueblesDto::setNombreMueble(String^ nombreMueble)
{
    this->_NombreMueble = nombreMueble;
}

void MueblesModel::MueblesDto::setDescripcion(String^ descripcion)
{
    this->_Descripcion = descripcion;
}



// ******************* GETTERS *************************//

int MueblesModel::MueblesDto::getIdmueble()
{
    return this->_idMuebles;
}

String^ MueblesModel::MueblesDto::getNombreMueble()
{
    return this->_NombreMueble;
}

String^ MueblesModel::MueblesDto::getDescripcion()
{
    return this->_Descripcion;
}
