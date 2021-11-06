#include "../Headers/ReportesForm.h"

System::Boolean MueblesCApantallas::ReportesForm::ejecutarConsulta()
{
    int opcion = 0; //---> Para saber que tipo de consulta se va a realizar.

    if (rbSemanal->Checked)
        opcion = 1;
    else if (rbMensual->Checked)
        opcion = 2;
    else
        opcion = 3;
    


    // ---- Ejecuta la consulta seleccionada por el usuario. ----\\

    if (rbInversion->Checked)
    {
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
