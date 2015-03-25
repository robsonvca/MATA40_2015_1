#include <stdio.h>

void main(void){
	float s, p;	

	printf("Digite o salario do funcionario e o respectivo percentual de aumento: ");
	scanf("%f %f", &s, &p);
	p = p /100;
	s += (s*p);
	printf("Salario com %.2f%% de aumento e: R$%.2f\n", p, s);
};