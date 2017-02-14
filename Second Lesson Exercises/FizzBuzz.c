/**
 * Mutirão C
 * Aula 4
 *Exercício3(FizzBuzz)
 */

#include <stdio.h>

int main(int argc, char **argv){
    unsigned int contador;
    
	for(contador=0; contador < 101; contador++){
		if ((contador%3==0)&&(contador%5==0)){
			printf("FIZZBUZZ %d \n", contador);
		}
	    else if ((contador%5)==0){
	    	printf("BUZZ %d \n", contador);
	    }
	    else if((contador%3)==0){
			printf("FIZZ %d \n", contador);
	    
		}
		else {
		printf("%d \n",contador);
		}
	    	
	    	
	    }
}
