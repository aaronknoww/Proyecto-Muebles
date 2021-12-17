#pragma once
#include "ControladorGeneral.h"
#include "RepFila.h"

using namespace System;
using namespace System::Windows;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic; // Para poder usar los contenedores como listas y arrays
using namespace System::Data;
using namespace MySql::Data::MySqlClient;// Despues de agregar la referencia, se debe de incluir este namespace
using namespace System::Globalization;// Para poder usar cultureType

using namespace std;
using namespace MueblesModel;


namespace MueblesController
{
	public ref class ProcedimentosController
	{
	private:
		ControladorGeneral f; //------> Para acceder a las funciones de controlador general.
		ProcedimientosDao^ procedimiento;

	public:

		ProcedimentosController();
		String^ getCapitalActual();
		Boolean depositar(String^, DateTime^);//---> Manda llamar al stored procedure deposito. Utilizando Model DAO
		Boolean retiro(String^, DateTime^);//------> Manda llamar al stored procedure retirar. Utilizando Model DAO
		Boolean comprar(String^, String^, DateTime^, String^, String^); //--> manda llamar al stored procedure compra.
		Boolean updateCompra(String^, String^, String^, String^, String^, String^);
		Boolean venta(String^, String^, DateTime^, String^);
		Boolean updateDeposito(String^, DateTime^, String^ );
		Boolean updateRetiro(String^, DateTime^, String^ );
		Boolean updateVenta(String^ id, DateTime^ fecha, String^ cantidad, String^ descripcion);
		Boolean otrosGastos(String^ idmue, String^ cantidad, DateTime^ fecha, String^ descripcion);
		Boolean updateGasto(String^ id, String^ cantidad, DateTime^ fecha, String^ descripcion);
		Boolean updateMueble(String^ idmue, String^ nombre, String^ descripcion);

		List<RepFila^>^ procInversionCtr(int periodo, DateTime^ fechaInicial, DateTime^ fechaFinal);
		List<RepFila^>^ procGananciasCtr(int periodo, DateTime^ fechaInicial, DateTime^ fechaFinal);
		List<RepFila^>^ procEstaditicaComprasCtr(int periodo, DateTime^ fechaInicial, DateTime^ fechaFinal);
		List<RepFila^>^ procEstaditicaVentasCtr(int periodo, DateTime^ fechaInicial, DateTime^ fechaFinal);
		List<RepFila^>^ procEstaditicaRetirosCtr(int periodo, DateTime^ fechaInicial, DateTime^ fechaFinal);
	};

}