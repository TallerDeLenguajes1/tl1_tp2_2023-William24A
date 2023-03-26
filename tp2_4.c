#include <stdio.h>
#include <stdlib.h>

struct compu{
	int velocidad;
	int anio;
	int cantidad;
	char *tipo_cpu;
};

typedef struct compu CPU;

void mostrarPC(CPU cp[], int tam){
	int i;
	for(i=0; i<tam ;i++){
		printf("\nCPU numero: %d", i+1);
		printf("\nVelocidad del CPU: %d", cp[i].velocidad);
		printf("\nAnio de compra del CPU: %d", cp[i].anio);
		printf("\nCantidad de nucleos del CPU: %d", cp[i].cantidad);
		printf("\nTipo de procesador: %c", *cp[i].tipo_cpu);
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
	printf("\nTipo de procesador: %c", *cp[f].tipo_cpu);
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
	printf("\nTipo de procesador: %c", *cp[f].tipo_cpu);
}

int main(){
	CPU nuevo[5];
	int i,v;
	char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
	for(i=0;i<5;i++){
		do{
			printf("\nIngrese la velocidad de su CPU[%d]: ",i);
			scanf("%d", &v);
		}while(v<1 || v>3);
		nuevo[i].velocidad = v;
		do{
			printf("Ingrese el anio de su CPU[%d]: ",i);
			scanf("%d", &v);
		}while(v<2015 || v>2023);
		nuevo[i].anio = v;
		do{
			printf("Ingrese la cantidad de nucleos de su CPU[%d]: ",i);
			scanf("%d", &v);
		}while(v<1 || v>8);
		nuevo[i].cantidad = v;
		do{
			printf("Ingrese un numero para elegir la opcion\n");
			printf("1- Intel\n");
			printf("2- AMD\n");
			printf("3- Celeron\n");
			printf("4- Athlon\n");
			printf("5- Core\n");
			printf("6- Pentium\n");
			printf("Elige:");
			scanf("%d", &v);
			
		}while(v<1 || v>6);
		nuevo[i].tipo_cpu= tipos[v];
	}
	
	//mostrarPC(nuevo, 5);
	masVieja(nuevo, 5);
	masVelocidad(nuevo, 5);
	return 0;
}
