#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define M 7

/*
int main(){

	int i,j, *p;
	int mt[N][M];
	p=mt[0];
	srand(time(NULL));
	for(i = 0;i<N; i++){
		for(j = 0;j<M; j++){
			*(p+i*M+j)=1+rand()%100;
			printf("%d, ", *(p+i*N+j));
		}
		printf("\n");
	}
	return 0;
}*/

int main(){
	int i,j,*p[N];
	int mt[N][M];
	
	srand(time(NULL));
	
	for(i=0;i<N;i++){
		p[i]=mt[i];
		for(j=0;j<M;j++){
			*p[i]=1+rand()%100;
			printf("%d, ", *p[i]);
		}
		printf("\n");
	}
}

