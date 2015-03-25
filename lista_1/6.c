#include <stdio.h>

void main(void){
	float n[4];
	printf("Digite 4 notas bimestrais: ");
	scanf("%f%f%f%f", &n[0],&n[1], &n[2], &n[3]);
	printf("A media e: %.2f\n", (n[0]+n[1]+n[2]+n[3]) /4);
};