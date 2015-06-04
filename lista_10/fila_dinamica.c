#include <stdlib.h>
#include "fila.h"
#include <stdio.h>

#define N 100

struct no{
	float info;
	struct no *prox;
};

typedef struct no No;

struct fila{
	No *ini;
	No *fim;	
};

//a.
Fila *cria(void){
	Fila *temp = (Fila *)malloc(sizeof(Fila));
	if(temp != NULL)
		temp->ini = temp->fim = NULL;
	return temp;
};

//b.
void insere(Fila *f, float v){
	No *temp = (No *)malloc(sizeof(No));
	if(temp != NULL){
		temp->prox = NULL;
		temp->info = v;
		
		
		if(f->ini == NULL)
			f->ini = temp;
		if(f->fim != NULL)
			f->fim->prox = temp;
			
		f->fim = temp;
	};
};

//c
int vazia(Fila *f){
	if(f->fim != NULL)
		return 0;
	return 1;
};

//d.
float retira(Fila *f){
	float temp_info =-666.666;
	No *temp_prox;
	int i;
	
	if(vazia(f))
		return temp_info;
		
	temp_info = f->ini->info;
	temp_prox = f->ini;
	f->ini = f->ini->prox;  
	free(temp_prox);
	
	return temp_info;
};

//e
void libera(Fila *f){
	No *temp1, *temp2;
	temp1 = f->ini;
	while(temp1 != NULL){
		temp2 = temp1->prox;
		free(temp1);	
		temp1 = temp2;
	};
	
	free(f);
};

//Questão 3
void imprime(Fila *f){
	No *temp;
	printf("\nFila\n");
	if(!vazia(f)){
		temp = f->ini;
		while(temp != NULL){
			printf("%.2f->", temp->info);
			temp = temp->prox;
		};
	};
};