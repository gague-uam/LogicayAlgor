/*Leer un numero y obtener la tabal de multiplicacion
de dhico numero*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    int i =1;
    while(i <= 10)
    {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }
    cout << "Feliz cumpleanos a mi :D";
    return 0;
}