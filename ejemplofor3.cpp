/*Almacenar x cantidad de numeros e imprimir dichos numeros*/
#include <iostream>
using namespace std;

#define MAX 100

int vector[MAX]; //arreglo o vector
int pos=0; //posicion o ubicacion de elemento en el arreglo

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    int cantidad; //Almacenar la cantidad de elementos
    int num;
    cout << "Digite la cantidad de numeros a almacenar: ";
    cin >> cantidad;
    for(int i=0; i< cantidad; i++){
        cout << "Dime un numero: ";
        cin >> num;
        agregar(num);
    }

    cout << "Mostrar numeros" << endl;
    mostrar();

    return 0;
}

void agregar(int num)
{
    vector[pos]= num;
    pos++;
}
void mostrar()
{
   for(int i=0; i<pos; i++){
    cout << vector[i] << endl;
   }
}
