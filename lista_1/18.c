#include <stdio.h>

#define GRAT 50.00
#define IMPO 0.10

void main(void){
	float a, b;	

	printf("Digite a altura e base dum triangulo: \n");
	scanf("%f%*c%f", &a, &b);
	printf("A area do triangulo e: %2.f\n", (a*b) /2);
};