#include <stdlib.h>
#include "fila.h"
#include <stdio.h>

#define N 100

struct fila{
	int ini, fim;
	float vet[N];
};

//a.
Fila *cria(void){
	Fila *temp = (Fila *)malloc(sizeof(Fila));
	if(temp != NULL)
		temp->ini =0;
		temp->fim =-1;
	return temp;
};

//b.
void insere(Fila *f, float v){
	f->fim++;
	if(f->fim <N){
		f->vet[f->fim] = v;
	};
};

//c
int vazia(Fila *f){
	if(f->fim >=0)
		return 0;
	return 1;
};

//d.
float retira(Fila *f){
	float temp =-666.666;
	int i;
	
	if(vazia(f))
		return temp;
	
	temp = f->vet[f->ini];
	for(i = f->ini; i < f->fim; i++)
		f->vet[i] = f->vet[i+1];
	f->fim--;	
	
	return temp;
};

//e
void libera(Fila *f){
	free(f);
};

//Questão 3
void imprime(Fila *f){
	int i;
	printf("\n");
	for(i = f->ini; i <= f->fim; i++)
		printf("%.2f->", f->vet[i]);
	printf("\n");
};