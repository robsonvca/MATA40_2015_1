#include <stdio.h>
#include <time.h>

void main(void){
	time_t sec;
	struct tm *d;
	char mes[12][15] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

	sec =  time(NULL);
	d = localtime(&sec);

	printf("%02d/%d/%d - ", d->tm_mday, d->tm_mon, d->tm_year);
	printf("%s, ", mes[d->tm_mon]);
	printf("%02d:%02d\n", d->tm_hour, d->tm_min);
};