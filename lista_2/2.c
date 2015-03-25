#include <stdio.h>

float calcula_notas(void);

void main(void){
	float mf;
	mf = calcula_notas();
	printf("Media aritimetica do aluno: %2.f\n", mf);
	if((int)mf >=7)
		printf("Aprovado\n");
	else if((int)mf >=3)
		printf("Exame\n");
	else if((int)mf >=0)
		printf("Reprovado\n");
	else
		printf("Erro\n");
};

float calcula_notas(void){
	float n1, n2, n3, mf;
	printf("Digite as 3 notas:\n");
	scanf("%f%*c%f%*c%f", &n1, &n2, &n3);
	mf = n1+n2+n3;
	mf = mf /3;
	if((mf >10) ||(mf <0))
		return -1;
	return mf;
};