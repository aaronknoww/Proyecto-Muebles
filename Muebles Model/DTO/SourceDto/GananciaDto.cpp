#include "C:\Estudios\Curso MYSQL\Proyecto muebles\Muebles CA\Muebles Model\Headers\pch.h"
#include "..\HeadTo\GananciaDto.h"


//------------------------------------------------------\\
//********************* SETTERS *************************\\
//--------------------------------------------------------\\


MueblesModel::GananciaDto::GananciaDto()
{
    _periodo = "";
    _costoCompra = 0;
    _gastoExtra = 0;
    _gatoTotal = 0;
    _precioVenta = 0;
    _ganancia = 0;
}

void MueblesModel::GananciaDto::setPeriodo(String^ periodo)
{
    this->_periodo = periodo;
}

void MueblesModel::GananciaDto::setCostoCompra(Double costoCompra)
{
    this->_costoCompra = costoCompra;
}

void MueblesModel::GananciaDto::setGastoExtra(Double gastoExtra)
{
    this->_gastoExtra = gastoExtra;
}

void MueblesModel::GananciaDto::setGastoTotal(Double gastoTotal)
{
    this->_gatoTotal = gastoTotal;
}

void MueblesModel::GananciaDto::setPrecioVenta(Double precioVenta)
{
    this->_precioVenta = precioVenta;
}

void MueblesModel::GananciaDto::setGanancia(Double ganancia)
{
    this->_ganancia = ganancia;
}

//------------------------------------------------------\\
//********************* GETTERS *************************\\
//--------------------------------------------------------\\

String^ MueblesModel::GananciaDto::getPeriodo()
{
    return this->_periodo;
}

Double MueblesModel::GananciaDto::getCostoCompra()
{
    return this->_costoCompra;
}

Double MueblesModel::GananciaDto::getGastoExtra()
{
    return this->_gastoExtra;
}

Double MueblesModel::GananciaDto::getGatoTotal()
{
    return this->_gatoTotal;
}

Double MueblesModel::GananciaDto::getPrecioVenta()
{
    return this->_precioVenta;
}

Double MueblesModel::GananciaDto::getGanancia()
{
    return this->_ganancia;
}
