#include "../Headers/ReportesForm.h"

System::Boolean MueblesCApantallas::ReportesForm::ejecutarConsulta()
{

    if (rbSemanal->Checked)
    {
        periodo = 1;
        this->col0->HeaderText = "Semana";//--> La columna 0 de todas las consultas va a cambiar segun el texto enlazado al perido.
    }
    else if (rbMensual->Checked)
    {
        periodo = 2;
        this->col0->HeaderText = "Mes";       
    }
    else
    {
        periodo = 3;
        this->col0->HeaderText = "Anio";
    }
    


    // ---- Ejecuta la consulta seleccionada por el usuario. ----\\

    if (rbInversion->Checked)
    {
        cargarInversionDgv();
        return true;
    }
    else if (rbGanancia->Checked)
    {
        return true;
    }
    else if (rbCompras->Checked)
    {
        return true;
    }
    else if (rbVentas->Checked)
    {
        return true;
    }
    else// Retiros
    {
        return true;
    }
    
}

System::Void MueblesCApantallas::ReportesForm::cargarInversionDgv()
{
    limpiarDgv();
    lista->Clear();
    lista = procedimientos->procInversionCtr(periodo, dtpInicial->Value, dtpFinal->Value);
    this->dgvVistaAlm->ColumnCount = 3; //Se indica el numero de columnas de que se van a utlizar.
    
       
    this->col1->HeaderText = "Fecha de Inversion";
    this->col2->HeaderText = "Cantidad";


    this->dgvVistaAlm->RowsDefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    
    this->dgvVistaAlm->ColumnHeadersDefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0))); 

    

    int a = 0;

    for each (RepFila ^ renglon in lista)// El metodo comprasRealizadas regresa una lista de objetos fila.
    {


        this->dgvVistaAlm->Rows->Add();
        
        this->dgvVistaAlm->Rows[a]->Cells[0]->Value = renglon->getPeriodo();
        this->dgvVistaAlm->Rows[a]->Cells[1]->Value = renglon->getFecha();
        this->dgvVistaAlm->Rows[a]->Cells[2]->Value = renglon->getCantidad();
        a++;


    }

    
    delete procedimientos;
    return System::Void();
}

System::Void MueblesCApantallas::ReportesForm::limpiarDgv()
{
    int total = this->dgvVistaAlm->Rows->Count;
    for (int i = total - 1; i >= 0; i--)
        this->dgvVistaAlm->Rows->RemoveAt(i);

    return System::Void();
}
