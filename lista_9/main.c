#include <stdio.h>
#include "calc.h"

int main(){
	char f[21], exp[30];
	Calc *c = NULL;
	printf("Expressao [ex: 23 23 - 34 *]: ");
	scanf("%[0-9 +-*/.]", exp);
//	printf("Formato: "); //Ainda não implementado;
//	scanf("%s", f);

	c = cria_calc(f);
	inicia_calc(c, exp);
	libera_calc(c);
	
	return 0;
};