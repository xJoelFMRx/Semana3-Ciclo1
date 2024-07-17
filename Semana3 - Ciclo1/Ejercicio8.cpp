#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarTiempo()
{
    int tiempo;
    do
    {
        cout << "Ingrese tiempo en s: "; cin >> tiempo;
    } while (tiempo < 1);
    return tiempo;
}

void DivisionTiempo(int tiempo)
{
    int horas = 0;
    int minutos = 0;
    int segundos = 0;
    if (tiempo < 60)
    {
        segundos = tiempo;
    }
    else if (tiempo < 3600)
    {
        minutos = tiempo / 60;
        segundos = tiempo % 60;
    }
    else
    {
        horas = tiempo / 3600;
        minutos = (tiempo % 3600) / 60;
        segundos = (tiempo % 3600) % 60;
    }

    cout << endl << "La division del tiempo es -> Horas: " << horas << ", " << "Minutos: " << minutos << " y" << " Segundos: " << segundos << endl;
}

int main()
{
    int tiempo = ValidarTiempo();

    DivisionTiempo(tiempo);

    system("pause>0");
    return 0;
}