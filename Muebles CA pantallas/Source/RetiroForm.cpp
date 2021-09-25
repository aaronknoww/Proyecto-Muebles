#include "../Headers/RetiroForm.h"

System::Void MueblesCApantallas::RetiroForm::cargarDgv(List<Fila^>^ tabla)
{
	this->dgvVistaRet->ColumnCount = 4; //Se indica el numero de columnas de que se van a utlizar.
	this->dgvVistaRet->Columns[3]->Visible = false;// Oculta la columna indicada.
	int a = 0;


	for each (Fila ^ renglon in tabla)// El metodo comprasRealizadas regresa una lista de objetos fila.
	{


		this->dgvVistaRet->Rows->Add();
		this->dgvVistaRet->Rows[a]->Cells[3]->Value = renglon->getId();// Se guarada en el grid view pero no se debe de mostrar.
		this->dgvVistaRet->Rows[a]->Cells[0]->Value = renglon->getNombreMue();
		this->dgvVistaRet->Rows[a]->Cells[1]->Value = renglon->getFecha();
		this->dgvVistaRet->Rows[a]->Cells[2]->Value = renglon->getCosto();

		a++;


	}

	
    return System::Void();
}

System::Void MueblesCApantallas::RetiroForm::limpiarDgv()
{
	int total = this->dgvVistaRet->Rows->Count;
	for (int i = total - 1; i >= 0; i--)
		this->dgvVistaRet->Rows->RemoveAt(i);
	
	return System::Void();
}

System::Void MueblesCApantallas::RetiroForm::limpiar()
{
	this->textBoxRetiro->Clear();
	this->textBoxRetiro->Text = "0";
	this->textBoxRetiro->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
	this->dtpSetfecha->Text = fechaActual.ToShortTimeString();
	contador = 0;
	punto = false;

	return System::Void();
}
