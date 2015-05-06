#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	float x;
	float y;
} Point;

//c. crie duas funções. Uma para capturar os valores de (x,y) e outra para imprimir. (obs: Passe a estrutura por valor).
Point get_value(Point point){
	scanf("%f %f", &point.x, &point.y);  //b. Use scanf para solicitar valores para a coordenada x e y da variável que criou...
	return point;
};
void print_value(Point point){
	printf("X =%.2f\nY =%.2f\n", point.x, point.y); //b. ...e imprima na tela
};

//f. Crie duas funções. Uma para capturar os valores de (x,y) e outra para imprimir.
void get_reference(Point *p){
	scanf("%f %f", &p->x, &p->y);
};
void print_reference(Point *p){
	printf("X =%.2f\nY =%.2f\n", p->x, p->y);
};

//d. Crie uma função para determinar a distância entre dois pontos.
float distance(Point *p, Point *q){
	float distance;
	distance = pow(q->x - p->x, 2);
	distance += pow(q->y - p->y, 2);
	distance = sqrt(distance);
	return distance;
};

int main(void){
	Point point, point_q; //a. Declare uma variável do tipo ponto
	Point *p, *q; //d. Crie um ponteiro para estrutura
	p = &point; //e. Faça o ponteiro apontar para estrutura declarada em a
	q = &point_q;
		
	point = get_value(point); //*p
	printf("Ponto P\n");
	print_value(point);

	get_reference(q); //*q
	printf("Ponto Q\n");
	print_reference(q); //*q

	printf("Distancia entre P e Q: %f\n", distance(p,q));

	return 0;
};

/*g. As funções da questão 'c' recebem como parâmetro a variável a ser trabalhada (valor de 'point'). No caso da função 'get_value()', o retorno e a variável preenchida.
Diferente das função da questão 'c', as funções da questão 'f' recebem um ponteiro que aponta para variável (endereço da variável) a ser trabalhada. A função'get_reference()' não precisa retornar valor, pois o mesmo é modificado durante a execução da subrotina, atravéz do ponteiro*/
