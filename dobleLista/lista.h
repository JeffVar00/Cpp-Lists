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
	bool ListaVacia() { return plista == NULL; } 
	void Mostrar(int);
	void Siguiente();
	void Anterior();
	void Primero();
	void Ultimo();
	bool Actual() { return plista != NULL; }
	int ValorActual() { return plista->valor; }
	
private:
	nodo* plista;
};

#endif

