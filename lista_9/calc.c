#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calc.h"
#include <math.h>

#define MAX 50

struct pilha{
	int n;
	float vet[MAX];
};

struct calc{
	char f[21];
	struct pilha *p;
};

Pilha *cria_pilha(void){
	Pilha *temp = (Pilha *) malloc(sizeof(Pilha));
	if(temp)
		temp->n = -1;
	return temp;
};

void push(Pilha *p, float v){
	p->n++;
	p->vet[p->n] = v;	
};

float pop(Pilha *p){
	float temp = p->vet[p->n];
	p->n--;
	return temp;
};

int pilha_vazia(Pilha *p){
	if(p->n <0)
		return 1;
	return 0;
};

void libera_pilha(Pilha *p){
	free(p);
};

Calc *cria_calc(char *f){
	Calc *temp = (Calc *) malloc(sizeof(Calc));
	if(temp){
		temp->p = cria_pilha();
		strcpy(temp->f, f);
	};
	return temp;
};

void operando(Calc *c, float v){
	push(c->p, v);
	printf("operando: %f\n", v);
};

void operador(Calc *c, char op){
	float res, val1, val2;
	
	val1 = pop(c->p);
	val2 = pop(c->p);
	
	switch (op){
		case '+':
			res = val1 + val2;
			break;
		case '-':
			res = val1 - val2;
			break;
		case '*':
			res = val1 * val2;
			break;
		case '/':
			res = val1 / val2;
	};
	push(c->p, res);
	printf("(%f %c %f) = %f\n", val1, op, val2, res);
};

void libera_calc(Calc *c){
	libera_pilha(c->p);
	free(c);
};

void inicia_calc(Calc *c, char *exp){
	register int i;
	char separ[2] = " ", *parcela;	
	parcela = strtok(exp, separ);
	
	while(parcela != NULL){
		if((strchr(parcela, '+')) || (strchr(parcela, '-')) || (strchr(parcela, '*')) || (strchr(parcela, '/')))
			operador(c, parcela[0]);
		else
			operando(c, atof(parcela));
		parcela = strtok(NULL, separ);
   	};
};