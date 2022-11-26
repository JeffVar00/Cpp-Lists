#include<iostream>
#include "lista.h"
using namespace std;

int main (int argc, char *argv[]) {
	lista Lista;
	
	Lista.Insertar(20);
	Lista.Insertar(10);
	Lista.Insertar(40);
	Lista.Insertar(30);
	Lista.Insertar(60);
	
	Lista.Mostrar();
	
	cout << "Lista de elementos:" << endl;
	Lista.Borrar(10);
	Lista.Borrar(30);
	
	Lista.Mostrar();
	
	cin.get();
	return 0;
}

