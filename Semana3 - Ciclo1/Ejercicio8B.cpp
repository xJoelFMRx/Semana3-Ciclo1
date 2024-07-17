#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

long long ValidarCodigo()
{
    long long codigo;
    do
    {
        cout << "Ingrese codigo de barras: "; cin >> codigo;
    } while (codigo < 1000000000 || codigo > 9999999999);
    return codigo;
}

void DivisionCodigo(long long codigo)
{
    int a; //Año de venta
    int b; //Mercancia de identificacion
    int c; //Mercancia vendida

    a = codigo / 1000000;
    b = (codigo % 1000000) / 10;
    c = (codigo % 1000000) % 10;

    cout << endl << "Anual de venta: " << a << endl;
    cout << "Mercancia de identificacion: " << b << endl;
    cout << "Mercancia vendida (1 por E-commerce; 0 por Otros Canales): ";
    if (c == 1)
    {
        cout << "Por E-Commerce." << endl;
    }
    if (c == 0)
    {
        cout << "Por Otros Canales." << endl;
    }
}

int main()
{
    long long codigo = ValidarCodigo();

    DivisionCodigo(codigo);

    system("pause>0");
    return 0;
}