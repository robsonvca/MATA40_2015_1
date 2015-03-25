#include <stdio.h>
#include <stdlib.h>

void order(int n1, int n2, int n3);

void main(void){
	int n1, n2, n3;
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3); 
	order(n1, n2, n3);
};

void order (int n1, int n2, int n3){
	if (n1 > n2)                                          
	  if (n2 > n3) 
	  	printf("%4d%4d%4d\n", n3, n2, n1);      
	  else if (n1 > n3) 
		  printf("%4d%4d%4d\n", n2, n3, n1);   
	  	else 
		  printf("%4d%4d%4d\n", n2, n1, n3);        
		  else if (n2 > n3)                                      
			if (n1 > n3) 
				printf("%4d%4d%4d\n", n3, n1, n2); 
	  		else 
			  printf("%4d%4d%4d\n", n1, n3, n2);        
	  		else 
			  printf("%4d%4d%4d\n", n2 ,n2, n3); 
};