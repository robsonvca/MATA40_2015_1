#include <stdio.h>

#define MAIOR(a,b) (a)>(b) ? (a) : (b)

// int maior(int a, int b);

void main(void){
	int a, b;
	printf("Digite 2 números\n");
	scanf("%d%d", &a, &b);
	printf("O Maior é: %d\n", MAIOR(a, b));
};