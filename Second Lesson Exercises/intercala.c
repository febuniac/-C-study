/**
 * Mutirão C
 * Aula 4
 *Exercício6
 */


#include <stdio.h>
#define n_max 100

void intercala(int a[], int b[], int n, int c[]){
	int i;
	for (i=0; i<n ; i++){
		c[2*i]=a[i];
		c[2*i+1]=b[i];

	}

    
}


int main(int argc, char **argv){
    int n = 5;
    int i;    
    int a[n_max] = {1, 2, 3 ,4, 5};
    int b[n_max] = {6, 7, 8, 9, 10};
    int c[n_max];  
    intercala(a,b,n,c);
    for(i=0; i< 2*n ; i++){
  		printf("%d \n", c[i]);
  	}
 }