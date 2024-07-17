#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

char ValidarLetraNombre()
{
    char primletranombre;
    do
    {
        cout << "Ingrese primera letra del nombre: "; cin >> primletranombre;
    } while ((primletranombre < 'A' || primletranombre > 'Z') && (primletranombre < 'a' || primletranombre > 'z'));
    return primletranombre;
}

char ValidarLetraApellido()
{
    char primletraapellido;
    do
    {
        cout << "Ingrese primera letra del apellido: "; cin >> primletraapellido;
    } while ((primletraapellido < 'A' || primletraapellido > 'Z') && (primletraapellido < 'a' || primletraapellido > 'z'));
    return primletraapellido;
}

int ValidarEdad()
{
    int edad;
    do
    {
        cout << "Ingrese la edad: "; cin >> edad;
    } while (edad < 16 || edad > 31);
    return edad;
}

int ValidarAnualNacimiento()
{
    int anualnacimiento;
    do
    {
        cout << "Ingrese el anual de nacimiento: "; cin >> anualnacimiento;
    } while (anualnacimiento < 2000 || anualnacimiento > 2010);
    return anualnacimiento;
}

double ValidarPeso()
{
    double peso;
    do
    {
        cout << "Ingrese el peso en kg: "; cin >> peso;
    } while (peso < 45.01 || peso > 89.99);
    return peso;
}

double ValidarEstatura()
{
    double estatura;
    do
    {
        cout << "Ingrese la estatura en m: "; cin >> estatura;
    } while (estatura < 1.50 || estatura > 1.99);
    return estatura;
}

void MensajeEncriptado(char primletranombre, char primletraapellido, int edad, int anualnacimiento, double peso, double estatura)
{
    int a1, a2, a3, a4, a5, a6, a7;
    int b1, b2, b3, b4, b5;
    int c1, c2, c3, c4, c5;
    int d1, d2, d3, d4, d5, d6;
    int partedecimalpeso;
    int partedecimalestatura;
    int e1, e2, e3;
    int f1, f2, f3;

    //Primera letra nombre a base 2
    a1 = primletranombre % 2;
    a2 = (primletranombre / 2) % 2;
    a3 = ((primletranombre / 2) / 2) % 2;
    a4 = (((primletranombre / 2) / 2) / 2) % 2;
    a5 = ((((primletranombre / 2) / 2) / 2) / 2) % 2;
    a6 = (((((primletranombre / 2) / 2) / 2) / 2) / 2) % 2;
    a7 = ((((((primletranombre / 2) / 2) / 2) / 2) / 2) / 2) % 2;

    //Primera letra apellido a base 3
    b1 = primletraapellido % 3;
    b2 = (primletraapellido / 3) % 3;
    b3 = ((primletraapellido / 3) / 3) % 3;
    b4 = (((primletraapellido / 3) / 3) / 3) % 3;
    b5 = ((((primletraapellido / 3) / 3) / 3) / 3) % 3;

    //La edad a base 2
    c1 = edad % 2;
    c2 = (edad / 2) % 2;
    c3 = ((edad / 2) / 2) % 2;
    c4 = (((edad / 2) / 2) / 2) % 2;
    c5 = ((((edad / 2) / 2) / 2) / 2) % 2;

    //Año nacimiento a base 4
    d1 = anualnacimiento % 4;
    d2 = (anualnacimiento / 4) % 4;
    d3 = ((anualnacimiento / 4) / 4) % 4;
    d4 = (((anualnacimiento / 4) / 4) / 4) % 4;
    d5 = ((((anualnacimiento / 4) / 4) / 4) / 4) % 4;
    d6 = (((((anualnacimiento / 4) / 4) / 4) / 4) / 4) % 4;

    //Parte decimal del peso a base 5
    partedecimalpeso = (peso - static_cast<int>(peso)) * 100;
    e1 = partedecimalpeso % 5;
    e2 = (partedecimalpeso / 5) % 5;
    e3 = ((partedecimalpeso / 5) / 5) % 5;

    //Parte decimal de la estatura a base 6
    partedecimalestatura = (estatura - static_cast<int>(estatura)) * 100;
    f1 = partedecimalestatura % 6;
    f2 = (partedecimalestatura / 6) % 6;
    f3 = ((partedecimalestatura / 6) / 6) % 6;

    cout << endl << "DATOS ENCRIPTADOS" << endl;
    cout << a7 << a6 << a5 << a4 << a3 << a2 << a1 << " " << b5 << b4 << b3 << b2 << b1 << " " << c5 << c4 << c3 << c2 << c1 << " " << d6 << d5 << d4 << d3 << d2 << d1 << " " << e3 << e2 << e1 << " " << f3 << f2 << f1 << endl;
}

int main()
{
    char primletranombre = ValidarLetraNombre();
    char primletraapellido = ValidarLetraApellido();
    int edad = ValidarEdad();
    int anualnacimiento = ValidarAnualNacimiento();
    double peso = ValidarPeso();
    double estatura = ValidarEstatura();

    MensajeEncriptado(primletranombre, primletraapellido, edad, anualnacimiento, peso, estatura);

    system("pause>0");
    return 0;
}