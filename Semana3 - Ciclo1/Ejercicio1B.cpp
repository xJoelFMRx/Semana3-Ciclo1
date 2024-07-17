#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

void GenerarValor(double& x)
{
    cout << "Ingrese el valor de X: "; cin >> x;
}

void CalculandoFuncion(double x)
{
    double funcion = 0;
    if (x <= 0)
    {
        funcion = pow(x, 6) + x - 2;
    }
    else if (x > 0 && x < 4)
    {
        funcion = sqrt(pow(x, 3)) + 4 * x + 1;
    }
    else if (x >= 4)
    {
        funcion = pow(x, 2) + 1;
    }

    cout << endl << "La funcion es igual a: " << funcion << endl;
}

int main()
{
    double x;

    GenerarValor(x);
    CalculandoFuncion(x);

    system("pause>0");
    return 0;
}