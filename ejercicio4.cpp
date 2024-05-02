/*Guardar una mariz 3x3 y mostrarla*/
#include <iostream>

using namespace std;

#define MAX 3

int matriz[MAX][MAX];
int fila=0;
int columna=0;

void agregar(int num);
void mostrar();

int main(int argc, char const *argv[])
{
    int num;
    for(int i = 0; i<MAX; i++){
        for(int j = 0; j<MAX; j++){
           cout << "Dime un numero: ";
           cin >> num;
           agregar(num);
        }
    }

    cout << "Mostrar matriz\n";
    mostrar();

    return 0;
}

void agregar(int num){
    matriz[fila][columna]=num;
    columna++;
}
