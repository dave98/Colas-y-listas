// archivo ColaGenerica.h
#  include<iostream>

class Cola
{
protected:
    class NodoCola
    {
    public:
        NodoCola* siguiente;
        int elemento;
        NodoCola (int x)
        {
            elemento = x;
            siguiente = NULL;
        }
    };
    NodoCola* frente;
    NodoCola* final;
public:
    Cola()
    {
        frente = final = NULL;
    }
    void insertar(int elemento);
    int quitar();
    void borrarCola();
    int frenteCola();
    int colaVacia();
    ~Cola()
    {
        borrarCola ();
    }
};
