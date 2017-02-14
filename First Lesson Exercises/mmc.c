/**
 * Computaçao Embarcada
 * Mutirão C
 * Aula 1
 * Rafael Corsi 
 */

#include <stdio.h>

void main(){
    int num1, num2, i, mmc; 

    num1 = 4;
    num2 = 2;

    for(i=1; i<=num1 | i<=num2; i++){
        if(num1%i==0 & num2%i==0){
            mmc = i;
        }
    }

    printf("MDC de %d e %d é %d \n", num1, num2, mmc);
}
