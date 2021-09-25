#include "../Headers/pch.h"
#include "../Headers/VistasController.h"

MueblesController::VistasController::VistasController()
{
	vista = gcnew VistasDao();
	listaG = gcnew List<Fila^>;
}

List<MueblesController::Fila^>^ MueblesController::VistasController::comprasRealizadasCtr()
{
	listaG->Clear();
    List<ComprasRealizadas^>^ compras= gcnew List<ComprasRealizadas^>;
	int i=0;

	compras=vista->vistaCompraRealizada();
    

	

	for each ( ComprasRealizadas^ renglon in compras)
	{
		//String^ prueba = renglon->getId().ToString();
		
		listaG->Add(gcnew Fila); // Se crea un objeto fila para poder guardar los datos que llegan de la consulta.
		
		
		listaG[i]->setId(renglon->getId().ToString());
		listaG[i]->setNombreMue(renglon->getNombre());
		listaG[i]->setDesMue(renglon->getDesMueble());
		listaG[i]->setFecha(renglon->getFecha()->ToShortDateString());
		listaG[i]->setCosto(renglon->getCosto().ToString("N2"));
		listaG[i]->setDesCompra(renglon->getDesCompra());
			
		i++;
	}

	return listaG;
}

List<MueblesController::Fila^>^ MueblesController::VistasController::vistaInventarioCtr()
{
	listaG->Clear();
	int i=0;
	

	for each (VistaDto^ renglon in vista->vistaInventario())
	{
		listaG->Add(gcnew Fila); // Se crea un objeto fila para poder guardar los datos que llegan de la consulta.

		listaG[i]->setId(renglon->getId().ToString());//-----------------> id.
		listaG[i]->setNombreMue(renglon->getCadena1());//----------------> Nombre Mueble.
		listaG[i]->setDesMue(renglon->getCadena2());//-------------------> Descripcion Mueble.
		listaG[i]->setCosto(renglon->getDinero1().ToString("N2"));//-----> Costo Final.
		listaG[i]->setFecha(renglon->getFecha()->ToShortDateString());//-> Fecha de Compra.
		
		i++;
	}
	return listaG;
}

List<MueblesController::Fila^>^ MueblesController::VistasController::vistaDepositosCtr()
{
	listaG->Clear();
	int i = 0;


	for each (VistaDto ^ renglon in vista->vistaDepositos())
	{
		listaG->Add(gcnew Fila); // Se crea un objeto fila para poder guardar los datos que llegan de la consulta.

		listaG[i]->setId(renglon->getId().ToString());//-----------------> id movimiento financiero.
		listaG[i]->setNombreMue(renglon->getCadena1());//----------------> Tipo de movimiento.
		listaG[i]->setFecha(renglon->getFecha()->ToShortDateString());//-> Fecha de Compra.
		listaG[i]->setCosto(renglon->getDinero1().ToString("N2"));//-----> Costo Final.
		

		i++;
	}
	return listaG;
}

List<MueblesController::Fila^>^ MueblesController::VistasController::vistaRetirosCtr()
{
	listaG->Clear();
	int i = 0;


	for each (VistaDto ^ renglon in vista->vistaRetiros())
	{
		listaG->Add(gcnew Fila); // Se crea un objeto fila para poder guardar los datos que llegan de la consulta.

		listaG[i]->setId(renglon->getId().ToString());//-----------------> id movimiento financiero.
		listaG[i]->setNombreMue(renglon->getCadena1());//----------------> Tipo de movimiento.
		listaG[i]->setFecha(renglon->getFecha()->ToShortDateString());//-> Fecha de Compra.
		listaG[i]->setCosto(renglon->getDinero1().ToString("N2"));//-----> Costo Final.

		i++;
	}
	return listaG;
}
