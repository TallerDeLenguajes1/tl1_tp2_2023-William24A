#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct compu{
	int velocidad;
	int anio;
	int cantidad;
	char *tipo_cpu;
};

typedef struct compu CPU;

void mostrarPC(CPU cp[], int tam){
	int i,j;
	for(i=0; i<tam ;i++){
		printf("\nCPU numero: %d", i+1);
		printf("\nVelocidad del CPU: %d", cp[i].velocidad);
		printf("\nAnio de compra del CPU: %d", cp[i].anio);
		printf("\nCantidad de nucleos del CPU: %d", cp[i].cantidad);
		printf("\nTipo de procesador:%s", cp[i].tipo_cpu);
	}	
}

void masVieja(CPU cp[], int tam){
	int i, viejo = 3000,f;
	for(i=0; i<tam; i++){
		if(cp[i].anio < viejo){
			viejo = cp[i].anio;
			f=i;
		}
	}
	printf("\nCPU Mas viejo es:");
	printf("\nVelocidad del CPU: %d", cp[f].velocidad);
	printf("\nAnio de compra del CPU: %d", cp[f].anio);
	printf("\nCantidad de nucleos del CPU: %d", cp[f].cantidad);
	printf("\nTipo de procesador:%s", cp[f].tipo_cpu);
}

void masVelocidad(CPU cp[], int tam){
	int i, veloz = 0,f;
	for(i=0; i<tam; i++){
		if(cp[i].velocidad > veloz){
			veloz = cp[i].velocidad;
			f=i;
		}
	}
	printf("\nCPU Mas veloz es:");
	printf("\nVelocidad del CPU: %d", cp[f].velocidad);
	printf("\nAnio de compra del CPU: %d", cp[f].anio);
	printf("\nCantidad de nucleos del CPU: %d", cp[f].cantidad);
	printf("\nTipo de procesador:%s", cp[f].tipo_cpu);
}

int main(){
	CPU nuevo[5];
	int i,aux;
	char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
	
	srand(time(NULL));
	
	for(i=0;i<5;i++){

		nuevo[i].velocidad = 1+rand()%3;
		
		nuevo[i].anio = 2015+rand()%9;
		
		nuevo[i].cantidad = 1+rand()%8;
		
		(*(nuevo+i)).tipo_cpu= *(tipos+rand()%5);
	}
	
	mostrarPC(nuevo, 5);
	masVieja(nuevo, 5);
	masVelocidad(nuevo, 5);
	return 0;
}
