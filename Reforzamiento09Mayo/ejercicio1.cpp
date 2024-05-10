/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento.
*/
#include <iostream>
using namespace std;

#define TAM 10000 //Tamaño
int numeros[TAM];
int pos = 0; //Posicion

main()
{
    int op=0; //Opcion
    int cont, suma=0; //Contador
    cout << op << endl;

    while(op == 0)
    {
        cout << "Digite un numero: ";
        cin >> numeros[pos];
        pos++;

        cout << "Quiere ingresar otro numero? 1=salir 0=continuar";
        cin >> op;
    }
    cont=0;
    while (cont < pos)
    {
        suma = 0;
        int num=numeros[cont];
        for(int i=0; i <= num; i++)
        {
            suma = suma + i;
        }
        cout << numeros[cont] << "= " << suma << endl;
        cont++;
    }
    
}
