#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

/*Main recebe m(lin) e n(col)*/
int main(int argc, char *argv[]){
	int lin, col;
	Matriz *matriz;
	
	if(argc <3){
		printf("Falta argumentos\n");
		return 0;
	};
	lin = atoi(argv[1]);
	col = atoi(argv[2]);

	matriz = create(lin, col);

	release(matriz);
	return 0;
};