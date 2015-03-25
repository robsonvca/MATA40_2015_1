#include <stdio.h>

#define GRAT 50.00
#define IMPO 0.10

void main(void){
	float s, p;	

	printf("Digite o salario do funcionario: ");
	scanf("%f", &s);
	printf("Salario a receber: R$%.2f\n", s);
	printf("Gratificação: R$%2.f\n", GRAT);
	printf("Imposto (%.2f%%): -R$%.2f\n", IMPO, (s *IMPO));
	s += GRAT - (s *IMPO);
	printf("Salario a liquido: RR%.2f\n", s);
};