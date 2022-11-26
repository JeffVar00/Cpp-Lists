#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

class lista {
   public:
    lista();
    ~lista();

    void Insertar(int v);
    void Borrar(int v);

    bool ListaVacia();
    void Mostrar();
    void Siguiente();
    void Primero();
    void Ultimo();
    bool Actual();
    int ValorActual();

   private:
    pnodo primero;
    pnodo actual;
};


#endif // LISTA_H
