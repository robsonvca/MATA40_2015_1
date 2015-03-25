#include <stdio.h>

void main(void){
	float s;	

	printf("Digite o salario do funcionario: ");
	scanf("%f", &s);
	s += (s *0.25);
	printf("Salario com 25%% de aumento e: R$%.2f\n", s);
};