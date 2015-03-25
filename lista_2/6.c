#include <stdio.h>

#define PAR_IMPAR(a) (a)%2 ? 1 : 0

void main(void){
	int n;
	printf("Digite um número: ");
	scanf("%d", &n);
	if(PAR_IMPAR(n))
		printf("%d e impar\n", n);
	else
		printf("%d e par\n", n);
};