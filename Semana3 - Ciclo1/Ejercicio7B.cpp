#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarLatitud()
{
    int latitud;
    do
    {
        cout << "Latitud: "; cin >> latitud;
    } while (latitud < 1 || latitud > 99);
    return latitud;
}

int ValidarLongitud()
{
    int longitud;
    do
    {
        cout << "Longitud: "; cin >> longitud;
    } while (longitud < 1 || longitud > 99);
    return longitud;
}

int ValidarAltitud()
{
    int altitud;
    do
    {
        cout << "Altitud: "; cin >> altitud;
    } while (altitud < 1 || altitud > 99);
    return altitud;
}

char ValidarMetalPrecioso()
{
    char metal;
    do
    {
        cout << "Metal precioso: "; cin >> metal;
    } while (metal != 'O' && metal != 'A' && metal != 'D');
    return metal;
}

int ValidarDia()
{
    int dia;
    do
    {
        cout << "Dia: "; cin >> dia;
    } while (dia < 1 || dia > 31);
    return dia;
}

int ValidarMes()
{
    int mes;
    do
    {
        cout << "Mes: "; cin >> mes;
    } while (mes < 1 || mes > 12);
    return mes;
}

int ValidarAño()
{
    int año;
    do
    {
        cout << "Anual: "; cin >> año;
    } while (año < 1950 || año > 2050);
    return año;
}

void DatosEncriptados(int latitud, int longitud, int altitud, char metal, int dia, int mes, int año)
{
    int a1, a2, a3, a4, a5, a6, a7; //Latitud
    int b1, b2, b3, b4; //Longitud
    int c1, c2, c3; //Altitud
    int d1, d2, d3, d4, d5, d6, d7; //Metal
    int e1, e2, e3, e4, e5; //Dia
    int f1, f2; //Mes
    int g1, g2, g3, g4; //Año

    a1 = latitud % 2;
    a2 = (latitud / 2) % 2;
    a3 = ((latitud / 2) / 2) % 2;
    a4 = (((latitud / 2) / 2) / 2) % 2;
    a5 = ((((latitud / 2) / 2) / 2) / 2) % 2;
    a6 = (((((latitud / 2) / 2) / 2) / 2) / 2) % 2;
    a7 = ((((((latitud / 2) / 2) / 2) / 2) / 2) / 2) % 2;

    b1 = longitud % 4;
    b2 = (longitud / 4) % 4;
    b3 = ((longitud / 4) / 4) % 4;
    b4 = (((longitud / 4) / 4) / 4) % 4;

    c1 = altitud % 6;
    c2 = (altitud / 6) % 6;
    c3 = ((altitud / 6) / 6) % 6;

    d1 = metal % 2;
    d2 = (metal / 2) % 2;
    d3 = ((metal / 2) / 2) % 2;
    d4 = (((metal / 2) / 2) / 2) % 2;
    d5 = ((((metal / 2) / 2) / 2) / 2) % 2;
    d6 = (((((metal / 2) / 2) / 2) / 2) / 2) % 2;
    d7 = ((((((metal / 2) / 2) / 2) / 2) / 2) / 2) % 2;

    e1 = dia % 2;
    e2 = (dia / 2) % 2;
    e3 = ((dia / 2) / 2) % 2;
    e4 = (((dia / 2) / 2) / 2) % 2;
    e5 = ((((dia / 2) / 2) / 2) / 2) % 2;

    f1 = mes % 8;
    f2 = (mes / 8) % 8;

    g1 = año % 9;
    g2 = (año / 9) % 9;
    g3 = ((año / 9) / 9) % 9;
    g4 = (((año / 9) / 9) / 9) % 9;

    cout << endl << "DATOS ENCRIPTADOS" << endl;
    cout << a7 << a6 << a5 << a4 << a3 << a2 << a1 << " " << b4 << b3 << b2 << b1 << " " << c3 << c2 << c1 << " " << d7 << d6 << d5 << d4 << d3 << d2 << d1 << " " << e5 << e4 << e3 << e2 << e1 << " " << f2 << f1 << " " << g4 << g3 << g2 << g1 << endl;
}

int main()
{
    int latitud = ValidarLatitud();
    int longitud = ValidarLongitud();
    int altitud = ValidarAltitud();
    char metal = ValidarMetalPrecioso();
    int dia = ValidarDia();
    int mes = ValidarMes();
    int año = ValidarAño();

    DatosEncriptados(latitud, longitud, altitud, metal, dia, mes, año);

    system("pause>0");
    return 0;
}