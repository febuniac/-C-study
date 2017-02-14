/**
 * Mutirão C
 * Aula 4
 *Exercícios
 */

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv){
    int T;
    int L;
    float g;
    printf("Qual a largura do pêndulo?");
    scanf("%d", &L);
    printf("Qual o valor da Gravidade?");
    scanf("%f", &g);

    T = 2 * M_PI * sqrt(L/g);
    
	printf("O periodo é: %d \n" , T);
}
