#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

void GenerarValor(double& num)
{
    cout << "Ingrese numero: "; cin >> num;
}

void TipoNumero(double num)
{
    double representativo;
    if (num < 0)
    {
        representativo = -1;
        cout << endl << "El numero " << num << " es negativo, entonces su tipo es: " << representativo << endl;
    }
    if (num == 0)
    {
        representativo = 0;
        cout << endl << "El numero " << num << " es neutro, entonces su tipo es: " << representativo << endl;
    }
    if (num > 0)
    {
        representativo = 1;
        cout << endl << "El numero " << num << " es positivo, entonces su tipo es: " << representativo << endl;
    }
}

int main()
{
    double num;

    GenerarValor(num);
    TipoNumero(num);

    system("pause>0");
    return 0;
}
