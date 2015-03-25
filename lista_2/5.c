#include <stdio.h>
#include <stdlib.h>

void order(int n1, int n2, int n3, int n4);

int main(void){
	int n1, n2, n3, n4;
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	scanf("%d", &n4); 
	order(n1, n2, n3 ,n4);         
	return 0;
};

void order(int n1, int n2, int n3, int n4){
	if(n4 < n1)
		printf("%4d%4d%4d%4d\n", n4, n1, n2, n3); 
	else if (n4 < n2)
		printf("%4d%4d%4d%4d\n", n1, n4, n2, n3); 
	else if (n4 < n3)
		printf("%4d%4d%4d%4d\n", n1, n2, n4, n3); 
	else
		printf("%4d%4d%4d%4d\n", n1, n2, n3, n4); 
};