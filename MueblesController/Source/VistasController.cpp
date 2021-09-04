#include "../Headers/pch.h"
#include "../Headers/VistasController.h"

MueblesController::VistasController::VistasController()
{
	vista = gcnew VistasDao();
	listaG = gcnew List<Fila^>;
}

List<MueblesController::Fila^>^ MueblesController::VistasController::comprasRealizadasCtr()
{
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
