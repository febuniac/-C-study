/**
 * Computaçao Embarcada
 * Mutirão C
 * Aula 1
 * Rafael Corsi e Fábio Ayres
 *
 */

#include <stdio.h>

void main(){
    unsigned int contador;
    for(contador=0; contador < 1025; contador++){
	if ((contador%2) == 0){ 
        printf("Par %d \n", contador);
}
	else{
	printf("Impar %d \n", contador);
}
	

    }
}
