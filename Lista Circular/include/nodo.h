#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;

class nodo {
   public:
    nodo(int v, nodo *sig);
    virtual ~nodo();
   private:
    int valor;
    nodo *siguiente;

   friend class lista;
};

typedef nodo *pnodo;

#endif // NODO_H
