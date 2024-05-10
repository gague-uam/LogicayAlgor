/*Escribe un programa que pida al usuario ingresar números enteros positivos y
calcule la suma de todos los números ingresados hasta que el usuario ingrese un
número negativo.*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int number, fact=1; //Factorial
    cout << "Dime un numero: ";
    cin >> number;

    if(number > 0)
    {
        while(number != 1)
        {
            fact *= number;
            number--;
        }
        cout << "El factorial de su numero es: " << fact << endl;
    }
    else
    {
        cout << "Digite un numero positivo..." << endl;
    }
    return 0;
}
