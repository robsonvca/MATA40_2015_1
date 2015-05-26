#include <stdio.h>
#include "pilha.h"

int main(void){
	Pilha *pilha_dados;
	pilha_dados = cria();
	
	push(pilha_dados, 10);
	push(pilha_dados, 20);
	push(pilha_dados, 30);
	
	printf("Retirou: %.2f\n", pop(pilha_dados));
	
	printf("Vazia? %i\n", vazia(pilha_dados));
	
	libera (pilha_dados);
	
	return 0;
};