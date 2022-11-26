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
    bool Actual();
    int ValorActual();


   private:
    pnodo actual;
};

#endif // LISTA_H
