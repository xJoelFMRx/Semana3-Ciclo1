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
    int c; //Cantidad paradas
    char departamento; //Letra del departamento correspondiente
    int horadefinitiva; //Para saber si esta en el intervalo o no
    a = codigo / 1000;
    b = (codigo % 1000) / 10;
    c = (codigo % 1000) % 10;

    //Letra departamento
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
    if (a > 3 && a < 10)
    {
        departamento = 67;
        cout << endl << "Departamento de destino: " << departamento << endl;
    }
    //Hora salida
    if (b >= 0 && b <= 24)
    {
        horadefinitiva = b;
    }
    else
    {
        horadefinitiva = -1;
    }
    cout << "Hora de salida: " << horadefinitiva << endl;
    //Cantidad paradas
    cout << "Cantidad de paradas: " << c << endl;
}

int main()
{
    int codigo = ValidarCodigo();

    MostrarDatos(codigo);

    system("pause>0");
    return 0;
}