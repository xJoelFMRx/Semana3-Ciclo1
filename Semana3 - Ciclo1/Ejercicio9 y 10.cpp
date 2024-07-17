#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

double ValidarMonto()
{
    double monto;
    do
    {
        cout << "Ingrese un monto: "; cin >> monto;
    } while (monto < 1);
    return monto;
}

void CalcularDescuento(double monto)
{
    double descuento;
    if (monto > 10000)
    {
        descuento = 0.2 * monto;
    }
    else if (monto < 10000)
    {
        descuento = 0.1 * monto;
    }
    else
    {
        descuento = 0;
    }

    cout << endl << "El descuento es: " << descuento << endl;
}

int main()
{
    double monto = ValidarMonto();

    CalcularDescuento(monto);

    system("pause>0");
    return 0;
}