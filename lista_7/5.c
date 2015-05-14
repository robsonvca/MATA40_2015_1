//Lista encadeada duplamente
#include <stdio.h>
#include <stdlib.h>

typedef struct lista{
	int info;
	struct lista *ant;
	struct lista *prox;
} Lista;

Lista *inicializa(){
	return NULL;
};

Lista *insere(Lista *lista_enc, int info){
	Lista *temp;
	
	temp = (Lista*) malloc(sizeof(Lista));
	temp->info = info;
	temp->ant = lista_enc;
	if(lista_enc != NULL)
		lista_enc->prox = temp;
	temp->prox = NULL;
//	lista_enc = temp;
	return temp;
};

Lista *busca(Lista *lista_enc, int info){
	if(lista_enc != NULL){
		Lista *temp;
		
		for(temp = lista_enc; temp !=NULL && temp->info != info; temp = temp->ant);
		if(temp != NULL)
			if(temp->info == info)
				return temp;
	};
	return NULL;
};

Lista *retira(Lista *lista_enc, int info){
	if(lista_enc != NULL){
		Lista *temp;
		
		temp = busca(lista_enc, info);
		if(temp != NULL){
			if(temp == lista_enc)
				lista_enc = temp->ant;
			else
				temp->prox->ant = temp->ant;

			if(temp->ant != NULL)
				temp->ant->prox = temp->prox;
				
			free(temp);
		};
		return lista_enc;
	};
	return NULL;
};

void percorre(Lista *lista_enc){
	if(lista_enc != NULL){
		Lista *temp;
		temp = lista_enc;
		
		printf("Lista: ");	
		while(temp != NULL){
			printf("%i ", temp->info);
			temp = temp->ant;
		};	
	};
	printf("\n");
};

int main(void){
	Lista *lista_enc;
	lista_enc = inicializa();
		
	lista_enc = insere(lista_enc, 10);lista_enc = insere(lista_enc, 20);lista_enc = insere(lista_enc, 30);lista_enc = insere(lista_enc, 40);
	lista_enc = insere(lista_enc, 50);lista_enc = insere(lista_enc, 60);lista_enc = insere(lista_enc, 70);lista_enc = insere(lista_enc, 80);
	percorre(lista_enc);
	
	busca(lista_enc, 50);
	
	lista_enc = retira(lista_enc, 10);
	lista_enc = retira(lista_enc, 60);
	lista_enc = retira(lista_enc, 80);
	percorre(lista_enc);
	
	
	return 0;
};