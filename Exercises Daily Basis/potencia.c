#include <stdio.h>

int potencia (int base, int expoente){
	if (expoente==0){
		return 1;
	}
	else{
		return base* potencia(base, expoente-1);
}
int main (int argc, char *argv[]) {
	int resp;
	int n;
	int base;
	int expoente;
	 /* Ler numero de elementos. */
    printf("Qual é a base:");
    scanf("%d",&base);

    printf("Qual é o expoente:");
    scanf("%d",&expoente);
    resp=potencia(base, expoente);
    
    printf("Resposta:%d\n", resp);
}
    