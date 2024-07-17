#include "pch.h"
#include "iostream"
#include "string"

using namespace System;
using namespace std;

long long ValidarNumTarjeta()
{
    long long numero;
    while (true)
    {
        cout << "Ingrese el numero de la tarjeta: "; cin >> numero;
        if (cin.fail() || numero < 1000000000000000 || numero > 9999999999999999) //cin.fail() para verificar por ejemplo si se metio una letra en lugar de un digito
        {
            cin.clear(); // Limpia los errores del flujo de entrada.
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora la entrada inválida restante.
            cout << "Entrada invalida. Por favor, ingrese un numero de 16 digitos." << endl; // Informa al usuario que la entrada no es válida.
        }
        else
        {
            break; // Sale del bucle si el número ingresado es válido.
        }
    }
    return numero;
}

void Encriptacion(long long numero)
{
    string NumaCadena;
    string TotalAntesdeUltimos;
    string primCadena;
    string segunCadena;
    string tercCadena;
    string cuarCadena;
    string TotalEncriptado;
    int prim;
    int segun;
    int terc;
    int cuar;
    NumaCadena = to_string(numero);
    TotalAntesdeUltimos = NumaCadena.substr(0, 12);
    NumaCadena = NumaCadena.substr(12, 4);
    prim = stoi(NumaCadena.substr(0, 1));
    segun = stoi(NumaCadena.substr(1, 1));
    terc = stoi(NumaCadena.substr(2, 1));
    cuar = stoi(NumaCadena.substr(3, 1));

    //Primer digito
    if (prim >= 1 && prim <= 3)
    {
        primCadena = to_string(prim + 2);
    }
    else if (prim >= 4 && prim <= 6)
    {
        primCadena = "J";
    }
    else if (prim >= 7 && prim <= 9)
    {
        primCadena = to_string(prim - 4);
    }
    else
    {
        primCadena = "K";
    }
    //Segundo digito
    if (segun >= 1 && segun <= 3)
    {
        segunCadena = "H";
    }
    else if (segun >= 4 && segun <= 6)
    {
        segunCadena = "P";
    }
    else if (segun >= 7 && segun <= 9)
    {
        segunCadena = to_string(segun - 1);
    }
    else
    {
        segunCadena = to_string(abs(segun - 3));
    }
    //Tercer digito
    if (terc >= 1 && terc <= 3)
    {
        tercCadena = "L";
    }
    else if (terc >= 4 && terc <= 6)
    {
        tercCadena = to_string(terc - 3);
    }
    else if (terc >= 7 && terc <= 9)
    {
        tercCadena = "G";
    }
    else
    {
        tercCadena = to_string(terc + 7);
    }
    //Cuarto digito
    if (cuar >= 1 && cuar <= 3)
    {
        cuarCadena = to_string(cuar - 1);
    }
    else if (cuar >= 4 && cuar <= 6)
    {
        cuarCadena = to_string(cuar + 2);
    }
    else if (cuar >= 7 && cuar <= 9)
    {
        cuarCadena = "T";
    }
    else
    {
        cuarCadena = "F";
    }
    TotalEncriptado = TotalAntesdeUltimos + primCadena + segunCadena + tercCadena + cuarCadena;

    cout << endl << "El numero encriptado es: " << TotalEncriptado << endl;
}

int main()
{
    long long numero = ValidarNumTarjeta();

    Encriptacion(numero);

    system("pause>0");
    return 0;
}