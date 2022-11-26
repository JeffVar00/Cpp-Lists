#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"
#include <iostream>

using namespace std;
class lista {
public:
	lista();
	~lista();
	void Insertar(int v);
	void Borrar(int v);
	bool ListaVacia() { return primero == NULL; } 
	void Mostrar();
	void Siguiente();
	void Primero();
	void Ultimo();
	bool Actual() { return actual != NULL; }
	int ValorActual() { return actual->valor; }
	
private:
	nodo* primero;
	nodo* actual;
};

#endif

