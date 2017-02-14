/**
 * Computaçao Embarcada
 * Mutirão C
 * Aula 1
 * Rafael Corsi e Fábio Ayres
 *
 */

#include <stdio.h>
#include <math.h>

void main(){
    int PV;
    int i;
    int n;
    int FV;
    printf("Qual Valor Presente?");
    scanf("%d", &PV);
    printf("Qual a Taxa de Juros?");
    scanf("%d", &i);
    printf("Qual Numer de Periodos?");
    scanf("%d", &n);

    FV = PV * (pow((1+i),n));
    
	printf("Valor Futuro:%d \n" , FV);
}
	
