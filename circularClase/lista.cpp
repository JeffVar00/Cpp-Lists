#include "lista.h"

lista::~lista()
{
	nodo* nodo;
	
	// Mientras la lista tenga m�s de un nodo
	while(actual->siguiente != actual) {
		// Borrar el nodo siguiente al apuntado por lista
		nodo = actual->siguiente;
		actual->siguiente = nodo->siguiente;
		delete nodo;
	}
	// Y borrar el �ltimo nodo
	delete actual;
	actual = NULL;
}

void lista::Insertar(int v)
{
	nodo* Nodo;
	
	// Creamos un nodo para el nuevo valor a insertar
	Nodo = new nodo(v, NULL);
	
	// Si la lista est� vac�a, la lista ser� el nuevo nodo
	// Si no lo est�, insertamos el nuevo nodo a continuaci�n del apuntado
	// por lista
	if(actual == NULL) actual = Nodo;
	else Nodo->siguiente = actual->siguiente;
	// En cualquier caso, cerramos la lista circular
	actual->siguiente = Nodo;
}

void lista::Borrar(int v)
{
	nodo* nodo;
	
	nodo = actual;
	
	// Hacer que lista apunte al nodo anterior al de valor v
	do {
		if(actual->siguiente->valor != v) actual = actual->siguiente;
	} while(actual->siguiente->valor != v && actual != nodo);
	// Si existe un nodo con el valor v:
	if(actual->siguiente->valor == v) {
		// Y si la lista s�lo tiene un nodo
		if(actual == actual->siguiente) {
			// Borrar toda la lista
			delete actual;
			actual = NULL;
		}
		else {
			// Si la lista tiene m�s de un nodo, borrar el nodo  de valor v
			nodo = actual->siguiente;
			actual->siguiente = nodo->siguiente;
			delete nodo;
		}
	}
}

void lista::Mostrar()
{
	nodo* nodo = actual;
	
	do {
		cout << nodo->valor << "-> ";
		nodo = nodo->siguiente;
	} while(nodo != actual);
	
	cout << endl;
}

void lista::Siguiente()
{
	if(actual) actual = actual->siguiente;
}
