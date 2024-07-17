#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

void GenerarNumero(float& num)
{
    cout << "Ingrese numero: "; cin >> num;
}

float CalcularCubo(float num)
{
    return pow(num, 3);
}

int main()
{
    float num; //Numero

    GenerarNumero(num);
    cout << endl << "El cubo de " << num << " es: " << CalcularCubo(num) << endl;

    system("pause>0");
    return 0;
}
