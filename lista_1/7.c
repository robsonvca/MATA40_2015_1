#include <stdio.h>

void main(void){
	float m, cm;
	printf("Digite o valor em metros: ");
	scanf("%f", &m);
	cm = m *100;
	printf("%.2fm e: %.2fcm\n", m, cm);
};