/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/
#include <iostream>

using namespace std;

void promedio()
{
    int numest = 10;
    float sumanota = 0, promedio = 0, nota;

    int i = 1;
    while (i <= numest)
    {
        cout << "Ingrese la nota del estudiante" << i << endl;
        cin >> nota;
        sumanota += nota;
        promedio = sumanota / numest;
        i++;
    }
    cout << "El promedio general del curso es: " << endl;
    cout << promedio;
}

int main()
{
    cout << "El promedio general del salon es de: " << endl;
    promedio();
    return 0;
}