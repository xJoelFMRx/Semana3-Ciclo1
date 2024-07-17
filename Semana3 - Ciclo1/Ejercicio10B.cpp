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
    } while (codigo < 100000000000 || codigo > 999999999999);
    return codigo;
}

void DivisionCodigo(long long codigo)
{
    int a; //Hora venta
    int b; //Minutos venta
    int c; //Segundos venta
    int d; //Mercancia identificacion
    int e; //Mercancia vendida
    a = codigo / 10000000000;
    b = (codigo % 10000000000) / 100000000;
    c = ((codigo % 10000000000) % 100000000) / 1000000;
    d = (((codigo % 10000000000) % 100000000) % 1000000) / 10;
    e = (((codigo % 10000000000) % 100000000) % 1000000) % 10;

    cout << endl << "Hora de venta: " << a << endl;
    cout << "Minuto de venta: " << b << endl;
    cout << "Segundo de venta: " << c << endl;
    cout << "Mercancia de identificacion: " << d << endl;
    cout << "Mercancia vendida (1 por E-commerce; 0 por no venta por E-commerce): " << e << endl;
}

int main()
{
    long long codigo = ValidarCodigo();

    DivisionCodigo(codigo);

    system("pause>0");
    return 0;
}