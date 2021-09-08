#include "../Headers/CompraForm.h"

System::Void MueblesCApantallas::CompraForm::inicializarDgv()
{
	this->dgvVistaCom->ClearSelection();
	
	this->dgvVistaCom->ColumnCount = 6; //Se indica el numero de columnas de que se van a utlizar.
	this->dgvVistaCom->Columns[5]->Visible = false;// Oculta la columna indicada.
	int a = 0;
	
	for each (Fila ^ renglon in vistas->comprasRealizadasCtr())// El metodo comprasRealizadas regresa una lista de objetos fila.
	{


		this->dgvVistaCom->Rows->Add();
		this->dgvVistaCom->Rows[a]->Cells[0]->Value = renglon->getNombreMue();
		this->dgvVistaCom->Rows[a]->Cells[1]->Value = renglon->getDesMue();
		this->dgvVistaCom->Rows[a]->Cells[2]->Value = renglon->getFecha();
		this->dgvVistaCom->Rows[a]->Cells[3]->Value = renglon->getCosto();
		this->dgvVistaCom->Rows[a]->Cells[4]->Value = renglon->getDesCompra();
		this->dgvVistaCom->Rows[a]->Cells[5]->Value = renglon->getId();// Se guarada en el grid view pero no se debe de mostrar.
		a++;
		
		
	}

    return Void();
}


System::Boolean MueblesCApantallas::CompraForm::ejecutarEditar()
{
	
	if ((datos[0]==this->txbSetNomMue->Text) && (datos[1] == this->txbSetDescMue->Text)
			&& (datos[2] == this->dtpSetfecha->Text) && (datos[3] == this->txbSetCosto->Text)
				&& (datos[4] == this->txbSetDescCompra->Text))
	{
		// No ejecuta consulta porque los datos son iguales a los que ya existian.
		return false;
	}
	else
	{
		// Ejecuta procedimiento
		
		
		procedimiento->updateCompra(datos[5], txbSetNomMue->Text, txbSetDescMue->Text,
			dtpSetfecha->Value.ToShortDateString(), txbSetCosto->Text, txbSetDescCompra->Text);
		return true;
	}

	 

	return Boolean();
}

System::Void MueblesCApantallas::CompraForm::limpiar()
{
	this->txbSetNomMue->Clear();
	this->txbSetDescMue->Clear();
	this->txbSetCosto->Clear();
	this->dtpSetfecha->Text = fechaActual.ToShortTimeString();
	this->txbSetDescCompra->Clear();
	datos->Clear();
	contador = 0;
	punto = false;
	return Void();
}
