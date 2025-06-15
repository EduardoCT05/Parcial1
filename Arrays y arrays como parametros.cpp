// Ejercicio 1 Arrays y arrays como parámetros. 
#include <iostream>
using namespace std;

// 1.1 y 1.4 En esta parte se declara la sobrecarga de funciones modificarArray y Se llama a la version de modificarArray que usa punteros.
void modificarArray(bool arreglo[], int size);
void modificarArray(int* arreglo, int size);

int main() 
{
    // 1.0 Aqui se declara el arreglo de booleanos.
    bool arregloBool[5];
    modificarArray(arregloBool, 5);

    // MEsta parte es para que nos muestre los resultado
    cout << "Array de booleanos: ";
    for (int i = 0; i < 5; i++) 
    {
        cout << arregloBool[i] << " ";
    }
    cout << endl;

    // 1.3 En esta parte se crea el arreglo de enteros del 0 al 9.
    int arregloEnteros[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    modificarArray(arregloEnteros, 10);

    return 0;
}

// 1.2 En esta parte se implementa la logica para alternar true/false en el arreglo booleano.
void modificarArray(bool arreglo[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        arr[i] = (i % 2 != 0);
    }
}

// De 1.4 a 1.8 En esta parte se imprime la direccion de memoria y el nuevo valor del arreglo.
void modificarArray(int* arr, int size) 
{
    int* ptr = arr;
    for (int i = 0; i < size; i++) 
    {
        int valorOriginal = *(ptr + i);
        *(ptr + i) = valorOriginal % 2;
        cout << "Direccion: " << (ptr + i)
            << " | Valor tras %2: " << *(ptr + i) << endl;
    }
}