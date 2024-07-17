#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

char ValidarMarca()
{
    char marca;
    do
    {
        cout << "Ingrese Marca (B: Best; M: Monark; O: Oxford): "; cin >> marca;
        marca = toupper(marca);
    } while (marca != 'B' && marca != 'M' && marca != 'O');
    return marca;
}

char ValidarCategoria()
{
    char categoria;
    do
    {
        cout << "Ingrese Categoria (P: Paseo; M: Montañera): "; cin >> categoria;
        categoria = toupper(categoria);
    } while (categoria != 'P' && categoria != 'M');
    return categoria;
}

void MontoPagar(char marca, char categoria)
{
    int MontoPagar = 0;
    if (marca == 'B')
    {
        if (categoria == 'P')
        {
            MontoPagar = 1300;
        }
        else
        {
            MontoPagar = 1000;
        }
    }
    else if (marca == 'M')
    {
        if (categoria == 'P')
        {
            MontoPagar = 1350;
        }
        else
        {
            MontoPagar = 2500;
        }
    }
    else
    {
        if (categoria == 'P')
        {
            MontoPagar = 900;
        }
        else
        {
            MontoPagar = 3200;
        }
    }

    cout << endl << "El monto a pagar es: " << MontoPagar << endl;
}

int main()
{
    char marca = ValidarMarca();
    char categoria = ValidarCategoria();

    MontoPagar(marca, categoria);

    system("pause>0");
    return 0;
}