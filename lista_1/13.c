#include <stdio.h>

void main(void){
	unsigned short int i;
	float n, p, mp =0, sp =0;

	printf("Digite 3 notas e reus respectivos pesos: ");
	for(i =0; i <3; ++i){
		scanf("%f%*c%f", &n, &p);
		mp += n*p;
		sp += p;
	};
	mp = mp/sp;
	printf("A media ponderada e: %.2f\n", mp);
};