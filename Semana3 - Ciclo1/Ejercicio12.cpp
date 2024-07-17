#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarCodigo()
{
    int codigo;
    do
    {
        cout << "Ingrese un codigo de salida: "; cin >> codigo;
    } while (codigo < 1000 || codigo > 9999);
    return codigo;
}

void MostrarDatos(int codigo)
{
    char a; //Departamento destino
    int b; //Hora salida
    int c; //Realizan paradas
    char departamento; //Letra del departamento correspondiente
    char realizaparada; //Si realiza parada o no realiza parada

    a = codigo / 1000;
    b = (codigo % 1000) / 10;
    c = (codigo % 1000) % 10;
    if (a == 1)
    {
        departamento = 84;
        cout << endl << "Departamento de destino: " << departamento << endl;
    }
    if (a == 2)
    {
        departamento = 65;
        cout << endl << "Departamento de destino: " << departamento << endl;
    }
    if (a == 3)
    {
        departamento = 80;
        cout << endl << "Departamento de destino: " << departamento << endl;
    }
    cout << "Hora de salida: " << b << endl;
    if (c == 1)
    {
        realizaparada = 83;
        cout << "Realizan paradas: " << realizaparada << endl;
    }
    if (c == 2)
    {
        realizaparada = 78;
        cout << "Realizan paradas: " << realizaparada << endl;
    }
}

int main()
{
    int codigo = ValidarCodigo();

    MostrarDatos(codigo);

    system("pause>0");
    return 0;
}