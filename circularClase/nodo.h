#ifndef NODO_H
#define NODO_H
#include <iostream>
using namespace std;
class nodo {
public:
	nodo(int , nodo *);
private:
	int valor;
	nodo *siguiente;
	
	friend class lista;
};

#endif

