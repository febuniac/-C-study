#include <stdio.h>

int fatorial (int n){
	if (n==0){
		return 1;
	}
	else{
		return n* fatorial(n-1);//recursão passando o valor de n-1 para a funcao fatorial
	}
}
int main (int argc, char *argv[]) {
	int resp;
	int n;
	 /* Ler numero de elementos. */
    printf("Qual numero:");
    scanf("%d",&n);
    resp=fatorial(n);
    printf("%d\n", resp);
}
    