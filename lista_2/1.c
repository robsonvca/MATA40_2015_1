#include <stdio.h>

float calcula_notas(void);

void main(void){
	float mf;
	mf = calcula_notas();
	printf("Media ponderada do aluno: %2.f\n", mf);
	if((int)mf >=8)
		printf("Conceito: A\n");
	else if((int)mf >=7)
		printf("Conceito: B\n");
	else if((int)mf >=6)
		printf("Conceito: C\n");
	else if((int)mf >=5)
		printf("Conceito: D\n");
	else if((int)mf >=0)
		printf("Conceito: E\n");
	else
		printf("Error\n");
};

float calcula_notas(void){
	float n1, n2, n3, mf;
	printf("Digite a nota para o Trabalho, Avaliação semestral e Exame final:\n");
	scanf("%f%*c%f%*c%f", &n1, &n2, &n3);
	mf = (n1*2)+(n2*3)+(n3*5);
	mf = mf/(2+3+5);
	if((mf >10) ||(mf <0))
		return -1;
	return mf;
};