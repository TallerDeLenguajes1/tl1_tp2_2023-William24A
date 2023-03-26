// codigo a completar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 20
int main(){
	int i;
	double vt[N], *p;
	p=vt;
	srand(time(NULL));
	for(i=0; i<N; i++){
    	*p=1+rand()%100;
    	printf("%.2f, ", *p);
    	p++;
    }	
return 0;
}

