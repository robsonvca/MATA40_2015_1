#include <stdio.h>
#include "fila.h"

int main(void){
	Fila *a_fila;
	
	a_fila = cria();
	insere(a_fila, 1.41);
	insere(a_fila, 1.73);
	insere(a_fila, 2.23);
	imprime(a_fila);
	retira(a_fila); retira(a_fila);
	imprime(a_fila);
	insere(a_fila, 2.64);
	imprime(a_fila);
	libera(a_fila);
	
	return 0;
};
