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
    } while (codigo < 10000000000 || codigo > 99999999999);
    return codigo;
}

void DivisionCodigo(long long codigo)
{
    int a; //Año ingreso
    int b; //Mes ingreso
    int c; //Modalidad admision
    int d; //Facultad
    int e; //Si es becado o no
    char siglamodalidad; //E o I
    char facultad; //C o H
    a = codigo / 10000000;
    b = (codigo % 10000000) / 100000;
    c = ((codigo % 10000000) % 100000) / 1000;
    d = (((codigo % 10000000) % 100000) % 1000) / 10;
    e = (((codigo % 10000000) % 100000) % 1000) % 10;

    cout << endl << "Anual de ingreso: " << a << endl;
    cout << "Mes de ingreso: " << b << endl;
    if (c == 66)
    {
        siglamodalidad = 69;
        cout << "Modalidad de admision: " << siglamodalidad << endl;
    }
    if (c == 77)
    {
        siglamodalidad = 73;
        cout << "Modalidad de admision: " << siglamodalidad << endl;
    }
    if (d == 70)
    {
        facultad = 67;
        cout << "Categoria: " << facultad << endl;
    }
    if (d == 72)
    {
        facultad = 72;
        cout << "Categoria: " << facultad << endl;
    }
    cout << "¿Es becado? (0: No; 1; Si): " << e << endl;
}

int main()
{
    long long codigo = ValidarCodigo();

    DivisionCodigo(codigo);

    system("pause>0");
    return 0;
}