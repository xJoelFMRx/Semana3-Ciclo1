#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

char ValidarModelo()
{
    char modelo;
    do
    {
        cout << "Ingrese el modelo: "; cin >> modelo;
    } while (modelo != 'T' && modelo != 'K');
    return modelo;
}

char ValidarColor()
{
    char color;
    do
    {
        cout << "Color (B: Blanco; A: Azul; N: Negro): "; cin >> color;
    } while (color != 'B' && color != 'A' && color != 'N');
    return color;
}

char ValidarProductoComplementario()
{
    char producto;
    do
    {
        cout << "Juego: "; cin >> producto;
    } while (producto != 'G' && producto != 'C' && producto != 'A');
    return producto;
}

void PrecioTotal(char modelo, char color, char producto)
{
    double preciototal = 0;
    double precio = 0;
    double incremento;
    if (modelo == 'T')
    {
        if (color == 'B')
        {
            precio = 6.00;
            if (producto == 'G')
            {
                incremento = 0.25 * precio;
                preciototal = precio + incremento;
            }
            else if (producto == 'C')
            {
                incremento = 0;
                preciototal = precio + incremento;
            }
            else
            {
                incremento = 0.1 * precio;
                preciototal = precio + incremento;
            }
        }
        else if (color == 'A')
        {
            precio = 7.00;
            if (producto == 'G')
            {
                incremento = 0.25 * precio;
                preciototal = precio + incremento;
            }
            else if (producto == 'C')
            {
                incremento = 0;
                preciototal = precio + incremento;
            }
            else
            {
                incremento = 0.1 * precio;
                preciototal = precio + incremento;
            }
        }
        else
        {
            precio = 8.00;
            if (producto == 'G')
            {
                incremento = 0.25 * precio;
                preciototal = precio + incremento;
            }
            else if (producto == 'C')
            {
                incremento = 0;
                preciototal = precio + incremento;
            }
            else
            {
                incremento = 0.1 * precio;
                preciototal = precio + incremento;
            }
        }
    }
    else
    {
        if (color == 'B')
        {
            precio = 10.00;
            if (producto == 'G')
            {
                incremento = 0.25 * precio;
                preciototal = precio + incremento;
            }
            else if (producto == 'C')
            {
                incremento = 0;
                preciototal = precio + incremento;
            }
            else
            {
                incremento = 0.1 * precio;
                preciototal = precio + incremento;
            }
        }
        else if (color == 'A')
        {
            precio = 12.00;
            if (producto == 'G')
            {
                incremento = 0.25 * precio;
                preciototal = precio + incremento;
            }
            else if (producto == 'C')
            {
                incremento = 0;
                preciototal = precio + incremento;
            }
            else
            {
                incremento = 0.1 * precio;
                preciototal = precio + incremento;
            }
        }
        else
        {
            precio = 15.00;
            if (producto == 'G')
            {
                incremento = 0.25 * precio;
                preciototal = precio + incremento;
            }
            else if (producto == 'C')
            {
                incremento = 0;
                preciototal = precio + incremento;
            }
            else
            {
                incremento = 0.1 * precio;
                preciototal = precio + incremento;
            }
        }
    }

    cout << endl << "Precio del combo: S/" << preciototal << endl;
}

int main()
{
    char modelo = ValidarModelo();
    char color = ValidarColor();
    char producto = ValidarProductoComplementario();

    PrecioTotal(modelo, color, producto);

    system("pause>0");
    return 0;
}