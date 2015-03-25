#include <stdio.h>
#include <math.h>

#define SOMA(a, b) (a)+(b)
#define SUBT(a, b) (a)-(b)
#define MULT(a, b) (a)*(b)
#define DIVS(a, b) (a)/(b)
// #define RAIZ(a) sqrt((double) a)

void main(void){
	int o;
	float r, a, b;

	printf("Menu de opções:\n");
	printf("1. Somar dois números\n");
	printf("2. Subtrair dois números\n");
	printf("3. Multiplicar dois números\n");
	printf("4. Dividir dois números\n");
	printf("5. Raiz quadrada de um número\n");
	printf("Digite a opção desejada: ");
	scanf("%d", &o);
	switch (o){
		case 5:
			printf("Digite o valor: ");
			scanf("%f", &a);
			// r = RAIZ(a);
			break;
		case 1..4:
			printf("Digite os valores: ");
			scanf("%f%f", &a, &b);
		case 1:
			r = SOMA(a, b);
			break;
		case 2:
			r = SUBT(a, b);
			break;
		case 3:
			r = MULT(a, b);
			break;
		case 4:
			r = DIVS(a, b);
			break;
	};
	printf("Resultado: %.2f\n", r);
};