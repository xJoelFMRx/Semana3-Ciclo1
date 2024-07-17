#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

void GenerarNumeros(int& a, int& b)
{
    cout << "Ingrese a: "; cin >> a;
    cout << "Ingrese b: "; cin >> b;
}

int CalcularMenor(int a, int b)
{
    return min(a, b);
}

int main()
{
    int a; //Primer numero
    int b; //Segundo numero

    GenerarNumeros(a, b);
    cout << endl << "El menor de los dos numeros es: " << CalcularMenor(a, b) << endl;

    system("pause>0");
    return 0;
}
