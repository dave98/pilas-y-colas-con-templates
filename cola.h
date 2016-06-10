// archivo ColaGenerica.h
#  include<iostream>

template<typename T>
class Cola
{
protected:

    class NodoCola
    {
    public:
        NodoCola* siguiente;
        T elemento;
        NodoCola(T x)
        {
            elemento = x;
            siguiente = NULL;
        }
    };
    NodoCola* frente;
    NodoCola* final;
public:
    Cola<T>()
    {
        frente = final = NULL;
    }
    void insertar(T elemento);
    int quitar();
    void borrarCola();
    int frenteCola();
    int colaVacia();
    ~Cola()
    {
        borrarCola ();
    }
};
