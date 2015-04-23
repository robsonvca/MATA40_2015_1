/*Implementação com vetores simples*/

#include <stdlib.h>
#include <stdio.h>
#include "matriz.h"

// struct matriz{
// 	int lin;
// 	int col;
// 	float *arr;
// };
// typedef struct matriz Matriz;
/*Cria uma matriz de dimensão m(linha) por n(coluna) e retorna endereço*/
Matriz *create(const int lin, const int col){
	Matriz *matriz;

	matriz = (Matriz*) malloc(sizeof(Matriz));
	matriz->lin = lin;
	matriz->col = col;
	matriz->arr = (float*) malloc(col*lin*sizeof(float));

	return matriz;
};

/*Libera a memória alocada para a matriz*/
void release(Matriz *matriz){
	free(matriz->arr);
	free(matriz);
};

/*Acessa e retorna o elemento da linha i e da coluna j da matriz*/
float acess(Matriz *matriz, const int i, const int j){
	return matriz->arr[(i*matriz->col) +j];
};

/*Atribui o elemento da linha i e da coluna j da matriz*/
void assign(Matriz *matriz, const int i, const int j, float const elem){
	matriz->arr[(i*matriz->col) +j] = elem;
};

/*Devolve o número de linhas da matriz*/
int return_lines(Matriz *matriz){
	return matriz->lin;
};

/*Devolve o número de colunas da matriz*/
int return_columns(Matriz *matriz){
	return matriz->col;
};

/*FUNÇÕES DE TESTE DA MATRIZ*/
/*Preenche cada campo matriz com value+1*/
void fills_matriz(Matriz *matriz, float value){
	int i, j;

	for(i =0; i <(matriz->lin); i++)
		for(j =0; j <(matriz->col); j++)
			assign(matriz, i, j, value++);
};

/*Imprime elementos da matriz*/
void print_matriz(Matriz *matriz){
	int i, j;

	for(i =0; i <(matriz->lin); i++){
		for(j =0; j <(matriz->col); j++)
			printf("%5.1f ", acess(matriz, i, j));
		printf("\n");
	};
};