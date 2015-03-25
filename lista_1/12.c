#include <stdio.h>

void main(void){
	unsigned short int i;
	float n, m =0;

	printf("Digite 3 notas: ");
	for(i =0; i <3; ++i){
		scanf("%f", &n);
		m += n;
	};
	m = m/i;

	printf("A media e: %2.f\n", m);
};