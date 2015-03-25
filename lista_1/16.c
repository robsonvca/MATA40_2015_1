#include <stdio.h>

#define GRAT 0.05
#define IMPO 0.07

void main(void){
	float s, p;	

	printf("Digite o salario do funcionario: ");
	scanf("%f", &s);
	printf("Salario a receber: R$%.2f\n", s);
	printf("Gratificação (%.2f%%): R$%.2f\n", GRAT, (s *GRAT));
	printf("Imposto (%.2f%%): -R$%.2f\n", IMPO, (s *IMPO));
	s += (s *GRAT) - (s *IMPO);
	printf("Salario a liquido: RR%.2f\n", s);
};