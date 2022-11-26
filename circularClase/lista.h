#ifndef LISTA_H
#define LISTA_H
#include "nodo.h"

#include <iostream>
using namespace std;
class lista {
public:
	lista() { actual = NULL; }
	~lista();
	
	void Insertar(int v);
	void Borrar(int v);
	bool ListaVacia() { return actual == NULL; }
	void Mostrar();
	void Siguiente();
	bool Actual() { return actual != NULL; }
	int ValorActual() { return actual->valor; }
	
private:
	nodo* actual;
};

#endif

