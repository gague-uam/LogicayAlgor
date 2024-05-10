/*Escribe un programa que solicite al usuario ingresar la cantidad de calificaciones
que quiere promediar, luego ingrese esas calificaciones, las almacene en un
arreglo y calcule el promedio*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int cantNotas; //Cantidad de notas que el usuario quiere promediar
    cout << "Ingrese la cantidad de clases a promediar: ";
    cin >> cantNotas;

    int notas[cantNotas]; // arreglo para las notas
    int sumaNotas = 0; // inicializar la suma total de las notas
    int i = 0;

    while(i < cantNotas)
    {
        cout << "Ingrese la calificacion " << (i+1) << ": ";
        cin >> notas[i];
        sumaNotas += notas[i];
        i++;
    }

    double promedio = (double)sumaNotas / cantNotas;

    cout << "El promedio de sus calificaciones es: " << promedio << endl;

    return 0;
}


