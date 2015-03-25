#include <stdio.h>

#define PI 3.141592

void main(void){
	float r, a;
	printf("Digite o raio: ");
	scanf("%f", &r);
	a = PI *(r*r);
	printf("A area e: %.1fm²\n", a);
};