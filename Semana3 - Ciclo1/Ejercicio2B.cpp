#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

long long ValidarNumero()
{
    long long numero;
    do
    {
        cout << "Ingrese numero: "; cin >> numero;
    } while (numero < 100000000000 || numero > 999999999999);
    return numero;
}

void DivisionNumero(long long numero)
{
    int P;
    int R;
    int C;
    int mayor; //Numero Mayor
    int intermedio; //Numero Intermedio
    int menor; //Numero Menor
    P = numero / 100000000;
    R = (numero % 100000000) / 10000;
    C = (numero % 100000000) % 10000;
    mayor = max(P, max(R, C));
    menor = min(P, min(R, C));
    intermedio = P + R + C - mayor - menor;

    cout << endl << "P es: " << P << endl;
    cout << "R es: " << R << endl;
    cout << "C es: " << C << endl;
    cout << "Mayor = " << mayor << endl;
    cout << "Menor = " << menor << endl;
    cout << "Intermedio = " << intermedio << endl;
}

int main()
{
    long long numero = ValidarNumero();

    DivisionNumero(numero);

    system("pause>0");
    return 0;
}