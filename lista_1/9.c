#include <stdio.h>

void main(void){
	float l, a;
	printf("Digite um lado do quadrado: ");
	scanf("%f", &l);
	a = l*l;
	printf("A area e: %.1fm²\n", a);
	printf("O dobro e: %.1fm²\n", (a*2));
};