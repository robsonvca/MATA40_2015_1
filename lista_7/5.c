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
		
		for(temp = lista_enc; temp !=NULL && temp->info != info && temp->ant != lista_enc; temp = temp->ant);
		
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
				
			if(temp->ant != NULL && lista_enc->prox->prox == NULL)
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
		int cont =0;
		printf("Lista: ");	
		for(temp = lista_enc; temp !=NULL && temp->ant != lista_enc; temp = temp->ant){
			printf("%i ", temp->info); cont++;} 
		if(temp != NULL){
			printf("%i ", temp->info); cont++;}
			printf("\t\tcont: %i", cont);
	};
	printf("\n");
};

//Questão 6
void torna_circular(Lista *lista_enc){
	if(lista_enc != NULL){
		Lista *temp;
		
		for(temp = lista_enc; temp->ant != NULL; temp = temp->ant);
		
		temp->ant = lista_enc;
		temp->ant->prox = temp; //vulgo 'lista_enc->prox;
	};
};

//Questão 6
void torna_linear(Lista *lista_enc){
	if(lista_enc != NULL){
		lista_enc->prox->ant = NULL;
		lista_enc->prox = NULL;
	};
};


int main(void){
	Lista *lista_enc;
	lista_enc = inicializa();
		
	lista_enc = insere(lista_enc, 10);lista_enc = insere(lista_enc, 20);lista_enc = insere(lista_enc, 30);lista_enc = insere(lista_enc, 40);
	percorre(lista_enc);
	
	torna_circular(lista_enc);
	printf("Retira: %p\n", retira(lista_enc, 10));
	percorre(lista_enc);
	
	
	return 0;
};