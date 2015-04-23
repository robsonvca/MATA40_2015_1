#include <stdio.h>
#include "matriz.h"

/*Main recebe m(lin) e n(col)*/
int main(int argc, char *argv[]){
	Matriz *matriz;
	int lin, col;

	lin = atoi(argv[1]);
	col = atoi(argv[2]);
	
	if(argc <3){
		printf("Falta argumentos\n");
		return 0;
	};
	matriz = create(atoi(argv[1]), atoi(argv[2]));

	/*Teste*/
	fills_matriz(matriz, 1);
	print_matriz(matriz);

	release(matriz);
	return 0;
};