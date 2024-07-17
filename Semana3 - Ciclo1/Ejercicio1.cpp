#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

void GenerarNumeros(int& a, int& b, int& c)
{
    cout << "Ingrese a: "; cin >> a;
    cout << "Ingrese b: "; cin >> b;
    cout << "Ingrese c: "; cin >> c;
}

int NumeroMayor(int a, int b, int c)
{
    return max(a, max(b, c));
}

int main()
{
    int a; //Primer numero
    int b; //Segundo numero
    int c; //Tercer numero

    GenerarNumeros(a, b, c);
    cout << endl << "El mayor de los 3 numeros es: " << NumeroMayor(a, b, c) << endl;

    system("pause>0");
    return 0;
}
