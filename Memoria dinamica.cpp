// Ejercicio 3.  Uso de memoria dinámica
#include <iostream>
using namespace std;

int mainMem() 
{
    // 4) En esta parte declaramos un puntero a float e inicializamos con nullptr
    float* ptrFloat = nullptr;

    // 4.1 En esta parte asignamos memoria dinámica para un float y almacenamos el valor 7.77
    ptrFloat = new float(7.77);

    // 4.2 En esta parte Creamos una variable float normal con valor 6.66
    float valor = 6.66;

    // 4.3 En esta parte Reasignamos el puntero para que apunte a la variable `valor`
    ptrFloat = &valor;

    // 4.4 En esta parte Mensaje indicando que se ha causado una fuga de memoria (memory leak)
    cout << "Precaucion, Se acaba de causar un memory leak!" << endl;

    // 4.5 En esta parte Explicación de por qué ocurrió el memory leak 
    cout << "Esto es un memory leak porque perdimos la referencia a la memoria que pedimos con new y no se hizo la liberacion con delete. "
        "Para evitar esto, debemos hacer delete antes de reasignar el puntero." << endl;

    // 4.6 En esta parte se vuelve a reservar memoria dinámica para un nuevo float con valor 1984.0
    ptrFloat = new float(1984.0f);

    // 4.7 En esta parte se copia el valor del puntero a otro puntero (los dos apuntan al mismo bloque)
    float* otroPtr = ptrFloat;

    // 4.8 En esta parte Liberamos la memoria apuntada por ptrFloat y lo asignamos a nullptr
    delete ptrFloat;
    ptrFloat = nullptr;

    // 4.9 En esta parte verificamos si ptrFloat es igual a nullptr
    if (ptrFloat == nullptr)
        cout << "ptrFloat es igual a nullptr" << endl;

    // 4.10 En esta parte tambien se puede usar NULL, aunque es preferible nullptr en C++ moderno
    if (ptrFloat == NULL)
        cout << "ptrFloat es igual a NULL" << endl;

    // 4.11 En esta parte Ponemos otroPtr aun apunta a memoria que fue liberada: peligroso 
    if (otroPtr != nullptr && otroPtr != NULL)
        cout << "otroPtr no es nullptr ni NULL, Precaucion: apunta a memoria ya liberada." << endl;

    return 0;
}
