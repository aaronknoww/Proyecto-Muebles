#pragma once

using namespace System;

ref class Tipo_MovimientoDto
{
private:
	
	property int	 _codigo;
	property String^ _Tipo;

public:

	Tipo_MovimientoDto()
	{
		_codigo = 0;
		_Tipo = nullptr;
	}

	//***** SETTERS *****//

	void setCodigo(int codigo) { this->_codigo = codigo; }
	void setTipo(String^ Tipo) { this->_Tipo = Tipo; }

	// ***** GETTERS ****//
	int getCodigo() { return _codigo; }
	String^ getTipo() { return _Tipo; }



};

