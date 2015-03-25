/*7. Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, 
A, B e C são reais. Escreva os números A, B e C obedecendo à tabela a seguir. Suponha que o 
valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números digitados
sejam diferentes um do outro.
Valor de I Forma a escrever
1 A, B e C em ordem crescente
2 A, B e C em ordem decrescente 
3 O maior fica entre os outros dois números*/

#include <stdio.h>

void order_cres(float a,float b, float c);
void order_decr(float a,float b, float c);
void grt_centr(float a,float b, float c);

void main(void){
	int i;
	float a, b, c;

	printf("1: A, B e C em ordem crescente\n");
	printf("2: A, B e C em ordem decrescente\n");
	printf("3: O maior fica entre os outros dois números\n");
	scanf("%i", &i);
	printf("Digite os números: ");
	scanf("%f%f%f", &a, &b, &c);

	switch (i){
		case 1:
			order_cres(a, b, c);
			break;
		case 2:
			order_decr(a, b, c);
			break;
		case 3:
			grt_centr(a, b, c);
	};
};

void order_cres(float a,float b, float c){
	if (a > b)                                          
	  if (b > c) 
	  	printf("%.2f %.2f %.2f\n", c, b, a);      
	  else if (a > c) 
		  printf("%.2f %.2f %.2f\n", b, c, a);   
	  	else 
		  printf("%.2f %.2f %.2f\n", b, a, c);        
		  else if (b > c)                                      
			if (a > c) 
				printf("%.2f %.2f %.2f\n", c, a, b); 
	  		else 
			  printf("%.2f %.2f %.2f\n", a, c, b);        
	  		else 
			  printf("%.2f %.2f %.2f\n", b ,b, c); 
};

void order_decr(float a,float b, float c){
	if (a < b)                                          
	  if (b < c) 
	  	printf("%.2f %.2f %.2f\n", c, b, a);      
	  else if (a < c) 
		  printf("%.2f %.2f %.2f\n", b, c, a);   
	  	else 
		  printf("%.2f %.2f %.2f\n", b, a, c);        
		  else if (b < c)                                      
			if (a < c) 
				printf("%.2f %.2f %.2f\n", c, a, b); 
	  		else 
			  printf("%.2f %.2f %.2f\n", a, c, b);        
	  		else 
			  printf("%.2f %.2f %.2f\n", b ,b, c);
};

void grt_centr(float a,float b, float c){
	if ((a > b) && (a > c))
		printf("%.2f %.2f %.2f\n", b, a, c);  
	else if ((b > a) && (b > c))
		printf("%.2f %.2f %.2f\n", a, b, c);  
	else
		printf("%.2f %.2f %.2f\n", a, c, b);  
};