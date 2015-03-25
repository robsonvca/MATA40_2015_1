#include <stdio.h>

void main(void){
	float s;
	int h;

	printf("Digite o valor ganho por hora e a as horas trabalhadas no mes: ");
	scanf("%f %d", &s, &h);
	s = s*h;
	printf("Salario do mes e: R$%.2f\n", s);
};