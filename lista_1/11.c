#include <stdio.h>

void main(void){
	float t;

	printf("Digite a temperatura em Farenheit: ");
	scanf("%f", &t);
	t = (5* (t-32) /9);
	printf("temperatura em Celsius e: %.1fºC\n", t);
};