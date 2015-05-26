//Implementação de pilha com vetor

#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

#define MAX 50

struct pilha{
	int n;
	float vet[MAX];
};

Pilha *cria(void){
	Pilha *temp;
	temp = (Pilha *)malloc(sizeof(Pilha));
	temp->n = -1;
	return temp;
};

void push(Pilha *p, float v){
	if(p->n <MAX){
		p->n++;
		p->vet[p->n] = v;
	};
};

float pop(Pilha *p){
	p->n--;
	return p->vet[p->n +1];
};

int vazia(Pilha *p){
	if(p->n <0)
		return 1;
	return 0;
};

void libera (Pilha *p){
	free(p);
};

void imprime(Pilha *p){
	int i;
	printf("Pilha\n");
	for(i =0; i <= p->n; i++)
		printf("%.2f\n", p->vet[i]);
};