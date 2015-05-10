#include <stdlib.h>
#include <stdio.h>

typedef struct lista{
	int info;
	struct lista *prox;
} Lista;

//1.a Função de inicialização.
Lista *inicializa(){
	return NULL;
};

//1.b­ Função de inserção (Uma vez criada a lista vazia, podemos inserir novos elementos nela.)
Lista *insere(Lista *lista_enc, int info){
	Lista *novo_elem;
	novo_elem = (Lista*) malloc(sizeof(Lista));
	novo_elem->info = info;
	novo_elem->prox = lista_enc;
	return novo_elem;
};

//1.d­ Função que verifica se lista está vazia.
int lista_vazia(Lista *lista_enc){
	if(lista_enc == NULL)
		return 1;
	return 0;
};

//1.c­ Função que percorre os elementos da lista.
void percorre(Lista *lista_enc){
	if(!lista_vazia(lista_enc)){
		Lista *temp;
		temp = lista_enc;
		
		printf("Lista: ");	
		while(temp != NULL){
			printf("%i ", temp->info);
			temp = temp->prox;
		};	
	};
	printf("\n");
};

//1.e­ Função de busca.
Lista *busca(Lista *lista_enc, int info){
	if(!lista_vazia(lista_enc)){	
		Lista *temp;
		temp = lista_enc;
	
		for (temp = lista_enc; temp !=NULL; temp = temp->prox){
			if(temp->info == info)
				return temp;
		};
	};
	return NULL;
};

//1.f­ Função que retira um elemento da lista.
Lista *retira(Lista *lista_enc, int info){
	if(!lista_vazia(lista_enc)){
		Lista *temp, *before =NULL;
		temp = lista_enc;
		
		while((temp != NULL) && (temp->info != info)){
			before = temp;
			temp = temp->prox;
		};
		if(temp == NULL)
			return lista_enc;
		else if(before == NULL)
			lista_enc = temp->prox; 
		else
			before->prox = temp->prox;
		
		free(temp);
		return lista_enc;
	};
	return NULL;
};

//1.g­ Função para liberar a lista.
void libera(Lista *lista_enc){
	Lista *temp1, *temp2;
	temp1 = lista_enc;
	
	while(temp1 != NULL){
		temp2 = temp1->prox;
		free(temp1);	
		temp1 = temp2;
	};
	free(lista_enc);
};


//2­ Implemente uma função que verifique se duas listas encadeadas são iguais.
int igual(Lista *l1, Lista *l2){
	if(!lista_vazia(l1) && !lista_vazia(l1)){
		Lista *temp1, *temp2;
		temp1 = l1;
		temp2 = l2;
		
		while((temp1 != NULL) && (temp2 != NULL)){
			if((temp1->info) != (temp2->info))
				return 0;
			temp1 = temp1->prox;
			temp2 = temp2->prox;
		};
	};
	return 1;
};


//3.­ Implemente uma função que crie uma cópia de uma lista encadeada.
Lista* copia(Lista* lista_enc){
	Lista *temp1, *temp2, *nova_lista;
	nova_lista = inicializa();
	temp2 = inicializa();
	temp1 = lista_enc;
	
	if(!lista_vazia(lista_enc)){
		for (temp1 = lista_enc; temp1 !=NULL; temp1 = temp1->prox)
			temp2 = insere(temp2, temp1->info);
			
		for (temp1 = temp2; temp1 !=NULL; temp1 = temp1->prox) //Sério?! Isso mesmo?! Affs.
			nova_lista = insere(nova_lista, temp1->info);
		free(temp2);
	};
	return nova_lista;
};

 
//TESTA QUESTÕES
void testa_q1(){
	Lista *lista_enc;
	
	//Inicializa
	lista_enc = inicializa();
	//Insere
	lista_enc = insere(lista_enc, 10);
	lista_enc = insere(lista_enc, 20);
	lista_enc = insere(lista_enc, 30);
	lista_enc = insere(lista_enc, 40);
	percorre(lista_enc);
	//Busca
	printf("Busca 20: pos %p\n", busca(lista_enc, 20));
	printf("Busca 21: pos %p\n", busca(lista_enc, 21));
	//Retira
	lista_enc = retira(lista_enc, 20);
	lista_enc = retira(lista_enc, 30);
	lista_enc = retira(lista_enc, 40);
	percorre(lista_enc);
	//Libera
	libera(lista_enc);
};

void testa_q2(){
	Lista *lista_enc1, *lista_enc2;
	
	//Inicializa
	lista_enc1 = inicializa();
	lista_enc2 = inicializa();
	
	//Insere
	lista_enc1 = insere(lista_enc1, 10);
	lista_enc1 = insere(lista_enc1, 20);
	lista_enc2 = insere(lista_enc2, 10);
	lista_enc2 = insere(lista_enc2, 20);
	percorre(lista_enc1);
	percorre(lista_enc2);
	
	//vefifica se são iguais
	if(igual(lista_enc1, lista_enc2))
		printf("LISTAS IGUAIS\n");
	else
		printf("LISTAS DIFERENTES\n");
	
	//Libera
	libera(lista_enc1);
	libera(lista_enc2);
};

void testa_q3(){
	Lista *lista_enc;
	
	//Inicializa
	lista_enc = inicializa();
	
	//Insere
	lista_enc = insere(lista_enc, 10);
	lista_enc = insere(lista_enc, 20);
	lista_enc = insere(lista_enc, 10);
	lista_enc = insere(lista_enc, 20);
	percorre(lista_enc);
	
	//Copia
	lista_enc = copia(lista_enc);
	percorre(lista_enc);
	
	//Libera
	libera(lista_enc);
};

int main(void){
//	testa_q1();
//	testa_q2();
	testa_q3();
	
	return 0;	
};