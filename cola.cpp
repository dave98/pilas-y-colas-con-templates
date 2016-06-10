#include "Cola.h"
template<typename T>
void Cola<T> :: insertar(T elemento)
{
    NodoCola<T>* nuevo;
    nuevo = new NodoCola<T> (elemento);
    if (colaVacia())
    {
        frente = nuevo;
    }
    else
    {
        final -> siguiente = nuevo;
    }
    final = nuevo;
}
template<typename T>
int Cola :: quitar()
{
    if (colaVacia())
        throw "Cola vacía, no se puede extraer.";
    int aux = frente -> elemento;
    NodoCola<T>* a = frente;
    frente = frente -> siguiente;
    delete a;
    return aux;
}
template<typename T>
int Cola :: frenteCola()
{
    if (colaVacia())
        throw "Cola vacía";
    return frente -> elemento;
}

template<typename T>
void Cola :: borrarCola()
{
    for (; frente != NULL;)
    {
        NodoCola<T>* a;
        a = frente;
        frente = frente -> siguiente;
        delete a;
    }
    final = NULL;
}

template<typename T>
int Cola :: colaVacia()
{
    return frente == NULL;
}
