#include "Pila.h"

template<typename T>
int Pila<T>::pilaVacia()
{
    return cima == NULL;
}

template<typename T>
void Pila<T>::insertar(int elemento)
{
    NodoPila<T>* nuevo;
    nuevo = new NodoPila(elemento);
    nuevo -> siguiente = cima;
    cima = nuevo;
}

template<typename T>
int Pila<T>::quitar()
{
    if (pilaVacia())
        throw "Pila vacía, no se puede extraer.";
    int aux = cima -> elemento;
    cima = cima -> siguiente;
    return aux;
}

template<typename T>
int Pila:: cimaPila()
{
    if (pilaVacia())
        throw "Pila vacía";
    return cima -> elemento;
}

template<typename T>
void Pila:: limpiarPila()
{
    NodoPila<T>* n;
    while(!pilaVacia())
    {
        n = cima;
        cima = cima -> siguiente;
        delete n;
    }
}
