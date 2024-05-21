#include <iostream>
#include "variables.h"

using namespace std;

/*Prototipo de funciones*/
void start();
void menu();
void addAge();
void showAges();
void showOldest();
void showYounguest();
void showAverage();

/*Funciones*/
void menu(){
    system("cls||clear");
    cout << "1. Ingresar edades" << endl;
    cout << "2. Mostrar edades" << endl;
    cout << "3. Mostrar edad mayor" << endl;
    cout << "4. Mostrar edad menor" << endl;
    cout << "5. Mostrar promedio de edades" << endl;
    cout << "6. Salir" << endl;
}

/*Agregar edades*/

void addAge()
{
    system("cls||clear");
    cout << "Dime la edad: ";
    cin >> ages[pos];
    pos++;
    system("pause");
}

void start()
{
    int option = 0;

    while(option != 6)
    {
        menu();
        cout << "Dime una opcion: ";
        cin >> option;
        switch (option)
        {
        case 1:
            addAge();
            break;
        case 2:
            showAges();
            break;
        case 3:
            showOldest();
            break;
        case 4:
            showYounguest();
            break;
        case 5:
            showAverage();
            break;
        case 6:
            cout << "Adios" << endl;
            break;
        default: 
            break;
        }
    }
}

void showAges()
{
    system("cls||clear");
    cout << "Edades: " << endl;
    for(int i = 0; i < pos; i++)
    {
        cout << ages[i] << endl;
    }
    system("pause");
}

void showOldest()
{
    system("cls||clear");
    int maxAge = ages[0]; // Inicializar con el primer elemento

    for(int i = 1; i < pos; i++) {
        if(ages[i] > maxAge) {
            maxAge = ages[i]; // Actualizar maxAge si encontramos una edad mayor
        }
    }

    cout << "La edad mayor es: " << maxAge << endl;
    system("pause");
}

void showYounguest()
{
    system("cls||clear");
    int minAge = ages[0]; // Inicializar con el primer elemento

    for(int i = 1; i < pos; i++) {
        if(ages[i] < minAge) {
            minAge = ages[i]; // Actualizar minAge si encontramos una edad menor
        }
    }

    cout << "La edad menor es: " << minAge << endl;
    system("pause");
}

void showAverage()
{
    system("cls||clear");
    int sum = 0;
    for(int i = 0; i < pos; i++)
    {
        sum += ages[i];
    }
    cout << "El promedio de edades es: " << sum / pos << endl;
    system("pause");
}