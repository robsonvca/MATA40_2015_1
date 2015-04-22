/*Implementação com vetores simples*/
// #include "matriz.h"

typedef struct{
	int lin;
	int col;
	float *arr;
	
} Matriz;

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