#include <stdio.h>

void comp_date(unsigned int *d1, unsigned int *d2);

void main(void){
	unsigned int d1[3], d2[3];
	printf("Digite a primeira data: ");
	scanf("%d%*c%d%*c%d", &d1[0], &d1[1], &d1[2]);
	printf("Digite a segunda data: ");
	scanf("%d%*c%d%*c%d", &d2[0], &d2[1], &d2[2]);
	comp_date(d1, d2);
};

void comp_date(unsigned int *d1, unsigned int *d2){
	char grt_date = 0;

	if(d1[2] == d2[2]){
		if(d1[1] == d2[1]){
			if(d1[0] < d2[0]){
				grt_date = 1;
			} else{
				grt_date = 2;
			}
		} else if(d1[1] < d2[1]){
			grt_date = 1;
		} else{
			grt_date = 2;
		}
	} else if(d1[2] < d2[2]){
		grt_date = 1;
	} else{
		grt_date = 2;
	}	

	if(grt_date == 1)
		printf("%02d/%02d/%02d é", d1[0], d1[1], d1[2]);
	else if(grt_date == 2)
		printf("%02d/%02d/%02d é", d2[0], d2[1], d2[2]);
	else
		printf("Não há data");

	printf(" cronologicamente maior\n");
};