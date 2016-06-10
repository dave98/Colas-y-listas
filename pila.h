#include <iostream>


class Pila
{
    class NodoPila
    {
    public:
        NodoPila* siguiente;
        int elemento;
        NodoPila(int x)
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
    void insertar(int elemento);
    int quitar();
    int cimaPila();
    int pilaVacia();
    void limpiarPila();
    ~Pila()
    {
        limpiarPila();
    }
};
