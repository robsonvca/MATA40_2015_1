#include <stdio.h>
#include "pilha.h"

int main(void){
	Pilha *pilha_dados;
	pilha_dados = cria();
	
	push(pilha_dados, 10);
	
	imprime(pilha_dados);

	libera (pilha_dados);
	
	return 0;
};