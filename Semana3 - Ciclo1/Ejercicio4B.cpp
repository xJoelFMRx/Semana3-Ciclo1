#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

char ValidarMarca()
{
    char marca;
    do
    {
        cout << "Ingrese la marca: "; cin >> marca;
    } while (marca != 'N' && marca != 'S');
    return marca;
}

int ValidarColor()
{
    int color;
    do
    {
        cout << "Ingrese color: "; cin >> color;
    } while (color < 0 || color > 1);
    return color;
}

int ValidarCapacidad()
{
    int capacidad;
    do
    {
        cout << "Capacidad: "; cin >> capacidad;
    } while (capacidad != 8 && capacidad != 16);
    return capacidad;
}

void MontoTotal(char marca, int color, int capacidad)
{
    double MontoTotal = 0;
    double Precio = 0;
    double descuento = 0;
    if (marca == 'N')
    {
        if (color == 0)
        {
            if (capacidad == 8)
            {
                Precio = 1800;
            }
            else
            {
                Precio = 2650;
            }
        }
        else
        {
            if (capacidad == 16)
            {
                Precio = 2780;
            }
        }
    }
    if (marca == 'S')
    {
        if (color == 0)
        {
            if (capacidad == 8)
            {
                Precio = 1700;
            }
            else
            {
                Precio = 2500;
            }
        }
        else
        {
            if (capacidad == 16)
            {
                Precio = 2900;
                descuento = 0.06 * Precio;
            }
        }
    }
    MontoTotal = Precio - descuento;

    cout << endl << "Usted pagara: S/" << MontoTotal << endl;
}

int main()
{
    char marca = ValidarMarca();
    int color = ValidarColor();
    int capacidad = ValidarCapacidad();

    MontoTotal(marca, color, capacidad);

    system("pause>0");
    return 0;
}