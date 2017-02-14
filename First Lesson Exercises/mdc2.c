#include <stdio.h>

unsigned long mdc(unsigned long a, unsigned long b){
	if(b==0){
		return a;
	}
	else{
		return mdc(b, a%b);
	}
}

void main(int argc, char*argv[]){
	unsigned long a,b;
	printf("Valor 1:");
	scanf("%lu", &a);

	printf("Valor 2:");
	scanf("%lu", &b);
	printf("%lu \n", mdc(a,b));
}