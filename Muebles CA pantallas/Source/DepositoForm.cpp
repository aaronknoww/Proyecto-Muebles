#include "../Headers/DepositoForm.h"

System::Void MueblesCApantallas::DepositoForm::cargarDgv(List<Fila^>^tabla)
{
	this->dgvVistaDepo->ColumnCount = 4; //Se indica el numero de columnas de que se van a utlizar.
	this->dgvVistaDepo->Columns[3]->Visible = false;// Oculta la columna indicada.
	int a = 0;


	for each (Fila ^ renglon in tabla)// El metodo comprasRealizadas regresa una lista de objetos fila.
	{
	

		this->dgvVistaDepo->Rows->Add();
		this->dgvVistaDepo->Rows[a]->Cells[3]->Value = renglon->getId();// Se guarada en el grid view pero no se debe de mostrar.
		this->dgvVistaDepo->Rows[a]->Cells[0]->Value = renglon->getNombreMue();
		this->dgvVistaDepo->Rows[a]->Cells[1]->Value = renglon->getFecha();
		this->dgvVistaDepo->Rows[a]->Cells[2]->Value = renglon->getCosto();
		
		a++;


	}

	return System::Void();
}

System::Void MueblesCApantallas::DepositoForm::limpiarDgv()
{

	int total = this->dgvVistaDepo->Rows->Count;
	for (int i = total - 1; i >= 0; i--)
		this->dgvVistaDepo->Rows->RemoveAt(i);
	return System::Void();
}

System::Void MueblesCApantallas::DepositoForm::limpiar()
{
	this->textBoxDeposito->Clear();
	this->textBoxDeposito->Text = "0";
	this->textBoxDeposito->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
	this->btnDepositar->Enabled = true;
	this->gbDeposito->ForeColor = System::Drawing::Color::Peru;
	this->dtpSetfecha->Text = fechaActual.ToShortTimeString();
	this->gbDeposito->Text = "Datos del Deposito";
	contador = 0;
	punto = false;

	return System::Void();
}

System::Boolean MueblesCApantallas::DepositoForm::ejecutarEditar()
{
	

	if (datos[2] == this->textBoxDeposito->Text)
	{
		// No ejecuta consulta porque los datos son iguales a los que ya existian.
		return false;
	}
	else
	{
		
		procedimiento->updateDeposito(datos[3], dtpSetfecha->Value, textBoxDeposito->Text);
		return true;
	}
			
}
