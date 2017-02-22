#include <stdio.h>

#define MAX_NUMBER 100
int soma (int v[], int n){
	if (n==1){
		return v[0];//caso tenha apenas um elemento a soma dele com nada é ele mesmo
	}
	else{
		return v[n-1] +soma(v, n-1);
	}
}
int main (int argc, char *argv[]) {
    int v[MAX_NUMBER];
    int n;
    int i;
    int resp;

    /* Ler numero de elementos. */
    printf("Quantos números terão o vetor? (não pode ser maior que %d): ",MAX_NUMBER);
    scanf("%d",&n);
    
    /* Ler os elementos. */
    for (i = 0; i <n; i++) {
      scanf("%d", &v[i]);
	}
	resp = soma(v,n);
	printf("%d \n", resp);
}