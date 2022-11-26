#ifndef NODO_H
#define NODO_H
#include <iostream>
class nodo {
public:
	nodo(int, nodo *, nodo *);
	
private:
	int valor;
	nodo *siguiente;
	nodo *anterior;
		
	friend class lista;
};

#endif

