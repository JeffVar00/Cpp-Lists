#include "nodo.h"

nodo::nodo(int v, nodo *sig = NULL) {
	valor = v;
	siguiente = sig;
}

