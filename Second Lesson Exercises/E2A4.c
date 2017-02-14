/**
 * Mutirão C
 * Aula 4
 *Exercício2
 */

#include <stdio.h>
#include <math.h>

float periodo(int L, float g){

    return (2 * M_PI * sqrt(L/g));
    
}

float frequencia(float T){
	return (1/T);
}
void compute_pendulum_swing(int L, int g, float *Tpont, float *Fpont){
	*Tpont=periodo(L,g);
	*Fpont=frequencia(*Tpont);
}
int main(int argc, char **argv){
    float T;
    float F;
    int L;
    float g;
    printf("Qual a largura do pêndulo?");
    scanf("%d", &L);
    printf("Qual o valor da Gravidade?");
    scanf("%f", &g);
    T= periodo(L,g);
    F= frequencia(T);
    compute_pendulum_swing(L,g, &T, &F);
    printf("O periodo é: %f \n" , T);
    printf("A frequência é: %f \n" , F);

	}
