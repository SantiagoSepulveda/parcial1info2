/*
PARCIAL 1 INFORMATICA 2.
Santiago Alejandro Sepulveda Palacio.
cc: 1022097969
*/

#include <iostream>
#include <math.h>
#define PI 3.1416
#include <stdlib.h>

using namespace std;

float trayectoria_tiro_ofensivo(float x_ofensivo, float y_ofensivo);

int main()
{
    float g= 9.8;
    //datos cañon ofensivo
    float Ho; float VoO; float alfa;float alfa1;
    float x_ofensivo; float y_ofensivo;

    alfa1= (alfa*PI)/180;



    float Hd; float d; float VoD; float tiempo_o;

    cout << "Este programa realiza una serie de calculos en base al movimiento parabolico." << endl;

    cout << "ingrese la distancia d entre los dos canones: " << endl;
    cin >> d;

    cout << "ingrese la velocidad Vo del canon ofensivo: " << endl;
    cin >> VoO;

    cout << "ingrese la altura Ho del canon ofensivo: " << endl;
    cin >> Ho;

    cout << "ingrese el angulo alfa en radianes del canon ofensivo: " << endl;
    cin >> alfa;

    cout << "ingrese el tiempo del canon ofensivo: " << endl;
    cin >> tiempo_o;

    alfa1= (alfa*PI)/180;


    // Analisis para el disparo Ofensivo:
    // posicion eje horizoltal

    x_ofensivo =  0 + VoO*cos(alfa1)*tiempo_o;
    cout << "la posocion en x del canon ofensivo es: " << x_ofensivo << endl;

    // posicion eje vertical
    y_ofensivo = Ho +(VoO*sin(alfa1)-g*tiempo_o)*tiempo_o - (0.5*g*tiempo_o*tiempo_o);
    cout << "la posocion en y del canon ofensivo es: " << y_ofensivo << endl;


    return 0;
}

float trayectoria_tiro_ofensivo(float x_ofensivo, float y_ofensivo);
