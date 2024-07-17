#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarA�osLaborados()
{
    int canta�oslaborados;
    do
    {
        cout << "Ingrese la cantidad de anuales que labora: "; cin >> canta�oslaborados;
    } while (canta�oslaborados < 1 || canta�oslaborados > 50);
    return canta�oslaborados;
}

char ValidarEstudios()
{
    char estudiosrealizados;
    do
    {
        cout << "Estudios (P: primaria; S: secundaria; U: universitario; G: posgrado): "; cin >> estudiosrealizados;
    } while (estudiosrealizados != 'P' && estudiosrealizados != 'S' && estudiosrealizados != 'U' && estudiosrealizados != 'G');
    return estudiosrealizados;
}

void PuntajeObtenido(int canta�oslaborados, char estudiosrealizados)
{
    int PuntajeObtenido = 0;
    if (canta�oslaborados < 5)
    {
        PuntajeObtenido += 5;
    }
    else
    {
        PuntajeObtenido += 10;
    }

    if (estudiosrealizados == 'P')
    {
        PuntajeObtenido += 5;
    }
    if (estudiosrealizados == 'S')
    {
        PuntajeObtenido += 10;
    }
    if (estudiosrealizados == 'U')
    {
        PuntajeObtenido += 20;
    }
    if (estudiosrealizados == 'G')
    {
        PuntajeObtenido += 30;
    }

    cout << endl << "Puntaje Obtenido: " << PuntajeObtenido << endl;
}

int main()
{
    int canta�oslaborados = ValidarA�osLaborados();
    char estudiosrealizados = ValidarEstudios();

    PuntajeObtenido(canta�oslaborados, estudiosrealizados);

    system("pause>0");
    return 0;
}