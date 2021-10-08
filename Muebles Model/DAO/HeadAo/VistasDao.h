#pragma once
#include "/Estudios/Curso MYSQL/Proyecto muebles/Muebles CA/Muebles Model/DTO/HeadTo/VistaDto.h"
#include "/Estudios/Curso MYSQL/Proyecto muebles/Muebles CA/Muebles Model/DTO/HeadTo/ComprasRealizadas.h"
#include "MueblesConexion.h"



// Aquí se mandan llamar todas las VISTAS creadas en la Base de Datos, en MySQL.


using namespace System;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Collections::Generic; // Para poder usar los contenedores como listas y arrays
using namespace System::Data;
using namespace MySql::Data::MySqlClient;// Despues de agregar la referencia, se debe de incluir este namespace
using namespace std;


namespace MueblesModel
{
	public ref class VistasDao:ConexionBd
	{

	private:
	
		property List<VistaDto^>^ _listaGenerica;
		property List<ComprasRealizadas^>^ _listaComprasRealizadas;
		
	public:
		
		VistasDao();
		List<VistaDto^>^ vistaInventario();
		List<VistaDto^>^ vistaMovimientosFinancieros();
		List<VistaDto^>^ vistaRegistroMuebles();
		List<ComprasRealizadas^>^ vistaCompraRealizada();
		List<VistaDto^>^ vistaDepositos();
		List<VistaDto^>^ vistaRetiros();
		List<VistaDto^>^ vistaVentas();
	
	};
}
