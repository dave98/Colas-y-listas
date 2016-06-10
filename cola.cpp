#include "Cola.h"

void Cola :: insertar(int elemento)
{
    NodoCola* nuevo;
    nuevo = new NodoCola (elemento);
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

int Cola :: quitar()
{
    if (colaVacia())
        throw "Cola vacía, no se puede extraer.";
    int aux = frente -> elemento;
    NodoCola* a = frente;
    frente = frente -> siguiente;
    delete a;
    return aux;
}

int Cola :: frenteCola()
{
    if (colaVacia())
        throw "Cola vacía";
    return frente -> elemento;
}


void Cola :: borrarCola()
{
    for (; frente != NULL;)
    {
        NodoCola* a;
        a = frente;
        frente = frente -> siguiente;
        delete a;
    }
    final = NULL;
}


int Cola :: colaVacia()
{
    return frente == NULL;
}
