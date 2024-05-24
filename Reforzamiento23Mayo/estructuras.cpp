#include <iostream>
using namespace std;
#define MAX 100

struct PERSONA 
{
    char nombre[20];
    char apellido[20];
    char CIF[20];
    char correo[30];
    float promedio;
};

PERSONA estudiantes[MAX];
PERSONA nuevoEstudiante;

int main(int argc, char const *argv[])
{
    int cantidadEstudiantes = 0;
    cout << "Cantidad de estudiantes a registrar: ";
    cin >> cantidadEstudiantes; 

    for(int i = 0; i < cantidadEstudiantes; i++)
    {
        cout << "Ingresa el nombre del estudiante" << endl;
        cin >> nuevoEstudiante.nombre;
        cout << "Ingresa el apellido del estudiante" << endl;
        cin >> nuevoEstudiante.apellido;
        cout << "Ingrese el CIF del estudiante" << endl;
        cin >> nuevoEstudiante.CIF;
        cout << "Ingresa el correo del estudiante" << endl;
        cin >> nuevoEstudiante.correo;
        cout << "Ingresa el promedio del estudiante" << endl;
        cin >> nuevoEstudiante.promedio; 

        estudiantes[i] = nuevoEstudiante;
    }

    cout << endl;

    for(int i = 0; i < cantidadEstudiantes; i++)
    {
        cout << "Datos estudiante N" << i+1 << endl;
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Apellido: " << estudiantes[i].apellido << endl;
        cout << "CIF: " << estudiantes[i].CIF << endl;
        cout << "Correo: " << estudiantes[i].correo << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;

    }

    return 0;
}

