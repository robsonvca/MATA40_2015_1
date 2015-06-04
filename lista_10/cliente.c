#include <stdio.h>
#include "fila.h"

int main(void){
	Fila *gastos;
	int opc = 0;
	gastos = cria();
	
	do{
		printf("\n\nPevisão de gastos da semana\n\n");
		printf("[1] Novo gasto previsto\n");
		printf("[2] Remover gasto custeado\n\n");
		printf("[0] Para sair\n");
		printf("Digite a opção: ");
		scanf("%i", &opc);
		switch (opc){
			case 1:{
				float temp;
				printf("Digite valor: ");
				scanf("%f", &temp);
				insere(gastos, temp);
				break;
			};
			case 2:
				retira(gastos);
		};
		printf("\n(Prioridade) \n");
		imprime(gastos);
	}while((opc >0) && (opc <3));
	
	libera(gastos);
	
	return 0;
};
