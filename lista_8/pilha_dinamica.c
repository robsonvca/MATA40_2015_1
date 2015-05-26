//Implementação de pilha com alocação dinâmica

#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

struct no{
	float info;
	struct no *prox;
};

typedef struct no No;

struct pilha{
	No *prim;
};

Pilha *cria(void){
	Pilha *temp;
	temp = (Pilha *) malloc(sizeof(Pilha));
	temp ->prim = NULL;
	return temp;
};

No *insere_inicio(Pilha *p){
	No *temp;
	temp = (No *) malloc(sizeof(No));
	temp->prox = p->prim;
	p->prim = temp;
	return temp; 
};

No *remove_inicio(Pilha *p){
	No *temp;
	temp = p->prim;
	p->prim = p->prim->prox;
	free(temp);
	return p->prim;
};

void push(Pilha *p, float v){
	No *temp;
	temp = insere_inicio(p);
	temp->info = v;
};

float pop(Pilha *p){
	No *temp;
	if(!vazia(p)){
		temp = remove_inicio(p);
		return temp->info;
	}; 
};

int vazia(Pilha *p){
	if(p->prim == NULL)
		return 1;
	return 0;
};

void libera (Pilha *p){
	No *temp1, *temp2;
		
	while(temp1 != NULL){
		temp2 = temp1->prox;
		free(temp1);	
		temp1 = temp2;
	};
	free(p);
};

void imprime(Pilha *p){
	No *temp;
	printf("Pilha\n");
	if(!vazia(p)){
		temp = p->prim;
		while(temp != NULL){
			printf("%.2f\n", temp->info);
			temp = temp->prox;
		};
	};
};