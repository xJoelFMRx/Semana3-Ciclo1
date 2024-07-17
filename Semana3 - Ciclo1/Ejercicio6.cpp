#include "pch.h"
#include "iostream"
#include "string"

using namespace System;
using namespace std;

void GenerarTexto(string& texto)
{
    cout << "Ingrese cadena de texto: ";
    getline(cin, texto);
}

char ObtenerPrimeraLetra(const string& texto)
{
    if (texto.empty())
    {
        cout << endl << "La cadena esta vacia" << endl;
        return '\0'; //Retorna un caracter nulo que indica un string vacio
    }
    return texto[0];
}

void MostrarPrimeraLetra(const string& texto)
{
    char letra = ObtenerPrimeraLetra(texto);
    if (letra != '\0')
    {
        cout << endl << "La primera letra de la cadena es: " << letra << endl;
    }
}

int main() 
{
    string texto;

    GenerarTexto(texto);
    MostrarPrimeraLetra(texto);

    system("pause>0");
    return 0;
}