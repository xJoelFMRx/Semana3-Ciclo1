#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

long long ValidarCodigo()
{
    long long codigo;
    do
    {
        cout << "Ingresa numero de 8 digitos: "; cin >> codigo;
    } while (codigo < 10000000 || codigo > 99999999);
    return codigo;
}

char ValidarArea()
{
    char area;
    do
    {
        cout << "Ingrese el area donde labora: "; cin >> area;
    } while ((area < 'a' || area > 'z') && (area < 'A' || area > 'Z'));
    return area;
}

void CodigoEncriptado(long long codigo, char area)
{
    int a; //Primer numero resultante
    int b; //Segundo numero resultante
    char letrauno; //Para clave de encriptacion para primer numero
    char letrados; //Para clave de encriptacion para segundo numero
    int numparaletra = 0; //Para el numero de la letra del area donde labora
    a = codigo / 10000;
    b = codigo % 10000;

    //Clave de encriptacion para primer numero
    if (a >= 1000 && a <= 3000)
    {
        letrauno = 72;
    }
    else if (a >= 4000 && a <= 6000)
    {
        letrauno = 88;
    }
    else if (a >= 7000 && a <= 9000)
    {
        letrauno = 76;
    }
    else
    {
        letrauno = 35;
    }
    //Clave de encriptacion para segundo numero
    if (b >= 1000 && b <= 3000)
    {
        letrados = 84;
    }
    else if (b >= 4000 && b <= 6000)
    {
        letrados = 87;
    }
    else if (b >= 7000 && b <= 9000)
    {
        letrados = 65;
    }
    else
    {
        letrados = 38;
    }
    //Numero de la letra del area donde labora
    if ((area >= 'A' && area <= 'Z') && (area != 'A' && area != 'E' && area != 'I' && area != 'O' && area != 'U'))
    {
        numparaletra = 7007;
    }
    else if ((area >= 'a' && area <= 'z') && (area != 'a' && area != 'e' && area != 'i' && area != 'o' && area != 'u'))
    {
        numparaletra = 6009;
    }
    else if (area == 'A' || area == 'E' || area == 'I' || area == 'O' || area == 'U')
    {
        numparaletra = 1001;
    }
    else if (area == 'a' || area == 'e' || area == 'i' || area == 'o' || area == 'u')
    {
        numparaletra = 9009;
    }

    cout << endl << "El codigo encriptado es: " << letrauno << " " << letrados << " " << numparaletra << endl;
}

int main()
{
    long long codigo = ValidarCodigo();
    char area = ValidarArea();

    CodigoEncriptado(codigo, area);

    system("pause>0");
    return 0;
}