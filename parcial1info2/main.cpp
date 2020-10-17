/*
PARCIAL 1 INFORMATICA 2.
Santiago Alejandro Sepulveda Palacio.
cc: 1022097969
*/

#include <iostream>
#include <math.h>
using namespace std;



int main()
{
    float g= 9.8;
    //datos cañon ofensivo
    int Ho; int VoO; int alfa;


    float x;


    int Hd; int d; int VoD;

    cout << "Este programa realiza una serie de calculos en base al movimiento parabolico." << endl;

    cout << "ingrese la distancia d entre los dos canones: " << endl;
    cin >> d;

    cout << "ingrese la altura Ho del canon ofensivo: " << endl;
    cin >> Ho;

    //cout << "ingrese la altura Hd del canon defensivo: " << endl;
    //cin >> Hd;

    //cout << "ingrese la velocidad inicial del canon defensivo: " << endl;
    //cin >> VoD;

    cout << "ingrese el angulo alfa del canon ofensivo: " << endl;
    cin >> alfa;

    // Analisis para el disparo Ofensivo:
    // posicion eje horizoltal
    x =  VoD*cos(alfa);
    cout << "la posocion en x del canon ofensivo es: " << x << endl;



    return 0;
}
