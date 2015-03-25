#include <stdio.h>

void main(void){
	int n[4];
	printf("Digite 4 numeros: ");
	scanf("%d%d%d%d", &n[0],&n[1], &n[2], &n[3]);
	printf("A soma e: %d\n", (n[0]+n[1]+n[2]+n[3]));
};