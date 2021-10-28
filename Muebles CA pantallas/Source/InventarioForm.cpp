#include "../Headers/InventarioForm.h"

System::Void MueblesCApantallas::InventarioForm::cargarDgv(List<Fila^>^ tabla)
{
	this->dgvVistaAlm->ColumnCount = 5; //Se indica el numero de columnas de que se van a utlizar.
	this->dgvVistaAlm->Columns[4]->Visible = false;// Oculta la columna indicada.
	
	int a = 0;


	for each (Fila ^ renglon in tabla)// El metodo comprasRealizadas regresa una lista de objetos fila.
	{


		this->dgvVistaAlm->Rows->Add();
		this->dgvVistaAlm->Rows[a]->Cells[4]->Value = renglon->getId();// Se guarada el idmuebel en el grid view pero no se debe de mostrar.
		this->dgvVistaAlm->Rows[a]->Cells[0]->Value = renglon->getNombreMue();
		this->dgvVistaAlm->Rows[a]->Cells[1]->Value = renglon->getDesMue();
		this->dgvVistaAlm->Rows[a]->Cells[2]->Value = renglon->getCosto();
		this->dgvVistaAlm->Rows[a]->Cells[3]->Value = renglon->getFecha();
		a++;


	}
	return System::Void();
}

System::Void MueblesCApantallas::InventarioForm::filtrarDgv(List<Fila^>^ tabla)
{
	resultado->Clear();// Se inicializa la lista.
	limpiarDgv();

	if (String::IsNullOrEmpty(txbFiltrar->Text) || String::IsNullOrWhiteSpace(txbFiltrar->Text))
	{
		limpiarDgv();
		cargarDgv(inventario);
	}
	else
	{
		for each (Fila ^ renglon in tabla)
		{
			txbFiltrar->Text = txbFiltrar->Text->ToLower();
			if (renglon->buscarCadena(txbFiltrar->Text))
				resultado->Add(renglon);//---> inserta los objetos filas que cumplan con la condicion.
		}
		cargarDgv(resultado);// Se muestra en el dgv el resultado obtenido.

	}

	return System::Void();
}

System::Void MueblesCApantallas::InventarioForm::limpiarDgv()
{
	// Elimina todas la filas del dgv

	int total = this->dgvVistaAlm->Rows->Count;
	for (int i = total - 1; i >= 0; i--)
		this->dgvVistaAlm->Rows->RemoveAt(i);

	return System::Void();
}

System::Void MueblesCApantallas::InventarioForm::limpiar()
{
	this->txbSetNomMue->Clear();
	this->txbSetDescMue->Clear();
	this->txbFiltrar->Clear();
	datos->Clear();
	
	return System::Void();
}

System::Boolean MueblesCApantallas::InventarioForm::ejecutarEditar()
{
	//if ((datos[1] == this->txbSetPrecio->Text) && (datos[4] == this->txbSetDescRepara->Text)
	//	&& (datos[3] == this->dtpSetfecha->Text))
	//{
	//	// No ejecuta consulta porque los datos son iguales a los que ya existian.
	//	return false;
	//}
	//else
	//{
	//	//procedimiento->updateGasto(datos[0], txbSetPrecio->Text, dtpSetfecha->Value, txbSetDescRepara->Text);
	//	// se debe mandar el id movimiento.
	//	return true;
	//}



	return Boolean();
}
