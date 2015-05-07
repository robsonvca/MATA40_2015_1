#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct{
	char nome[81];
	int mat;
	char end[121];
	char tel[21];
} *PAluno;

//a. Crie uma função de inicialização que atribui NULL
void inicializa(PAluno tab[]){
	int i;
	for(i =0; i <MAX; i++){
		tab[i] = NULL;	
	};
};

//b. Crie uma função que armazena os dados de um novo aluno numa posição do vetor.
PAluno preenche_dados(){
	PAluno dados;
	dados = malloc(sizeof(PAluno));
	gets(dados->nome);
	scanf("%i ", &dados->mat);
	gets(dados->end);
	gets(dados->tel);
	return dados;
};

void armazena_dados(PAluno tab[], int pos){
	if(pos >=0 && pos <MAX)
		tab[pos] = preenche_dados();
};

//c. Crie uma função para remover os dados de um aluno da tabela.
void remove_dados(PAluno tab[], int pos){
	if(pos >=0 && pos <MAX)
		free(tab[pos]);
};

//d. Crie uma função para consultar os dados.
int consulta_dados(PAluno tab[], int pos){
	if(pos >=0 && pos <MAX){
		if(tab[pos] != NULL){
			printf("Dados encontrados\n");
			return 1;
		};
	};
	printf("Dados NãO encontrados\n");
	return 0;
};

//e. Crie uma função que imprima os dados de todos os alunos da tabela.
void imprime_dados(PAluno tab[]){
	int i;
	for(i =0; i <MAX; i++){
		if(tab[i] != NULL){
			printf("\nRegistro %i\n", i);
			printf("Nome: %s\n", tab[i]->nome);
			printf("Mat: %i\n", tab[i]->mat);
			printf("End: %s\n", tab[i]->end);
			printf("Tel: %s\n", tab[i]->tel);
		};
	};
};


//f. Faça um programa que utilize as funções da tabela de alunos escritas acima.
int main(void){
	//g. Re­escreva as funções acima sem usar uma variável global.
	PAluno tab[MAX];
	
	inicializa(tab);
	
	armazena_dados(tab, 0);
	
	consulta_dados(tab, 0);
	consulta_dados(tab, 1);
	
	imprime_dados(tab);
	
	remove_dados(tab, 0);
	return 0;
};