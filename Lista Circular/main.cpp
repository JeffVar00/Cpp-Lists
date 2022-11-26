#include <iostream>
#include "lista.h"
using namespace std;

int main()
{
   lista Lista;
   Lista.Insertar(3);
   Lista.Insertar(2);
   Lista.Insertar(1);

   Lista.Mostrar();

   cout << "Lista de elementos:" << endl;
   Lista.Borrar(1);

   Lista.Mostrar();

   cin.get();
   return 0;
}
