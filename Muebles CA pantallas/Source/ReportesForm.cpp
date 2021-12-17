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
        cargarGananciaDgv();
        return true;
    }
    else if (rbCompras->Checked)
    {
        cargarComprasDgv();
        return true;
    }
    else if (rbVentas->Checked)
    {
        cargarVentasDgv();
        return true;
    }
    else// Retiros
    {
        cargarRetirosDgv();
        return true;
    }
    
}

System::Void MueblesCApantallas::ReportesForm::cargarInversionDgv()
{
    limpiarDgv();
    lista->Clear();
    lista = procedimientos->procInversionCtr(periodo, dtpInicial->Value, dtpFinal->Value);
    
    this->dgvVistaAlm->Columns[0]->Visible = true;
    this->dgvVistaAlm->Columns[1]->Visible = true;
    this->dgvVistaAlm->Columns[2]->Visible = true;

           
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

System::Void MueblesCApantallas::ReportesForm::cargarGananciaDgv()
{
    limpiarDgv();
    lista->Clear();
    lista = procedimientos->procGananciasCtr(periodo, dtpInicial->Value, dtpFinal->Value);
    
    this->dgvVistaAlm->Columns[0]->Visible = true;
    this->dgvVistaAlm->Columns[1]->Visible = true;
    this->dgvVistaAlm->Columns[2]->Visible = true;
    this->dgvVistaAlm->Columns[3]->Visible = true;
    this->dgvVistaAlm->Columns[4]->Visible = true;
    this->dgvVistaAlm->Columns[5]->Visible = true;

    this->col1->HeaderText = "Costo de Compra";
    this->col2->HeaderText = "Gasto Extra";
    this->col3->HeaderText = "Gasto Total";
    this->Col4->HeaderText = "Precio de Venta";
    this->Col5->HeaderText = "Ganancia";

    this->dgvVistaAlm->RowsDefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->dgvVistaAlm->ColumnHeadersDefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));

    int a = 0;

    for each (RepFila ^ renglon in lista)// El metodo comprasRealizadas regresa una lista de objetos fila.
    {
        this->dgvVistaAlm->Rows->Add();

        this->dgvVistaAlm->Rows[a]->Cells[0]->Value = renglon->getPeriodo();
        this->dgvVistaAlm->Rows[a]->Cells[1]->Value = renglon->getCosto();
        this->dgvVistaAlm->Rows[a]->Cells[2]->Value = renglon->getGasto();
        this->dgvVistaAlm->Rows[a]->Cells[3]->Value = renglon->getGastoTotal();
        this->dgvVistaAlm->Rows[a]->Cells[4]->Value = renglon->getPrecio();
        this->dgvVistaAlm->Rows[a]->Cells[5]->Value = renglon->getGanacia();
        a++;
    }

    delete procedimientos;
    return System::Void();
}

System::Void MueblesCApantallas::ReportesForm::cargarComprasDgv()
{
    limpiarDgv();
    lista->Clear();
    lista = procedimientos->procEstaditicaComprasCtr(periodo, dtpInicial->Value, dtpFinal->Value);
    
    this->dgvVistaAlm->Columns[0]->Visible = true;
    this->dgvVistaAlm->Columns[1]->Visible = true;
    this->dgvVistaAlm->Columns[2]->Visible = true;
    this->dgvVistaAlm->Columns[3]->Visible = true;
    this->dgvVistaAlm->Columns[4]->Visible = true;
    

    this->col1->HeaderText = "Mueble";
    this->col2->HeaderText = "Fecha Compra";
    this->col3->HeaderText = "Costo";
    this->Col4->HeaderText = "Gasto";
    

    this->dgvVistaAlm->RowsDefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->dgvVistaAlm->ColumnHeadersDefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));

    int a = 0;

    for each (RepFila ^ renglon in lista)// El metodo comprasRealizadas regresa una lista de objetos fila.
    {
        this->dgvVistaAlm->Rows->Add();

        this->dgvVistaAlm->Rows[a]->Cells[0]->Value = renglon->getPeriodo();
        this->dgvVistaAlm->Rows[a]->Cells[1]->Value = renglon->getMueble();
        this->dgvVistaAlm->Rows[a]->Cells[2]->Value = renglon->getFecha();
        this->dgvVistaAlm->Rows[a]->Cells[3]->Value = renglon->getCosto();
        this->dgvVistaAlm->Rows[a]->Cells[4]->Value = renglon->getGasto();
     
        a++;
    }

    delete procedimientos;
    return System::Void();
}

System::Void MueblesCApantallas::ReportesForm::cargarVentasDgv()
{
    limpiarDgv();
    lista->Clear();
    lista = procedimientos->procEstaditicaVentasCtr(periodo, dtpInicial->Value, dtpFinal->Value);
    
    this->dgvVistaAlm->Columns[0]->Visible = true;
    this->dgvVistaAlm->Columns[1]->Visible = true;
    this->dgvVistaAlm->Columns[2]->Visible = true;
    this->dgvVistaAlm->Columns[3]->Visible = true;
    this->dgvVistaAlm->Columns[4]->Visible = true;
    

    this->col1->HeaderText = "Mueble";
    this->col2->HeaderText = "Fecha de Venta";
    this->col3->HeaderText = "Precio";
    this->Col4->HeaderText = "Ingreso";


    this->dgvVistaAlm->RowsDefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));
    this->dgvVistaAlm->ColumnHeadersDefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
        static_cast<System::Byte>(0)));

    int a = 0;

    for each (RepFila ^ renglon in lista)// El metodo comprasRealizadas regresa una lista de objetos fila.
    {
        this->dgvVistaAlm->Rows->Add();

        this->dgvVistaAlm->Rows[a]->Cells[0]->Value = renglon->getPeriodo();
        this->dgvVistaAlm->Rows[a]->Cells[1]->Value = renglon->getMueble();
        this->dgvVistaAlm->Rows[a]->Cells[2]->Value = renglon->getFecha();
        this->dgvVistaAlm->Rows[a]->Cells[3]->Value = renglon->getPrecio();
        this->dgvVistaAlm->Rows[a]->Cells[4]->Value = renglon->getGasto();

        a++;
    }

    delete procedimientos;
    return System::Void();
}

System::Void MueblesCApantallas::ReportesForm::cargarRetirosDgv()
{
    limpiarDgv();
    lista->Clear();
    lista = procedimientos->procInversionCtr(periodo, dtpInicial->Value, dtpFinal->Value);
    
    this->dgvVistaAlm->Columns[0]->Visible = true;
    this->dgvVistaAlm->Columns[1]->Visible = true;
    this->dgvVistaAlm->Columns[2]->Visible = true;

    

    this->col1->HeaderText = "Fecha de Retiro";
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

    this->dgvVistaAlm->Columns[0]->Visible = false;
    this->dgvVistaAlm->Columns[1]->Visible = false;
    this->dgvVistaAlm->Columns[2]->Visible = false;
    this->dgvVistaAlm->Columns[3]->Visible = false;
    this->dgvVistaAlm->Columns[4]->Visible = false;
    this->dgvVistaAlm->Columns[5]->Visible = false;

    return System::Void();
}
