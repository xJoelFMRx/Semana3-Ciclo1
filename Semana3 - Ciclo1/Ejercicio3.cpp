#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

double ValidarDistancia()
{
    double distancia;
    do
    {
        cout << "Ingrese una distancia en km: "; cin >> distancia;
    } while (distancia < 0);
    return distancia;
}

void MostrarDistanciaMetros(double distancia)
{
    double aMetros;
    aMetros = distancia * 1000;

    cout << endl << "La distancia en metros es: " << aMetros << endl;
}

int main()
{
    double distancia = ValidarDistancia();

    MostrarDistanciaMetros(distancia);

    system("pause>0");
    return 0;
}
