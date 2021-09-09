#include "../Headers/VentaForm.h"

System::Void MueblesCApantallas::VentaForm::cargarDgv()
{
	
	//this->dgvVistaAlm->Rows->RemoveAt(0);
	//this->dgvVistaAlm->Rows->Count;

	this->dgvVistaAlm->ColumnCount = 5; //Se indica el numero de columnas de que se van a utlizar.
	this->dgvVistaAlm->Columns[4]->Visible = false;// Oculta la columna indicada.
	int a = 0;

	for each (Fila ^ renglon in vistas->vistaInventarioCtr())// El metodo comprasRealizadas regresa una lista de objetos fila.
	{


		this->dgvVistaAlm->Rows->Add();
		this->dgvVistaAlm->Rows[a]->Cells[4]->Value = renglon->getId();// Se guarada en el grid view pero no se debe de mostrar.
		this->dgvVistaAlm->Rows[a]->Cells[0]->Value = renglon->getNombreMue();
		this->dgvVistaAlm->Rows[a]->Cells[1]->Value = renglon->getDesMue();
		this->dgvVistaAlm->Rows[a]->Cells[2]->Value = renglon->getCosto();
		this->dgvVistaAlm->Rows[a]->Cells[3]->Value = renglon->getFecha();
		a++;


	}
    return System::Void();
}
