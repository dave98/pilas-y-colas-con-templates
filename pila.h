#include <iostream>

template<typename T>
class Pila
{

    class NodoPila
    {
    public:
        NodoPila* siguiente;
        T elemento;
        NodoPila(T x)
        {
            elemento = x;
            siguiente = NULL;
        }
    };

    NodoPila* cima;
    public:
    Pila ()
    {
        cima = NULL;
    }
    void insertar(T elemento);
    int quitar();
    int cimaPila();
    int pilaVacia();
    void limpiarPila();
    ~Pila()
    {
        limpiarPila();
    }
};
