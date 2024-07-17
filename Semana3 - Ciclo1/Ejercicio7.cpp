#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

double ValidarMedida()
{
    double medida;
    do
    {
        cout << "Ingrese una medida en cm: "; cin >> medida;
    } while (medida < 0);
    return medida;
}

void MedidaPulgadas(double medida)
{
    double aPulgadas;
    aPulgadas = medida / 2.54;

    cout << endl << "La medida en pulgadas es: " << aPulgadas << endl;
}

int main()
{
    double medida = ValidarMedida();

    MedidaPulgadas(medida);

    system("pause>0");
    return 0;
}