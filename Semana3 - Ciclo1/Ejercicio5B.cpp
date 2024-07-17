#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

long long ValidarCodigo()
{
    long long codigo;
    do
    {
        cout << "Ingrese el codigo de barras del producto: "; cin >> codigo;
    } while (codigo < 1000000000 || codigo > 9999999999);
    return codigo;
}

int ValidarCantidadComprar()
{
    int cantidad;
    do
    {
        cout << "Ingrese la cantidad que desea comprar: "; cin >> cantidad;
    } while (cantidad < 1);
    return cantidad;
}

int Obtener_Precio(long long codigo)
{
    int precio;
    precio = (codigo % 1000000) % 100;

    return precio;
}

double Calcular_Monto_Pagar(int cantidad, int precio)
{
    double montopagar;
    montopagar = precio * cantidad;

    return montopagar;
}

double Calcular_Descuento(int montopagar)
{
    double descuento;
    if (montopagar > 1500)
    {
        descuento = 0.2 * montopagar;
    }
    else if (montopagar > 1000 && montopagar <= 1500)
    {
        descuento = 0.1 * montopagar;
    }
    else if (montopagar <= 1000)
    {
        descuento = 0;
    }

    return descuento;
}

void Imprimir_Resultados(long long codigo, int precio, double montopagar, int cantidad, double descuento)
{
    cout << endl << "=============RESULTADO=============" << endl;
    cout << "Codigo de barras: " << codigo << endl;
    cout << "Precio del producto: " << precio << endl;
    cout << "Monto a pagar por " << cantidad << " unidades: " << montopagar << endl;
    cout << "Descuento obtenido: " << descuento << endl;
    cout << "Monto total a pagar: " << montopagar - descuento << endl;
}

int main()
{
    long long codigo = ValidarCodigo();
    int cantidad = ValidarCantidadComprar();
    int precio = Obtener_Precio(codigo);
    double montopagar = Calcular_Monto_Pagar(cantidad, precio);
    double descuento = Calcular_Descuento(montopagar);

    Imprimir_Resultados(codigo, precio, montopagar, cantidad, descuento);

    system("pause>0");
    return 0;
}