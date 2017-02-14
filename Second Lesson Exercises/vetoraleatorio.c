#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUMBER 100

void preenche (int vetor[],int n){
	int i;
	for(i=0; i< n ; i++){
	  	vetor[i]= rand() % MAX_NUMBER;
	}
}

int main(void) { 
	srand(time(NULL));//inicializa a maquina de geração de numeros aleatorios
	int n;
	int i;
	printf("Numeros:");
	scanf("%d",&n);
	int vetor[1000];
	preenche(vetor, n);
  	for(i=0; i< n ; i++){
  		printf("%d \n", vetor[i]);
  	}
 }