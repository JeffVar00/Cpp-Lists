#include<iostream>
#include "lista.h"
using namespace std;

int main (int argc, char *argv[]) {
	lista Lista;
	
	Lista.Insertar(20);
	Lista.Insertar(10);
	Lista.Insertar(40);
	Lista.Insertar(30);
	
	Lista.Mostrar(1);
	Lista.Mostrar(0);
	
	Lista.Primero();
	cout << "Primero: " << Lista.ValorActual() << endl;
	
	Lista.Ultimo();
	cout << "Ultimo: " << Lista.ValorActual() << endl;
	
	Lista.Borrar(10);
	Lista.Borrar(15);
	Lista.Borrar(45);
	Lista.Borrar(40);
	
	Lista.Mostrar(1);
	Lista.Mostrar(0);
	
	cin.get();
	return 0;
}

