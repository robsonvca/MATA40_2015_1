/*Implementação com vetores simples*/

#include <stdlib.h>
#include <stdio.h>
#include "matriz.h"

struct matriz{
	int lin;
	int col;
	float **arr;
};

Matriz *create(const int lin, const int col){
	Matriz *matriz;
	register int i;

	matriz = (Matriz*) malloc(sizeof(Matriz));
	matriz->arr = (float**) malloc(lin*sizeof(Matriz));
	matriz->lin = lin;
	matriz->col = col;

	for(i =0; i <lin; i++)
		matriz->arr[i] = (float*) malloc(col*sizeof(float));

	return matriz;
};

void release(Matriz *matriz){
	register int i;

	for(i =0; i <matriz->lin; i++)
		free(matriz->arr[i]);
	free(matriz->arr);
	free(matriz);
};

float acess(Matriz *matriz, const int i, const int j){
	return matriz->arr[i][j];
};

void assign(Matriz *matriz, const int i, const int j, float const elem){
	matriz->arr[i][j] = elem;
};

int return_lines(Matriz *matriz){
	return matriz->lin;
};

int return_columns(Matriz *matriz){
	return matriz->col;
};