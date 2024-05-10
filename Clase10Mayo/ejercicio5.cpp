/*Escribe un programa que solicite al usuario ingresar 10 números enteros, los
almacene en un arreglo y luego encuentre y muestre el número más grande.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    int arr[10]; //arreglo
    int mayor=0; //Es el numero mayor
    int i=0; //indice

    while(i < 10) //Mientras el indice sea menor que 10 se realizara el bucle
    {
        cout << "Dime un numero: ";
        cin >> num;
        arr[i] = num; //Se guarda el numero en el arreglo

        if(arr[i] > mayor) //Si el numero en i es mayor que el numero mayor
        {
            mayor = arr[i]; //Se guarda el numero en la variable mayor
        }
        i++; //Se incrementa el indice
    }
    cout << "El numero mayor es: " << mayor << endl;

    return 0;
}
