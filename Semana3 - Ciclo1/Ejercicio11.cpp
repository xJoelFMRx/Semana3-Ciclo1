#include "pch.h"
#include "iostream"

using namespace System;
using namespace std;

int ValidarUSAQI()
{
    int USAQIlevel;
    do
    {
        cout << "Ingrese el indice de la calidad del aire: "; cin >> USAQIlevel;
    } while (USAQIlevel < 0);
    return USAQIlevel;
}

double ValidarPM()
{
    double PM;
    do
    {
        cout << "Ingrese el PM2.5 del aire: "; cin >> PM;
    } while (PM < 0);
    return PM;
}

void MostrarResultado(int USAQIlevel, double PM)
{
    if ((USAQIlevel >= 0 && USAQIlevel <= 50) && (PM >= 0 && PM <= 12.0))
    {
        cout << endl << "US AQI Level: Good" << endl;
        cout << endl << "Health Recommendation (for 24 hour exposure): " << endl;
        cout << "Air quality is satisfactory and poses little or no risk." << endl;
    }
    else if ((USAQIlevel >= 51 && USAQIlevel <= 100) && (PM >= 12.1 && PM <= 35.4))
    {
        cout << endl << "US AQI Level: Moderate" << endl;
        cout << endl << "Health Recommendation (for 24 hour exposure): " << endl;
        cout << "Sensitive individuals should avoid outdoor activity as they may experience respiratory symptoms." << endl;
    }
    else if ((USAQIlevel >= 101 && USAQIlevel <= 150) && (PM >= 35.5 && PM <= 55.4))
    {
        cout << endl << "US AQI Level: Unhealthy for Sensitive Groups" << endl;
        cout << endl << "Health Recommendation (for 24 hour exposure): " << endl;
        cout << "General public and sensitive individuals in particular are at risk to experience irritation and respiratory problems." << endl;
    }
    else if ((USAQIlevel >= 151 && USAQIlevel <= 200) && (PM >= 55.5 && PM <= 150.4))
    {
        cout << endl << "US AQI Level: Unhealthy" << endl;
        cout << endl << "Health Recommendation (for 24 hour exposure): " << endl;
        cout << "Increased likelihood of adverse effects and aggravation to the heart and lungs among general public." << endl;
    }
    else if ((USAQIlevel >= 201 && USAQIlevel <= 300) && (PM >= 150.5 && PM <= 250.4))
    {
        cout << endl << "US AQI Level: Very Unhealthy" << endl;
        cout << endl << "Health Recommendation (for 24 hour exposure): " << endl;
        cout << "General public will be noticeably affected. Sensitive groups should restric outdoor activities." << endl;
    }
    else if ((USAQIlevel >= 301) && (PM >= 250.5))
    {
        cout << endl << "US AQI Level: Hazardous" << endl;
        cout << endl << "Health Recommendation (for 24 hour exposure): " << endl;
        cout << "General public at high risk of experiencing strong irritations and adverse health effects. Should avoid outdoor activities." << endl;
    }
}

int main()
{
    int USAQIlevel = ValidarUSAQI();
    double PM = ValidarPM();

    MostrarResultado(USAQIlevel, PM);

    system("pause>0");
    return 0;
}